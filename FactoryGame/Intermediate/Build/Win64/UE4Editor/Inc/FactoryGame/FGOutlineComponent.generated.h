// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOutlineColor : uint8;
struct FVector;
struct FRotator;
class UStaticMesh;
class AActor;
struct FTransform;
#ifdef FACTORYGAME_FGOutlineComponent_generated_h
#error "FGOutlineComponent.generated.h already included, missing '#pragma once' in FGOutlineComponent.h"
#endif
#define FACTORYGAME_FGOutlineComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FCachedSplineMeshToMaterialObject>();

#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FCachedMeshToMaterialObject>();

#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FCachedMaterialInterfaceArray>();

#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOutlineColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EOutlineColor*)Z_Param__Result=P_THIS->GetOutlineColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOutlineVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOutlineVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideOutline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideOutline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateProxyOutlineLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newLocation); \
		P_GET_STRUCT(FRotator,Z_Param_newRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateProxyOutlineLocationAndRotation(Z_Param_newLocation,Z_Param_newRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateProxyOutlineMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_newOutlineMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateProxyOutlineMesh(Z_Param_newOutlineMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowMultiActorOutline) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_actorsToOutline); \
		P_GET_ENUM(EOutlineColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowMultiActorOutline(Z_Param_actorsToOutline,EOutlineColor(Z_Param_color)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowProxyOutline) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_outlineMesh); \
		P_GET_STRUCT(FTransform,Z_Param_transform); \
		P_GET_ENUM(EOutlineColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowProxyOutline(Z_Param_outlineMesh,Z_Param_transform,EOutlineColor(Z_Param_color)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOutline) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actorToOutline); \
		P_GET_ENUM(EOutlineColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowOutline(Z_Param_actorToOutline,EOutlineColor(Z_Param_color)); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOutlineColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EOutlineColor*)Z_Param__Result=P_THIS->GetOutlineColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOutlineVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOutlineVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideOutline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideOutline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateProxyOutlineLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newLocation); \
		P_GET_STRUCT(FRotator,Z_Param_newRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateProxyOutlineLocationAndRotation(Z_Param_newLocation,Z_Param_newRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateProxyOutlineMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_newOutlineMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateProxyOutlineMesh(Z_Param_newOutlineMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowMultiActorOutline) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_actorsToOutline); \
		P_GET_ENUM(EOutlineColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowMultiActorOutline(Z_Param_actorsToOutline,EOutlineColor(Z_Param_color)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowProxyOutline) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_outlineMesh); \
		P_GET_STRUCT(FTransform,Z_Param_transform); \
		P_GET_ENUM(EOutlineColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowProxyOutline(Z_Param_outlineMesh,Z_Param_transform,EOutlineColor(Z_Param_color)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOutline) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actorToOutline); \
		P_GET_ENUM(EOutlineColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowOutline(Z_Param_actorToOutline,EOutlineColor(Z_Param_color)); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGOutlineComponent(); \
	friend struct Z_Construct_UClass_UFGOutlineComponent_Statics; \
public: \
	DECLARE_CLASS(UFGOutlineComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGOutlineComponent)


#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUFGOutlineComponent(); \
	friend struct Z_Construct_UClass_UFGOutlineComponent_Statics; \
public: \
	DECLARE_CLASS(UFGOutlineComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGOutlineComponent)


#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGOutlineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGOutlineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGOutlineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGOutlineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGOutlineComponent(UFGOutlineComponent&&); \
	NO_API UFGOutlineComponent(const UFGOutlineComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGOutlineComponent(UFGOutlineComponent&&); \
	NO_API UFGOutlineComponent(const UFGOutlineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGOutlineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGOutlineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGOutlineComponent)


#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOutlineProxy() { return STRUCT_OFFSET(UFGOutlineComponent, mOutlineProxy); } \
	FORCEINLINE static uint32 __PPO__mActiveOutlineActor() { return STRUCT_OFFSET(UFGOutlineComponent, mActiveOutlineActor); } \
	FORCEINLINE static uint32 __PPO__mActiveMultiOutlineActors() { return STRUCT_OFFSET(UFGOutlineComponent, mActiveMultiOutlineActors); } \
	FORCEINLINE static uint32 __PPO__mCachedActorMaterials() { return STRUCT_OFFSET(UFGOutlineComponent, mCachedActorMaterials); } \
	FORCEINLINE static uint32 __PPO__mCachedSplineComponentMaterials() { return STRUCT_OFFSET(UFGOutlineComponent, mCachedSplineComponentMaterials); }


#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_51_PROLOG
#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_INCLASS \
	FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGOutlineComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGOutlineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGOutlineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
