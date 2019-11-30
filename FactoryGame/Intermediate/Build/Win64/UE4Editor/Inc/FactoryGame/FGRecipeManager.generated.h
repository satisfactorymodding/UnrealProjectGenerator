// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
class UFGRecipe;
class AFGCharacterPlayer;
class UObject;
class AFGRecipeManager;
#ifdef FACTORYGAME_FGRecipeManager_generated_h
#error "FGRecipeManager.generated.h already included, missing '#pragma once' in FGRecipeManager.h"
#endif
#define FACTORYGAME_FGRecipeManager_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindRecipesByProduct) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_product); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGRecipe> >*)Z_Param__Result=P_THIS->FindRecipesByProduct(Z_Param_product); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRecipesByIngredient) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ingredient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGRecipe> >*)Z_Param__Result=P_THIS->FindRecipesByIngredient(Z_Param_ingredient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRecipeAvailable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipeClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRecipeAvailable(Z_Param_recipeClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAffordableRecipesForProducer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_GET_OBJECT(UClass,Z_Param_forProducer); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAffordableRecipesForProducer(Z_Param_player,Z_Param_forProducer,Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipesForProducer) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_forProducer); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableRecipesForProducer(Z_Param_forProducer,Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAvailableRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllAvailableRecipes(Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGRecipeManager**)Z_Param__Result=AFGRecipeManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindRecipesByProduct) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_product); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGRecipe> >*)Z_Param__Result=P_THIS->FindRecipesByProduct(Z_Param_product); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRecipesByIngredient) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ingredient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGRecipe> >*)Z_Param__Result=P_THIS->FindRecipesByIngredient(Z_Param_ingredient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRecipeAvailable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipeClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRecipeAvailable(Z_Param_recipeClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAffordableRecipesForProducer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_GET_OBJECT(UClass,Z_Param_forProducer); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAffordableRecipesForProducer(Z_Param_player,Z_Param_forProducer,Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipesForProducer) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_forProducer); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableRecipesForProducer(Z_Param_forProducer,Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAvailableRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllAvailableRecipes(Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGRecipeManager**)Z_Param__Result=AFGRecipeManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGRecipeManager(); \
	friend struct Z_Construct_UClass_AFGRecipeManager_Statics; \
public: \
	DECLARE_CLASS(AFGRecipeManager, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRecipeManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGRecipeManager*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAFGRecipeManager(); \
	friend struct Z_Construct_UClass_AFGRecipeManager_Statics; \
public: \
	DECLARE_CLASS(AFGRecipeManager, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRecipeManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGRecipeManager*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGRecipeManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGRecipeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRecipeManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRecipeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRecipeManager(AFGRecipeManager&&); \
	NO_API AFGRecipeManager(const AFGRecipeManager&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGRecipeManager() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRecipeManager(AFGRecipeManager&&); \
	NO_API AFGRecipeManager(const AFGRecipeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRecipeManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRecipeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGRecipeManager)


#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAvailableRecipes() { return STRUCT_OFFSET(AFGRecipeManager, mAvailableRecipes); }


#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_20_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGRecipeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGRecipeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
