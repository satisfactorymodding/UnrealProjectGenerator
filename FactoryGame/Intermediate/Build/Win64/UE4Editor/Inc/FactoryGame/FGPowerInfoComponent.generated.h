// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGPowerCircuit;
#ifdef FACTORYGAME_FGPowerInfoComponent_generated_h
#error "FGPowerInfoComponent.generated.h already included, missing '#pragma once' in FGPowerInfoComponent.h"
#endif
#define FACTORYGAME_FGPowerInfoComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRegulatedDynamicProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRegulatedDynamicProduction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicProductionDemandFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDynamicProductionDemandFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicProductionCapacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDynamicProductionCapacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicProductionCapacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newProduction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicProductionCapacity(Z_Param_newProduction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBaseProduction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseProduction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newProduction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBaseProduction(Z_Param_newProduction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActualConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActualConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetConsumption) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newConsumption); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetConsumption(Z_Param_newConsumption); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFuseTriggered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFuseTriggered(); \
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
	DECLARE_FUNCTION(execIsConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerCircuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerCircuit**)Z_Param__Result=P_THIS->GetPowerCircuit(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRegulatedDynamicProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRegulatedDynamicProduction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicProductionDemandFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDynamicProductionDemandFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicProductionCapacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDynamicProductionCapacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicProductionCapacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newProduction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicProductionCapacity(Z_Param_newProduction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBaseProduction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseProduction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newProduction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBaseProduction(Z_Param_newProduction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActualConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActualConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetConsumption) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newConsumption); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetConsumption(Z_Param_newConsumption); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFuseTriggered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFuseTriggered(); \
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
	DECLARE_FUNCTION(execIsConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerCircuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerCircuit**)Z_Param__Result=P_THIS->GetPowerCircuit(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGPowerInfoComponent(); \
	friend struct Z_Construct_UClass_UFGPowerInfoComponent_Statics; \
public: \
	DECLARE_CLASS(UFGPowerInfoComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPowerInfoComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UFGPowerInfoComponent*>(this); }


#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFGPowerInfoComponent(); \
	friend struct Z_Construct_UClass_UFGPowerInfoComponent_Statics; \
public: \
	DECLARE_CLASS(UFGPowerInfoComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPowerInfoComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UFGPowerInfoComponent*>(this); }


#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPowerInfoComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPowerInfoComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPowerInfoComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPowerInfoComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPowerInfoComponent(UFGPowerInfoComponent&&); \
	NO_API UFGPowerInfoComponent(const UFGPowerInfoComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPowerInfoComponent(UFGPowerInfoComponent&&); \
	NO_API UFGPowerInfoComponent(const UFGPowerInfoComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPowerInfoComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPowerInfoComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGPowerInfoComponent)


#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCircuitID() { return STRUCT_OFFSET(UFGPowerInfoComponent, mCircuitID); } \
	FORCEINLINE static uint32 __PPO__mTargetConsumption() { return STRUCT_OFFSET(UFGPowerInfoComponent, mTargetConsumption); } \
	FORCEINLINE static uint32 __PPO__mActualConsumption() { return STRUCT_OFFSET(UFGPowerInfoComponent, mActualConsumption); } \
	FORCEINLINE static uint32 __PPO__mBaseProduction() { return STRUCT_OFFSET(UFGPowerInfoComponent, mBaseProduction); } \
	FORCEINLINE static uint32 __PPO__mDynamicProductionCapacity() { return STRUCT_OFFSET(UFGPowerInfoComponent, mDynamicProductionCapacity); } \
	FORCEINLINE static uint32 __PPO__mDynamicProductionDemandFactor() { return STRUCT_OFFSET(UFGPowerInfoComponent, mDynamicProductionDemandFactor); }


#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGPowerInfoComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGPowerInfoComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
