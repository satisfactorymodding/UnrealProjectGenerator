// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
class UMaterialInterface;
#ifdef FACTORYGAME_FGSplineComponent_generated_h
#error "FGSplineComponent.generated.h already included, missing '#pragma once' in FGSplineComponent.h"
#endif
#define FACTORYGAME_FGSplineComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawDebugSpline) \
	{ \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_color1); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_color2); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebugSpline(Z_Param_Out_color1,Z_Param_Out_color2,Z_Param_thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSplineMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSplineMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverrideMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOverrideMaterial(Z_Param_material); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawDebugSpline) \
	{ \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_color1); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_color2); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebugSpline(Z_Param_Out_color1,Z_Param_Out_color2,Z_Param_thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSplineMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSplineMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverrideMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOverrideMaterial(Z_Param_material); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSplineComponent(); \
	friend struct Z_Construct_UClass_UFGSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UFGSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSplineComponent)


#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFGSplineComponent(); \
	friend struct Z_Construct_UClass_UFGSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UFGSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSplineComponent)


#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSplineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSplineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSplineComponent(UFGSplineComponent&&); \
	NO_API UFGSplineComponent(const UFGSplineComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSplineComponent(UFGSplineComponent&&); \
	NO_API UFGSplineComponent(const UFGSplineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSplineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSplineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGSplineComponent)


#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOverrideMaterial() { return STRUCT_OFFSET(UFGSplineComponent, mOverrideMaterial); } \
	FORCEINLINE static uint32 __PPO__mUseInstancing() { return STRUCT_OFFSET(UFGSplineComponent, mUseInstancing); } \
	FORCEINLINE static uint32 __PPO__mSplineMeshComponents() { return STRUCT_OFFSET(UFGSplineComponent, mSplineMeshComponents); } \
	FORCEINLINE static uint32 __PPO__mCustomDepthSplineMeshComponents() { return STRUCT_OFFSET(UFGSplineComponent, mCustomDepthSplineMeshComponents); } \
	FORCEINLINE static uint32 __PPO__mSplineCollisionComponents() { return STRUCT_OFFSET(UFGSplineComponent, mSplineCollisionComponents); }


#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_19_PROLOG
#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSplineComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSplineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGSplineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
