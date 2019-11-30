// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFGItemDescriptor;
class UFGInventoryComponent;
class UFGRecipe;
enum class EProductionStatus : uint8;
class UFGPowerInfoComponent;
class UFGFactoryConnectionComponent;
#ifdef FACTORYGAME_FGBuildableFactory_generated_h
#error "FGBuildableFactory.generated.h already included, missing '#pragma once' in FGBuildableFactory.h"
#endif
#define FACTORYGAME_FGBuildableFactory_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_37_DELEGATE \
struct _Script_FactoryGame_eventBuildingStateChanged_Parms \
{ \
	bool state; \
}; \
static inline void FBuildingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& BuildingStateChanged, bool state) \
{ \
	_Script_FactoryGame_eventBuildingStateChanged_Parms Parms; \
	Parms.state=state ? true : false; \
	BuildingStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_18_DELEGATE \
struct _Script_FactoryGame_eventOnReplicationDetailActorCreated_Parms \
{ \
	AActor* replicationDetailActorOwner; \
}; \
static inline void FOnReplicationDetailActorCreated_DelegateWrapper(const FMulticastScriptDelegate& OnReplicationDetailActorCreated, AActor* replicationDetailActorOwner) \
{ \
	_Script_FactoryGame_eventOnReplicationDetailActorCreated_Parms Parms; \
	Parms.replicationDetailActorOwner=replicationDetailActorOwner; \
	OnReplicationDetailActorCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_RPC_WRAPPERS \
	virtual void Factory_CollectInput_Implementation(); \
	virtual bool CanProduce_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnPotentialInventoryItemRemoved) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPotentialInventoryItemRemoved(Z_Param_itemClass,Z_Param_numRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsProducing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicationDetailActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicationDetailActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_CollectInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Factory_CollectInput_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSignificant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSignificant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanChangePotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCanChangePotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxPossiblePotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxPossiblePotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMaxPotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentMaxPotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinPotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinPotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPendingPotential) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newPendingPotential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPendingPotential(Z_Param_newPendingPotential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingPotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPendingPotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPotentialInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetPotentialInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcProductionCycleTimeForPotential) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_potential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalcProductionCycleTimeForPotential(Z_Param_potential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionCycleTimeForRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductionCycleTimeForRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultProductionCycleTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultProductionCycleTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionCycleTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductionCycleTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductionProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionIndicatorStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EProductionStatus*)Z_Param__Result=P_THIS->GetProductionIndicatorStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProductionPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsProductionPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsProductionPaused) \
	{ \
		P_GET_UBOOL(Z_Param_isPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsProductionPaused(Z_Param_isPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanProduce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanProduce_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsProducing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConfigured) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConfigured(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcProducingPowerConsumptionForPotential) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_potential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalcProducingPowerConsumptionForPotential(Z_Param_potential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultProducingPowerConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultProducingPowerConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProducingPowerConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProducingPowerConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerInfoComponent**)Z_Param__Result=P_THIS->GetPowerInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunsOnPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RunsOnPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnectionComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFGFactoryConnectionComponent*>*)Z_Param__Result=P_THIS->GetConnectionComponents(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Factory_CollectInput_Implementation(); \
	virtual bool CanProduce_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnPotentialInventoryItemRemoved) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPotentialInventoryItemRemoved(Z_Param_itemClass,Z_Param_numRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsProducing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicationDetailActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicationDetailActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_CollectInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Factory_CollectInput_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSignificant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSignificant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanChangePotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCanChangePotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxPossiblePotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxPossiblePotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMaxPotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentMaxPotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinPotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinPotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPendingPotential) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newPendingPotential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPendingPotential(Z_Param_newPendingPotential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingPotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPendingPotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPotential) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPotential(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPotentialInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetPotentialInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcProductionCycleTimeForPotential) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_potential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalcProductionCycleTimeForPotential(Z_Param_potential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionCycleTimeForRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductionCycleTimeForRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultProductionCycleTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultProductionCycleTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionCycleTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductionCycleTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductionProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionIndicatorStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EProductionStatus*)Z_Param__Result=P_THIS->GetProductionIndicatorStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProductionPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsProductionPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsProductionPaused) \
	{ \
		P_GET_UBOOL(Z_Param_isPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsProductionPaused(Z_Param_isPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanProduce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanProduce_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsProducing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConfigured) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConfigured(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcProducingPowerConsumptionForPotential) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_potential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalcProducingPowerConsumptionForPotential(Z_Param_potential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultProducingPowerConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultProducingPowerConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProducingPowerConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProducingPowerConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerInfoComponent**)Z_Param__Result=P_THIS->GetPowerInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunsOnPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RunsOnPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnectionComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFGFactoryConnectionComponent*>*)Z_Param__Result=P_THIS->GetConnectionComponents(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_EVENT_PARMS \
	struct FGBuildableFactory_eventCanProduce_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGBuildableFactory_eventCanProduce_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGBuildableFactory_eventFactory_ReceiveTickProducing_Parms \
	{ \
		float deltaTime; \
	}; \
	struct FGBuildableFactory_eventOnHasPowerChanged_Parms \
	{ \
		bool newHasPower; \
	}; \
	struct FGBuildableFactory_eventOnIsProducingChanged_Parms \
	{ \
		bool newIsProducing; \
	}; \
	struct FGBuildableFactory_eventReceiveUpdateEffects_Parms \
	{ \
		float DeltaSeconds; \
	}; \
	struct FGBuildableFactory_eventStartProductionLoopEffects_Parms \
	{ \
		bool didStartProducing; \
	}; \
	struct FGBuildableFactory_eventStopProductionLoopEffects_Parms \
	{ \
		bool didStopProducing; \
	};


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableFactory(); \
	friend struct Z_Construct_UClass_AFGBuildableFactory_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableFactory, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableFactory) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableFactory*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableFactory(); \
	friend struct Z_Construct_UClass_AFGBuildableFactory_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableFactory, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableFactory) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableFactory*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableFactory(AFGBuildableFactory&&); \
	NO_API AFGBuildableFactory(const AFGBuildableFactory&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableFactory(AFGBuildableFactory&&); \
	NO_API AFGBuildableFactory(const AFGBuildableFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableFactory)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPowerInfo() { return STRUCT_OFFSET(AFGBuildableFactory, mPowerInfo); } \
	FORCEINLINE static uint32 __PPO__mOnHasPowerChanged() { return STRUCT_OFFSET(AFGBuildableFactory, mOnHasPowerChanged); } \
	FORCEINLINE static uint32 __PPO__mOnHasProductionChanged() { return STRUCT_OFFSET(AFGBuildableFactory, mOnHasProductionChanged); } \
	FORCEINLINE static uint32 __PPO__mMinimumProducingTime() { return STRUCT_OFFSET(AFGBuildableFactory, mMinimumProducingTime); } \
	FORCEINLINE static uint32 __PPO__mMinimumStoppedTime() { return STRUCT_OFFSET(AFGBuildableFactory, mMinimumStoppedTime); } \
	FORCEINLINE static uint32 __PPO__mTimeSinceStartStopProducing() { return STRUCT_OFFSET(AFGBuildableFactory, mTimeSinceStartStopProducing); } \
	FORCEINLINE static uint32 __PPO__mNumCyclesForProductivity() { return STRUCT_OFFSET(AFGBuildableFactory, mNumCyclesForProductivity); } \
	FORCEINLINE static uint32 __PPO__mCanChangePotential() { return STRUCT_OFFSET(AFGBuildableFactory, mCanChangePotential); } \
	FORCEINLINE static uint32 __PPO__mCurrentPotential() { return STRUCT_OFFSET(AFGBuildableFactory, mCurrentPotential); } \
	FORCEINLINE static uint32 __PPO__mPendingPotential() { return STRUCT_OFFSET(AFGBuildableFactory, mPendingPotential); } \
	FORCEINLINE static uint32 __PPO__mMinPotential() { return STRUCT_OFFSET(AFGBuildableFactory, mMinPotential); } \
	FORCEINLINE static uint32 __PPO__mMaxPotential() { return STRUCT_OFFSET(AFGBuildableFactory, mMaxPotential); } \
	FORCEINLINE static uint32 __PPO__mMaxPotentialIncreasePerCrystal() { return STRUCT_OFFSET(AFGBuildableFactory, mMaxPotentialIncreasePerCrystal); } \
	FORCEINLINE static uint32 __PPO__mIsProductionPaused() { return STRUCT_OFFSET(AFGBuildableFactory, mIsProductionPaused); } \
	FORCEINLINE static uint32 __PPO__mReplicationDetailActor() { return STRUCT_OFFSET(AFGBuildableFactory, mReplicationDetailActor); } \
	FORCEINLINE static uint32 __PPO__OnReplicationDetailActorCreatedEvent() { return STRUCT_OFFSET(AFGBuildableFactory, OnReplicationDetailActorCreatedEvent); } \
	FORCEINLINE static uint32 __PPO__mInventoryPotential() { return STRUCT_OFFSET(AFGBuildableFactory, mInventoryPotential); } \
	FORCEINLINE static uint32 __PPO__mSignificanceBias() { return STRUCT_OFFSET(AFGBuildableFactory, mSignificanceBias); } \
	FORCEINLINE static uint32 __PPO__mEffectUpdateInterval() { return STRUCT_OFFSET(AFGBuildableFactory, mEffectUpdateInterval); } \
	FORCEINLINE static uint32 __PPO__mCurrentProductivity() { return STRUCT_OFFSET(AFGBuildableFactory, mCurrentProductivity); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_43_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableFactory_h


#define FOREACH_ENUM_EPRODUCTIONSTATUS(op) \
	op(EProductionStatus::IS_NONE) \
	op(EProductionStatus::IS_PRODUCING) \
	op(EProductionStatus::IS_PRODUCING_WITH_CRYSTAL) \
	op(EProductionStatus::IS_STANDBY) \
	op(EProductionStatus::IS_ERROR) 

enum class EProductionStatus : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EProductionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
