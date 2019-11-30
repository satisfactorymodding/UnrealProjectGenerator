// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
#ifdef FACTORYGAME_FGFactorySettings_generated_h
#error "FGFactorySettings.generated.h already included, missing '#pragma once' in FGFactorySettings.h"
#endif
#define FACTORYGAME_FGFactorySettings_generated_h

#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCategory_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomDismantleSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=UFGFactorySettings::GetRandomDismantleSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomConstructionSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=UFGFactorySettings::GetRandomConstructionSound(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomDismantleSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=UFGFactorySettings::GetRandomDismantleSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomConstructionSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=UFGFactorySettings::GetRandomConstructionSound(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGFactorySettings(); \
	friend struct Z_Construct_UClass_UFGFactorySettings_Statics; \
public: \
	DECLARE_CLASS(UFGFactorySettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFactorySettings)


#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUFGFactorySettings(); \
	friend struct Z_Construct_UClass_UFGFactorySettings_Statics; \
public: \
	DECLARE_CLASS(UFGFactorySettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFactorySettings)


#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGFactorySettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGFactorySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFactorySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFactorySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFactorySettings(UFGFactorySettings&&); \
	NO_API UFGFactorySettings(const UFGFactorySettings&); \
public:


#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFactorySettings(UFGFactorySettings&&); \
	NO_API UFGFactorySettings(const UFGFactorySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFactorySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFactorySettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGFactorySettings)


#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_41_PROLOG
#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_INCLASS \
	FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFactorySettings_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGFactorySettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
