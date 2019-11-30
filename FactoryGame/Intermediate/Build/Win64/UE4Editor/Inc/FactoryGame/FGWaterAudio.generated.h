// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UAkAudioEvent;
class AFGWaterVolume;
struct FVector;
class AFGPlayerController;
#ifdef FACTORYGAME_FGWaterAudio_generated_h
#error "FGWaterAudio.generated.h already included, missing '#pragma once' in FGWaterAudio.h"
#endif
#define FACTORYGAME_FGWaterAudio_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPawnImpactAudio_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetImpactEvent) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetImpactEvent(Z_Param_pawn); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetImpactEvent) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetImpactEvent(Z_Param_pawn); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_EVENT_PARMS \
	struct FGWaterAudio_eventOnCameraEnteredWater_Parms \
	{ \
		AFGWaterVolume* waterVolume; \
		FVector enterLocation; \
		AFGPlayerController* PC; \
	}; \
	struct FGWaterAudio_eventOnCameraExitedWater_Parms \
	{ \
		AFGWaterVolume* waterVolume; \
		FVector exitLocation; \
		AFGPlayerController* PC; \
	}; \
	struct FGWaterAudio_eventOnPawnHitSurface_Parms \
	{ \
		AFGWaterVolume* waterVolume; \
		APawn* pawn; \
		FVector surfaceLocation; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGWaterAudio(); \
	friend struct Z_Construct_UClass_UFGWaterAudio_Statics; \
public: \
	DECLARE_CLASS(UFGWaterAudio, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWaterAudio)


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUFGWaterAudio(); \
	friend struct Z_Construct_UClass_UFGWaterAudio_Statics; \
public: \
	DECLARE_CLASS(UFGWaterAudio, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWaterAudio)


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGWaterAudio(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWaterAudio) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWaterAudio); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWaterAudio); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWaterAudio(UFGWaterAudio&&); \
	NO_API UFGWaterAudio(const UFGWaterAudio&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGWaterAudio(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWaterAudio(UFGWaterAudio&&); \
	NO_API UFGWaterAudio(const UFGWaterAudio&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWaterAudio); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWaterAudio); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWaterAudio)


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mImpactAudioMap() { return STRUCT_OFFSET(UFGWaterAudio, mImpactAudioMap); }


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_22_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGWaterAudio_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
