// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGBuildDescriptor;
class UFGBuildSubCategory;
class UFGBuildCategory;
#ifdef FACTORYGAME_FGBuildDescriptor_generated_h
#error "FGBuildDescriptor.generated.h already included, missing '#pragma once' in FGBuildDescriptor.h"
#endif
#define FACTORYGAME_FGBuildDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBuildMenuPriority) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBuildDescriptor::GetBuildMenuPriority(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubCategories) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_TARRAY_REF(TSubclassOf<UFGBuildSubCategory> ,Z_Param_Out_out_subCategories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBuildDescriptor::GetSubCategories(Z_Param_inClass,Z_Param_Out_out_subCategories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildCategory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGBuildCategory> *)Z_Param__Result=UFGBuildDescriptor::GetBuildCategory(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBuildMenuPriority) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBuildDescriptor::GetBuildMenuPriority(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubCategories) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_TARRAY_REF(TSubclassOf<UFGBuildSubCategory> ,Z_Param_Out_out_subCategories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBuildDescriptor::GetSubCategories(Z_Param_inClass,Z_Param_Out_out_subCategories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildCategory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGBuildCategory> *)Z_Param__Result=UFGBuildDescriptor::GetBuildCategory(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGBuildDescriptor(); \
	friend struct Z_Construct_UClass_UFGBuildDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGBuildDescriptor, UFGItemDescriptor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFGBuildDescriptor(); \
	friend struct Z_Construct_UClass_UFGBuildDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGBuildDescriptor, UFGItemDescriptor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildDescriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBuildDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildDescriptor(UFGBuildDescriptor&&); \
	NO_API UFGBuildDescriptor(const UFGBuildDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildDescriptor() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildDescriptor(UFGBuildDescriptor&&); \
	NO_API UFGBuildDescriptor(const UFGBuildDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGBuildDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mBuildCategory() { return STRUCT_OFFSET(UFGBuildDescriptor, mBuildCategory); } \
	FORCEINLINE static uint32 __PPO__mSubCategories() { return STRUCT_OFFSET(UFGBuildDescriptor, mSubCategories); } \
	FORCEINLINE static uint32 __PPO__mBuildMenuPriority() { return STRUCT_OFFSET(UFGBuildDescriptor, mBuildMenuPriority); }


#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_12_PROLOG
#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Resources_FGBuildDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
