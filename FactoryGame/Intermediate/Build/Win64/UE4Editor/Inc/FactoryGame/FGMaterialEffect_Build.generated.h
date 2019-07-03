// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemAmount;
class AActor;
#ifdef FACTORYGAME_FGMaterialEffect_Build_generated_h
#error "FGMaterialEffect_Build.generated.h already included, missing '#pragma once' in FGMaterialEffect_Build.h"
#endif
#define FACTORYGAME_FGMaterialEffect_Build_generated_h

#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetInstigator(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetInstigator(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMaterialEffect_Build(); \
	friend struct Z_Construct_UClass_UFGMaterialEffect_Build_Statics; \
public: \
	DECLARE_CLASS(UFGMaterialEffect_Build, UFGMaterialEffectComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMaterialEffect_Build)


#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFGMaterialEffect_Build(); \
	friend struct Z_Construct_UClass_UFGMaterialEffect_Build_Statics; \
public: \
	DECLARE_CLASS(UFGMaterialEffect_Build, UFGMaterialEffectComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMaterialEffect_Build)


#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMaterialEffect_Build(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMaterialEffect_Build) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMaterialEffect_Build); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMaterialEffect_Build); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMaterialEffect_Build(UFGMaterialEffect_Build&&); \
	NO_API UFGMaterialEffect_Build(const UFGMaterialEffect_Build&); \
public:


#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMaterialEffect_Build(UFGMaterialEffect_Build&&); \
	NO_API UFGMaterialEffect_Build(const UFGMaterialEffect_Build&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMaterialEffect_Build); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMaterialEffect_Build); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGMaterialEffect_Build)


#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mInstigator() { return STRUCT_OFFSET(UFGMaterialEffect_Build, mInstigator); } \
	FORCEINLINE static uint32 __PPO__mCost() { return STRUCT_OFFSET(UFGMaterialEffect_Build, mCost); } \
	FORCEINLINE static uint32 __PPO__mSpeed() { return STRUCT_OFFSET(UFGMaterialEffect_Build, mSpeed); }


#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGMaterialEffect_Build_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
