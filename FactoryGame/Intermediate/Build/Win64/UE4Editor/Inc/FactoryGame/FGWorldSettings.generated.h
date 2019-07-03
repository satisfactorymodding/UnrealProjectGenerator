// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
#ifdef FACTORYGAME_FGWorldSettings_generated_h
#error "FGWorldSettings.generated.h already included, missing '#pragma once' in FGWorldSettings.h"
#endif
#define FACTORYGAME_FGWorldSettings_generated_h

#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateWorldBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateWorldBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelStartedAkEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetLevelStartedAkEvent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateWorldBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateWorldBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelStartedAkEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetLevelStartedAkEvent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGWorldSettings(); \
	friend struct Z_Construct_UClass_AFGWorldSettings_Statics; \
public: \
	DECLARE_CLASS(AFGWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWorldSettings) \
	virtual UObject* _getUObject() const override { return const_cast<AFGWorldSettings*>(this); }


#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAFGWorldSettings(); \
	friend struct Z_Construct_UClass_AFGWorldSettings_Statics; \
public: \
	DECLARE_CLASS(AFGWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWorldSettings) \
	virtual UObject* _getUObject() const override { return const_cast<AFGWorldSettings*>(this); }


#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWorldSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGWorldSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWorldSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWorldSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWorldSettings(AFGWorldSettings&&); \
	NO_API AFGWorldSettings(const AFGWorldSettings&); \
public:


#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWorldSettings(AFGWorldSettings&&); \
	NO_API AFGWorldSettings(const AFGWorldSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWorldSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWorldSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGWorldSettings)


#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mExponentialHeightFog() { return STRUCT_OFFSET(AFGWorldSettings, mExponentialHeightFog); } \
	FORCEINLINE static uint32 __PPO__mSkySphere() { return STRUCT_OFFSET(AFGWorldSettings, mSkySphere); } \
	FORCEINLINE static uint32 __PPO__mMinimapCaptureActor() { return STRUCT_OFFSET(AFGWorldSettings, mMinimapCaptureActor); } \
	FORCEINLINE static uint32 __PPO__mLevelStartedEvent() { return STRUCT_OFFSET(AFGWorldSettings, mLevelStartedEvent); } \
	FORCEINLINE static uint32 __PPO__mDefaultLoadSave() { return STRUCT_OFFSET(AFGWorldSettings, mDefaultLoadSave); } \
	FORCEINLINE static uint32 __PPO__mStartTimeOfDay() { return STRUCT_OFFSET(AFGWorldSettings, mStartTimeOfDay); } \
	FORCEINLINE static uint32 __PPO__mBuildableSubsystem() { return STRUCT_OFFSET(AFGWorldSettings, mBuildableSubsystem); } \
	FORCEINLINE static uint32 __PPO__mFoundationSubsystem() { return STRUCT_OFFSET(AFGWorldSettings, mFoundationSubsystem); } \
	FORCEINLINE static uint32 __PPO__mAudioVolumeSubsystem() { return STRUCT_OFFSET(AFGWorldSettings, mAudioVolumeSubsystem); } \
	FORCEINLINE static uint32 __PPO__mFoliageRemovalSubsystem() { return STRUCT_OFFSET(AFGWorldSettings, mFoliageRemovalSubsystem); }


#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_24_PROLOG
#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_INCLASS \
	FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWorldSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGWorldSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
