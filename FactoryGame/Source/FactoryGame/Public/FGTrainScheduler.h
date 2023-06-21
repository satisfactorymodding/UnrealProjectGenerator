// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "Algo/Accumulate.h"
#include "GameFramework/Info.h"
#include "FGRailroadSignalBlock.h"
#include "FGTrainScheduler.generated.h"


/**
 * Combined status of the reservations made by a train.
 */
enum class EReservationsApprovalStatus : uint8
{
	RAS_NoApproval,
	RAS_PartialApproval,
	RAS_FullApproval
};

/**
 * All information that is needed for the train scheduler to keep track of this train.
 */
struct FACTORYGAME_API FTrainSchedulerInfo
{
public:
	FTrainSchedulerInfo();
	~FTrainSchedulerInfo();

	/** Add a reservation to the list. */
	void AddReservation( TWeakPtr< FFGRailroadBlockReservation >& handle );
	/** Cancel all the reservations we hold. */
	void CancelReservations();
	/** @return true if we have a reservation for the given block already. */
	bool HaveReservation( TWeakPtr< FFGRailroadSignalBlock > block );
	
public:
	/**
	 * Path that was used to make reservations, keep track of it in case it changes.
	 * If the previous path is cleared, then we need to clean any reservation pertaining to that path.
	 */
	FRailroadPathSharedPtr Path = nullptr;
	
	/**
	 * All our active block reservations.
	 * 
	 * A reservation is placed when:
	 *  1. Train is approaching a path signal that is red.
	 *  2. Is withing the braking distance of a block signal.
	 *
	 * Reservations in the array is in the order they occur along the path. Meaning higher indices are further ahead.
	 *
	 * The number of reservations in this list may vary depending on the length of the path signal chain reserved.
	 */
	TArray< TWeakPtr< FFGRailroadBlockReservation > > BlockReservations;
	/**
	 * When a chain of reservations are made, this is updated with a reservation number.
	 * This is weighted into the priorities.
	 */
	uint32 ReservationNumber = 0;

	/** A combined status for all the reservations, used to prioritize trains. */
	EReservationsApprovalStatus ReservationStatus = EReservationsApprovalStatus::RAS_NoApproval;

	/**
	 * The priority for this train when requests are handled.
	 *
	 * Higher number have higher priority.
	 */
	int32 Priority = 0;

	/** The overlaps that this this train have along its path. */
	ERailroadPathOverlap PathOverlaps = ERailroadPathOverlap::RPO_None;

	/** All the trains we depend on. */
	TSet< TWeakObjectPtr< class AFGTrain > > TrainDependencies;
};


/**
 * Class responsible for scheduling trains across signal blocks.
 */
UCLASS()
class FACTORYGAME_API AFGTrainScheduler : public AInfo
{
	GENERATED_BODY()
public:
	AFGTrainScheduler();

	// Begin AActor
	virtual void DisplayDebug( class UCanvas* canvas, const class FDebugDisplayInfo& debugDisplay, float& YL, float& YPos ) override;
	// End AActor
	
	/** Add a train to be tracked by the scheduler. */
	void AddTrain( class AFGTrain* train );

	/** Remove a train from scheduler tracking. */
	void RemoveTrain( class AFGTrain* train );

	/** Ticks the scheduler and makes reservation on behalf of the tracked trains. */
	void TickScheduler();

public:
	/**
	 * Enable the black box, it will tick and directly outputs state to the log or records the history and outputs to the log when the dump function is called.
	 * @param isEnabled If the black box is enabled or not.
	 * @param numRecordsToKeep If 0, directly output to the log, otherwise store n records in history until Dump is called.
	 */
	void Debug_EnableBlackBox( bool isEnabled, int32 numRecordsToKeep );
	/** Dumps the content of the black box. */
	void Debug_DumpBlackBox();
	
private:
	/** "Tickers" to manage reservations throughout their lifetime. See cpp for details. */
	void UpdateProgressOnApprovedReservations();
	void MakeNewReservations();
	void UpdateOverlapsAndDependencies();
	void UpdatePrioritiesAndSort();
	void ApproveReservations();

	/** See FTrainSchedulerInfo */
	uint32 GetReservationNumber() const;
	uint32 GetNextReservationNumber();

	/** Dump the internal state. */
	void Debug_UpdateBlackBox();
	
	/**
	 * Helper function to check for a deadlocks in the scheduling.
	 * This only checks for direct deadlocks (2 trains) and not indirect deadlocks (3+ trains).
	 * This checks all trains against all other trains so operation might be expensive.
	 */
	TTuple< AFGTrain*, AFGTrain* > CheckForDeadlock() const;
	
	/** Check if there are any trains that have derailed. Returns an empty list if everything is fine. */
	TArray< AFGTrain* > CheckForDerailments() const;
	
private:
	/** Scheduling information for the tracked trains. */
	TMap< class AFGTrain*, TUniquePtr< FTrainSchedulerInfo > > mSchedulerInfos;

	/** Counter for giving out reservation numbers. */
	uint32 mReservationCounter;

	/** Is the black box enabled. */
	bool mDebugEnableBlackBox = false;
	/** The black box of the train scheduler. */
	struct FTrainSchedulerBlackBox
	{
	public:
		void Append( const FString& log ) { UncommittedState.Add( log ); }
		void Revert() { UncommittedState.Empty(); }

		void Commit()
		{
			const uint32 hash = Algo::Accumulate( UncommittedState, 0, []( uint32 result, const FString& line ){ return HashCombine( result, GetTypeHash( line ) ); } );
			
			if( hash != LastCommittedHash )
			{
				CommitId++;
				
				LastCommittedHash = hash;
				
				UncommittedState.Insert( FString::Printf( TEXT( "=========== Black Box Commit Start [%i] ===============" ), CommitId ), 0 );
				UncommittedState.Add( FString::Printf( TEXT( "=========== Black Box Commit End [%i] ===============" ), CommitId ) );
				
				if( HistoryLength == 0 )
				{
					// Direct output.
					while( UncommittedState.Num() > 0 )
					{
						UE_LOG( LogRailroad, Warning, TEXT( "%s" ), *UncommittedState[ 0 ] );

						UncommittedState.RemoveAt( 0 );
					}
				}
				else
				{
					UE_LOG( LogRailroad, Warning, TEXT( "Black Box Commit [%i]" ), CommitId );
					
					// Save history.
					History.Add( UncommittedState );
				
					while( History.Num() > HistoryLength )
					{
						History.RemoveAt( 0 );
					}
				}
			}
			
			UncommittedState.Empty();
		}

		void Dump()
		{
			for( auto commit : History )
			{
				for( auto log : commit )
				{
					UE_LOG( LogRailroad, Warning, TEXT( "%s" ), *log );
				}
			}
		}

		void Reset()
		{
			History.Reset( HistoryLength );
			
			CommitId = 0;
			LastCommittedHash = 0;
		}
		
		void Reset( int32 numRecordsToKeep )
		{
			HistoryLength = numRecordsToKeep;
			
			Reset();
		}
	private:
		/** How many records do we keep. If 0, then no history is kept and a log is made every time a message is committed. */
		int32 HistoryLength = 0;

		/** List of log lines for the current state. */
		TArray< FString > UncommittedState;
		
		/** We keep a hash for the last committed hash so we only record unique points in time. */
		uint32 LastCommittedHash = 0;
		
		/** Recorded history, keep the n last states. */
		TArray< TArray< FString > > History;
			
		/** Counter to identify committed entries for the user. */
		int32 CommitId = 0;
	} mDebugBlackBox;
};
