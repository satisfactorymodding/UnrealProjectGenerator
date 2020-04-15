// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UMeshComponent;
#ifdef FACTORYGAME_FGMaterialEffectComponent_generated_h
#error "FGMaterialEffectComponent.generated.h already included, missing '#pragma once' in FGMaterialEffectComponent.h"
#endif
#define FACTORYGAME_FGMaterialEffectComponent_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedMaterialArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FCachedMaterialArray>();

#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FCostIngredientEffectActorInfo>();

#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_RPC_WRAPPERS \
	virtual void OnUpdate_Implementation(float deltaTime); \
	virtual void OnEnded_Implementation(); \
	virtual void OnStarted_Implementation(); \
	virtual void PreStarted_Implementation(); \
 \
	DECLARE_FUNCTION(execSetMaterialScalarParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialScalarParameterValue(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUpdate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUpdate_Implementation(Z_Param_deltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnded_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStarted_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreStarted_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDuration(Z_Param_duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshesBounds) \
	{ \
		P_GET_UBOOL(Z_Param_onlyVisible); \
		P_GET_UBOOL(Z_Param_onlyColliding); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_boxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMeshesBounds(Z_Param_onlyVisible,Z_Param_onlyColliding,Z_Param_Out_out_origin,Z_Param_Out_out_boxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMeshComponent*>*)Z_Param__Result=P_THIS->GetMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshes) \
	{ \
		P_GET_TARRAY(UMeshComponent*,Z_Param_meshes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshes(Z_Param_meshes); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnUpdate_Implementation(float deltaTime); \
	virtual void OnEnded_Implementation(); \
	virtual void OnStarted_Implementation(); \
	virtual void PreStarted_Implementation(); \
 \
	DECLARE_FUNCTION(execSetMaterialScalarParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialScalarParameterValue(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUpdate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUpdate_Implementation(Z_Param_deltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnded_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStarted_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreStarted_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDuration(Z_Param_duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshesBounds) \
	{ \
		P_GET_UBOOL(Z_Param_onlyVisible); \
		P_GET_UBOOL(Z_Param_onlyColliding); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_boxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMeshesBounds(Z_Param_onlyVisible,Z_Param_onlyColliding,Z_Param_Out_out_origin,Z_Param_Out_out_boxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMeshComponent*>*)Z_Param__Result=P_THIS->GetMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshes) \
	{ \
		P_GET_TARRAY(UMeshComponent*,Z_Param_meshes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshes(Z_Param_meshes); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_EVENT_PARMS \
	struct FGMaterialEffectComponent_eventOnUpdate_Parms \
	{ \
		float deltaTime; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMaterialEffectComponent(); \
	friend struct Z_Construct_UClass_UFGMaterialEffectComponent_Statics; \
public: \
	DECLARE_CLASS(UFGMaterialEffectComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMaterialEffectComponent)


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUFGMaterialEffectComponent(); \
	friend struct Z_Construct_UClass_UFGMaterialEffectComponent_Statics; \
public: \
	DECLARE_CLASS(UFGMaterialEffectComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMaterialEffectComponent)


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMaterialEffectComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMaterialEffectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMaterialEffectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMaterialEffectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMaterialEffectComponent(UFGMaterialEffectComponent&&); \
	NO_API UFGMaterialEffectComponent(const UFGMaterialEffectComponent&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMaterialEffectComponent(UFGMaterialEffectComponent&&); \
	NO_API UFGMaterialEffectComponent(const UFGMaterialEffectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMaterialEffectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMaterialEffectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGMaterialEffectComponent)


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMeshes() { return STRUCT_OFFSET(UFGMaterialEffectComponent, mMeshes); } \
	FORCEINLINE static uint32 __PPO__mMaterial() { return STRUCT_OFFSET(UFGMaterialEffectComponent, mMaterial); } \
	FORCEINLINE static uint32 __PPO__mAutoDestroy() { return STRUCT_OFFSET(UFGMaterialEffectComponent, mAutoDestroy); } \
	FORCEINLINE static uint32 __PPO__mMids() { return STRUCT_OFFSET(UFGMaterialEffectComponent, mMids); } \
	FORCEINLINE static uint32 __PPO__mOverrideMaterials() { return STRUCT_OFFSET(UFGMaterialEffectComponent, mOverrideMaterials); }


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_58_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGMaterialEffectComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGMaterialEffectComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
