// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AFGTimeOfDaySubsystem;
#ifdef FACTORYGAME_FGTimeSubsystem_generated_h
#error "FGTimeSubsystem.generated.h already included, missing '#pragma once' in FGTimeSubsystem.h"
#endif
#define FACTORYGAME_FGTimeSubsystem_generated_h

#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_11_DELEGATE \
struct _Script_FactoryGame_eventNewDayDelegate_Parms \
{ \
	int32 newDayNr; \
}; \
static inline void FNewDayDelegate_DelegateWrapper(const FMulticastScriptDelegate& NewDayDelegate, int32 newDayNr) \
{ \
	_Script_FactoryGame_eventNewDayDelegate_Parms Parms; \
	Parms.newDayNr=newDayNr; \
	NewDayDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateServerDaySeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateServerDaySeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedDaySeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedDaySeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeSpeedMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_multiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeSpeedMultiplier(Z_Param_multiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNighttimeSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNighttimeSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDaytimeSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDaytimeSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsNight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPassedDays) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPassedDays(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHours) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHours(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinutes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMinutes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayMinutes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDayMinutes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDaySeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDaySeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeOfDayHours) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeOfDayHours(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNightPct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNightPct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayPct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDayPct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedTimeOfDay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNormalizedTimeOfDay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTimeOfDaySubsystem**)Z_Param__Result=AFGTimeOfDaySubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateServerDaySeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateServerDaySeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedDaySeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedDaySeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeSpeedMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_multiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeSpeedMultiplier(Z_Param_multiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNighttimeSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNighttimeSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDaytimeSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDaytimeSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsNight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPassedDays) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPassedDays(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHours) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHours(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinutes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMinutes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayMinutes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDayMinutes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDaySeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDaySeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeOfDayHours) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeOfDayHours(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNightPct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNightPct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayPct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDayPct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedTimeOfDay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNormalizedTimeOfDay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTimeOfDaySubsystem**)Z_Param__Result=AFGTimeOfDaySubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGTimeOfDaySubsystem(); \
	friend struct Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGTimeOfDaySubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGTimeOfDaySubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<AFGTimeOfDaySubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGTimeOfDaySubsystem(); \
	friend struct Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGTimeOfDaySubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGTimeOfDaySubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<AFGTimeOfDaySubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGTimeOfDaySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGTimeOfDaySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGTimeOfDaySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGTimeOfDaySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGTimeOfDaySubsystem(AFGTimeOfDaySubsystem&&); \
	NO_API AFGTimeOfDaySubsystem(const AFGTimeOfDaySubsystem&); \
public:


#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGTimeOfDaySubsystem(AFGTimeOfDaySubsystem&&); \
	NO_API AFGTimeOfDaySubsystem(const AFGTimeOfDaySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGTimeOfDaySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGTimeOfDaySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGTimeOfDaySubsystem)


#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSyncronizeTimeOfDayInterval() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mSyncronizeTimeOfDayInterval); } \
	FORCEINLINE static uint32 __PPO__mDayLengthMinutes() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mDayLengthMinutes); } \
	FORCEINLINE static uint32 __PPO__mNightLengthMinutes() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mNightLengthMinutes); } \
	FORCEINLINE static uint32 __PPO__mDayStartTime() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mDayStartTime); } \
	FORCEINLINE static uint32 __PPO__mNightStartTime() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mNightStartTime); } \
	FORCEINLINE static uint32 __PPO__mSpeedMultiplier() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__mDaySeconds() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mDaySeconds); } \
	FORCEINLINE static uint32 __PPO__mReplicatedDaySeconds() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mReplicatedDaySeconds); } \
	FORCEINLINE static uint32 __PPO__mNumberOfPassedDays() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mNumberOfPassedDays); } \
	FORCEINLINE static uint32 __PPO__mUpdateTime() { return STRUCT_OFFSET(AFGTimeOfDaySubsystem, mUpdateTime); }


#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTimeSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGTimeSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
