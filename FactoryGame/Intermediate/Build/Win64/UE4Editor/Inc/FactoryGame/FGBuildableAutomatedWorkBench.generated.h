// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGBuildableAutomatedWorkBench_generated_h
#error "FGBuildableAutomatedWorkBench.generated.h already included, missing '#pragma once' in FGBuildableAutomatedWorkBench.h"
#endif
#define FACTORYGAME_FGBuildableAutomatedWorkBench_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetManufacturingSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newManufacturingSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetManufacturingSpeed(Z_Param_newManufacturingSpeed); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetManufacturingSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newManufacturingSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetManufacturingSpeed(Z_Param_newManufacturingSpeed); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableAutomatedWorkBench(); \
	friend struct Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableAutomatedWorkBench, AFGBuildableManufacturer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableAutomatedWorkBench)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableAutomatedWorkBench(); \
	friend struct Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableAutomatedWorkBench, AFGBuildableManufacturer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableAutomatedWorkBench)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableAutomatedWorkBench(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableAutomatedWorkBench) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableAutomatedWorkBench); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableAutomatedWorkBench); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableAutomatedWorkBench(AFGBuildableAutomatedWorkBench&&); \
	NO_API AFGBuildableAutomatedWorkBench(const AFGBuildableAutomatedWorkBench&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableAutomatedWorkBench(AFGBuildableAutomatedWorkBench&&); \
	NO_API AFGBuildableAutomatedWorkBench(const AFGBuildableAutomatedWorkBench&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableAutomatedWorkBench); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableAutomatedWorkBench); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableAutomatedWorkBench)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableAutomatedWorkBench_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
