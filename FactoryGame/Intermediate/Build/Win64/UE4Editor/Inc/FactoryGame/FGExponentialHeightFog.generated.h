// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGExponentialHeightFog_generated_h
#error "FGExponentialHeightFog.generated.h already included, missing '#pragma once' in FGExponentialHeightFog.h"
#endif
#define FACTORYGAME_FGExponentialHeightFog_generated_h

#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExponentialFogSettings_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FExponentialFogSettings>();

#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGDynamicExponentialFogVolume(); \
	friend struct Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics; \
public: \
	DECLARE_CLASS(AFGDynamicExponentialFogVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDynamicExponentialFogVolume) \
	virtual UObject* _getUObject() const override { return const_cast<AFGDynamicExponentialFogVolume*>(this); }


#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_INCLASS \
private: \
	static void StaticRegisterNativesAFGDynamicExponentialFogVolume(); \
	friend struct Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics; \
public: \
	DECLARE_CLASS(AFGDynamicExponentialFogVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDynamicExponentialFogVolume) \
	virtual UObject* _getUObject() const override { return const_cast<AFGDynamicExponentialFogVolume*>(this); }


#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGDynamicExponentialFogVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGDynamicExponentialFogVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDynamicExponentialFogVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDynamicExponentialFogVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDynamicExponentialFogVolume(AFGDynamicExponentialFogVolume&&); \
	NO_API AFGDynamicExponentialFogVolume(const AFGDynamicExponentialFogVolume&); \
public:


#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDynamicExponentialFogVolume(AFGDynamicExponentialFogVolume&&); \
	NO_API AFGDynamicExponentialFogVolume(const AFGDynamicExponentialFogVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDynamicExponentialFogVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDynamicExponentialFogVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGDynamicExponentialFogVolume)


#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPriority() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mPriority); } \
	FORCEINLINE static uint32 __PPO__mBlendDistance() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mBlendDistance); } \
	FORCEINLINE static uint32 __PPO__mFogHeight() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogHeight); } \
	FORCEINLINE static uint32 __PPO__mFogDensity() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogDensity); } \
	FORCEINLINE static uint32 __PPO__mFullyDirectionalInscatteringColorDistance() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFullyDirectionalInscatteringColorDistance); } \
	FORCEINLINE static uint32 __PPO__mNonDirectionalInscatteringColorDistance() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mNonDirectionalInscatteringColorDistance); } \
	FORCEINLINE static uint32 __PPO__mDirectionalInscatteringExponent() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mDirectionalInscatteringExponent); } \
	FORCEINLINE static uint32 __PPO__mDirectionalInscatteringStartDistance() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mDirectionalInscatteringStartDistance); } \
	FORCEINLINE static uint32 __PPO__mFogHeightFalloff() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogHeightFalloff); } \
	FORCEINLINE static uint32 __PPO__mFogMaxOpacity() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogMaxOpacity); } \
	FORCEINLINE static uint32 __PPO__mStartDistance() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mStartDistance); } \
	FORCEINLINE static uint32 __PPO__mFogCutoffDistance() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogCutoffDistance); } \
	FORCEINLINE static uint32 __PPO__mOverrideHorizonColor() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mOverrideHorizonColor); } \
	FORCEINLINE static uint32 __PPO__mOverrideZenithColor() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mOverrideZenithColor); } \
	FORCEINLINE static uint32 __PPO__mOverrideCloudColor() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mOverrideCloudColor); } \
	FORCEINLINE static uint32 __PPO__mOverrideCloudOpacity() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mOverrideCloudOpacity); } \
	FORCEINLINE static uint32 __PPO__mCloudOpacity() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mCloudOpacity); } \
	FORCEINLINE static uint32 __PPO__mBlendWeight() { return STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mBlendWeight); }


#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_86_PROLOG
#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_INCLASS \
	FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGDynamicExponentialFogVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGExponentialHeightFog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
