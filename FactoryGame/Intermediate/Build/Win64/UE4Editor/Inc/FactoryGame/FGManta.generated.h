// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
#ifdef FACTORYGAME_FGManta_generated_h
#error "FGManta.generated.h already included, missing '#pragma once' in FGManta.h"
#endif
#define FACTORYGAME_FGManta_generated_h

#define FactoryGame_Source_FactoryGame_FGManta_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USplineComponent**)Z_Param__Result=P_THIS->GetSpline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentTime(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGManta_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USplineComponent**)Z_Param__Result=P_THIS->GetSpline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentTime(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGManta_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGManta(); \
	friend struct Z_Construct_UClass_AFGManta_Statics; \
public: \
	DECLARE_CLASS(AFGManta, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGManta) \
	virtual UObject* _getUObject() const override { return const_cast<AFGManta*>(this); }


#define FactoryGame_Source_FactoryGame_FGManta_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFGManta(); \
	friend struct Z_Construct_UClass_AFGManta_Statics; \
public: \
	DECLARE_CLASS(AFGManta, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGManta) \
	virtual UObject* _getUObject() const override { return const_cast<AFGManta*>(this); }


#define FactoryGame_Source_FactoryGame_FGManta_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGManta(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGManta) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGManta); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGManta); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGManta(AFGManta&&); \
	NO_API AFGManta(const AFGManta&); \
public:


#define FactoryGame_Source_FactoryGame_FGManta_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGManta(AFGManta&&); \
	NO_API AFGManta(const AFGManta&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGManta); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGManta); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGManta)


#define FactoryGame_Source_FactoryGame_FGManta_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCachedSpline() { return STRUCT_OFFSET(AFGManta, mCachedSpline); } \
	FORCEINLINE static uint32 __PPO__mSplinePath() { return STRUCT_OFFSET(AFGManta, mSplinePath); } \
	FORCEINLINE static uint32 __PPO__mCachedMesh() { return STRUCT_OFFSET(AFGManta, mCachedMesh); } \
	FORCEINLINE static uint32 __PPO__mCurrentTime() { return STRUCT_OFFSET(AFGManta, mCurrentTime); } \
	FORCEINLINE static uint32 __PPO__mOffsetMagnitude() { return STRUCT_OFFSET(AFGManta, mOffsetMagnitude); } \
	FORCEINLINE static uint32 __PPO__mSecondsPerLoop() { return STRUCT_OFFSET(AFGManta, mSecondsPerLoop); } \
	FORCEINLINE static uint32 __PPO__mSignificanceRange() { return STRUCT_OFFSET(AFGManta, mSignificanceRange); } \
	FORCEINLINE static uint32 __PPO__mTickTransform() { return STRUCT_OFFSET(AFGManta, mTickTransform); } \
	FORCEINLINE static uint32 __PPO__mIsClosedSplineLoop() { return STRUCT_OFFSET(AFGManta, mIsClosedSplineLoop); }


#define FactoryGame_Source_FactoryGame_FGManta_h_12_PROLOG
#define FactoryGame_Source_FactoryGame_FGManta_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGManta_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGManta_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGManta_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_FGManta_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGManta_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGManta_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGManta_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGManta_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGManta_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGManta_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
