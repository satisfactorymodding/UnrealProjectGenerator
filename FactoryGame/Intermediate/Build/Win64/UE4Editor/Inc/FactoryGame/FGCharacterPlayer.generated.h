// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGItemPickup;
class AFGCharacterPlayer;
class AFGEquipment;
class AActor;
class USpringArmComponent;
class UCameraComponent;
class UFGItemDescriptor;
struct FDisabledInputGate;
struct FVector;
class UFGInventoryComponent;
struct FInventoryStack;
class UCameraShake;
class UFGLadderComponent;
class AFGBuildableRailroadSwitchControl;
class AFGResourceMiner;
class AFGResourceScanner;
class UFGInventoryComponentBeltSlot;
class AFGDriveablePawn;
class UFGOutlineComponent;
enum class ECameraMode : uint8;
class USkeletalMeshComponent;
class UFGRecipe;
class AFGBuildGun;
enum class EEquipmentSlot : uint8;
struct FInventoryItem;
class UFGInventoryComponentEquipment;
enum class ECrosshairState : uint8;
class AFGEquipmentAttachment;
#ifdef FACTORYGAME_FGCharacterPlayer_generated_h
#error "FGCharacterPlayer.generated.h already included, missing '#pragma once' in FGCharacterPlayer.h"
#endif
#define FACTORYGAME_FGCharacterPlayer_generated_h

#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDisabledInputGate_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGUseState_ReviveInvalid_PlayerNotDead(); \
	friend struct Z_Construct_UClass_UFGUseState_ReviveInvalid_PlayerNotDead_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_ReviveInvalid_PlayerNotDead, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_ReviveInvalid_PlayerNotDead)


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUFGUseState_ReviveInvalid_PlayerNotDead(); \
	friend struct Z_Construct_UClass_UFGUseState_ReviveInvalid_PlayerNotDead_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_ReviveInvalid_PlayerNotDead, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_ReviveInvalid_PlayerNotDead)


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGUseState_ReviveInvalid_PlayerNotDead(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseState_ReviveInvalid_PlayerNotDead) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_ReviveInvalid_PlayerNotDead); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_ReviveInvalid_PlayerNotDead); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_ReviveInvalid_PlayerNotDead(UFGUseState_ReviveInvalid_PlayerNotDead&&); \
	NO_API UFGUseState_ReviveInvalid_PlayerNotDead(const UFGUseState_ReviveInvalid_PlayerNotDead&); \
public:


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_ReviveInvalid_PlayerNotDead(UFGUseState_ReviveInvalid_PlayerNotDead&&); \
	NO_API UFGUseState_ReviveInvalid_PlayerNotDead(const UFGUseState_ReviveInvalid_PlayerNotDead&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_ReviveInvalid_PlayerNotDead); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_ReviveInvalid_PlayerNotDead); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGUseState_ReviveInvalid_PlayerNotDead)


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_69_PROLOG
#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_INCLASS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGUseState_ReviveValid(); \
	friend struct Z_Construct_UClass_UFGUseState_ReviveValid_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_ReviveValid, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_ReviveValid)


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUFGUseState_ReviveValid(); \
	friend struct Z_Construct_UClass_UFGUseState_ReviveValid_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_ReviveValid, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_ReviveValid)


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGUseState_ReviveValid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseState_ReviveValid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_ReviveValid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_ReviveValid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_ReviveValid(UFGUseState_ReviveValid&&); \
	NO_API UFGUseState_ReviveValid(const UFGUseState_ReviveValid&); \
public:


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_ReviveValid(UFGUseState_ReviveValid&&); \
	NO_API UFGUseState_ReviveValid(const UFGUseState_ReviveValid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_ReviveValid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_ReviveValid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGUseState_ReviveValid)


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_80_PROLOG
#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_INCLASS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_RPC_WRAPPERS \
	virtual bool Server_PickUpItem_Validate(AFGItemPickup* ); \
	virtual void Server_PickUpItem_Implementation(AFGItemPickup* itemPickup); \
	virtual bool Server_OnUseReleased_Validate(); \
	virtual void Server_OnUseReleased_Implementation(); \
	virtual bool Server_OnUse_Validate(); \
	virtual void Server_OnUse_Implementation(); \
	virtual bool Server_RevivePlayer_Validate(AFGCharacterPlayer* ); \
	virtual void Server_RevivePlayer_Implementation(AFGCharacterPlayer* playerToRevive); \
	virtual bool Server_UnequipEquipment_Validate(AFGEquipment* ); \
	virtual void Server_UnequipEquipment_Implementation(AFGEquipment* newEquipment); \
	virtual bool Server_EquipEquipment_Validate(AFGEquipment* ); \
	virtual void Server_EquipEquipment_Implementation(AFGEquipment* newEquipment); \
	virtual bool Client_Revived_Validate(); \
	virtual void Client_Revived_Implementation(); \
	virtual void OnDisabledInputGateChanged_Implementation(FDisabledInputGate newValue); \
	virtual FVector GetInventoryDropLocation_Implementation(const UFGInventoryComponent* component, FInventoryStack stack); \
	virtual bool Server_ToggleSwitchControl_Validate(AFGBuildableRailroadSwitchControl* ); \
	virtual void Server_ToggleSwitchControl_Implementation(AFGBuildableRailroadSwitchControl* switchControl); \
	virtual void SpawnInitialGear_Implementation(); \
	virtual bool Server_CycleHandEquipmentPressed_Validate(int32 ); \
	virtual void Server_CycleHandEquipmentPressed_Implementation(int32 dir); \
	virtual void SetThirdPersonMode_Implementation(); \
	virtual void SetFirstPersonMode_Implementation(); \
	virtual void CameraZoomOut_Implementation(); \
	virtual void CameraZoomIn_Implementation(); \
	virtual void StopFreeRotate3P_Implementation(); \
	virtual void StartFreeRotate3P_Implementation(); \
	virtual void StopFocusAim_Implementation(); \
	virtual void StartFocusAim_Implementation(); \
	virtual ECrosshairState GetActiveCrosshairState_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_RadiationIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RadiationIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_InRadioactiveZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InRadioactiveZone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PickupCounter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PickupCounter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DrivenVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DrivenVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveAttachments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveAttachments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveEquipments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveEquipments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_PickUpItem) \
	{ \
		P_GET_OBJECT(AFGItemPickup,Z_Param_itemPickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_PickUpItem_Validate(Z_Param_itemPickup)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_PickUpItem_Validate")); \
			return; \
		} \
		P_THIS->Server_PickUpItem_Implementation(Z_Param_itemPickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_OnUseReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnUseReleased_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnUseReleased_Validate")); \
			return; \
		} \
		P_THIS->Server_OnUseReleased_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_OnUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnUse_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnUse_Validate")); \
			return; \
		} \
		P_THIS->Server_OnUse_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RevivePlayer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_playerToRevive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RevivePlayer_Validate(Z_Param_playerToRevive)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RevivePlayer_Validate")); \
			return; \
		} \
		P_THIS->Server_RevivePlayer_Implementation(Z_Param_playerToRevive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_UnequipEquipment) \
	{ \
		P_GET_OBJECT(AFGEquipment,Z_Param_newEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_UnequipEquipment_Validate(Z_Param_newEquipment)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_UnequipEquipment_Validate")); \
			return; \
		} \
		P_THIS->Server_UnequipEquipment_Implementation(Z_Param_newEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_EquipEquipment) \
	{ \
		P_GET_OBJECT(AFGEquipment,Z_Param_newEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_EquipEquipment_Validate(Z_Param_newEquipment)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_EquipEquipment_Validate")); \
			return; \
		} \
		P_THIS->Server_EquipEquipment_Implementation(Z_Param_newEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBestUsableActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetBestUsableActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRadiationDamageAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRadiationDamageAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRadiationImmunity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRadiationImmunity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRadiationIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRadiationIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReceivingRadiation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReceivingRadiation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReceivingRadiation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReceivingRadiation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPickupProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPickupProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_Revived) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Client_Revived_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Client_Revived_Validate")); \
			return; \
		} \
		P_THIS->Client_Revived_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReviveProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetReviveProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUseDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetUseDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpringArmComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USpringArmComponent**)Z_Param__Result=P_THIS->GetSpringArmComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCameraComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemAddedToInventory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemAddedToInventory(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDisabledInputGateChanged) \
	{ \
		P_GET_STRUCT(FDisabledInputGate,Z_Param_newValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDisabledInputGateChanged_Implementation(Z_Param_newValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_isFirstPerson); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshVisibility(Z_Param_isFirstPerson); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnArmsSlotsUnlocked) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newUnlockedSlots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnArmsSlotsUnlocked(Z_Param_newUnlockedSlots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInventorySlotsUnlocked) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newUnlockedSlots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInventorySlotsUnlocked(Z_Param_newUnlockedSlots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRadiationImmunity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newImmunity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadiationImmunity(Z_Param_newImmunity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadiationImmunity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_toAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRadiationImmunity(Z_Param_toAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventoryDropLocation) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_component); \
		P_GET_STRUCT(FInventoryStack,Z_Param_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInventoryDropLocation_Implementation(Z_Param_component,Z_Param_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWantSprintBobbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWantSprintBobbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWantSprintBobbing) \
	{ \
		P_GET_UBOOL(Z_Param_wantBobbing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWantSprintBobbing(Z_Param_wantBobbing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredWalkHeadBobShake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UCameraShake> *)Z_Param__Result=P_THIS->GetDesiredWalkHeadBobShake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredSprintHeadBobShake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UCameraShake> *)Z_Param__Result=P_THIS->GetDesiredSprintHeadBobShake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLadderComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGLadderComponent**)Z_Param__Result=P_THIS->GetCurrentLadderComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ToggleSwitchControl) \
	{ \
		P_GET_OBJECT(AFGBuildableRailroadSwitchControl,Z_Param_switchControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ToggleSwitchControl_Validate(Z_Param_switchControl)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ToggleSwitchControl_Validate")); \
			return; \
		} \
		P_THIS->Server_ToggleSwitchControl_Implementation(Z_Param_switchControl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceMiner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResourceMiner**)Z_Param__Result=P_THIS->GetResourceMiner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceScanner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResourceScanner**)Z_Param__Result=P_THIS->GetResourceScanner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeltSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponentBeltSlot**)Z_Param__Result=P_THIS->GetBeltSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrashSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetTrashSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnInitialGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnInitialGear_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrivenVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGDriveablePawn**)Z_Param__Result=P_THIS->GetDrivenVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDrivingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDrivingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGOutlineComponent**)Z_Param__Result=P_THIS->GetOutline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_CycleHandEquipmentPressed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_dir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_CycleHandEquipmentPressed_Validate(Z_Param_dir)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_CycleHandEquipmentPressed_Validate")); \
			return; \
		} \
		P_THIS->Server_CycleHandEquipmentPressed_Implementation(Z_Param_dir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFirstPerson) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFirstPerson(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsePreferredCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UsePreferredCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraMode) \
	{ \
		P_GET_ENUM(ECameraMode,Z_Param_newCameraMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraMode(ECameraMode(Z_Param_newCameraMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECameraMode*)Z_Param__Result=P_THIS->GetCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThirdPersonMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThirdPersonMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFirstPersonMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFirstPersonMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCameraZoomOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CameraZoomOut_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCameraZoomIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CameraZoomIn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFreeRotate3P) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFreeRotate3P_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFreeRotate3P) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFreeRotate3P_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFocusAim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFocusAim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocusAim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFocusAim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMesh1P) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh1P(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHotKeyDismantle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HotKeyDismantle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHotKeyRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HotKeyRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleBuildGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleBuildGun(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBuildGunEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBuildGunEquipped(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildGun**)Z_Param__Result=P_THIS->GetBuildGun(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveEquipmentItem) \
	{ \
		P_GET_ENUM(EEquipmentSlot,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInventoryItem*)Z_Param__Result=P_THIS->GetActiveEquipmentItem(EEquipmentSlot(Z_Param_slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentInSlot) \
	{ \
		P_GET_ENUM(EEquipmentSlot,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGEquipment**)Z_Param__Result=P_THIS->GetEquipmentInSlot(EEquipmentSlot(Z_Param_slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentSlot) \
	{ \
		P_GET_ENUM(EEquipmentSlot,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponentEquipment**)Z_Param__Result=P_THIS->GetEquipmentSlot(EEquipmentSlot(Z_Param_slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveCrosshairState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECrosshairState*)Z_Param__Result=P_THIS->GetActiveCrosshairState_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveAttachments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AFGEquipmentAttachment*>*)Z_Param__Result=P_THIS->GetActiveAttachments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveEquipments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AFGEquipment*>*)Z_Param__Result=P_THIS->GetActiveEquipments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnequipEquipment) \
	{ \
		P_GET_OBJECT(AFGEquipment,Z_Param_equipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnequipEquipment(Z_Param_equipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipEquipment) \
	{ \
		P_GET_OBJECT(AFGEquipment,Z_Param_equipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipEquipment(Z_Param_equipment); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_PickUpItem_Validate(AFGItemPickup* ); \
	virtual void Server_PickUpItem_Implementation(AFGItemPickup* itemPickup); \
	virtual bool Server_OnUseReleased_Validate(); \
	virtual void Server_OnUseReleased_Implementation(); \
	virtual bool Server_OnUse_Validate(); \
	virtual void Server_OnUse_Implementation(); \
	virtual bool Server_RevivePlayer_Validate(AFGCharacterPlayer* ); \
	virtual void Server_RevivePlayer_Implementation(AFGCharacterPlayer* playerToRevive); \
	virtual bool Server_UnequipEquipment_Validate(AFGEquipment* ); \
	virtual void Server_UnequipEquipment_Implementation(AFGEquipment* newEquipment); \
	virtual bool Server_EquipEquipment_Validate(AFGEquipment* ); \
	virtual void Server_EquipEquipment_Implementation(AFGEquipment* newEquipment); \
	virtual bool Client_Revived_Validate(); \
	virtual void Client_Revived_Implementation(); \
	virtual void OnDisabledInputGateChanged_Implementation(FDisabledInputGate newValue); \
	virtual FVector GetInventoryDropLocation_Implementation(const UFGInventoryComponent* component, FInventoryStack stack); \
	virtual bool Server_ToggleSwitchControl_Validate(AFGBuildableRailroadSwitchControl* ); \
	virtual void Server_ToggleSwitchControl_Implementation(AFGBuildableRailroadSwitchControl* switchControl); \
	virtual void SpawnInitialGear_Implementation(); \
	virtual bool Server_CycleHandEquipmentPressed_Validate(int32 ); \
	virtual void Server_CycleHandEquipmentPressed_Implementation(int32 dir); \
	virtual void SetThirdPersonMode_Implementation(); \
	virtual void SetFirstPersonMode_Implementation(); \
	virtual void CameraZoomOut_Implementation(); \
	virtual void CameraZoomIn_Implementation(); \
	virtual void StopFreeRotate3P_Implementation(); \
	virtual void StartFreeRotate3P_Implementation(); \
	virtual void StopFocusAim_Implementation(); \
	virtual void StartFocusAim_Implementation(); \
	virtual ECrosshairState GetActiveCrosshairState_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_RadiationIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RadiationIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_InRadioactiveZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InRadioactiveZone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PickupCounter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PickupCounter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DrivenVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DrivenVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveAttachments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveAttachments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveEquipments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveEquipments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_PickUpItem) \
	{ \
		P_GET_OBJECT(AFGItemPickup,Z_Param_itemPickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_PickUpItem_Validate(Z_Param_itemPickup)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_PickUpItem_Validate")); \
			return; \
		} \
		P_THIS->Server_PickUpItem_Implementation(Z_Param_itemPickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_OnUseReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnUseReleased_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnUseReleased_Validate")); \
			return; \
		} \
		P_THIS->Server_OnUseReleased_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_OnUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnUse_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnUse_Validate")); \
			return; \
		} \
		P_THIS->Server_OnUse_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RevivePlayer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_playerToRevive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RevivePlayer_Validate(Z_Param_playerToRevive)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RevivePlayer_Validate")); \
			return; \
		} \
		P_THIS->Server_RevivePlayer_Implementation(Z_Param_playerToRevive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_UnequipEquipment) \
	{ \
		P_GET_OBJECT(AFGEquipment,Z_Param_newEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_UnequipEquipment_Validate(Z_Param_newEquipment)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_UnequipEquipment_Validate")); \
			return; \
		} \
		P_THIS->Server_UnequipEquipment_Implementation(Z_Param_newEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_EquipEquipment) \
	{ \
		P_GET_OBJECT(AFGEquipment,Z_Param_newEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_EquipEquipment_Validate(Z_Param_newEquipment)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_EquipEquipment_Validate")); \
			return; \
		} \
		P_THIS->Server_EquipEquipment_Implementation(Z_Param_newEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBestUsableActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetBestUsableActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRadiationDamageAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRadiationDamageAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRadiationImmunity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRadiationImmunity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRadiationIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRadiationIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReceivingRadiation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReceivingRadiation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReceivingRadiation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReceivingRadiation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPickupProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPickupProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_Revived) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Client_Revived_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Client_Revived_Validate")); \
			return; \
		} \
		P_THIS->Client_Revived_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReviveProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetReviveProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUseDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetUseDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpringArmComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USpringArmComponent**)Z_Param__Result=P_THIS->GetSpringArmComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCameraComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemAddedToInventory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemAddedToInventory(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDisabledInputGateChanged) \
	{ \
		P_GET_STRUCT(FDisabledInputGate,Z_Param_newValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDisabledInputGateChanged_Implementation(Z_Param_newValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_isFirstPerson); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshVisibility(Z_Param_isFirstPerson); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnArmsSlotsUnlocked) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newUnlockedSlots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnArmsSlotsUnlocked(Z_Param_newUnlockedSlots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInventorySlotsUnlocked) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newUnlockedSlots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInventorySlotsUnlocked(Z_Param_newUnlockedSlots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRadiationImmunity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newImmunity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadiationImmunity(Z_Param_newImmunity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadiationImmunity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_toAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRadiationImmunity(Z_Param_toAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventoryDropLocation) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_component); \
		P_GET_STRUCT(FInventoryStack,Z_Param_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInventoryDropLocation_Implementation(Z_Param_component,Z_Param_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWantSprintBobbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWantSprintBobbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWantSprintBobbing) \
	{ \
		P_GET_UBOOL(Z_Param_wantBobbing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWantSprintBobbing(Z_Param_wantBobbing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredWalkHeadBobShake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UCameraShake> *)Z_Param__Result=P_THIS->GetDesiredWalkHeadBobShake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredSprintHeadBobShake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UCameraShake> *)Z_Param__Result=P_THIS->GetDesiredSprintHeadBobShake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLadderComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGLadderComponent**)Z_Param__Result=P_THIS->GetCurrentLadderComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ToggleSwitchControl) \
	{ \
		P_GET_OBJECT(AFGBuildableRailroadSwitchControl,Z_Param_switchControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ToggleSwitchControl_Validate(Z_Param_switchControl)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ToggleSwitchControl_Validate")); \
			return; \
		} \
		P_THIS->Server_ToggleSwitchControl_Implementation(Z_Param_switchControl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceMiner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResourceMiner**)Z_Param__Result=P_THIS->GetResourceMiner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceScanner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResourceScanner**)Z_Param__Result=P_THIS->GetResourceScanner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBeltSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponentBeltSlot**)Z_Param__Result=P_THIS->GetBeltSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrashSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetTrashSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnInitialGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnInitialGear_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrivenVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGDriveablePawn**)Z_Param__Result=P_THIS->GetDrivenVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDrivingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDrivingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGOutlineComponent**)Z_Param__Result=P_THIS->GetOutline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_CycleHandEquipmentPressed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_dir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_CycleHandEquipmentPressed_Validate(Z_Param_dir)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_CycleHandEquipmentPressed_Validate")); \
			return; \
		} \
		P_THIS->Server_CycleHandEquipmentPressed_Implementation(Z_Param_dir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFirstPerson) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFirstPerson(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsePreferredCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UsePreferredCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraMode) \
	{ \
		P_GET_ENUM(ECameraMode,Z_Param_newCameraMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraMode(ECameraMode(Z_Param_newCameraMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECameraMode*)Z_Param__Result=P_THIS->GetCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThirdPersonMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThirdPersonMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFirstPersonMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFirstPersonMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCameraZoomOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CameraZoomOut_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCameraZoomIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CameraZoomIn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFreeRotate3P) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFreeRotate3P_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFreeRotate3P) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFreeRotate3P_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFocusAim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFocusAim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocusAim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFocusAim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMesh1P) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh1P(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHotKeyDismantle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HotKeyDismantle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHotKeyRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HotKeyRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleBuildGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleBuildGun(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBuildGunEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBuildGunEquipped(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildGun**)Z_Param__Result=P_THIS->GetBuildGun(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveEquipmentItem) \
	{ \
		P_GET_ENUM(EEquipmentSlot,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInventoryItem*)Z_Param__Result=P_THIS->GetActiveEquipmentItem(EEquipmentSlot(Z_Param_slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentInSlot) \
	{ \
		P_GET_ENUM(EEquipmentSlot,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGEquipment**)Z_Param__Result=P_THIS->GetEquipmentInSlot(EEquipmentSlot(Z_Param_slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentSlot) \
	{ \
		P_GET_ENUM(EEquipmentSlot,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponentEquipment**)Z_Param__Result=P_THIS->GetEquipmentSlot(EEquipmentSlot(Z_Param_slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveCrosshairState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECrosshairState*)Z_Param__Result=P_THIS->GetActiveCrosshairState_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveAttachments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AFGEquipmentAttachment*>*)Z_Param__Result=P_THIS->GetActiveAttachments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveEquipments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AFGEquipment*>*)Z_Param__Result=P_THIS->GetActiveEquipments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnequipEquipment) \
	{ \
		P_GET_OBJECT(AFGEquipment,Z_Param_equipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnequipEquipment(Z_Param_equipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipEquipment) \
	{ \
		P_GET_OBJECT(AFGEquipment,Z_Param_equipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipEquipment(Z_Param_equipment); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_EVENT_PARMS \
	struct FGCharacterPlayer_eventGetActiveCrosshairState_Parms \
	{ \
		ECrosshairState ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGCharacterPlayer_eventGetActiveCrosshairState_Parms() \
			: ReturnValue((ECrosshairState)0) \
		{ \
		} \
	}; \
	struct FGCharacterPlayer_eventGetInventoryDropLocation_Parms \
	{ \
		const UFGInventoryComponent* component; \
		FInventoryStack stack; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGCharacterPlayer_eventGetInventoryDropLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGCharacterPlayer_eventOnDisabledInputGateChanged_Parms \
	{ \
		FDisabledInputGate newValue; \
	}; \
	struct FGCharacterPlayer_eventOnRadiationIntensityUpdated_Parms \
	{ \
		float radiationIntensity; \
		float radiationImmunity; \
	}; \
	struct FGCharacterPlayer_eventServer_CycleHandEquipmentPressed_Parms \
	{ \
		int32 dir; \
	}; \
	struct FGCharacterPlayer_eventServer_EquipEquipment_Parms \
	{ \
		AFGEquipment* newEquipment; \
	}; \
	struct FGCharacterPlayer_eventServer_PickUpItem_Parms \
	{ \
		AFGItemPickup* itemPickup; \
	}; \
	struct FGCharacterPlayer_eventServer_RevivePlayer_Parms \
	{ \
		AFGCharacterPlayer* playerToRevive; \
	}; \
	struct FGCharacterPlayer_eventServer_ToggleSwitchControl_Parms \
	{ \
		AFGBuildableRailroadSwitchControl* switchControl; \
	}; \
	struct FGCharacterPlayer_eventServer_UnequipEquipment_Parms \
	{ \
		AFGEquipment* newEquipment; \
	};


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCharacterPlayer(); \
	friend struct Z_Construct_UClass_AFGCharacterPlayer_Statics; \
public: \
	DECLARE_CLASS(AFGCharacterPlayer, AFGCharacterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCharacterPlayer) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AFGCharacterPlayer*>(this); }


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_INCLASS \
private: \
	static void StaticRegisterNativesAFGCharacterPlayer(); \
	friend struct Z_Construct_UClass_AFGCharacterPlayer_Statics; \
public: \
	DECLARE_CLASS(AFGCharacterPlayer, AFGCharacterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCharacterPlayer) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AFGCharacterPlayer*>(this); }


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCharacterPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCharacterPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCharacterPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCharacterPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCharacterPlayer(AFGCharacterPlayer&&); \
	NO_API AFGCharacterPlayer(const AFGCharacterPlayer&); \
public:


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCharacterPlayer(AFGCharacterPlayer&&); \
	NO_API AFGCharacterPlayer(const AFGCharacterPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCharacterPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCharacterPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCharacterPlayer)


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFoliagePickupProxyClass() { return STRUCT_OFFSET(AFGCharacterPlayer, mFoliagePickupProxyClass); } \
	FORCEINLINE static uint32 __PPO__mFoliagePickupProxy() { return STRUCT_OFFSET(AFGCharacterPlayer, mFoliagePickupProxy); } \
	FORCEINLINE static uint32 __PPO__mBuildGun() { return STRUCT_OFFSET(AFGCharacterPlayer, mBuildGun); } \
	FORCEINLINE static uint32 __PPO__mResourceScanner() { return STRUCT_OFFSET(AFGCharacterPlayer, mResourceScanner); } \
	FORCEINLINE static uint32 __PPO__mResourceMiner() { return STRUCT_OFFSET(AFGCharacterPlayer, mResourceMiner); } \
	FORCEINLINE static uint32 __PPO__mBestUsableActor() { return STRUCT_OFFSET(AFGCharacterPlayer, mBestUsableActor); } \
	FORCEINLINE static uint32 __PPO__mCachedUseState() { return STRUCT_OFFSET(AFGCharacterPlayer, mCachedUseState); } \
	FORCEINLINE static uint32 __PPO__mAnimInstanceClass() { return STRUCT_OFFSET(AFGCharacterPlayer, mAnimInstanceClass); } \
	FORCEINLINE static uint32 __PPO__mAnimInstanceClass1P() { return STRUCT_OFFSET(AFGCharacterPlayer, mAnimInstanceClass1P); } \
	FORCEINLINE static uint32 __PPO__mReviveDuration() { return STRUCT_OFFSET(AFGCharacterPlayer, mReviveDuration); } \
	FORCEINLINE static uint32 __PPO__mStartingResources() { return STRUCT_OFFSET(AFGCharacterPlayer, mStartingResources); } \
	FORCEINLINE static uint32 __PPO__mStartingResourceForTesting() { return STRUCT_OFFSET(AFGCharacterPlayer, mStartingResourceForTesting); } \
	FORCEINLINE static uint32 __PPO__mDrownDamageDamageType() { return STRUCT_OFFSET(AFGCharacterPlayer, mDrownDamageDamageType); } \
	FORCEINLINE static uint32 __PPO__mDrownDamage() { return STRUCT_OFFSET(AFGCharacterPlayer, mDrownDamage); } \
	FORCEINLINE static uint32 __PPO__mDrownDamageInterval() { return STRUCT_OFFSET(AFGCharacterPlayer, mDrownDamageInterval); } \
	FORCEINLINE static uint32 __PPO__mPlayerToRevive() { return STRUCT_OFFSET(AFGCharacterPlayer, mPlayerToRevive); } \
	FORCEINLINE static uint32 __PPO__mPickupToCollect() { return STRUCT_OFFSET(AFGCharacterPlayer, mPickupToCollect); } \
	FORCEINLINE static uint32 __PPO__m1PDefaultFootstepEffect() { return STRUCT_OFFSET(AFGCharacterPlayer, m1PDefaultFootstepEffect); } \
	FORCEINLINE static uint32 __PPO__m1PFootstepEffect() { return STRUCT_OFFSET(AFGCharacterPlayer, m1PFootstepEffect); } \
	FORCEINLINE static uint32 __PPO__m1PFootstepEvent() { return STRUCT_OFFSET(AFGCharacterPlayer, m1PFootstepEvent); } \
	FORCEINLINE static uint32 __PPO__mLastSafeGroundPositions() { return STRUCT_OFFSET(AFGCharacterPlayer, mLastSafeGroundPositions); } \
	FORCEINLINE static uint32 __PPO__mLastSafeGroundPositionLoopHead() { return STRUCT_OFFSET(AFGCharacterPlayer, mLastSafeGroundPositionLoopHead); } \
	FORCEINLINE static uint32 __PPO__mCameraComponent() { return STRUCT_OFFSET(AFGCharacterPlayer, mCameraComponent); } \
	FORCEINLINE static uint32 __PPO__mSpringArmComponent() { return STRUCT_OFFSET(AFGCharacterPlayer, mSpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__mActiveEquipments() { return STRUCT_OFFSET(AFGCharacterPlayer, mActiveEquipments); } \
	FORCEINLINE static uint32 __PPO__mClientActiveEquipments() { return STRUCT_OFFSET(AFGCharacterPlayer, mClientActiveEquipments); } \
	FORCEINLINE static uint32 __PPO__mAllAttachments() { return STRUCT_OFFSET(AFGCharacterPlayer, mAllAttachments); } \
	FORCEINLINE static uint32 __PPO__mActiveAttachments() { return STRUCT_OFFSET(AFGCharacterPlayer, mActiveAttachments); } \
	FORCEINLINE static uint32 __PPO__mCurrentCameraMode() { return STRUCT_OFFSET(AFGCharacterPlayer, mCurrentCameraMode); } \
	FORCEINLINE static uint32 __PPO__mPlayerPreferredCameraMode() { return STRUCT_OFFSET(AFGCharacterPlayer, mPlayerPreferredCameraMode); } \
	FORCEINLINE static uint32 __PPO__mInventory() { return STRUCT_OFFSET(AFGCharacterPlayer, mInventory); } \
	FORCEINLINE static uint32 __PPO__mBeltSlot() { return STRUCT_OFFSET(AFGCharacterPlayer, mBeltSlot); } \
	FORCEINLINE static uint32 __PPO__mTrashSlot() { return STRUCT_OFFSET(AFGCharacterPlayer, mTrashSlot); } \
	FORCEINLINE static uint32 __PPO__mAllowCameraToggling() { return STRUCT_OFFSET(AFGCharacterPlayer, mAllowCameraToggling); } \
	FORCEINLINE static uint32 __PPO__mUseDistance() { return STRUCT_OFFSET(AFGCharacterPlayer, mUseDistance); } \
	FORCEINLINE static uint32 __PPO__mPickupCounter() { return STRUCT_OFFSET(AFGCharacterPlayer, mPickupCounter); } \
	FORCEINLINE static uint32 __PPO__mReviver() { return STRUCT_OFFSET(AFGCharacterPlayer, mReviver); } \
	FORCEINLINE static uint32 __PPO__mDefaultWalkHeadBobShake() { return STRUCT_OFFSET(AFGCharacterPlayer, mDefaultWalkHeadBobShake); } \
	FORCEINLINE static uint32 __PPO__mDefaultSprintHeadBobShake() { return STRUCT_OFFSET(AFGCharacterPlayer, mDefaultSprintHeadBobShake); } \
	FORCEINLINE static uint32 __PPO__mDrivenVehicle() { return STRUCT_OFFSET(AFGCharacterPlayer, mDrivenVehicle); } \
	FORCEINLINE static uint32 __PPO__mSavedDrivenVehicle() { return STRUCT_OFFSET(AFGCharacterPlayer, mSavedDrivenVehicle); } \
	FORCEINLINE static uint32 __PPO__mOutlineComponent() { return STRUCT_OFFSET(AFGCharacterPlayer, mOutlineComponent); } \
	FORCEINLINE static uint32 __PPO__mHealthGenerationThreshold() { return STRUCT_OFFSET(AFGCharacterPlayer, mHealthGenerationThreshold); } \
	FORCEINLINE static uint32 __PPO__mHealthGenerationAmount() { return STRUCT_OFFSET(AFGCharacterPlayer, mHealthGenerationAmount); } \
	FORCEINLINE static uint32 __PPO__mHealthGenerationInterval() { return STRUCT_OFFSET(AFGCharacterPlayer, mHealthGenerationInterval); } \
	FORCEINLINE static uint32 __PPO__mHealthGenerationWaitTime() { return STRUCT_OFFSET(AFGCharacterPlayer, mHealthGenerationWaitTime); } \
	FORCEINLINE static uint32 __PPO__mRadiationIntensity() { return STRUCT_OFFSET(AFGCharacterPlayer, mRadiationIntensity); } \
	FORCEINLINE static uint32 __PPO__mRadiationDamageAngle() { return STRUCT_OFFSET(AFGCharacterPlayer, mRadiationDamageAngle); } \
	FORCEINLINE static uint32 __PPO__mRadiationImmunity() { return STRUCT_OFFSET(AFGCharacterPlayer, mRadiationImmunity); } \
	FORCEINLINE static uint32 __PPO__mInRadioactiveZone() { return STRUCT_OFFSET(AFGCharacterPlayer, mInRadioactiveZone); }


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_91_PROLOG \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_INCLASS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCharacterPlayer_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGCharacterPlayer_h


#define FOREACH_ENUM_ECAMERAMODE(op) \
	op(ECameraMode::ECM_None) \
	op(ECameraMode::ECM_FirstPerson) \
	op(ECameraMode::ECM_ThirdPerson) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
