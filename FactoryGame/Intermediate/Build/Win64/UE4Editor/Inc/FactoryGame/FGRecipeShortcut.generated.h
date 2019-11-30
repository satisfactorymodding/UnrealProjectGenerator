// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGRecipe;
#ifdef FACTORYGAME_FGRecipeShortcut_generated_h
#error "FGRecipeShortcut.generated.h already included, missing '#pragma once' in FGRecipeShortcut.h"
#endif
#define FACTORYGAME_FGRecipeShortcut_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Recipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Recipe(); \
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
	DECLARE_FUNCTION(execGetRecipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGRecipe> *)Z_Param__Result=P_THIS->GetRecipe(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Recipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Recipe(); \
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
	DECLARE_FUNCTION(execGetRecipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGRecipe> *)Z_Param__Result=P_THIS->GetRecipe(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGRecipeShortcut(); \
	friend struct Z_Construct_UClass_UFGRecipeShortcut_Statics; \
public: \
	DECLARE_CLASS(UFGRecipeShortcut, UFGHotbarShortcut, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRecipeShortcut)


#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGRecipeShortcut(); \
	friend struct Z_Construct_UClass_UFGRecipeShortcut_Statics; \
public: \
	DECLARE_CLASS(UFGRecipeShortcut, UFGHotbarShortcut, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRecipeShortcut)


#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRecipeShortcut(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRecipeShortcut) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRecipeShortcut); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRecipeShortcut); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRecipeShortcut(UFGRecipeShortcut&&); \
	NO_API UFGRecipeShortcut(const UFGRecipeShortcut&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRecipeShortcut(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRecipeShortcut(UFGRecipeShortcut&&); \
	NO_API UFGRecipeShortcut(const UFGRecipeShortcut&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRecipeShortcut); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRecipeShortcut); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRecipeShortcut)


#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mRecipeToActivate() { return STRUCT_OFFSET(UFGRecipeShortcut, mRecipeToActivate); }


#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGRecipeShortcut_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
