// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGPowerCircuit;
#ifdef FACTORYGAME_FGPowerCircuitWidget_generated_h
#error "FGPowerCircuitWidget.generated.h already included, missing '#pragma once' in FGPowerCircuitWidget.h"
#endif
#define FACTORYGAME_FGPowerCircuitWidget_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_20_DELEGATE \
struct FGPowerCircuitWidget_eventGetPowerCircuit_Parms \
{ \
	UFGPowerCircuit* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	FGPowerCircuitWidget_eventGetPowerCircuit_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UFGPowerCircuit* FGetPowerCircuit_DelegateWrapper(const FScriptDelegate& GetPowerCircuit) \
{ \
	FGPowerCircuitWidget_eventGetPowerCircuit_Parms Parms; \
	GetPowerCircuit.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPowerCircuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerCircuit**)Z_Param__Result=P_THIS->GetPowerCircuit(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPowerCircuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerCircuit**)Z_Param__Result=P_THIS->GetPowerCircuit(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGPowerCircuitWidget(); \
	friend struct Z_Construct_UClass_UFGPowerCircuitWidget_Statics; \
public: \
	DECLARE_CLASS(UFGPowerCircuitWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPowerCircuitWidget)


#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGPowerCircuitWidget(); \
	friend struct Z_Construct_UClass_UFGPowerCircuitWidget_Statics; \
public: \
	DECLARE_CLASS(UFGPowerCircuitWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPowerCircuitWidget)


#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPowerCircuitWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPowerCircuitWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPowerCircuitWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPowerCircuitWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPowerCircuitWidget(UFGPowerCircuitWidget&&); \
	NO_API UFGPowerCircuitWidget(const UFGPowerCircuitWidget&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPowerCircuitWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPowerCircuitWidget(UFGPowerCircuitWidget&&); \
	NO_API UFGPowerCircuitWidget(const UFGPowerCircuitWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPowerCircuitWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPowerCircuitWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPowerCircuitWidget)


#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPowerCircuit() { return STRUCT_OFFSET(UFGPowerCircuitWidget, mPowerCircuit); }


#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGPowerCircuitWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
