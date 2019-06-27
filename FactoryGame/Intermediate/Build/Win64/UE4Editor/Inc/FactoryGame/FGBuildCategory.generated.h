// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGBuildCategory;
struct FSlateBrush;
#ifdef FACTORYGAME_FGBuildCategory_generated_h
#error "FGBuildCategory.generated.h already included, missing '#pragma once' in FGBuildCategory.h"
#endif
#define FACTORYGAME_FGBuildCategory_generated_h

#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCategoryIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UFGBuildCategory::GetCategoryIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCategoryName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGBuildCategory::GetCategoryName(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCategoryIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UFGBuildCategory::GetCategoryIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCategoryName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGBuildCategory::GetCategoryName(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGBuildCategory(); \
	friend struct Z_Construct_UClass_UFGBuildCategory_Statics; \
public: \
	DECLARE_CLASS(UFGBuildCategory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildCategory)


#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGBuildCategory(); \
	friend struct Z_Construct_UClass_UFGBuildCategory_Statics; \
public: \
	DECLARE_CLASS(UFGBuildCategory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildCategory)


#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildCategory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBuildCategory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildCategory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildCategory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildCategory(UFGBuildCategory&&); \
	NO_API UFGBuildCategory(const UFGBuildCategory&); \
public:


#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildCategory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildCategory(UFGBuildCategory&&); \
	NO_API UFGBuildCategory(const UFGBuildCategory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildCategory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildCategory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBuildCategory)


#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDisplayName() { return STRUCT_OFFSET(UFGBuildCategory, mDisplayName); } \
	FORCEINLINE static uint32 __PPO__mCategoryIcon() { return STRUCT_OFFSET(UFGBuildCategory, mCategoryIcon); }


#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGBuildCategory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGBuildCategory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
