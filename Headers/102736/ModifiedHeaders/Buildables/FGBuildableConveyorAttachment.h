// Copyright 2017 Coffee Stain Studios. All Rights Reserved.

#pragma once
#include "Array.h"
#include "GameFramework/Actor.h"
#include "UObject/Class.h"

#include "CoreMinimal.h"
#include "Buildables/FGBuildableFactory.h"
#include "../Replication/FGReplicationDetailInventoryComponent.h"
#include "../Replication/FGReplicationDetailActor_Storage.h"
#include "FGBuildableFactory.h"
#include "FGBuildableConveyorAttachment.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API AFGBuildableConveyorAttachment : public AFGBuildableFactory
{
	GENERATED_BODY()
public:
	AFGBuildableConveyorAttachment();

	// Begin AActor interface
	virtual void BeginPlay() override;
	// End AActor interface

	//~ Begin Factory Interface
	//virtual void Factory_Tick( float deltaTime ) override;
	//~ End Factory Interface

	//~ Begin IFGDismantleInterface
	virtual void Dismantle_Implementation() override;
	//~ End IFGDismantleInferface

protected:
	friend class AFGReplicationDetailActor_Storage;

	// Begin Factory_ interface
	virtual void Factory_CollectInput_Implementation() override;
	// End Factory_ interface

	virtual void OnRep_ReplicationDetailActor() override;

public:
	/** The size of the inventory for this attachment. Used to hold a buffer of incoming items */
	int32 mInventorySizeX;

	/** The size of the inventory for this storage. Used to hold a buffer of incoming items*/
	int32 mInventorySizeY;

protected:

	/** The inventory to store everything in. Don't use this directly, use mStorageInventoryHandler->GetActiveInventoryComponent() */
	UPROPERTY( SaveGame )
	class UFGInventoryComponent* mBufferInventory;

	/** Maintainer of the active storage component for this actor. Use this to get the active inventory component. */
	class UFGReplicationDetailInventoryComponent* mBufferInventoryHandler;

	/** Cached input connections for faster lookup. */
	TArray< UFGFactoryConnectionComponent* > mInputs;

	/** Cached output connections for faster lookup. */
	TArray< UFGFactoryConnectionComponent* > mOutputs;

};
