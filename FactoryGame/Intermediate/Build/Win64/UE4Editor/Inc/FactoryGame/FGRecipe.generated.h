// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
class UFGRecipe;
class UObject;
struct FItemAmount;
#ifdef FACTORYGAME_FGRecipe_generated_h
#error "FGRecipe.generated.h already included, missing '#pragma once' in FGRecipe.h"
#endif
#define FACTORYGAME_FGRecipe_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsRecipeAffordable) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGRecipe::IsRecipeAffordable(Z_Param_player,Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRewardedRecipes) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGRecipe> >*)Z_Param__Result=UFGRecipe::GetRewardedRecipes(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortByName) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGRecipe::SortByName(Z_Param_Out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProducedIn) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UObject> >*)Z_Param__Result=UFGRecipe::GetProducedIn(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingDuration) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGRecipe::GetManufacturingDuration(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProducts) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_UBOOL(Z_Param_allowChildRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=UFGRecipe::GetProducts(Z_Param_inClass,Z_Param_allowChildRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIngredients) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=UFGRecipe::GetIngredients(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRecipeName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGRecipe::GetRecipeName(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsRecipeAffordable) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGRecipe::IsRecipeAffordable(Z_Param_player,Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRewardedRecipes) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGRecipe> >*)Z_Param__Result=UFGRecipe::GetRewardedRecipes(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortByName) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGRecipe::SortByName(Z_Param_Out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProducedIn) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UObject> >*)Z_Param__Result=UFGRecipe::GetProducedIn(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingDuration) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGRecipe::GetManufacturingDuration(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProducts) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_UBOOL(Z_Param_allowChildRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=UFGRecipe::GetProducts(Z_Param_inClass,Z_Param_allowChildRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIngredients) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=UFGRecipe::GetIngredients(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRecipeName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGRecipe::GetRecipeName(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGRecipe(); \
	friend struct Z_Construct_UClass_UFGRecipe_Statics; \
public: \
	DECLARE_CLASS(UFGRecipe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRecipe)


#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFGRecipe(); \
	friend struct Z_Construct_UClass_UFGRecipe_Statics; \
public: \
	DECLARE_CLASS(UFGRecipe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRecipe)


#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRecipe(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRecipe) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRecipe); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRecipe); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRecipe(UFGRecipe&&); \
	NO_API UFGRecipe(const UFGRecipe&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRecipe(UFGRecipe&&); \
	NO_API UFGRecipe(const UFGRecipe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRecipe); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRecipe); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGRecipe)


#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDisplayNameOverride() { return STRUCT_OFFSET(UFGRecipe, mDisplayNameOverride); } \
	FORCEINLINE static uint32 __PPO__mDisplayName() { return STRUCT_OFFSET(UFGRecipe, mDisplayName); } \
	FORCEINLINE static uint32 __PPO__mIngredients() { return STRUCT_OFFSET(UFGRecipe, mIngredients); } \
	FORCEINLINE static uint32 __PPO__mProduct() { return STRUCT_OFFSET(UFGRecipe, mProduct); } \
	FORCEINLINE static uint32 __PPO__mManufactoringDuration() { return STRUCT_OFFSET(UFGRecipe, mManufactoringDuration); } \
	FORCEINLINE static uint32 __PPO__mProducedIn() { return STRUCT_OFFSET(UFGRecipe, mProducedIn); }


#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRecipe_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGRecipe>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGRecipe_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
