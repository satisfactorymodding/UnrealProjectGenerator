// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGSharedPostProcessSettings_generated_h
#error "FGSharedPostProcessSettings.generated.h already included, missing '#pragma once' in FGSharedPostProcessSettings.h"
#endif
#define FACTORYGAME_FGSharedPostProcessSettings_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSharedPostProcessSettings(); \
	friend struct Z_Construct_UClass_UFGSharedPostProcessSettings_Statics; \
public: \
	DECLARE_CLASS(UFGSharedPostProcessSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSharedPostProcessSettings)


#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGSharedPostProcessSettings(); \
	friend struct Z_Construct_UClass_UFGSharedPostProcessSettings_Statics; \
public: \
	DECLARE_CLASS(UFGSharedPostProcessSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSharedPostProcessSettings)


#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSharedPostProcessSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSharedPostProcessSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSharedPostProcessSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSharedPostProcessSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSharedPostProcessSettings(UFGSharedPostProcessSettings&&); \
	NO_API UFGSharedPostProcessSettings(const UFGSharedPostProcessSettings&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSharedPostProcessSettings(UFGSharedPostProcessSettings&&); \
	NO_API UFGSharedPostProcessSettings(const UFGSharedPostProcessSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSharedPostProcessSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSharedPostProcessSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGSharedPostProcessSettings)


#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPostProcessSettings() { return STRUCT_OFFSET(UFGSharedPostProcessSettings, mPostProcessSettings); } \
	FORCEINLINE static uint32 __PPO__mBlendRadius() { return STRUCT_OFFSET(UFGSharedPostProcessSettings, mBlendRadius); } \
	FORCEINLINE static uint32 __PPO__mBlendWeight() { return STRUCT_OFFSET(UFGSharedPostProcessSettings, mBlendWeight); } \
	FORCEINLINE static uint32 __PPO__mPriority() { return STRUCT_OFFSET(UFGSharedPostProcessSettings, mPriority); }


#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSharedPostProcessSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSharedPostProcessSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
