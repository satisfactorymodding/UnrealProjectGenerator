// Copyright 2017 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Buildables/FGBuildableConveyorAttachment.h"
#include "FGBuildableAttachmentSplitter.generated.h"

/**
 * This is a struct that will assign an item to a certain connection.
 */
USTRUCT()
struct FConnectionItemStruct
{
	GENERATED_BODY()

	FConnectionItemStruct() :
		Connection( nullptr ),
		Item( FInventoryItem() ),
		OffsetBeyond( 0.0f ),
		IndexInInventory( 0 )
	{
	}

	FConnectionItemStruct( UFGFactoryConnectionComponent* inConnection, FInventoryItem inItem, float inOffsetBeyond, int32 indexInInventory ) :
		Connection( inConnection ),
		Item( inItem ),
		OffsetBeyond( inOffsetBeyond ),
		IndexInInventory( indexInInventory )
	{
	}

	/** The connection to put the item on */
	UPROPERTY()
	class UFGFactoryConnectionComponent* Connection;

	/** The item to put on the connection */
	UPROPERTY()
	FInventoryItem Item;

	/** What is our index in the inventory component */
	int32 IndexInInventory;

	/** How far past the conveyor belt length this item is */
	float OffsetBeyond;
};

/**
 * 
 */
UCLASS()
class FACTORYGAME_API AFGBuildableAttachmentSplitter : public AFGBuildableConveyorAttachment
{
	GENERATED_BODY()
public:
	/** Ctor */
	AFGBuildableAttachmentSplitter();

	// Begin AActor interface
	virtual void BeginPlay() override;
	// End AActor interface

	// Begin AFGBuildable interface
	virtual void Upgrade_Implementation( AActor* newActor ) override;
	// End AFGBuildable interface

	//~ Begin IFGDismantleInterface
	virtual void GetDismantleRefund_Implementation( TArray< FInventoryStack >& out_refund ) const override;
	// End IFGDismantleInterface

protected:
	// Begin Factory_ interface
	virtual void Factory_Tick( float deltaTime ) override;
	virtual bool Factory_GrabOutput_Implementation( UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type ) override;
	// End Factory_ interface

private:

	void FillDistributionTable();

protected:

	/** Cycles through the outputs, stores the output we want to put mItem on. Index is for the mOutputs array. */
	UPROPERTY( SaveGame, Meta = (NoAutoJson) )
	int32 mCurrentOutputIndex;

private:
	friend class AFGAttachmentSplitterHologram;

	UPROPERTY()
	TArray< FConnectionItemStruct > mDistributionTable;
};
