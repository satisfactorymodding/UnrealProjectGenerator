// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGResourceDescriptor;
class UParticleSystem;
class UTexture2D;
struct FLinearColor;
class UMaterialInstance;
class UMaterial;
class UStaticMesh;
#ifdef FACTORYGAME_FGResourceDescriptor_generated_h
#error "FGResourceDescriptor.generated.h already included, missing '#pragma once' in FGResourceDescriptor.h"
#endif
#define FACTORYGAME_FGResourceDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFactoryMiningParticle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=UFGResourceDescriptor::GetFactoryMiningParticle(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManualMiningAudioName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UFGResourceDescriptor::GetManualMiningAudioName(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestroyedParticle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=UFGResourceDescriptor::GetDestroyedParticle(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManualMiningParticle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=UFGResourceDescriptor::GetManualMiningParticle(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompasTexture) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UFGResourceDescriptor::GetCompasTexture(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollectSpeedMultiplier) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGResourceDescriptor::GetCollectSpeedMultiplier(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPingColor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UFGResourceDescriptor::GetPingColor(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecalSize) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGResourceDescriptor::GetDecalSize(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDepositMaterial) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstance**)Z_Param__Result=UFGResourceDescriptor::GetDepositMaterial(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecalMaterial) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterial**)Z_Param__Result=UFGResourceDescriptor::GetDecalMaterial(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshOverrideMaterial) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstance**)Z_Param__Result=UFGResourceDescriptor::GetMeshOverrideMaterial(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDepositMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGResourceDescriptor::GetDepositMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroundMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGResourceDescriptor::GetGroundMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeHandMined) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGResourceDescriptor::CanBeHandMined(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFactoryMiningParticle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=UFGResourceDescriptor::GetFactoryMiningParticle(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManualMiningAudioName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UFGResourceDescriptor::GetManualMiningAudioName(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestroyedParticle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=UFGResourceDescriptor::GetDestroyedParticle(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManualMiningParticle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=UFGResourceDescriptor::GetManualMiningParticle(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompasTexture) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UFGResourceDescriptor::GetCompasTexture(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollectSpeedMultiplier) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGResourceDescriptor::GetCollectSpeedMultiplier(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPingColor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UFGResourceDescriptor::GetPingColor(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecalSize) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGResourceDescriptor::GetDecalSize(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDepositMaterial) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstance**)Z_Param__Result=UFGResourceDescriptor::GetDepositMaterial(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecalMaterial) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterial**)Z_Param__Result=UFGResourceDescriptor::GetDecalMaterial(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshOverrideMaterial) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstance**)Z_Param__Result=UFGResourceDescriptor::GetMeshOverrideMaterial(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDepositMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGResourceDescriptor::GetDepositMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroundMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGResourceDescriptor::GetGroundMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeHandMined) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGResourceDescriptor::CanBeHandMined(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGResourceDescriptor(); \
	friend struct Z_Construct_UClass_UFGResourceDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGResourceDescriptor, UFGItemDescriptor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGResourceDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGResourceDescriptor(); \
	friend struct Z_Construct_UClass_UFGResourceDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGResourceDescriptor, UFGItemDescriptor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGResourceDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGResourceDescriptor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGResourceDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGResourceDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGResourceDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGResourceDescriptor(UFGResourceDescriptor&&); \
	NO_API UFGResourceDescriptor(const UFGResourceDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGResourceDescriptor(UFGResourceDescriptor&&); \
	NO_API UFGResourceDescriptor(const UFGResourceDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGResourceDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGResourceDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGResourceDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mGroundMesh() { return STRUCT_OFFSET(UFGResourceDescriptor, mGroundMesh); } \
	FORCEINLINE static uint32 __PPO__mDepositMesh() { return STRUCT_OFFSET(UFGResourceDescriptor, mDepositMesh); } \
	FORCEINLINE static uint32 __PPO__mDepositMaterial() { return STRUCT_OFFSET(UFGResourceDescriptor, mDepositMaterial); } \
	FORCEINLINE static uint32 __PPO__mGroundMeshMaterialOverride() { return STRUCT_OFFSET(UFGResourceDescriptor, mGroundMeshMaterialOverride); } \
	FORCEINLINE static uint32 __PPO__mDecalMaterial() { return STRUCT_OFFSET(UFGResourceDescriptor, mDecalMaterial); } \
	FORCEINLINE static uint32 __PPO__mDecalSize() { return STRUCT_OFFSET(UFGResourceDescriptor, mDecalSize); } \
	FORCEINLINE static uint32 __PPO__mPingColor() { return STRUCT_OFFSET(UFGResourceDescriptor, mPingColor); } \
	FORCEINLINE static uint32 __PPO__mCollectSpeedMultiplier() { return STRUCT_OFFSET(UFGResourceDescriptor, mCollectSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__mCompassTexture() { return STRUCT_OFFSET(UFGResourceDescriptor, mCompassTexture); } \
	FORCEINLINE static uint32 __PPO__mManualMiningParticle() { return STRUCT_OFFSET(UFGResourceDescriptor, mManualMiningParticle); } \
	FORCEINLINE static uint32 __PPO__mFactoryMiningParticle() { return STRUCT_OFFSET(UFGResourceDescriptor, mFactoryMiningParticle); } \
	FORCEINLINE static uint32 __PPO__mDestroyedParticle() { return STRUCT_OFFSET(UFGResourceDescriptor, mDestroyedParticle); } \
	FORCEINLINE static uint32 __PPO__mManualMiningAudioName() { return STRUCT_OFFSET(UFGResourceDescriptor, mManualMiningAudioName); }


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGResourceDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Resources_FGResourceDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
