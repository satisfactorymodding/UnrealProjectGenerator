// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FDisabledInputGate;
class UFGMapArea;
class APawn;
struct FVector;
struct FChatMessageStruct;
class UFGRecipe;
class AFGWheeledVehicle;
class AFGPortableMiner;
struct FHitResult;
class UDamageType;
class AActor;
class UFGMessageBase;
struct FKeyEvent;
class UFGHotbarShortcut;
class UFGRemoteCallObject;
class UAkComponent;
#ifdef FACTORYGAME_FGPlayerController_generated_h
#error "FGPlayerController.generated.h already included, missing '#pragma once' in FGPlayerController.h"
#endif
#define FACTORYGAME_FGPlayerController_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_20_DELEGATE \
static inline void FOnShortcutChanged_DelegateWrapper(const FMulticastScriptDelegate& OnShortcutChanged) \
{ \
	OnShortcutChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_19_DELEGATE \
static inline void FOnShortcutsLayoutChanged_DelegateWrapper(const FMulticastScriptDelegate& OnShortcutsLayoutChanged) \
{ \
	OnShortcutsLayoutChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_18_DELEGATE \
struct _Script_FactoryGame_eventOnToggleInteractionUI_Parms \
{ \
	bool isOpen; \
	TSubclassOf<UUserWidget>  interactionClass; \
}; \
static inline void FOnToggleInteractionUI_DelegateWrapper(const FMulticastScriptDelegate& OnToggleInteractionUI, bool isOpen, TSubclassOf<UUserWidget>  interactionClass) \
{ \
	_Script_FactoryGame_eventOnToggleInteractionUI_Parms Parms; \
	Parms.isOpen=isOpen ? true : false; \
	Parms.interactionClass=interactionClass; \
	OnToggleInteractionUI.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_17_DELEGATE \
struct _Script_FactoryGame_eventOnToggleInventory_Parms \
{ \
	bool isOpen; \
}; \
static inline void FOnToggleInventory_DelegateWrapper(const FMulticastScriptDelegate& OnToggleInventory, bool isOpen) \
{ \
	_Script_FactoryGame_eventOnToggleInventory_Parms Parms; \
	Parms.isOpen=isOpen ? true : false; \
	OnToggleInventory.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_16_DELEGATE \
struct _Script_FactoryGame_eventDisabledInputGateDelegate_Parms \
{ \
	FDisabledInputGate newDisabledInputGate; \
}; \
static inline void FDisabledInputGateDelegate_DelegateWrapper(const FMulticastScriptDelegate& DisabledInputGateDelegate, FDisabledInputGate newDisabledInputGate) \
{ \
	_Script_FactoryGame_eventDisabledInputGateDelegate_Parms Parms; \
	Parms.newDisabledInputGate=newDisabledInputGate; \
	DisabledInputGateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_15_DELEGATE \
struct _Script_FactoryGame_eventPlayerEnteredAreaDelegate_Parms \
{ \
	TSubclassOf<UFGMapArea>  mapArea; \
}; \
static inline void FPlayerEnteredAreaDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerEnteredAreaDelegate, TSubclassOf<UFGMapArea>  mapArea) \
{ \
	_Script_FactoryGame_eventPlayerEnteredAreaDelegate_Parms Parms; \
	Parms.mapArea=mapArea; \
	PlayerEnteredAreaDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_14_DELEGATE \
struct _Script_FactoryGame_eventPawnChangedDelegate_Parms \
{ \
	APawn* newPawn; \
}; \
static inline void FPawnChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PawnChangedDelegate, APawn* newPawn) \
{ \
	_Script_FactoryGame_eventPawnChangedDelegate_Parms Parms; \
	Parms.newPawn=newPawn; \
	PawnChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_RPC_WRAPPERS \
	virtual void Client_WaitForLevelStreaming_Implementation(); \
	virtual bool Server_FinishRespawn_Validate(); \
	virtual void Server_FinishRespawn_Implementation(); \
	virtual bool Server_StartRespawn_Validate(); \
	virtual void Server_StartRespawn_Implementation(); \
	virtual bool Server_Suicide_Validate(); \
	virtual void Server_Suicide_Implementation(); \
	virtual bool Server_SpawnAttentionPingActor_Validate(FVector , FVector ); \
	virtual void Server_SpawnAttentionPingActor_Implementation(FVector pingLocation, FVector pingNormal); \
	virtual bool Server_SendChatMessage_Validate(FChatMessageStruct const& ); \
	virtual void Server_SendChatMessage_Implementation(FChatMessageStruct const& newMessage); \
	virtual bool Server_SetDismantleShortcutOnIndex_Validate(int32 ); \
	virtual void Server_SetDismantleShortcutOnIndex_Implementation(int32 onIndex); \
	virtual bool Server_SetRecipeShortcutOnIndex_Validate(TSubclassOf<UFGRecipe>  , int32 ); \
	virtual void Server_SetRecipeShortcutOnIndex_Implementation(TSubclassOf<UFGRecipe>  recipe, int32 onIndex); \
	virtual void OnDisabledInputGateChanged_Implementation(); \
	virtual void OnDismantleGolfCart_Implementation(AFGWheeledVehicle* inGolfCart); \
	virtual void OnDismantlePortableMiner_Implementation(AFGPortableMiner* PortableMiner); \
	virtual bool Server_DealRadialDamage_Validate(FHitResult const& , float , float , TSubclassOf<UDamageType>  , AActor* ); \
	virtual void Server_DealRadialDamage_Implementation(FHitResult const& impact, float damage, float radius, TSubclassOf<UDamageType>  damageType, AActor* inInstigator); \
	virtual bool Server_DealImpactDamage_Validate(FHitResult const& , FVector , float , TSubclassOf<UDamageType>  , AActor* ); \
	virtual void Server_DealImpactDamage_Implementation(FHitResult const& impact, FVector forwardVector, float damage, TSubclassOf<UDamageType>  damageType, AActor* inInstigator); \
	virtual void Client_AddMessage_Implementation(TSubclassOf<UFGMessageBase>  newMessage); \
	virtual void Client_TransferFogOfWarData_Implementation(TArray<uint8> const& fogOfWarRawData, int32 index); \
	virtual bool Server_RequestFogOfWarData_Validate(); \
	virtual void Server_RequestFogOfWarData_Implementation(); \
	virtual bool Server_Respawn_Validate(); \
	virtual void Server_Respawn_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsRespawning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsRespawning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_WaitForLevelStreaming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_WaitForLevelStreaming_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_FinishRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_FinishRespawn_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_FinishRespawn_Validate")); \
			return; \
		} \
		P_THIS->Server_FinishRespawn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StartRespawn_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StartRespawn_Validate")); \
			return; \
		} \
		P_THIS->Server_StartRespawn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Suicide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_Suicide_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_Suicide_Validate")); \
			return; \
		} \
		P_THIS->Server_Suicide_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SpawnAttentionPingActor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_pingLocation); \
		P_GET_STRUCT(FVector,Z_Param_pingNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SpawnAttentionPingActor_Validate(Z_Param_pingLocation,Z_Param_pingNormal)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SpawnAttentionPingActor_Validate")); \
			return; \
		} \
		P_THIS->Server_SpawnAttentionPingActor_Implementation(Z_Param_pingLocation,Z_Param_pingNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendChatMessage) \
	{ \
		P_GET_STRUCT(FChatMessageStruct,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendChatMessage_Validate(Z_Param_newMessage)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendChatMessage_Validate")); \
			return; \
		} \
		P_THIS->Server_SendChatMessage_Implementation(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetDismantleShortcutOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_onIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetDismantleShortcutOnIndex_Validate(Z_Param_onIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetDismantleShortcutOnIndex_Validate")); \
			return; \
		} \
		P_THIS->Server_SetDismantleShortcutOnIndex_Implementation(Z_Param_onIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetRecipeShortcutOnIndex) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_GET_PROPERTY(UIntProperty,Z_Param_onIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetRecipeShortcutOnIndex_Validate(Z_Param_recipe,Z_Param_onIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetRecipeShortcutOnIndex_Validate")); \
			return; \
		} \
		P_THIS->Server_SetRecipeShortcutOnIndex_Implementation(Z_Param_recipe,Z_Param_onIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHiResPhotoModeEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHiResPhotoModeEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsPhotoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsPhotoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhotoModeFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPhotoModeFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecrementPhotoModeFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecrementPhotoModeFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncrementPhotoModeFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncrementPhotoModeFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleHiResPhotoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleHiResPhotoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTogglePhotoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TogglePhotoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePhotoMode) \
	{ \
		P_GET_UBOOL(Z_Param_isEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnablePhotoMode(Z_Param_isEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDisabledInputGateChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDisabledInputGateChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterChatMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterChatMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMapArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGMapArea> *)Z_Param__Result=P_THIS->GetCurrentMapArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckPawnMapArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckPawnMapArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDismantleGolfCart) \
	{ \
		P_GET_OBJECT(AFGWheeledVehicle,Z_Param_inGolfCart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDismantleGolfCart_Implementation(Z_Param_inGolfCart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDismantlePortableMiner) \
	{ \
		P_GET_OBJECT(AFGPortableMiner,Z_Param_PortableMiner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDismantlePortableMiner_Implementation(Z_Param_PortableMiner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimaryFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenshotPath) \
	{ \
		P_GET_UBOOL(Z_Param_isHighRes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetScreenshotPath(Z_Param_isHighRes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_DealRadialDamage) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_impact); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_GET_OBJECT(UClass,Z_Param_damageType); \
		P_GET_OBJECT(AActor,Z_Param_inInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_DealRadialDamage_Validate(Z_Param_impact,Z_Param_damage,Z_Param_radius,Z_Param_damageType,Z_Param_inInstigator)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_DealRadialDamage_Validate")); \
			return; \
		} \
		P_THIS->Server_DealRadialDamage_Implementation(Z_Param_impact,Z_Param_damage,Z_Param_radius,Z_Param_damageType,Z_Param_inInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_DealImpactDamage) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_impact); \
		P_GET_STRUCT(FVector,Z_Param_forwardVector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(UClass,Z_Param_damageType); \
		P_GET_OBJECT(AActor,Z_Param_inInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_DealImpactDamage_Validate(Z_Param_impact,Z_Param_forwardVector,Z_Param_damage,Z_Param_damageType,Z_Param_inInstigator)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_DealImpactDamage_Validate")); \
			return; \
		} \
		P_THIS->Server_DealImpactDamage_Implementation(Z_Param_impact,Z_Param_forwardVector,Z_Param_damage,Z_Param_damageType,Z_Param_inInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTutorialMode) \
	{ \
		P_GET_UBOOL(Z_Param_active); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTutorialMode(Z_Param_active); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInTutorialMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInTutorialMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisabledInputGate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDisabledInputGate*)Z_Param__Result=P_THIS->GetDisabledInputGate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisabledInputGate) \
	{ \
		P_GET_STRUCT(FDisabledInputGate,Z_Param_newDisabledInputGate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisabledInputGate(Z_Param_newDisabledInputGate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerHasMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayerHasMessage(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_AddMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_AddMessage_Implementation(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenBasedObjectRadius) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_screenRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScreenBasedObjectRadius(Z_Param_actor,Z_Param_screenRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectScreenRadius) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_boundingRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetObjectScreenRadius(Z_Param_actor,Z_Param_boundingRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TransferFogOfWarData) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_fogOfWarRawData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TransferFogOfWarData_Implementation(Z_Param_fogOfWarRawData,Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RequestFogOfWarData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RequestFogOfWarData_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RequestFogOfWarData_Validate")); \
			return; \
		} \
		P_THIS->Server_RequestFogOfWarData_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShortcutIndexFromKey) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShortcutIndexFromKey(Z_Param_Out_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDismantleShortcutIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDismantleShortcutIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDismantleShortcutOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_onIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDismantleShortcutOnIndex(Z_Param_onIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRecipeShortcutIndex) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRecipeShortcutIndex(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRecipeShortcutOnIndex) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_GET_PROPERTY(UIntProperty,Z_Param_onIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRecipeShortcutOnIndex(Z_Param_recipe,Z_Param_onIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValidShortcuts) \
	{ \
		P_GET_TARRAY_REF(UFGHotbarShortcut*,Z_Param_Out_out_shortcuts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetValidShortcuts(Z_Param_Out_out_shortcuts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllShortcuts) \
	{ \
		P_GET_TARRAY_REF(UFGHotbarShortcut*,Z_Param_Out_out_shortcuts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllShortcuts(Z_Param_Out_out_shortcuts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteShortcut) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_shortcutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteShortcut(Z_Param_shortcutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRespawning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRespawning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNeedRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NeedRespawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuicide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Suicide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Respawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_Respawn_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_Respawn_Validate")); \
			return; \
		} \
		P_THIS->Server_Respawn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRespawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterRemoteCallObjectClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRemoteCallObject**)Z_Param__Result=P_THIS->RegisterRemoteCallObjectClass(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRemoteCallObjectOfClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRemoteCallObject**)Z_Param__Result=P_THIS->GetRemoteCallObjectOfClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_WaitForLevelStreaming_Implementation(); \
	virtual bool Server_FinishRespawn_Validate(); \
	virtual void Server_FinishRespawn_Implementation(); \
	virtual bool Server_StartRespawn_Validate(); \
	virtual void Server_StartRespawn_Implementation(); \
	virtual bool Server_Suicide_Validate(); \
	virtual void Server_Suicide_Implementation(); \
	virtual bool Server_SpawnAttentionPingActor_Validate(FVector , FVector ); \
	virtual void Server_SpawnAttentionPingActor_Implementation(FVector pingLocation, FVector pingNormal); \
	virtual bool Server_SendChatMessage_Validate(FChatMessageStruct const& ); \
	virtual void Server_SendChatMessage_Implementation(FChatMessageStruct const& newMessage); \
	virtual bool Server_SetDismantleShortcutOnIndex_Validate(int32 ); \
	virtual void Server_SetDismantleShortcutOnIndex_Implementation(int32 onIndex); \
	virtual bool Server_SetRecipeShortcutOnIndex_Validate(TSubclassOf<UFGRecipe>  , int32 ); \
	virtual void Server_SetRecipeShortcutOnIndex_Implementation(TSubclassOf<UFGRecipe>  recipe, int32 onIndex); \
	virtual void OnDisabledInputGateChanged_Implementation(); \
	virtual void OnDismantleGolfCart_Implementation(AFGWheeledVehicle* inGolfCart); \
	virtual void OnDismantlePortableMiner_Implementation(AFGPortableMiner* PortableMiner); \
	virtual bool Server_DealRadialDamage_Validate(FHitResult const& , float , float , TSubclassOf<UDamageType>  , AActor* ); \
	virtual void Server_DealRadialDamage_Implementation(FHitResult const& impact, float damage, float radius, TSubclassOf<UDamageType>  damageType, AActor* inInstigator); \
	virtual bool Server_DealImpactDamage_Validate(FHitResult const& , FVector , float , TSubclassOf<UDamageType>  , AActor* ); \
	virtual void Server_DealImpactDamage_Implementation(FHitResult const& impact, FVector forwardVector, float damage, TSubclassOf<UDamageType>  damageType, AActor* inInstigator); \
	virtual void Client_AddMessage_Implementation(TSubclassOf<UFGMessageBase>  newMessage); \
	virtual void Client_TransferFogOfWarData_Implementation(TArray<uint8> const& fogOfWarRawData, int32 index); \
	virtual bool Server_RequestFogOfWarData_Validate(); \
	virtual void Server_RequestFogOfWarData_Implementation(); \
	virtual bool Server_Respawn_Validate(); \
	virtual void Server_Respawn_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsRespawning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsRespawning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_WaitForLevelStreaming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_WaitForLevelStreaming_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_FinishRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_FinishRespawn_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_FinishRespawn_Validate")); \
			return; \
		} \
		P_THIS->Server_FinishRespawn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StartRespawn_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StartRespawn_Validate")); \
			return; \
		} \
		P_THIS->Server_StartRespawn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Suicide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_Suicide_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_Suicide_Validate")); \
			return; \
		} \
		P_THIS->Server_Suicide_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SpawnAttentionPingActor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_pingLocation); \
		P_GET_STRUCT(FVector,Z_Param_pingNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SpawnAttentionPingActor_Validate(Z_Param_pingLocation,Z_Param_pingNormal)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SpawnAttentionPingActor_Validate")); \
			return; \
		} \
		P_THIS->Server_SpawnAttentionPingActor_Implementation(Z_Param_pingLocation,Z_Param_pingNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendChatMessage) \
	{ \
		P_GET_STRUCT(FChatMessageStruct,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendChatMessage_Validate(Z_Param_newMessage)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendChatMessage_Validate")); \
			return; \
		} \
		P_THIS->Server_SendChatMessage_Implementation(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetDismantleShortcutOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_onIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetDismantleShortcutOnIndex_Validate(Z_Param_onIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetDismantleShortcutOnIndex_Validate")); \
			return; \
		} \
		P_THIS->Server_SetDismantleShortcutOnIndex_Implementation(Z_Param_onIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetRecipeShortcutOnIndex) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_GET_PROPERTY(UIntProperty,Z_Param_onIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetRecipeShortcutOnIndex_Validate(Z_Param_recipe,Z_Param_onIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetRecipeShortcutOnIndex_Validate")); \
			return; \
		} \
		P_THIS->Server_SetRecipeShortcutOnIndex_Implementation(Z_Param_recipe,Z_Param_onIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHiResPhotoModeEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHiResPhotoModeEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsPhotoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsPhotoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhotoModeFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPhotoModeFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecrementPhotoModeFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecrementPhotoModeFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncrementPhotoModeFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncrementPhotoModeFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleHiResPhotoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleHiResPhotoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTogglePhotoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TogglePhotoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePhotoMode) \
	{ \
		P_GET_UBOOL(Z_Param_isEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnablePhotoMode(Z_Param_isEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDisabledInputGateChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDisabledInputGateChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterChatMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterChatMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMapArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGMapArea> *)Z_Param__Result=P_THIS->GetCurrentMapArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckPawnMapArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckPawnMapArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDismantleGolfCart) \
	{ \
		P_GET_OBJECT(AFGWheeledVehicle,Z_Param_inGolfCart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDismantleGolfCart_Implementation(Z_Param_inGolfCart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDismantlePortableMiner) \
	{ \
		P_GET_OBJECT(AFGPortableMiner,Z_Param_PortableMiner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDismantlePortableMiner_Implementation(Z_Param_PortableMiner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimaryFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenshotPath) \
	{ \
		P_GET_UBOOL(Z_Param_isHighRes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetScreenshotPath(Z_Param_isHighRes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_DealRadialDamage) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_impact); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_GET_OBJECT(UClass,Z_Param_damageType); \
		P_GET_OBJECT(AActor,Z_Param_inInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_DealRadialDamage_Validate(Z_Param_impact,Z_Param_damage,Z_Param_radius,Z_Param_damageType,Z_Param_inInstigator)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_DealRadialDamage_Validate")); \
			return; \
		} \
		P_THIS->Server_DealRadialDamage_Implementation(Z_Param_impact,Z_Param_damage,Z_Param_radius,Z_Param_damageType,Z_Param_inInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_DealImpactDamage) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_impact); \
		P_GET_STRUCT(FVector,Z_Param_forwardVector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(UClass,Z_Param_damageType); \
		P_GET_OBJECT(AActor,Z_Param_inInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_DealImpactDamage_Validate(Z_Param_impact,Z_Param_forwardVector,Z_Param_damage,Z_Param_damageType,Z_Param_inInstigator)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_DealImpactDamage_Validate")); \
			return; \
		} \
		P_THIS->Server_DealImpactDamage_Implementation(Z_Param_impact,Z_Param_forwardVector,Z_Param_damage,Z_Param_damageType,Z_Param_inInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTutorialMode) \
	{ \
		P_GET_UBOOL(Z_Param_active); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTutorialMode(Z_Param_active); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInTutorialMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInTutorialMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisabledInputGate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDisabledInputGate*)Z_Param__Result=P_THIS->GetDisabledInputGate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisabledInputGate) \
	{ \
		P_GET_STRUCT(FDisabledInputGate,Z_Param_newDisabledInputGate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisabledInputGate(Z_Param_newDisabledInputGate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerHasMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayerHasMessage(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_AddMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_AddMessage_Implementation(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenBasedObjectRadius) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_screenRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScreenBasedObjectRadius(Z_Param_actor,Z_Param_screenRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectScreenRadius) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_boundingRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetObjectScreenRadius(Z_Param_actor,Z_Param_boundingRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TransferFogOfWarData) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_fogOfWarRawData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TransferFogOfWarData_Implementation(Z_Param_fogOfWarRawData,Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RequestFogOfWarData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RequestFogOfWarData_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RequestFogOfWarData_Validate")); \
			return; \
		} \
		P_THIS->Server_RequestFogOfWarData_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShortcutIndexFromKey) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShortcutIndexFromKey(Z_Param_Out_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDismantleShortcutIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDismantleShortcutIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDismantleShortcutOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_onIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDismantleShortcutOnIndex(Z_Param_onIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRecipeShortcutIndex) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRecipeShortcutIndex(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRecipeShortcutOnIndex) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_GET_PROPERTY(UIntProperty,Z_Param_onIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRecipeShortcutOnIndex(Z_Param_recipe,Z_Param_onIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValidShortcuts) \
	{ \
		P_GET_TARRAY_REF(UFGHotbarShortcut*,Z_Param_Out_out_shortcuts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetValidShortcuts(Z_Param_Out_out_shortcuts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllShortcuts) \
	{ \
		P_GET_TARRAY_REF(UFGHotbarShortcut*,Z_Param_Out_out_shortcuts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllShortcuts(Z_Param_Out_out_shortcuts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteShortcut) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_shortcutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteShortcut(Z_Param_shortcutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRespawning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRespawning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNeedRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NeedRespawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuicide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Suicide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Respawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_Respawn_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_Respawn_Validate")); \
			return; \
		} \
		P_THIS->Server_Respawn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRespawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterRemoteCallObjectClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRemoteCallObject**)Z_Param__Result=P_THIS->RegisterRemoteCallObjectClass(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRemoteCallObjectOfClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRemoteCallObject**)Z_Param__Result=P_THIS->GetRemoteCallObjectOfClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_EVENT_PARMS \
	struct FGPlayerController_eventClient_AddMessage_Parms \
	{ \
		TSubclassOf<UFGMessageBase>  newMessage; \
	}; \
	struct FGPlayerController_eventClient_TransferFogOfWarData_Parms \
	{ \
		TArray<uint8> fogOfWarRawData; \
		int32 index; \
	}; \
	struct FGPlayerController_eventOnDismantleGolfCart_Parms \
	{ \
		AFGWheeledVehicle* inGolfCart; \
	}; \
	struct FGPlayerController_eventOnDismantlePortableMiner_Parms \
	{ \
		AFGPortableMiner* PortableMiner; \
	}; \
	struct FGPlayerController_eventOnSetupMovementWind_Parms \
	{ \
		UAkComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGPlayerController_eventOnSetupMovementWind_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGPlayerController_eventOnStartRespawn_Parms \
	{ \
		bool isJoining; \
	}; \
	struct FGPlayerController_eventServer_DealImpactDamage_Parms \
	{ \
		FHitResult impact; \
		FVector forwardVector; \
		float damage; \
		TSubclassOf<UDamageType>  damageType; \
		AActor* inInstigator; \
	}; \
	struct FGPlayerController_eventServer_DealRadialDamage_Parms \
	{ \
		FHitResult impact; \
		float damage; \
		float radius; \
		TSubclassOf<UDamageType>  damageType; \
		AActor* inInstigator; \
	}; \
	struct FGPlayerController_eventServer_SendChatMessage_Parms \
	{ \
		FChatMessageStruct newMessage; \
	}; \
	struct FGPlayerController_eventServer_SetDismantleShortcutOnIndex_Parms \
	{ \
		int32 onIndex; \
	}; \
	struct FGPlayerController_eventServer_SetRecipeShortcutOnIndex_Parms \
	{ \
		TSubclassOf<UFGRecipe>  recipe; \
		int32 onIndex; \
	}; \
	struct FGPlayerController_eventServer_SpawnAttentionPingActor_Parms \
	{ \
		FVector pingLocation; \
		FVector pingNormal; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGPlayerController(); \
	friend struct Z_Construct_UClass_AFGPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFGPlayerController, AFGPlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayerController)


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAFGPlayerController(); \
	friend struct Z_Construct_UClass_AFGPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFGPlayerController, AFGPlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayerController)


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayerController(AFGPlayerController&&); \
	NO_API AFGPlayerController(const AFGPlayerController&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayerController(AFGPlayerController&&); \
	NO_API AFGPlayerController(const AFGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGPlayerController)


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mConsoleCommandManager() { return STRUCT_OFFSET(AFGPlayerController, mConsoleCommandManager); } \
	FORCEINLINE static uint32 __PPO__mRemoteCallObjects() { return STRUCT_OFFSET(AFGPlayerController, mRemoteCallObjects); } \
	FORCEINLINE static uint32 __PPO__mInputComponentChords() { return STRUCT_OFFSET(AFGPlayerController, mInputComponentChords); } \
	FORCEINLINE static uint32 __PPO__mAttentionPingActorClass() { return STRUCT_OFFSET(AFGPlayerController, mAttentionPingActorClass); } \
	FORCEINLINE static uint32 __PPO__mMapAreaCheckInterval() { return STRUCT_OFFSET(AFGPlayerController, mMapAreaCheckInterval); } \
	FORCEINLINE static uint32 __PPO__mCurrentMapArea() { return STRUCT_OFFSET(AFGPlayerController, mCurrentMapArea); } \
	FORCEINLINE static uint32 __PPO__mMovementWindComp() { return STRUCT_OFFSET(AFGPlayerController, mMovementWindComp); } \
	FORCEINLINE static uint32 __PPO__mIsRespawning() { return STRUCT_OFFSET(AFGPlayerController, mIsRespawning); } \
	FORCEINLINE static uint32 __PPO__mCachedMapAreaTexture() { return STRUCT_OFFSET(AFGPlayerController, mCachedMapAreaTexture); } \
	FORCEINLINE static uint32 __PPO__mRespawnFromDeath() { return STRUCT_OFFSET(AFGPlayerController, mRespawnFromDeath); } \
	FORCEINLINE static uint32 __PPO__mRespawnFromJoin() { return STRUCT_OFFSET(AFGPlayerController, mRespawnFromJoin); } \
	FORCEINLINE static uint32 __PPO__mMinPhotoModeFOV() { return STRUCT_OFFSET(AFGPlayerController, mMinPhotoModeFOV); } \
	FORCEINLINE static uint32 __PPO__mMaxPhotoModeFOV() { return STRUCT_OFFSET(AFGPlayerController, mMaxPhotoModeFOV); } \
	FORCEINLINE static uint32 __PPO__mPhotomodeInputComponent() { return STRUCT_OFFSET(AFGPlayerController, mPhotomodeInputComponent); } \
	FORCEINLINE static uint32 __PPO__mProximitySubsystem() { return STRUCT_OFFSET(AFGPlayerController, mProximitySubsystem); }


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_22_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerController_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
