// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGBuildableGenerator_generated_h
#error "FGBuildableGenerator.generated.h already included, missing '#pragma once' in FGBuildableGenerator.h"
#endif
#define FACTORYGAME_FGBuildableGenerator_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_RPC_WRAPPERS \
	virtual void Factory_TickPowerProduction_Implementation(float dt); \
	virtual void Factory_StopPowerProduction_Implementation(); \
	virtual void Factory_StartPowerProduction_Implementation(); \
	virtual bool CanStartPowerProduction_Implementation() const; \
 \
	DECLARE_FUNCTION(execFactory_TickPowerProduction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Factory_TickPowerProduction_Implementation(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_StopPowerProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Factory_StopPowerProduction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_StartPowerProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Factory_StartPowerProduction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanStartPowerProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanStartPowerProduction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcPowerProductionCapacityForPotential) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_potential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalcPowerProductionCapacityForPotential(Z_Param_potential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultPowerProductionCapacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultPowerProductionCapacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerProductionCapacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPowerProductionCapacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFuseTriggered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->IsFuseTriggered(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLoadPercentage(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Factory_TickPowerProduction_Implementation(float dt); \
	virtual void Factory_StopPowerProduction_Implementation(); \
	virtual void Factory_StartPowerProduction_Implementation(); \
	virtual bool CanStartPowerProduction_Implementation() const; \
 \
	DECLARE_FUNCTION(execFactory_TickPowerProduction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Factory_TickPowerProduction_Implementation(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_StopPowerProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Factory_StopPowerProduction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_StartPowerProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Factory_StartPowerProduction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanStartPowerProduction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanStartPowerProduction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcPowerProductionCapacityForPotential) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_potential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalcPowerProductionCapacityForPotential(Z_Param_potential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultPowerProductionCapacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultPowerProductionCapacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerProductionCapacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPowerProductionCapacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFuseTriggered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->IsFuseTriggered(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLoadPercentage(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_EVENT_PARMS \
	struct FGBuildableGenerator_eventCanStartPowerProduction_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGBuildableGenerator_eventCanStartPowerProduction_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGBuildableGenerator_eventFactory_TickPowerProduction_Parms \
	{ \
		float dt; \
	};


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableGenerator(); \
	friend struct Z_Construct_UClass_AFGBuildableGenerator_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableGenerator, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableGenerator)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableGenerator(); \
	friend struct Z_Construct_UClass_AFGBuildableGenerator_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableGenerator, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableGenerator)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableGenerator(AFGBuildableGenerator&&); \
	NO_API AFGBuildableGenerator(const AFGBuildableGenerator&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableGenerator(AFGBuildableGenerator&&); \
	NO_API AFGBuildableGenerator(const AFGBuildableGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableGenerator)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPowerProduction() { return STRUCT_OFFSET(AFGBuildableGenerator, mPowerProduction); } \
	FORCEINLINE static uint32 __PPO__mPowerProductionExponent() { return STRUCT_OFFSET(AFGBuildableGenerator, mPowerProductionExponent); } \
	FORCEINLINE static uint32 __PPO__mLoadPercentage() { return STRUCT_OFFSET(AFGBuildableGenerator, mLoadPercentage); } \
	FORCEINLINE static uint32 __PPO__mIsFuseTriggered() { return STRUCT_OFFSET(AFGBuildableGenerator, mIsFuseTriggered); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_14_PROLOG \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
