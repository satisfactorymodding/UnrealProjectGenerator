// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGBuildable;
struct FLinearColor;
struct FColor;
class UObject;
class AFGBuildableSubsystem;
#ifdef FACTORYGAME_FGBuildableSubsystem_generated_h
#error "FGBuildableSubsystem.generated.h already included, missing '#pragma once' in FGBuildableSubsystem.h"
#endif
#define FACTORYGAME_FGBuildableSubsystem_generated_h

#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuildableBucket_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_21_DELEGATE \
struct _Script_FactoryGame_eventOnBuildableConstructedGlobal_Parms \
{ \
	AFGBuildable* buildable; \
}; \
static inline void FOnBuildableConstructedGlobal_DelegateWrapper(const FMulticastScriptDelegate& OnBuildableConstructedGlobal, AFGBuildable* buildable) \
{ \
	_Script_FactoryGame_eventOnBuildableConstructedGlobal_Parms Parms; \
	Parms.buildable=buildable; \
	OnBuildableConstructedGlobal.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetColorSlotSecondaryLinear) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorSlotSecondaryLinear(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorSlotPrimaryLinear) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorSlotPrimaryLinear(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetColorSlotSecondary) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=P_THIS->getColorSlotSecondary(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetColorSlotPrimary) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=P_THIS->getColorSlotPrimary(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetColorSlotSecondary) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_GET_STRUCT(FColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setColorSlotSecondary(Z_Param_index,Z_Param_color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetColorSlotPrimary) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_GET_STRUCT(FColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setColorSlotPrimary(Z_Param_index,Z_Param_color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplayBuildingEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplayBuildingEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTypedBuildable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_TARRAY_REF(AFGBuildable*,Z_Param_Out_out_buildables); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTypedBuildable(Z_Param_inClass,Z_Param_Out_out_buildables); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildableSubsystem**)Z_Param__Result=AFGBuildableSubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColorSlotSecondaryLinear) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorSlotSecondaryLinear(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorSlotPrimaryLinear) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorSlotPrimaryLinear(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetColorSlotSecondary) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=P_THIS->getColorSlotSecondary(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetColorSlotPrimary) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=P_THIS->getColorSlotPrimary(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetColorSlotSecondary) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_GET_STRUCT(FColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setColorSlotSecondary(Z_Param_index,Z_Param_color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetColorSlotPrimary) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_GET_STRUCT(FColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setColorSlotPrimary(Z_Param_index,Z_Param_color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplayBuildingEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplayBuildingEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTypedBuildable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_TARRAY_REF(AFGBuildable*,Z_Param_Out_out_buildables); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTypedBuildable(Z_Param_inClass,Z_Param_Out_out_buildables); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildableSubsystem**)Z_Param__Result=AFGBuildableSubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableSubsystem(); \
	friend struct Z_Construct_UClass_AFGBuildableSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableSubsystem(); \
	friend struct Z_Construct_UClass_AFGBuildableSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableSubsystem(AFGBuildableSubsystem&&); \
	NO_API AFGBuildableSubsystem(const AFGBuildableSubsystem&); \
public:


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableSubsystem(AFGBuildableSubsystem&&); \
	NO_API AFGBuildableSubsystem(const AFGBuildableSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableSubsystem)


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mBuildables() { return STRUCT_OFFSET(AFGBuildableSubsystem, mBuildables); } \
	FORCEINLINE static uint32 __PPO__mBuildableBuckets() { return STRUCT_OFFSET(AFGBuildableSubsystem, mBuildableBuckets); } \
	FORCEINLINE static uint32 __PPO__mBuildableInstancesActor() { return STRUCT_OFFSET(AFGBuildableSubsystem, mBuildableInstancesActor); } \
	FORCEINLINE static uint32 __PPO__mProductionIndicatorInstanceManager() { return STRUCT_OFFSET(AFGBuildableSubsystem, mProductionIndicatorInstanceManager); } \
	FORCEINLINE static uint32 __PPO__mColoredInstances() { return STRUCT_OFFSET(AFGBuildableSubsystem, mColoredInstances); } \
	FORCEINLINE static uint32 __PPO__mColorSlotsPrimary() { return STRUCT_OFFSET(AFGBuildableSubsystem, mColorSlotsPrimary); } \
	FORCEINLINE static uint32 __PPO__mColorSlotsSecondary() { return STRUCT_OFFSET(AFGBuildableSubsystem, mColorSlotsSecondary); } \
	FORCEINLINE static uint32 __PPO__mDistanceBasedTickRate() { return STRUCT_OFFSET(AFGBuildableSubsystem, mDistanceBasedTickRate); } \
	FORCEINLINE static uint32 __PPO__mFactoryOptimizationEnabled() { return STRUCT_OFFSET(AFGBuildableSubsystem, mFactoryOptimizationEnabled); } \
	FORCEINLINE static uint32 __PPO__mReplayEffecTimeDilation() { return STRUCT_OFFSET(AFGBuildableSubsystem, mReplayEffecTimeDilation); } \
	FORCEINLINE static uint32 __PPO__mReplayEffectTimerDefault() { return STRUCT_OFFSET(AFGBuildableSubsystem, mReplayEffectTimerDefault); } \
	FORCEINLINE static uint32 __PPO__mDefaultFactoryMaterial() { return STRUCT_OFFSET(AFGBuildableSubsystem, mDefaultFactoryMaterial); } \
	FORCEINLINE static uint32 __PPO__mFactoryTickFunction() { return STRUCT_OFFSET(AFGBuildableSubsystem, mFactoryTickFunction); }


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_52_PROLOG
#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_INCLASS \
	FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGBuildableSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
