// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
#ifdef FACTORYGAME_FGAmbientSoundSpline_generated_h
#error "FGAmbientSoundSpline.generated.h already included, missing '#pragma once' in FGAmbientSoundSpline.h"
#endif
#define FACTORYGAME_FGAmbientSoundSpline_generated_h

#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSplineComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USplineComponent**)Z_Param__Result=P_THIS->GetSplineComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSplineComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USplineComponent**)Z_Param__Result=P_THIS->GetSplineComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGAmbientSoundSpline(); \
	friend struct Z_Construct_UClass_AFGAmbientSoundSpline_Statics; \
public: \
	DECLARE_CLASS(AFGAmbientSoundSpline, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGAmbientSoundSpline) \
	virtual UObject* _getUObject() const override { return const_cast<AFGAmbientSoundSpline*>(this); }


#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFGAmbientSoundSpline(); \
	friend struct Z_Construct_UClass_AFGAmbientSoundSpline_Statics; \
public: \
	DECLARE_CLASS(AFGAmbientSoundSpline, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGAmbientSoundSpline) \
	virtual UObject* _getUObject() const override { return const_cast<AFGAmbientSoundSpline*>(this); }


#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGAmbientSoundSpline(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGAmbientSoundSpline) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGAmbientSoundSpline); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGAmbientSoundSpline); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGAmbientSoundSpline(AFGAmbientSoundSpline&&); \
	NO_API AFGAmbientSoundSpline(const AFGAmbientSoundSpline&); \
public:


#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGAmbientSoundSpline(AFGAmbientSoundSpline&&); \
	NO_API AFGAmbientSoundSpline(const AFGAmbientSoundSpline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGAmbientSoundSpline); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGAmbientSoundSpline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGAmbientSoundSpline)


#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSpline() { return STRUCT_OFFSET(AFGAmbientSoundSpline, mSpline); } \
	FORCEINLINE static uint32 __PPO__mSoundSpline() { return STRUCT_OFFSET(AFGAmbientSoundSpline, mSoundSpline); } \
	FORCEINLINE static uint32 __PPO__mSignificanceRange() { return STRUCT_OFFSET(AFGAmbientSoundSpline, mSignificanceRange); }


#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGAmbientSoundSpline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
