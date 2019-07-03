// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
class UFGResearchRecipe;
struct FResearchRecipeReward;
#ifdef FACTORYGAME_FGHardDriveSettings_generated_h
#error "FGHardDriveSettings.generated.h already included, missing '#pragma once' in FGHardDriveSettings.h"
#endif
#define FACTORYGAME_FGHardDriveSettings_generated_h

#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Schematic() { return STRUCT_OFFSET(FHardDriveSchematicDrop, Schematic); }


#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetResearchRewardPackages) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_world); \
		P_GET_OBJECT(UClass,Z_Param_calledByResearch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FResearchRecipeReward>*)Z_Param__Result=UFGHardDriveSettings::GetResearchRewardPackages(Z_Param_world,Z_Param_calledByResearch); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetResearchRewardPackages) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_world); \
		P_GET_OBJECT(UClass,Z_Param_calledByResearch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FResearchRecipeReward>*)Z_Param__Result=UFGHardDriveSettings::GetResearchRewardPackages(Z_Param_world,Z_Param_calledByResearch); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGHardDriveSettings(); \
	friend struct Z_Construct_UClass_UFGHardDriveSettings_Statics; \
public: \
	DECLARE_CLASS(UFGHardDriveSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGHardDriveSettings)


#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUFGHardDriveSettings(); \
	friend struct Z_Construct_UClass_UFGHardDriveSettings_Statics; \
public: \
	DECLARE_CLASS(UFGHardDriveSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGHardDriveSettings)


#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGHardDriveSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGHardDriveSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGHardDriveSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGHardDriveSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGHardDriveSettings(UFGHardDriveSettings&&); \
	NO_API UFGHardDriveSettings(const UFGHardDriveSettings&); \
public:


#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGHardDriveSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGHardDriveSettings(UFGHardDriveSettings&&); \
	NO_API UFGHardDriveSettings(const UFGHardDriveSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGHardDriveSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGHardDriveSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGHardDriveSettings)


#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mUniqueItemCount() { return STRUCT_OFFSET(UFGHardDriveSettings, mUniqueItemCount); } \
	FORCEINLINE static uint32 __PPO__mPotentialSchematicDrops() { return STRUCT_OFFSET(UFGHardDriveSettings, mPotentialSchematicDrops); } \
	FORCEINLINE static uint32 __PPO__mFallbackReturnItem() { return STRUCT_OFFSET(UFGHardDriveSettings, mFallbackReturnItem); }


#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_40_PROLOG
#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_INCLASS \
	FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGHardDriveSettings_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGHardDriveSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
