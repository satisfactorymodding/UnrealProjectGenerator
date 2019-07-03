// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSignElementConstraints;
#ifdef FACTORYGAME_FGBuildableStandaloneSign_generated_h
#error "FGBuildableStandaloneSign.generated.h already included, missing '#pragma once' in FGBuildableStandaloneSign.h"
#endif
#define FACTORYGAME_FGBuildableStandaloneSign_generated_h

#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_SignData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SignData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextScaleFromNormalizedValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTextScaleFromNormalizedValue(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentNormalizedTextOffsetZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentNormalizedTextOffsetZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentNormalizedTextScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentNormalizedTextScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSignConstraints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSignElementConstraints*)Z_Param__Result=P_THIS->GetSignConstraints(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SignData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SignData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextScaleFromNormalizedValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTextScaleFromNormalizedValue(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentNormalizedTextOffsetZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentNormalizedTextOffsetZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentNormalizedTextScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentNormalizedTextScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSignConstraints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSignElementConstraints*)Z_Param__Result=P_THIS->GetSignConstraints(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableStandaloneSign(); \
	friend struct Z_Construct_UClass_AFGBuildableStandaloneSign_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableStandaloneSign, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableStandaloneSign) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableStandaloneSign*>(this); }


#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableStandaloneSign(); \
	friend struct Z_Construct_UClass_AFGBuildableStandaloneSign_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableStandaloneSign, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableStandaloneSign) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableStandaloneSign*>(this); }


#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableStandaloneSign(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableStandaloneSign) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableStandaloneSign); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableStandaloneSign); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableStandaloneSign(AFGBuildableStandaloneSign&&); \
	NO_API AFGBuildableStandaloneSign(const AFGBuildableStandaloneSign&); \
public:


#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableStandaloneSign(AFGBuildableStandaloneSign&&); \
	NO_API AFGBuildableStandaloneSign(const AFGBuildableStandaloneSign&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableStandaloneSign); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableStandaloneSign); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableStandaloneSign)


#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDataToComponentMap() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mDataToComponentMap); } \
	FORCEINLINE static uint32 __PPO__mSignDisplayRoot() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignDisplayRoot); } \
	FORCEINLINE static uint32 __PPO__mTextDisplayRoot() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mTextDisplayRoot); } \
	FORCEINLINE static uint32 __PPO__mMeshComponentProxy() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mMeshComponentProxy); } \
	FORCEINLINE static uint32 __PPO__mBoundingBox() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mBoundingBox); } \
	FORCEINLINE static uint32 __PPO__mHologramParticleComponent() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mHologramParticleComponent); } \
	FORCEINLINE static uint32 __PPO__mGainSignificanceDistance() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mGainSignificanceDistance); } \
	FORCEINLINE static uint32 __PPO__mSignData() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignData); } \
	FORCEINLINE static uint32 __PPO__mSignConstraints() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignConstraints); } \
	FORCEINLINE static uint32 __PPO__mSignFont() { return STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignFont); }


#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGBuildableStandaloneSign_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
