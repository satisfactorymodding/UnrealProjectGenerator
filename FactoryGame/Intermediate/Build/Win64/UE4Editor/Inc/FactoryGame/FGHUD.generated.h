// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FLinearColor;
class AFGCharacterPlayer;
enum class ECrosshairState : uint8;
class UTextureRenderTarget2D;
struct FItemView;
class AActor;
class UFGGameUI;
class UUserWidget;
class APawn;
enum class EEquipmentSlot : uint8;
class UFGInteractWidget;
class UObject;
#ifdef FACTORYGAME_FGHUD_generated_h
#error "FGHUD.generated.h already included, missing '#pragma once' in FGHUD.h"
#endif
#define FACTORYGAME_FGHUD_generated_h

#define FactoryGame_Source_FactoryGame_FGHUD_h_30_RPC_WRAPPERS \
	virtual void SetCrustomCrosshairTexture_Implementation(UTexture2D* newTexture); \
	virtual void UpdateCrosshairColorState_Implementation(FLinearColor const& newColor); \
	virtual void UpdateCrosshairState_Implementation(AFGCharacterPlayer* player); \
 \
	DECLARE_FUNCTION(execSetCrustomCrosshairTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_newTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCrustomCrosshairTexture_Implementation(Z_Param_newTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCrosshairColorState) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCrosshairColorState_Implementation(Z_Param_Out_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCrosshairState) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCrosshairState_Implementation(Z_Param_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCrosshairState) \
	{ \
		P_GET_ENUM(ECrosshairState,Z_Param_crosshairState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCrosshairState(ECrosshairState(Z_Param_crosshairState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCrosshairState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECrosshairState*)Z_Param__Result=P_THIS->GetCrosshairState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHUDVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_hudVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHUDVisibility(Z_Param_hudVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHUDVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHUDVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartialPumpiMode) \
	{ \
		P_GET_UBOOL(Z_Param_hideHUD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartialPumpiMode(Z_Param_hideHUD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPumpiMode) \
	{ \
		P_GET_UBOOL(Z_Param_hideHUD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPumpiMode(Z_Param_hideHUD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartialPumpiMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPartialPumpiMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPumpiMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPumpiMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceHideCrossHair) \
	{ \
		P_GET_UBOOL(Z_Param_forceHide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceHideCrossHair(Z_Param_forceHide); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowCrossHair) \
	{ \
		P_GET_UBOOL(Z_Param_showCrosshair); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowCrossHair(Z_Param_showCrosshair); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowCrosshair) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShowCrosshair(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndPreviewActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPreviewActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginPreviewActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPreviewActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviewTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetPreviewTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewView) \
	{ \
		P_GET_STRUCT_REF(FItemView,Z_Param_Out_view); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewView(Z_Param_Out_view); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_previewDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewDistance(Z_Param_previewDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewActorClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_actorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewActorClass(Z_Param_actorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameUI**)Z_Param__Result=P_THIS->GetGameUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseRespawnUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseRespawnUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowRespawnUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowRespawnUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPawnHUD) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_widgetClass); \
		P_GET_OBJECT(APawn,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPawnHUD(Z_Param_widgetClass,Z_Param_pawn); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGHUD_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetCrustomCrosshairTexture_Implementation(UTexture2D* newTexture); \
	virtual void UpdateCrosshairColorState_Implementation(FLinearColor const& newColor); \
	virtual void UpdateCrosshairState_Implementation(AFGCharacterPlayer* player); \
 \
	DECLARE_FUNCTION(execSetCrustomCrosshairTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_newTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCrustomCrosshairTexture_Implementation(Z_Param_newTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCrosshairColorState) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCrosshairColorState_Implementation(Z_Param_Out_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCrosshairState) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCrosshairState_Implementation(Z_Param_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCrosshairState) \
	{ \
		P_GET_ENUM(ECrosshairState,Z_Param_crosshairState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCrosshairState(ECrosshairState(Z_Param_crosshairState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCrosshairState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECrosshairState*)Z_Param__Result=P_THIS->GetCrosshairState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHUDVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_hudVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHUDVisibility(Z_Param_hudVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHUDVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHUDVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartialPumpiMode) \
	{ \
		P_GET_UBOOL(Z_Param_hideHUD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartialPumpiMode(Z_Param_hideHUD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPumpiMode) \
	{ \
		P_GET_UBOOL(Z_Param_hideHUD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPumpiMode(Z_Param_hideHUD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartialPumpiMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPartialPumpiMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPumpiMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPumpiMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceHideCrossHair) \
	{ \
		P_GET_UBOOL(Z_Param_forceHide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceHideCrossHair(Z_Param_forceHide); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowCrossHair) \
	{ \
		P_GET_UBOOL(Z_Param_showCrosshair); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowCrossHair(Z_Param_showCrosshair); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowCrosshair) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShowCrosshair(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndPreviewActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPreviewActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginPreviewActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPreviewActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviewTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetPreviewTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewView) \
	{ \
		P_GET_STRUCT_REF(FItemView,Z_Param_Out_view); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewView(Z_Param_Out_view); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_previewDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewDistance(Z_Param_previewDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewActorClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_actorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewActorClass(Z_Param_actorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameUI**)Z_Param__Result=P_THIS->GetGameUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseRespawnUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseRespawnUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowRespawnUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowRespawnUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPawnHUD) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_widgetClass); \
		P_GET_OBJECT(APawn,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPawnHUD(Z_Param_widgetClass,Z_Param_pawn); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGHUD_h_30_EVENT_PARMS \
	struct FGHUD_eventAddEquipmentHUD_Parms \
	{ \
		TSubclassOf<UUserWidget>  widgetClass; \
		EEquipmentSlot slot; \
	}; \
	struct FGHUD_eventOpenInteractUI_Parms \
	{ \
		TSubclassOf<UFGInteractWidget>  widgetClass; \
		UObject* interactObject; \
	}; \
	struct FGHUD_eventRemoveEquipmentHUD_Parms \
	{ \
		EEquipmentSlot slot; \
	}; \
	struct FGHUD_eventSetCrustomCrosshairTexture_Parms \
	{ \
		UTexture2D* newTexture; \
	}; \
	struct FGHUD_eventUpdateCrosshairColorState_Parms \
	{ \
		FLinearColor newColor; \
	}; \
	struct FGHUD_eventUpdateCrosshairState_Parms \
	{ \
		AFGCharacterPlayer* player; \
	};


#define FactoryGame_Source_FactoryGame_FGHUD_h_30_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGHUD_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGHUD(); \
	friend struct Z_Construct_UClass_AFGHUD_Statics; \
public: \
	DECLARE_CLASS(AFGHUD, AFGHUDBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHUD)


#define FactoryGame_Source_FactoryGame_FGHUD_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAFGHUD(); \
	friend struct Z_Construct_UClass_AFGHUD_Statics; \
public: \
	DECLARE_CLASS(AFGHUD, AFGHUDBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHUD)


#define FactoryGame_Source_FactoryGame_FGHUD_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHUD(AFGHUD&&); \
	NO_API AFGHUD(const AFGHUD&); \
public:


#define FactoryGame_Source_FactoryGame_FGHUD_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHUD(AFGHUD&&); \
	NO_API AFGHUD(const AFGHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGHUD)


#define FactoryGame_Source_FactoryGame_FGHUD_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mGameUIClass() { return STRUCT_OFFSET(AFGHUD, mGameUIClass); } \
	FORCEINLINE static uint32 __PPO__mRespawnUIClass() { return STRUCT_OFFSET(AFGHUD, mRespawnUIClass); } \
	FORCEINLINE static uint32 __PPO__mDefaultCrosshair() { return STRUCT_OFFSET(AFGHUD, mDefaultCrosshair); } \
	FORCEINLINE static uint32 __PPO__mPickupCrosshair() { return STRUCT_OFFSET(AFGHUD, mPickupCrosshair); } \
	FORCEINLINE static uint32 __PPO__mVehicleCrosshair() { return STRUCT_OFFSET(AFGHUD, mVehicleCrosshair); } \
	FORCEINLINE static uint32 __PPO__mWeaponCrosshair() { return STRUCT_OFFSET(AFGHUD, mWeaponCrosshair); } \
	FORCEINLINE static uint32 __PPO__mWorkbenchCrosshair() { return STRUCT_OFFSET(AFGHUD, mWorkbenchCrosshair); } \
	FORCEINLINE static uint32 __PPO__mBuildCrosshair() { return STRUCT_OFFSET(AFGHUD, mBuildCrosshair); } \
	FORCEINLINE static uint32 __PPO__mDismantleCrosshair() { return STRUCT_OFFSET(AFGHUD, mDismantleCrosshair); } \
	FORCEINLINE static uint32 __PPO__mCustomCrosshair() { return STRUCT_OFFSET(AFGHUD, mCustomCrosshair); } \
	FORCEINLINE static uint32 __PPO__mGeneralCrosshair() { return STRUCT_OFFSET(AFGHUD, mGeneralCrosshair); } \
	FORCEINLINE static uint32 __PPO__mRespawnUI() { return STRUCT_OFFSET(AFGHUD, mRespawnUI); } \
	FORCEINLINE static uint32 __PPO__mGameUI() { return STRUCT_OFFSET(AFGHUD, mGameUI); } \
	FORCEINLINE static uint32 __PPO__mPreviewBuildingWorld() { return STRUCT_OFFSET(AFGHUD, mPreviewBuildingWorld); } \
	FORCEINLINE static uint32 __PPO__mPreviewStageClass() { return STRUCT_OFFSET(AFGHUD, mPreviewStageClass); } \
	FORCEINLINE static uint32 __PPO__mPreviewActorClass() { return STRUCT_OFFSET(AFGHUD, mPreviewActorClass); }


#define FactoryGame_Source_FactoryGame_FGHUD_h_27_PROLOG \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGHUD_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_INCLASS \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGHUD_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGHUD_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGHUD_h


#define FOREACH_ENUM_ECROSSHAIRSTATE(op) \
	op(ECrosshairState::ECS_Default) \
	op(ECrosshairState::ECS_GeneralUse) \
	op(ECrosshairState::ECS_PickUp) \
	op(ECrosshairState::ECS_Vehicle) \
	op(ECrosshairState::ECS_Weapon) \
	op(ECrosshairState::ECS_Workbench) \
	op(ECrosshairState::ECS_Dismantle) \
	op(ECrosshairState::ECS_Build) \
	op(ECrosshairState::ECS_Custom) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
