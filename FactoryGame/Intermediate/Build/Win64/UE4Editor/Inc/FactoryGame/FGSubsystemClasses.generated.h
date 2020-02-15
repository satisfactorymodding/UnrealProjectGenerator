// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGSubsystemClasses_generated_h
#error "FGSubsystemClasses.generated.h already included, missing '#pragma once' in FGSubsystemClasses.h"
#endif
#define FACTORYGAME_FGSubsystemClasses_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSubsystemClasses(); \
	friend struct Z_Construct_UClass_UFGSubsystemClasses_Statics; \
public: \
	DECLARE_CLASS(UFGSubsystemClasses, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSubsystemClasses) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGSubsystemClasses(); \
	friend struct Z_Construct_UClass_UFGSubsystemClasses_Statics; \
public: \
	DECLARE_CLASS(UFGSubsystemClasses, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSubsystemClasses) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSubsystemClasses(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSubsystemClasses) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSubsystemClasses); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSubsystemClasses); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSubsystemClasses(UFGSubsystemClasses&&); \
	NO_API UFGSubsystemClasses(const UFGSubsystemClasses&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSubsystemClasses(UFGSubsystemClasses&&); \
	NO_API UFGSubsystemClasses(const UFGSubsystemClasses&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSubsystemClasses); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSubsystemClasses); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGSubsystemClasses)


#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSubsystemClasses>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSubsystemClasses_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
