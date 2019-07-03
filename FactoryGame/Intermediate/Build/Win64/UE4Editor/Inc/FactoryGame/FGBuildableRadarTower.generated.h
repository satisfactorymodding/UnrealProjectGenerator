// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGBuildableRadarTower_generated_h
#error "FGBuildableRadarTower.generated.h already included, missing '#pragma once' in FGBuildableRadarTower.h"
#endif
#define FACTORYGAME_FGBuildableRadarTower_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_12_DELEGATE \
static inline void FRadarTowerRadiusExpanded_DelegateWrapper(const FMulticastScriptDelegate& RadarTowerRadiusExpanded) \
{ \
	RadarTowerRadiusExpanded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_RPC_WRAPPERS \
	virtual void Multicast_ExpandRadarRadius_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ExpandRadarRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_ExpandRadarRadius_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxRevealRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinRevealRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumRadarExpansionSteps) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumRadarExpansionSteps(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentExpansionStep) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentExpansionStep(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeToNextExpansion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeToNextExpansion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentRevealRadius(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ExpandRadarRadius_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ExpandRadarRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_ExpandRadarRadius_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxRevealRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinRevealRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumRadarExpansionSteps) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumRadarExpansionSteps(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentExpansionStep) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentExpansionStep(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeToNextExpansion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeToNextExpansion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentRevealRadius(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableRadarTower(); \
	friend struct Z_Construct_UClass_AFGBuildableRadarTower_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRadarTower, AFGBuildableFactory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRadarTower)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableRadarTower(); \
	friend struct Z_Construct_UClass_AFGBuildableRadarTower_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRadarTower, AFGBuildableFactory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRadarTower)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableRadarTower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableRadarTower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRadarTower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRadarTower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRadarTower(AFGBuildableRadarTower&&); \
	NO_API AFGBuildableRadarTower(const AFGBuildableRadarTower&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRadarTower(AFGBuildableRadarTower&&); \
	NO_API AFGBuildableRadarTower(const AFGBuildableRadarTower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRadarTower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRadarTower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableRadarTower)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMinRevealRadius() { return STRUCT_OFFSET(AFGBuildableRadarTower, mMinRevealRadius); } \
	FORCEINLINE static uint32 __PPO__mMaxRevealRadius() { return STRUCT_OFFSET(AFGBuildableRadarTower, mMaxRevealRadius); } \
	FORCEINLINE static uint32 __PPO__mNumRadarExpansionSteps() { return STRUCT_OFFSET(AFGBuildableRadarTower, mNumRadarExpansionSteps); } \
	FORCEINLINE static uint32 __PPO__mRadarExpansionInterval() { return STRUCT_OFFSET(AFGBuildableRadarTower, mRadarExpansionInterval); } \
	FORCEINLINE static uint32 __PPO__mCurrentExpansionStep() { return STRUCT_OFFSET(AFGBuildableRadarTower, mCurrentExpansionStep); } \
	FORCEINLINE static uint32 __PPO__mTimeToNextExpansion() { return STRUCT_OFFSET(AFGBuildableRadarTower, mTimeToNextExpansion); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_17_PROLOG \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableRadarTower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
