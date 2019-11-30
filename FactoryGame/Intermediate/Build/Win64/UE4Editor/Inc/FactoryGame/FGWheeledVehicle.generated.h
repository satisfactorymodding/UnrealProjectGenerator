// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class AFGTargetPoint;
class UFGTargetPointLinkedList;
class UFloatingPawnMovement;
class UObject;
class UFGItemDescriptor;
class UFGInventoryComponent;
struct FTireData;
class UWheeledVehicleMovementComponent;
struct FVector;
class UParticleSystem;
class UAkAudioEvent;
#ifdef FACTORYGAME_FGWheeledVehicle_generated_h
#error "FGWheeledVehicle.generated.h already included, missing '#pragma once' in FGWheeledVehicle.h"
#endif
#define FACTORYGAME_FGWheeledVehicle_generated_h

#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplicatedAddedVelocitiesState_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTireParticleCollection_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleTemplatePair_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSurfaceParticlePair_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTireTrackDecalDetails_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTireData_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_18_DELEGATE \
static inline void FTranferStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& TranferStatusChanged) \
{ \
	TranferStatusChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_RPC_WRAPPERS \
	virtual bool ServerUpdateAssistedVelocitiesState_Validate(bool , float , float ); \
	virtual void ServerUpdateAssistedVelocitiesState_Implementation(bool inDrifting, float inInputYaw, float inInputPitch); \
	virtual void CreateInventoryItemDrops_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_TransferStatusChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TransferStatusChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsSimulated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsSimulated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReplicatedState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseReplicatedState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateAssistedVelocitiesState) \
	{ \
		P_GET_UBOOL(Z_Param_inDrifting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inInputYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inInputPitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateAssistedVelocitiesState_Validate(Z_Param_inDrifting,Z_Param_inInputYaw,Z_Param_inInputPitch)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateAssistedVelocitiesState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateAssistedVelocitiesState_Implementation(Z_Param_inDrifting,Z_Param_inInputYaw,Z_Param_inInputPitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAddedAngularVelocityValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAddedAngularVelocityValues(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsGrounded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsGrounded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAddedAngularVelocityYaw) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_yawToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAddedAngularVelocityYaw(Z_Param_yawToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAddedAngularVelocityPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_pitchToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAddedAngularVelocityPitch(Z_Param_pitchToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInventoryItemDrops) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateInventoryItemDrops_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsDrifting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsDrifting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsDrifting) \
	{ \
		P_GET_UBOOL(Z_Param_newDrifting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsDrifting(Z_Param_newDrifting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPathVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_inVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathVisibility(Z_Param_inVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPathVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPathFromArray) \
	{ \
		P_GET_TARRAY(AFGTargetPoint*,Z_Param_targetPoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathFromArray(Z_Param_targetPoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTargetPoint) \
	{ \
		P_GET_OBJECT(AFGTargetPoint,Z_Param_targetToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTargetPoint(Z_Param_targetToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetNodeLinkedList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGTargetPointLinkedList**)Z_Param__Result=P_THIS->GetTargetNodeLinkedList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantsToMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WantsToMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSimulationComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFloatingPawnMovement**)Z_Param__Result=P_THIS->GetSimulationComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSimulated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSimulated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterFuelClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_object); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FilterFuelClasses(Z_Param_object,Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidFuel) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidFuel(Z_Param_resource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStorageInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetStorageInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFuelInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNumWheelsOnGround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->NumWheelsOnGround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInAir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInAir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTireData) \
	{ \
		P_GET_TARRAY_REF(FTireData,Z_Param_Out_out_tireData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTireData(Z_Param_Out_out_tireData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFuel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMovementComponent) \
	{ \
		P_GET_OBJECT(UWheeledVehicleMovementComponent,Z_Param_movementComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMovementComponent(Z_Param_movementComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVehicleMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWheeledVehicleMovementComponent**)Z_Param__Result=P_THIS->GetVehicleMovementComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateAssistedVelocitiesState_Validate(bool , float , float ); \
	virtual void ServerUpdateAssistedVelocitiesState_Implementation(bool inDrifting, float inInputYaw, float inInputPitch); \
	virtual void CreateInventoryItemDrops_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_TransferStatusChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TransferStatusChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsSimulated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsSimulated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReplicatedState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseReplicatedState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateAssistedVelocitiesState) \
	{ \
		P_GET_UBOOL(Z_Param_inDrifting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inInputYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inInputPitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateAssistedVelocitiesState_Validate(Z_Param_inDrifting,Z_Param_inInputYaw,Z_Param_inInputPitch)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateAssistedVelocitiesState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateAssistedVelocitiesState_Implementation(Z_Param_inDrifting,Z_Param_inInputYaw,Z_Param_inInputPitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAddedAngularVelocityValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAddedAngularVelocityValues(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsGrounded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsGrounded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAddedAngularVelocityYaw) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_yawToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAddedAngularVelocityYaw(Z_Param_yawToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAddedAngularVelocityPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_pitchToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAddedAngularVelocityPitch(Z_Param_pitchToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInventoryItemDrops) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateInventoryItemDrops_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsDrifting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsDrifting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsDrifting) \
	{ \
		P_GET_UBOOL(Z_Param_newDrifting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsDrifting(Z_Param_newDrifting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPathVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_inVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathVisibility(Z_Param_inVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPathVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPathFromArray) \
	{ \
		P_GET_TARRAY(AFGTargetPoint*,Z_Param_targetPoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathFromArray(Z_Param_targetPoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTargetPoint) \
	{ \
		P_GET_OBJECT(AFGTargetPoint,Z_Param_targetToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTargetPoint(Z_Param_targetToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetNodeLinkedList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGTargetPointLinkedList**)Z_Param__Result=P_THIS->GetTargetNodeLinkedList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantsToMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WantsToMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSimulationComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFloatingPawnMovement**)Z_Param__Result=P_THIS->GetSimulationComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSimulated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSimulated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterFuelClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_object); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FilterFuelClasses(Z_Param_object,Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidFuel) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidFuel(Z_Param_resource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStorageInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetStorageInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFuelInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNumWheelsOnGround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->NumWheelsOnGround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInAir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInAir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTireData) \
	{ \
		P_GET_TARRAY_REF(FTireData,Z_Param_Out_out_tireData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTireData(Z_Param_Out_out_tireData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFuel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMovementComponent) \
	{ \
		P_GET_OBJECT(UWheeledVehicleMovementComponent,Z_Param_movementComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMovementComponent(Z_Param_movementComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVehicleMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWheeledVehicleMovementComponent**)Z_Param__Result=P_THIS->GetVehicleMovementComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_EVENT_PARMS \
	struct FGWheeledVehicle_eventGetDriftForceOffset_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGWheeledVehicle_eventGetDriftForceOffset_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGWheeledVehicle_eventPlayFoliageDestroyedEffect_Parms \
	{ \
		UParticleSystem* destroyEffect; \
		UAkAudioEvent* destroyAudioEvent; \
		FVector location; \
	}; \
	struct FGWheeledVehicle_eventServerUpdateAssistedVelocitiesState_Parms \
	{ \
		bool inDrifting; \
		float inInputYaw; \
		float inInputPitch; \
	};


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGWheeledVehicle(); \
	friend struct Z_Construct_UClass_AFGWheeledVehicle_Statics; \
public: \
	DECLARE_CLASS(AFGWheeledVehicle, AFGVehicle, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWheeledVehicle) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_INCLASS \
private: \
	static void StaticRegisterNativesAFGWheeledVehicle(); \
	friend struct Z_Construct_UClass_AFGWheeledVehicle_Statics; \
public: \
	DECLARE_CLASS(AFGWheeledVehicle, AFGVehicle, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWheeledVehicle) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWheeledVehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGWheeledVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWheeledVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWheeledVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWheeledVehicle(AFGWheeledVehicle&&); \
	NO_API AFGWheeledVehicle(const AFGWheeledVehicle&); \
public:


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWheeledVehicle(AFGWheeledVehicle&&); \
	NO_API AFGWheeledVehicle(const AFGWheeledVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWheeledVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWheeledVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGWheeledVehicle)


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mReplicatedState() { return STRUCT_OFFSET(AFGWheeledVehicle, mReplicatedState); } \
	FORCEINLINE static uint32 __PPO__mFuelConsumption() { return STRUCT_OFFSET(AFGWheeledVehicle, mFuelConsumption); } \
	FORCEINLINE static uint32 __PPO__mCurrentFuelAmount() { return STRUCT_OFFSET(AFGWheeledVehicle, mCurrentFuelAmount); } \
	FORCEINLINE static uint32 __PPO__mIsLoadingVehicle() { return STRUCT_OFFSET(AFGWheeledVehicle, mIsLoadingVehicle); } \
	FORCEINLINE static uint32 __PPO__mIsUnloadingVehicle() { return STRUCT_OFFSET(AFGWheeledVehicle, mIsUnloadingVehicle); } \
	FORCEINLINE static uint32 __PPO__mCurrentFuelClass() { return STRUCT_OFFSET(AFGWheeledVehicle, mCurrentFuelClass); } \
	FORCEINLINE static uint32 __PPO__mIsInAir() { return STRUCT_OFFSET(AFGWheeledVehicle, mIsInAir); } \
	FORCEINLINE static uint32 __PPO__mNumWheelsOnGround() { return STRUCT_OFFSET(AFGWheeledVehicle, mNumWheelsOnGround); } \
	FORCEINLINE static uint32 __PPO__mVehicleMovement() { return STRUCT_OFFSET(AFGWheeledVehicle, mVehicleMovement); } \
	FORCEINLINE static uint32 __PPO__mDistBetweenDecals() { return STRUCT_OFFSET(AFGWheeledVehicle, mDistBetweenDecals); } \
	FORCEINLINE static uint32 __PPO__mDecalLifespan() { return STRUCT_OFFSET(AFGWheeledVehicle, mDecalLifespan); } \
	FORCEINLINE static uint32 __PPO__mDefaultTireTrackDecal() { return STRUCT_OFFSET(AFGWheeledVehicle, mDefaultTireTrackDecal); } \
	FORCEINLINE static uint32 __PPO__mTireTrackDecals() { return STRUCT_OFFSET(AFGWheeledVehicle, mTireTrackDecals); } \
	FORCEINLINE static uint32 __PPO__mDecalSize() { return STRUCT_OFFSET(AFGWheeledVehicle, mDecalSize); } \
	FORCEINLINE static uint32 __PPO__mFoliageDestroyRadius() { return STRUCT_OFFSET(AFGWheeledVehicle, mFoliageDestroyRadius); } \
	FORCEINLINE static uint32 __PPO__mAddedGroundAngularVelocityStrengthYaw() { return STRUCT_OFFSET(AFGWheeledVehicle, mAddedGroundAngularVelocityStrengthYaw); } \
	FORCEINLINE static uint32 __PPO__mAddedGroundAngularVelocityStrengthPitch() { return STRUCT_OFFSET(AFGWheeledVehicle, mAddedGroundAngularVelocityStrengthPitch); } \
	FORCEINLINE static uint32 __PPO__mAddedAirControlAngularVelocityStrengthYaw() { return STRUCT_OFFSET(AFGWheeledVehicle, mAddedAirControlAngularVelocityStrengthYaw); } \
	FORCEINLINE static uint32 __PPO__mAddedAirControlAngularVelocityStrengthPitch() { return STRUCT_OFFSET(AFGWheeledVehicle, mAddedAirControlAngularVelocityStrengthPitch); } \
	FORCEINLINE static uint32 __PPO__mNaturalAngularVelocityStrengthYaw() { return STRUCT_OFFSET(AFGWheeledVehicle, mNaturalAngularVelocityStrengthYaw); } \
	FORCEINLINE static uint32 __PPO__mNaturalAngularVelocityStrengthPitch() { return STRUCT_OFFSET(AFGWheeledVehicle, mNaturalAngularVelocityStrengthPitch); } \
	FORCEINLINE static uint32 __PPO__mNaturalAirAngularVelocityStrengthYaw() { return STRUCT_OFFSET(AFGWheeledVehicle, mNaturalAirAngularVelocityStrengthYaw); } \
	FORCEINLINE static uint32 __PPO__mNaturalAirAngularVelocityStrengthPitch() { return STRUCT_OFFSET(AFGWheeledVehicle, mNaturalAirAngularVelocityStrengthPitch); } \
	FORCEINLINE static uint32 __PPO__mAddedAngularVelocityInputSmoothingSpeed() { return STRUCT_OFFSET(AFGWheeledVehicle, mAddedAngularVelocityInputSmoothingSpeed); } \
	FORCEINLINE static uint32 __PPO__mFoliageCollideBox() { return STRUCT_OFFSET(AFGWheeledVehicle, mFoliageCollideBox); } \
	FORCEINLINE static uint32 __PPO__mIsSimulated() { return STRUCT_OFFSET(AFGWheeledVehicle, mIsSimulated); } \
	FORCEINLINE static uint32 __PPO__mSimulationDistance() { return STRUCT_OFFSET(AFGWheeledVehicle, mSimulationDistance); } \
	FORCEINLINE static uint32 __PPO__mSimulationMovementComponent() { return STRUCT_OFFSET(AFGWheeledVehicle, mSimulationMovementComponent); } \
	FORCEINLINE static uint32 __PPO__mFuelInventory() { return STRUCT_OFFSET(AFGWheeledVehicle, mFuelInventory); } \
	FORCEINLINE static uint32 __PPO__mStorageInventory() { return STRUCT_OFFSET(AFGWheeledVehicle, mStorageInventory); } \
	FORCEINLINE static uint32 __PPO__mInventorySize() { return STRUCT_OFFSET(AFGWheeledVehicle, mInventorySize); } \
	FORCEINLINE static uint32 __PPO__mVehicleParticeMap() { return STRUCT_OFFSET(AFGWheeledVehicle, mVehicleParticeMap); } \
	FORCEINLINE static uint32 __PPO__mActiveParticleAndTemplate() { return STRUCT_OFFSET(AFGWheeledVehicle, mActiveParticleAndTemplate); } \
	FORCEINLINE static uint32 __PPO__mTireEffectSocketName() { return STRUCT_OFFSET(AFGWheeledVehicle, mTireEffectSocketName); } \
	FORCEINLINE static uint32 __PPO__mTargetNodeLinkedList() { return STRUCT_OFFSET(AFGWheeledVehicle, mTargetNodeLinkedList); } \
	FORCEINLINE static uint32 __PPO__mIsPathVisible() { return STRUCT_OFFSET(AFGWheeledVehicle, mIsPathVisible); } \
	FORCEINLINE static uint32 __PPO__mLastDecalLocations() { return STRUCT_OFFSET(AFGWheeledVehicle, mLastDecalLocations); } \
	FORCEINLINE static uint32 __PPO__mOverlappedHISMComponents() { return STRUCT_OFFSET(AFGWheeledVehicle, mOverlappedHISMComponents); } \
	FORCEINLINE static uint32 __PPO__mAddedAngularVelocityInputPitch() { return STRUCT_OFFSET(AFGWheeledVehicle, mAddedAngularVelocityInputPitch); } \
	FORCEINLINE static uint32 __PPO__mAddedAngularVelocityInputYaw() { return STRUCT_OFFSET(AFGWheeledVehicle, mAddedAngularVelocityInputYaw); } \
	FORCEINLINE static uint32 __PPO__mReverseAddedAngularVelocityYawMultiplier() { return STRUCT_OFFSET(AFGWheeledVehicle, mReverseAddedAngularVelocityYawMultiplier); } \
	FORCEINLINE static uint32 __PPO__mHasAirControl() { return STRUCT_OFFSET(AFGWheeledVehicle, mHasAirControl); } \
	FORCEINLINE static uint32 __PPO__mGroundTraceLength() { return STRUCT_OFFSET(AFGWheeledVehicle, mGroundTraceLength); } \
	FORCEINLINE static uint32 __PPO__mMaxDeltaLinearVelocity() { return STRUCT_OFFSET(AFGWheeledVehicle, mMaxDeltaLinearVelocity); } \
	FORCEINLINE static uint32 __PPO__mMaxDeltaAngularVelocity() { return STRUCT_OFFSET(AFGWheeledVehicle, mMaxDeltaAngularVelocity); } \
	FORCEINLINE static uint32 __PPO__mRollStabilisationStrength() { return STRUCT_OFFSET(AFGWheeledVehicle, mRollStabilisationStrength); } \
	FORCEINLINE static uint32 __PPO__mMaxRollAngleForUpsideDown() { return STRUCT_OFFSET(AFGWheeledVehicle, mMaxRollAngleForUpsideDown); } \
	FORCEINLINE static uint32 __PPO__mMaxFlatOnGroundRollAngleLimit() { return STRUCT_OFFSET(AFGWheeledVehicle, mMaxFlatOnGroundRollAngleLimit); } \
	FORCEINLINE static uint32 __PPO__mMaxRollForActivationOfAssistedVelocities() { return STRUCT_OFFSET(AFGWheeledVehicle, mMaxRollForActivationOfAssistedVelocities); } \
	FORCEINLINE static uint32 __PPO__mMaxSpeedForAddedAcceleration() { return STRUCT_OFFSET(AFGWheeledVehicle, mMaxSpeedForAddedAcceleration); } \
	FORCEINLINE static uint32 __PPO__mMaxAssistedAcceleration() { return STRUCT_OFFSET(AFGWheeledVehicle, mMaxAssistedAcceleration); } \
	FORCEINLINE static uint32 __PPO__mHasAssistedVelocities() { return STRUCT_OFFSET(AFGWheeledVehicle, mHasAssistedVelocities); } \
	FORCEINLINE static uint32 __PPO__mHasRollStabilisation() { return STRUCT_OFFSET(AFGWheeledVehicle, mHasRollStabilisation); } \
	FORCEINLINE static uint32 __PPO__mDriftingLateralForce() { return STRUCT_OFFSET(AFGWheeledVehicle, mDriftingLateralForce); } \
	FORCEINLINE static uint32 __PPO__mDriftingUpwardForce() { return STRUCT_OFFSET(AFGWheeledVehicle, mDriftingUpwardForce); } \
	FORCEINLINE static uint32 __PPO__mDriftForwardForceStrengthCurve() { return STRUCT_OFFSET(AFGWheeledVehicle, mDriftForwardForceStrengthCurve); } \
	FORCEINLINE static uint32 __PPO__mDriftForceBones() { return STRUCT_OFFSET(AFGWheeledVehicle, mDriftForceBones); } \
	FORCEINLINE static uint32 __PPO__mMinAngleForDrift() { return STRUCT_OFFSET(AFGWheeledVehicle, mMinAngleForDrift); }


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_144_PROLOG \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_INCLASS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicle_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGWheeledVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
