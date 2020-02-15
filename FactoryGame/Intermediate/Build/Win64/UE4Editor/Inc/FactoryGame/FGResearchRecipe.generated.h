// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FResearchRecipeReward;
class UFGResearchRecipe;
class UFGItemDescriptor;
#ifdef FACTORYGAME_FGResearchRecipe_generated_h
#error "FGResearchRecipe.generated.h already included, missing '#pragma once' in FGResearchRecipe.h"
#endif
#define FACTORYGAME_FGResearchRecipe_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResearchRecipeReward_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FResearchRecipeReward>();

#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValidResearchRecipeReward) \
	{ \
		P_GET_STRUCT(FResearchRecipeReward,Z_Param_recipeReward); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGResearchRecipe::IsValidResearchRecipeReward(Z_Param_recipeReward); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchRepeatable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGResearchRecipe::IsResearchRepeatable(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchTriggerItems) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemDescriptor> >*)Z_Param__Result=UFGResearchRecipe::GetResearchTriggerItems(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchTime) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGResearchRecipe::GetResearchTime(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearcResults) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FResearchRecipeReward*)Z_Param__Result=UFGResearchRecipe::GetResearcResults(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValidResearchRecipeReward) \
	{ \
		P_GET_STRUCT(FResearchRecipeReward,Z_Param_recipeReward); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGResearchRecipe::IsValidResearchRecipeReward(Z_Param_recipeReward); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchRepeatable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGResearchRecipe::IsResearchRepeatable(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchTriggerItems) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemDescriptor> >*)Z_Param__Result=UFGResearchRecipe::GetResearchTriggerItems(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchTime) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGResearchRecipe::GetResearchTime(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearcResults) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FResearchRecipeReward*)Z_Param__Result=UFGResearchRecipe::GetResearcResults(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFGResearchRecipe, NO_API)


#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGResearchRecipe(); \
	friend struct Z_Construct_UClass_UFGResearchRecipe_Statics; \
public: \
	DECLARE_CLASS(UFGResearchRecipe, UFGRecipe, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGResearchRecipe) \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUFGResearchRecipe(); \
	friend struct Z_Construct_UClass_UFGResearchRecipe_Statics; \
public: \
	DECLARE_CLASS(UFGResearchRecipe, UFGRecipe, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGResearchRecipe) \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGResearchRecipe(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGResearchRecipe) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGResearchRecipe); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGResearchRecipe); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGResearchRecipe(UFGResearchRecipe&&); \
	NO_API UFGResearchRecipe(const UFGResearchRecipe&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGResearchRecipe(UFGResearchRecipe&&); \
	NO_API UFGResearchRecipe(const UFGResearchRecipe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGResearchRecipe); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGResearchRecipe); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGResearchRecipe)


#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTriggerItems() { return STRUCT_OFFSET(UFGResearchRecipe, mTriggerItems); } \
	FORCEINLINE static uint32 __PPO__mIsRepeatable() { return STRUCT_OFFSET(UFGResearchRecipe, mIsRepeatable); } \
	FORCEINLINE static uint32 __PPO__mRewardUsesDropPackage() { return STRUCT_OFFSET(UFGResearchRecipe, mRewardUsesDropPackage); } \
	FORCEINLINE static uint32 __PPO__mUnlockedResearch() { return STRUCT_OFFSET(UFGResearchRecipe, mUnlockedResearch); } \
	FORCEINLINE static uint32 __PPO__mUnlockedSchematics() { return STRUCT_OFFSET(UFGResearchRecipe, mUnlockedSchematics); } \
	FORCEINLINE static uint32 __PPO__mDecorPoints() { return STRUCT_OFFSET(UFGResearchRecipe, mDecorPoints); } \
	FORCEINLINE static uint32 __PPO__mStructurePoints() { return STRUCT_OFFSET(UFGResearchRecipe, mStructurePoints); } \
	FORCEINLINE static uint32 __PPO__mExcludeFromBuild_DEPRECATED() { return STRUCT_OFFSET(UFGResearchRecipe, mExcludeFromBuild_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__mAssetBundleData() { return STRUCT_OFFSET(UFGResearchRecipe, mAssetBundleData); }


#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_46_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGResearchRecipe>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGResearchRecipe_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
