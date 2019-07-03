// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkComponent;
class UAkAudioEvent;
#ifdef FACTORYGAME_FGAmbientSettings_generated_h
#error "FGAmbientSettings.generated.h already included, missing '#pragma once' in FGAmbientSettings.h"
#endif
#define FACTORYGAME_FGAmbientSettings_generated_h

#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_RPC_WRAPPERS \
	virtual bool ShouldIgnoreListenerRotation_Implementation() const; \
	virtual void OnExitInnerVolume_Implementation(UAkComponent* ambientComponent) const; \
	virtual void OnEnterInnerVolume_Implementation(UAkComponent* ambientComponent) const; \
	virtual void OnExitOuterVolume_Implementation(UAkComponent* ambientComponent) const; \
	virtual void OnEnterOuterVolume_Implementation(UAkComponent* ambientComponent) const; \
	virtual UAkAudioEvent* GetEnterInnerVolumeEvent_Implementation() const; \
	virtual UAkAudioEvent* GetEnterOuterVolumeEvent_Implementation() const; \
 \
	DECLARE_FUNCTION(execShouldIgnoreListenerRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldIgnoreListenerRotation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnExitInnerVolume) \
	{ \
		P_GET_OBJECT(UAkComponent,Z_Param_ambientComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExitInnerVolume_Implementation(Z_Param_ambientComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEnterInnerVolume) \
	{ \
		P_GET_OBJECT(UAkComponent,Z_Param_ambientComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnterInnerVolume_Implementation(Z_Param_ambientComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnExitOuterVolume) \
	{ \
		P_GET_OBJECT(UAkComponent,Z_Param_ambientComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExitOuterVolume_Implementation(Z_Param_ambientComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEnterOuterVolume) \
	{ \
		P_GET_OBJECT(UAkComponent,Z_Param_ambientComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnterOuterVolume_Implementation(Z_Param_ambientComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnterInnerVolumeEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetEnterInnerVolumeEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnterOuterVolumeEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetEnterOuterVolumeEvent_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ShouldIgnoreListenerRotation_Implementation() const; \
	virtual void OnExitInnerVolume_Implementation(UAkComponent* ambientComponent) const; \
	virtual void OnEnterInnerVolume_Implementation(UAkComponent* ambientComponent) const; \
	virtual void OnExitOuterVolume_Implementation(UAkComponent* ambientComponent) const; \
	virtual void OnEnterOuterVolume_Implementation(UAkComponent* ambientComponent) const; \
	virtual UAkAudioEvent* GetEnterInnerVolumeEvent_Implementation() const; \
	virtual UAkAudioEvent* GetEnterOuterVolumeEvent_Implementation() const; \
 \
	DECLARE_FUNCTION(execShouldIgnoreListenerRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldIgnoreListenerRotation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnExitInnerVolume) \
	{ \
		P_GET_OBJECT(UAkComponent,Z_Param_ambientComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExitInnerVolume_Implementation(Z_Param_ambientComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEnterInnerVolume) \
	{ \
		P_GET_OBJECT(UAkComponent,Z_Param_ambientComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnterInnerVolume_Implementation(Z_Param_ambientComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnExitOuterVolume) \
	{ \
		P_GET_OBJECT(UAkComponent,Z_Param_ambientComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExitOuterVolume_Implementation(Z_Param_ambientComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEnterOuterVolume) \
	{ \
		P_GET_OBJECT(UAkComponent,Z_Param_ambientComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnterOuterVolume_Implementation(Z_Param_ambientComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnterInnerVolumeEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetEnterInnerVolumeEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnterOuterVolumeEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetEnterOuterVolumeEvent_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_EVENT_PARMS \
	struct FGAmbientSettings_eventGetEnterInnerVolumeEvent_Parms \
	{ \
		UAkAudioEvent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGAmbientSettings_eventGetEnterInnerVolumeEvent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGAmbientSettings_eventGetEnterOuterVolumeEvent_Parms \
	{ \
		UAkAudioEvent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGAmbientSettings_eventGetEnterOuterVolumeEvent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGAmbientSettings_eventOnEnterInnerVolume_Parms \
	{ \
		UAkComponent* ambientComponent; \
	}; \
	struct FGAmbientSettings_eventOnEnterOuterVolume_Parms \
	{ \
		UAkComponent* ambientComponent; \
	}; \
	struct FGAmbientSettings_eventOnExitInnerVolume_Parms \
	{ \
		UAkComponent* ambientComponent; \
	}; \
	struct FGAmbientSettings_eventOnExitOuterVolume_Parms \
	{ \
		UAkComponent* ambientComponent; \
	}; \
	struct FGAmbientSettings_eventShouldIgnoreListenerRotation_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGAmbientSettings_eventShouldIgnoreListenerRotation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGAmbientSettings(); \
	friend struct Z_Construct_UClass_UFGAmbientSettings_Statics; \
public: \
	DECLARE_CLASS(UFGAmbientSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAmbientSettings)


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUFGAmbientSettings(); \
	friend struct Z_Construct_UClass_UFGAmbientSettings_Statics; \
public: \
	DECLARE_CLASS(UFGAmbientSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAmbientSettings)


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAmbientSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAmbientSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAmbientSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAmbientSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAmbientSettings(UFGAmbientSettings&&); \
	NO_API UFGAmbientSettings(const UFGAmbientSettings&); \
public:


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAmbientSettings(UFGAmbientSettings&&); \
	NO_API UFGAmbientSettings(const UFGAmbientSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAmbientSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAmbientSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGAmbientSettings)


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOnEnterOuterVolumeEvent() { return STRUCT_OFFSET(UFGAmbientSettings, mOnEnterOuterVolumeEvent); } \
	FORCEINLINE static uint32 __PPO__mOnExitOuterVolumeEvent() { return STRUCT_OFFSET(UFGAmbientSettings, mOnExitOuterVolumeEvent); } \
	FORCEINLINE static uint32 __PPO__mOnEnterInnerVolumeEvent() { return STRUCT_OFFSET(UFGAmbientSettings, mOnEnterInnerVolumeEvent); } \
	FORCEINLINE static uint32 __PPO__mOnExitInnerVolumeEvent() { return STRUCT_OFFSET(UFGAmbientSettings, mOnExitInnerVolumeEvent); }


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_7_PROLOG \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_INCLASS \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGAmbientSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGAmbientSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
