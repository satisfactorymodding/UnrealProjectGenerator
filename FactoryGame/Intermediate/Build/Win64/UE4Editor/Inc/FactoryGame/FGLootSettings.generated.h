// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGLootSettings;
class UObject;
#ifdef FACTORYGAME_FGLootSettings_generated_h
#error "FGLootSettings.generated.h already included, missing '#pragma once' in FGLootSettings.h"
#endif
#define FACTORYGAME_FGLootSettings_generated_h

#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLootSettingsDefaultObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFGLootSettings::GetLootSettingsDefaultObject(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLootSettingsDefaultObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFGLootSettings::GetLootSettingsDefaultObject(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGLootSettings(); \
	friend struct Z_Construct_UClass_UFGLootSettings_Statics; \
public: \
	DECLARE_CLASS(UFGLootSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGLootSettings)


#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFGLootSettings(); \
	friend struct Z_Construct_UClass_UFGLootSettings_Statics; \
public: \
	DECLARE_CLASS(UFGLootSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGLootSettings)


#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGLootSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGLootSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGLootSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGLootSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGLootSettings(UFGLootSettings&&); \
	NO_API UFGLootSettings(const UFGLootSettings&); \
public:


#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGLootSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGLootSettings(UFGLootSettings&&); \
	NO_API UFGLootSettings(const UFGLootSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGLootSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGLootSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGLootSettings)


#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_11_PROLOG
#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Creature_FGLootSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
