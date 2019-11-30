// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGPowerCircuit;
class UFGPowerInfoComponent;
#ifdef FACTORYGAME_FGPowerConnectionComponent_generated_h
#error "FGPowerConnectionComponent.generated.h already included, missing '#pragma once' in FGPowerConnectionComponent.h"
#endif
#define FACTORYGAME_FGPowerConnectionComponent_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPowerCircuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerCircuit**)Z_Param__Result=P_THIS->GetPowerCircuit(); \
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
	DECLARE_FUNCTION(execSetPowerInfo) \
	{ \
		P_GET_OBJECT(UFGPowerInfoComponent,Z_Param_powerInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPowerInfo(Z_Param_powerInfo); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPowerCircuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerCircuit**)Z_Param__Result=P_THIS->GetPowerCircuit(); \
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
	DECLARE_FUNCTION(execSetPowerInfo) \
	{ \
		P_GET_OBJECT(UFGPowerInfoComponent,Z_Param_powerInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPowerInfo(Z_Param_powerInfo); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGPowerConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGPowerConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGPowerConnectionComponent, UFGCircuitConnectionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPowerConnectionComponent)


#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGPowerConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGPowerConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGPowerConnectionComponent, UFGCircuitConnectionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPowerConnectionComponent)


#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPowerConnectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPowerConnectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPowerConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPowerConnectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPowerConnectionComponent(UFGPowerConnectionComponent&&); \
	NO_API UFGPowerConnectionComponent(const UFGPowerConnectionComponent&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPowerConnectionComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPowerConnectionComponent(UFGPowerConnectionComponent&&); \
	NO_API UFGPowerConnectionComponent(const UFGPowerConnectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPowerConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPowerConnectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGPowerConnectionComponent)


#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPowerInfo() { return STRUCT_OFFSET(UFGPowerConnectionComponent, mPowerInfo); }


#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGPowerConnectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
