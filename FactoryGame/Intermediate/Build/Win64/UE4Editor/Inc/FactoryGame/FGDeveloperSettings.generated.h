// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGDeveloperSettings_generated_h
#error "FGDeveloperSettings.generated.h already included, missing '#pragma once' in FGDeveloperSettings.h"
#endif
#define FACTORYGAME_FGDeveloperSettings_generated_h

#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGDeveloperSettings(); \
	friend struct Z_Construct_UClass_UFGDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UFGDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGDeveloperSettings(); \
	friend struct Z_Construct_UClass_UFGDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UFGDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDeveloperSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDeveloperSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDeveloperSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDeveloperSettings(UFGDeveloperSettings&&); \
	NO_API UFGDeveloperSettings(const UFGDeveloperSettings&); \
public:


#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDeveloperSettings(UFGDeveloperSettings&&); \
	NO_API UFGDeveloperSettings(const UFGDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDeveloperSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDeveloperSettings)


#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDeveloperSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGDeveloperSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
