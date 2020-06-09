// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGMapArea;
class UFGItemDescriptor;
struct FLinearColor;
class UFGMessageBase;
class APlayerController;
class AFGCharacterPlayer;
class AFGActorRepresentationManager;
class AFGTutorialIntroManager;
class AFGResearchManager;
class AFGGamePhaseManager;
class AFGSchematicManager;
#ifdef FACTORYGAME_FGGameState_generated_h
#error "FGGameState.generated.h already included, missing '#pragma once' in FGGameState.h"
#endif
#define FACTORYGAME_FGGameState_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_23_DELEGATE \
static inline void FOnAutoSaveFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAutoSaveFinished) \
{ \
	OnAutoSaveFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_22_DELEGATE \
struct _Script_FactoryGame_eventOnAutoSaveTimeNotification_Parms \
{ \
	float timeLeft; \
}; \
static inline void FOnAutoSaveTimeNotification_DelegateWrapper(const FMulticastScriptDelegate& OnAutoSaveTimeNotification, float timeLeft) \
{ \
	_Script_FactoryGame_eventOnAutoSaveTimeNotification_Parms Parms; \
	Parms.timeLeft=timeLeft; \
	OnAutoSaveTimeNotification.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_21_DELEGATE \
struct _Script_FactoryGame_eventOnRestartTimeNotification_Parms \
{ \
	float timeLeft; \
}; \
static inline void FOnRestartTimeNotification_DelegateWrapper(const FMulticastScriptDelegate& OnRestartTimeNotification, float timeLeft) \
{ \
	_Script_FactoryGame_eventOnRestartTimeNotification_Parms Parms; \
	Parms.timeLeft=timeLeft; \
	OnRestartTimeNotification.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_20_DELEGATE \
struct _Script_FactoryGame_eventVisitedMapAreaDelegate_Parms \
{ \
	TSubclassOf<UFGMapArea>  mapArea; \
}; \
static inline void FVisitedMapAreaDelegate_DelegateWrapper(const FMulticastScriptDelegate& VisitedMapAreaDelegate, TSubclassOf<UFGMapArea>  mapArea) \
{ \
	_Script_FactoryGame_eventVisitedMapAreaDelegate_Parms Parms; \
	Parms.mapArea=mapArea; \
	VisitedMapAreaDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_RPC_WRAPPERS \
	virtual bool Server_SetBuildingColorInSlotLinear_Validate(uint8 , FLinearColor , FLinearColor ); \
	virtual void Server_SetBuildingColorInSlotLinear_Implementation(uint8 slotIdx, FLinearColor colorPrimary_Linear, FLinearColor colorSecondary_Linear); \
 \
	DECLARE_FUNCTION(execOnRep_PlannedRestartTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlannedRestartTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OnlineSessionVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnlineSessionVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OnlineSessionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnlineSessionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsItemEverPickedUp) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsItemEverPickedUp(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BuildingColorSlotSecondary_Linear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BuildingColorSlotSecondary_Linear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BuildingColorSlotPrimary_Linear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BuildingColorSlotPrimary_Linear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetBuildingColorInSlotLinear) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIdx); \
		P_GET_STRUCT(FLinearColor,Z_Param_colorPrimary_Linear); \
		P_GET_STRUCT(FLinearColor,Z_Param_colorSecondary_Linear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetBuildingColorInSlotLinear_Validate(Z_Param_slotIdx,Z_Param_colorPrimary_Linear,Z_Param_colorSecondary_Linear)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetBuildingColorInSlotLinear_Validate")); \
			return; \
		} \
		P_THIS->Server_SetBuildingColorInSlotLinear_Implementation(Z_Param_slotIdx,Z_Param_colorPrimary_Linear,Z_Param_colorSecondary_Linear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnlineSessionName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnlineSessionName(Z_Param_inName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOnlineSessionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetOnlineSessionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSessionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalPlayDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTotalPlayDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessageToPlayer) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_GET_OBJECT(APlayerController,Z_Param_controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendMessageToPlayer(Z_Param_inMessage,Z_Param_controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessageToAllPlayers) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendMessageToAllPlayers(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyPlayerAdded) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_inPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyPlayerAdded(Z_Param_inPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheatNoCost) \
	{ \
		P_GET_UBOOL(Z_Param_noCost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCheatNoCost(Z_Param_noCost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheatNoPower) \
	{ \
		P_GET_UBOOL(Z_Param_noPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCheatNoPower(Z_Param_noPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCheatNoPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCheatNoPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCheatNoCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCheatNoCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MapAreaVisited) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MapAreaVisited(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMapAreaVisisted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inArea); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMapAreaVisisted(Z_Param_inArea); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisitedMapAreas) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGMapArea> ,Z_Param_Out_out_VisitedAreas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVisitedMapAreas(Z_Param_Out_out_VisitedAreas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGActorRepresentationManager**)Z_Param__Result=P_THIS->GetActorRepresentationManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTutorialIntroManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTutorialIntroManager**)Z_Param__Result=P_THIS->GetTutorialIntroManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResearchManager**)Z_Param__Result=P_THIS->GetResearchManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhaseManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGGamePhaseManager**)Z_Param__Result=P_THIS->GetGamePhaseManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSchematicManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGSchematicManager**)Z_Param__Result=P_THIS->GetSchematicManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsSpaceElevatorBuilt) \
	{ \
		P_GET_UBOOL(Z_Param_isSpaceElevatorBuilt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsSpaceElevatorBuilt(Z_Param_isSpaceElevatorBuilt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpaceElevatorBuilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpaceElevatorBuilt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasInitalTradingPostLandAnimPlayed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasInitalTradingPostLandAnimPlayed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInitalTradingPostLandAnimPlayed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasInitalTradingPostLandAnimPlayed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTradingPostBuilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTradingPostBuilt(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetBuildingColorInSlotLinear_Validate(uint8 , FLinearColor , FLinearColor ); \
	virtual void Server_SetBuildingColorInSlotLinear_Implementation(uint8 slotIdx, FLinearColor colorPrimary_Linear, FLinearColor colorSecondary_Linear); \
 \
	DECLARE_FUNCTION(execOnRep_PlannedRestartTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlannedRestartTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OnlineSessionVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnlineSessionVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OnlineSessionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnlineSessionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsItemEverPickedUp) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsItemEverPickedUp(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BuildingColorSlotSecondary_Linear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BuildingColorSlotSecondary_Linear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BuildingColorSlotPrimary_Linear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BuildingColorSlotPrimary_Linear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetBuildingColorInSlotLinear) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIdx); \
		P_GET_STRUCT(FLinearColor,Z_Param_colorPrimary_Linear); \
		P_GET_STRUCT(FLinearColor,Z_Param_colorSecondary_Linear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetBuildingColorInSlotLinear_Validate(Z_Param_slotIdx,Z_Param_colorPrimary_Linear,Z_Param_colorSecondary_Linear)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetBuildingColorInSlotLinear_Validate")); \
			return; \
		} \
		P_THIS->Server_SetBuildingColorInSlotLinear_Implementation(Z_Param_slotIdx,Z_Param_colorPrimary_Linear,Z_Param_colorSecondary_Linear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnlineSessionName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnlineSessionName(Z_Param_inName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOnlineSessionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetOnlineSessionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSessionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalPlayDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTotalPlayDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessageToPlayer) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_GET_OBJECT(APlayerController,Z_Param_controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendMessageToPlayer(Z_Param_inMessage,Z_Param_controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessageToAllPlayers) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendMessageToAllPlayers(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyPlayerAdded) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_inPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyPlayerAdded(Z_Param_inPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheatNoCost) \
	{ \
		P_GET_UBOOL(Z_Param_noCost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCheatNoCost(Z_Param_noCost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheatNoPower) \
	{ \
		P_GET_UBOOL(Z_Param_noPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCheatNoPower(Z_Param_noPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCheatNoPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCheatNoPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCheatNoCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCheatNoCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MapAreaVisited) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MapAreaVisited(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMapAreaVisisted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inArea); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMapAreaVisisted(Z_Param_inArea); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisitedMapAreas) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGMapArea> ,Z_Param_Out_out_VisitedAreas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVisitedMapAreas(Z_Param_Out_out_VisitedAreas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGActorRepresentationManager**)Z_Param__Result=P_THIS->GetActorRepresentationManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTutorialIntroManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTutorialIntroManager**)Z_Param__Result=P_THIS->GetTutorialIntroManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResearchManager**)Z_Param__Result=P_THIS->GetResearchManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhaseManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGGamePhaseManager**)Z_Param__Result=P_THIS->GetGamePhaseManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSchematicManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGSchematicManager**)Z_Param__Result=P_THIS->GetSchematicManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsSpaceElevatorBuilt) \
	{ \
		P_GET_UBOOL(Z_Param_isSpaceElevatorBuilt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsSpaceElevatorBuilt(Z_Param_isSpaceElevatorBuilt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpaceElevatorBuilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpaceElevatorBuilt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasInitalTradingPostLandAnimPlayed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasInitalTradingPostLandAnimPlayed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInitalTradingPostLandAnimPlayed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasInitalTradingPostLandAnimPlayed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTradingPostBuilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTradingPostBuilt(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_EVENT_PARMS \
	struct FGGameState_eventServer_SetBuildingColorInSlotLinear_Parms \
	{ \
		uint8 slotIdx; \
		FLinearColor colorPrimary_Linear; \
		FLinearColor colorSecondary_Linear; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGGameState, NO_API)


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGGameState(); \
	friend struct Z_Construct_UClass_AFGGameState_Statics; \
public: \
	DECLARE_CLASS(AFGGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGGameState) \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGGameState*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_INCLASS \
private: \
	static void StaticRegisterNativesAFGGameState(); \
	friend struct Z_Construct_UClass_AFGGameState_Statics; \
public: \
	DECLARE_CLASS(AFGGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGGameState) \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGGameState*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGGameState(AFGGameState&&); \
	NO_API AFGGameState(const AFGGameState&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGGameState(AFGGameState&&); \
	NO_API AFGGameState(const AFGGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGGameState)


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTimeSubsystem() { return STRUCT_OFFSET(AFGGameState, mTimeSubsystem); } \
	FORCEINLINE static uint32 __PPO__mStorySubsystem() { return STRUCT_OFFSET(AFGGameState, mStorySubsystem); } \
	FORCEINLINE static uint32 __PPO__mRailroadSubsystem() { return STRUCT_OFFSET(AFGGameState, mRailroadSubsystem); } \
	FORCEINLINE static uint32 __PPO__mCircuitSubsystem() { return STRUCT_OFFSET(AFGGameState, mCircuitSubsystem); } \
	FORCEINLINE static uint32 __PPO__mRecipeManager() { return STRUCT_OFFSET(AFGGameState, mRecipeManager); } \
	FORCEINLINE static uint32 __PPO__mSchematicManager() { return STRUCT_OFFSET(AFGGameState, mSchematicManager); } \
	FORCEINLINE static uint32 __PPO__mGamePhaseManager() { return STRUCT_OFFSET(AFGGameState, mGamePhaseManager); } \
	FORCEINLINE static uint32 __PPO__mResearchManager() { return STRUCT_OFFSET(AFGGameState, mResearchManager); } \
	FORCEINLINE static uint32 __PPO__mTutorialIntroManager() { return STRUCT_OFFSET(AFGGameState, mTutorialIntroManager); } \
	FORCEINLINE static uint32 __PPO__mActorRepresentationManager() { return STRUCT_OFFSET(AFGGameState, mActorRepresentationManager); } \
	FORCEINLINE static uint32 __PPO__mMapManager() { return STRUCT_OFFSET(AFGGameState, mMapManager); } \
	FORCEINLINE static uint32 __PPO__mRadioactivitySubsystem() { return STRUCT_OFFSET(AFGGameState, mRadioactivitySubsystem); } \
	FORCEINLINE static uint32 __PPO__mChatManager() { return STRUCT_OFFSET(AFGGameState, mChatManager); } \
	FORCEINLINE static uint32 __PPO__mCentralStorageSubsystem() { return STRUCT_OFFSET(AFGGameState, mCentralStorageSubsystem); } \
	FORCEINLINE static uint32 __PPO__mPipeSubsystem() { return STRUCT_OFFSET(AFGGameState, mPipeSubsystem); } \
	FORCEINLINE static uint32 __PPO__mUnlockSubsystem() { return STRUCT_OFFSET(AFGGameState, mUnlockSubsystem); } \
	FORCEINLINE static uint32 __PPO__mResourceSinkSubsystem() { return STRUCT_OFFSET(AFGGameState, mResourceSinkSubsystem); } \
	FORCEINLINE static uint32 __PPO__mItemRegrowSubsystem() { return STRUCT_OFFSET(AFGGameState, mItemRegrowSubsystem); } \
	FORCEINLINE static uint32 __PPO__mVehicleSubsystem() { return STRUCT_OFFSET(AFGGameState, mVehicleSubsystem); } \
	FORCEINLINE static uint32 __PPO__mVisitedMapAreas() { return STRUCT_OFFSET(AFGGameState, mVisitedMapAreas); } \
	FORCEINLINE static uint32 __PPO__mPickedUpItems() { return STRUCT_OFFSET(AFGGameState, mPickedUpItems); } \
	FORCEINLINE static uint32 __PPO__mPlayDurationWhenLoaded() { return STRUCT_OFFSET(AFGGameState, mPlayDurationWhenLoaded); } \
	FORCEINLINE static uint32 __PPO__mReplicatedSessionName() { return STRUCT_OFFSET(AFGGameState, mReplicatedSessionName); } \
	FORCEINLINE static uint32 __PPO__mReplicatedOnlineSessionName() { return STRUCT_OFFSET(AFGGameState, mReplicatedOnlineSessionName); } \
	FORCEINLINE static uint32 __PPO__mReplicadedOnlineNumPubliclConnections() { return STRUCT_OFFSET(AFGGameState, mReplicadedOnlineNumPubliclConnections); } \
	FORCEINLINE static uint32 __PPO__mBuildingColorSlotsPrimary_Linear() { return STRUCT_OFFSET(AFGGameState, mBuildingColorSlotsPrimary_Linear); } \
	FORCEINLINE static uint32 __PPO__mBuildingColorSlotsSecondary_Linear() { return STRUCT_OFFSET(AFGGameState, mBuildingColorSlotsSecondary_Linear); } \
	FORCEINLINE static uint32 __PPO__mPlannedRestartTime() { return STRUCT_OFFSET(AFGGameState, mPlannedRestartTime); } \
	FORCEINLINE static uint32 __PPO__mOnRestartTimeNotification() { return STRUCT_OFFSET(AFGGameState, mOnRestartTimeNotification); } \
	FORCEINLINE static uint32 __PPO__mHubPartClass() { return STRUCT_OFFSET(AFGGameState, mHubPartClass); } \
	FORCEINLINE static uint32 __PPO__mForceAddHubPartOnSpawn() { return STRUCT_OFFSET(AFGGameState, mForceAddHubPartOnSpawn); } \
	FORCEINLINE static uint32 __PPO__mCheatNoCost() { return STRUCT_OFFSET(AFGGameState, mCheatNoCost); } \
	FORCEINLINE static uint32 __PPO__mCheatNoPower() { return STRUCT_OFFSET(AFGGameState, mCheatNoPower); } \
	FORCEINLINE static uint32 __PPO__mIsTradingPostBuilt() { return STRUCT_OFFSET(AFGGameState, mIsTradingPostBuilt); } \
	FORCEINLINE static uint32 __PPO__mHasInitalTradingPostLandAnimPlayed() { return STRUCT_OFFSET(AFGGameState, mHasInitalTradingPostLandAnimPlayed); } \
	FORCEINLINE static uint32 __PPO__mIsSpaceElevatorBuilt() { return STRUCT_OFFSET(AFGGameState, mIsSpaceElevatorBuilt); }


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_29_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGameState_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
