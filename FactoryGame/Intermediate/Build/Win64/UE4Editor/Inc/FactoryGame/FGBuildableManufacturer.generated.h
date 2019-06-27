// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGRecipe;
class UFGInventoryComponent;
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGBuildableManufacturer_generated_h
#error "FGBuildableManufacturer.generated.h already included, missing '#pragma once' in FGBuildableManufacturer.h"
#endif
#define FACTORYGAME_FGBuildableManufacturer_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_9_DELEGATE \
struct _Script_FactoryGame_eventOnNewRecipeDelegate_Parms \
{ \
	TSubclassOf<UFGRecipe>  newRecipe; \
}; \
static inline void FOnNewRecipeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewRecipeDelegate, TSubclassOf<UFGRecipe>  newRecipe) \
{ \
	_Script_FactoryGame_eventOnNewRecipeDelegate_Parms Parms; \
	Parms.newRecipe=newRecipe; \
	OnNewRecipeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentRecipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentRecipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRecipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGRecipe> *)Z_Param__Result=P_THIS->GetCurrentRecipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetOutputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManufacturingSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableRecipes(Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveOrDropOutputInventory) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveOrDropOutputInventory(Z_Param_pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveOrDropInputInventory) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveOrDropInputInventory(Z_Param_pawn); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentRecipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentRecipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRecipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGRecipe> *)Z_Param__Result=P_THIS->GetCurrentRecipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetOutputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManufacturingSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableRecipes(Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveOrDropOutputInventory) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveOrDropOutputInventory(Z_Param_pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveOrDropInputInventory) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveOrDropInputInventory(Z_Param_pawn); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableManufacturer(); \
	friend struct Z_Construct_UClass_AFGBuildableManufacturer_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableManufacturer, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableManufacturer) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableManufacturer*>(this); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableManufacturer(); \
	friend struct Z_Construct_UClass_AFGBuildableManufacturer_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableManufacturer, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableManufacturer) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableManufacturer*>(this); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableManufacturer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableManufacturer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableManufacturer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableManufacturer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableManufacturer(AFGBuildableManufacturer&&); \
	NO_API AFGBuildableManufacturer(const AFGBuildableManufacturer&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableManufacturer(AFGBuildableManufacturer&&); \
	NO_API AFGBuildableManufacturer(const AFGBuildableManufacturer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableManufacturer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableManufacturer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableManufacturer)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCurrentRecipeChanged() { return STRUCT_OFFSET(AFGBuildableManufacturer, mCurrentRecipeChanged); } \
	FORCEINLINE static uint32 __PPO__mManufacturingSpeed() { return STRUCT_OFFSET(AFGBuildableManufacturer, mManufacturingSpeed); } \
	FORCEINLINE static uint32 __PPO__mCurrentManufacturingProgress() { return STRUCT_OFFSET(AFGBuildableManufacturer, mCurrentManufacturingProgress); } \
	FORCEINLINE static uint32 __PPO__mInputInventory() { return STRUCT_OFFSET(AFGBuildableManufacturer, mInputInventory); } \
	FORCEINLINE static uint32 __PPO__mOutputInventory() { return STRUCT_OFFSET(AFGBuildableManufacturer, mOutputInventory); } \
	FORCEINLINE static uint32 __PPO__mCurrentRecipe() { return STRUCT_OFFSET(AFGBuildableManufacturer, mCurrentRecipe); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableManufacturer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
