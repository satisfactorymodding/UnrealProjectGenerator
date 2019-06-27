// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FDropPackage;
#ifdef FACTORYGAME_FGDropPodSettings_generated_h
#error "FGDropPodSettings.generated.h already included, missing '#pragma once' in FGDropPodSettings.h"
#endif
#define FACTORYGAME_FGDropPodSettings_generated_h

#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDropPackage_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomDropPackage) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_world); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDropPackage*)Z_Param__Result=UFGDropPodSettings::GetRandomDropPackage(Z_Param_world); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomDropPackage) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_world); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDropPackage*)Z_Param__Result=UFGDropPodSettings::GetRandomDropPackage(Z_Param_world); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGDropPodSettings(); \
	friend struct Z_Construct_UClass_UFGDropPodSettings_Statics; \
public: \
	DECLARE_CLASS(UFGDropPodSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDropPodSettings)


#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUFGDropPodSettings(); \
	friend struct Z_Construct_UClass_UFGDropPodSettings_Statics; \
public: \
	DECLARE_CLASS(UFGDropPodSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDropPodSettings)


#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDropPodSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDropPodSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDropPodSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDropPodSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDropPodSettings(UFGDropPodSettings&&); \
	NO_API UFGDropPodSettings(const UFGDropPodSettings&); \
public:


#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDropPodSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDropPodSettings(UFGDropPodSettings&&); \
	NO_API UFGDropPodSettings(const UFGDropPodSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDropPodSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDropPodSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDropPodSettings)


#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDropTable() { return STRUCT_OFFSET(UFGDropPodSettings, mDropTable); }


#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_44_PROLOG
#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_INCLASS \
	FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDropPodSettings_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGDropPodSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
