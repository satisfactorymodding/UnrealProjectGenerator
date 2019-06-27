// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
class UFGRecipe;
class UObject;
class AFGRecipeManager;
#ifdef FACTORYGAME_FGRecipeManager_generated_h
#error "FGRecipeManager.generated.h already included, missing '#pragma once' in FGRecipeManager.h"
#endif
#define FACTORYGAME_FGRecipeManager_generated_h

#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execGetAvailableRecipesForProducerAndPhase) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_forProducer); \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableRecipesForProducerAndPhase(Z_Param_forProducer,EGamePhase(Z_Param_gamePhase),Z_Param_Out_out_recipes); \
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


#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execGetAvailableRecipesForProducerAndPhase) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_forProducer); \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableRecipesForProducerAndPhase(Z_Param_forProducer,EGamePhase(Z_Param_gamePhase),Z_Param_Out_out_recipes); \
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


#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGRecipeManager(); \
	friend struct Z_Construct_UClass_AFGRecipeManager_Statics; \
public: \
	DECLARE_CLASS(AFGRecipeManager, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRecipeManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGRecipeManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGRecipeManager(); \
	friend struct Z_Construct_UClass_AFGRecipeManager_Statics; \
public: \
	DECLARE_CLASS(AFGRecipeManager, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRecipeManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGRecipeManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_ENHANCED_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAvailableRecipes() { return STRUCT_OFFSET(AFGRecipeManager, mAvailableRecipes); }


#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRecipeManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRecipeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
