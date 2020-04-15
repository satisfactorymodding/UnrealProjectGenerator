// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
class UFGSchematicCategory;
struct FLinearColor;
enum class ERepresentationType : uint8;
class UFGItemCategory;
class UFGRecipe;
class UFGHotbarShortcut;
class UFGMessageBase;
struct FMessageData;
enum class EMessageType : uint8;
class UFGTutorialSubsystem;
struct FUniqueNetIdRepl;
#ifdef FACTORYGAME_FGPlayerState_generated_h
#error "FGPlayerState.generated.h already included, missing '#pragma once' in FGPlayerState.h"
#endif
#define FACTORYGAME_FGPlayerState_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPresetHotbar_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FPresetHotbar>();

#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHotbar_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FHotbar>();

#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMessageData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FMessageData>();

#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlotData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSlotData>();

#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_21_DELEGATE \
struct _Script_FactoryGame_eventOnBuildableConstructedNew_Parms \
{ \
	TSubclassOf<UFGItemDescriptor>  itemDesc; \
}; \
static inline void FOnBuildableConstructedNew_DelegateWrapper(const FMulticastScriptDelegate& OnBuildableConstructedNew, TSubclassOf<UFGItemDescriptor>  itemDesc) \
{ \
	_Script_FactoryGame_eventOnBuildableConstructedNew_Parms Parms; \
	Parms.itemDesc=itemDesc; \
	OnBuildableConstructedNew.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_RPC_WRAPPERS \
	virtual bool Server_SetCompassFilter_Validate(ERepresentationType , bool ); \
	virtual void Server_SetCompassFilter_Implementation(ERepresentationType representationType, bool visible); \
	virtual bool Server_SetMapFilter_Validate(ERepresentationType , bool ); \
	virtual void Server_SetMapFilter_Implementation(ERepresentationType representationType, bool visible); \
	virtual bool Server_SetItemCategoryCollapsed_Validate(TSubclassOf<UFGItemCategory>  , bool ); \
	virtual void Server_SetItemCategoryCollapsed_Implementation(TSubclassOf<UFGItemCategory>  itemCategory, bool collapsed); \
	virtual bool Server_SetOnlyShowAffordableRecipes_Validate(bool ); \
	virtual void Server_SetOnlyShowAffordableRecipes_Implementation(bool enabled); \
	virtual bool Server_RemoveRecipe_Validate(TSubclassOf<UFGRecipe>  ); \
	virtual void Server_RemoveRecipe_Implementation(TSubclassOf<UFGRecipe>  recipe); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentHotbarIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentHotbarIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HotbarShortcuts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HotbarShortcuts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLastSelectedResourceSinkShopCategory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_selectedCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLastSelectedResourceSinkShopCategory(Z_Param_selectedCategory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastSelectedResourceSinkShopCategory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematicCategory> *)Z_Param__Result=P_THIS->GetLastSelectedResourceSinkShopCategory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServerAdmin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsServerAdmin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNametagColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetNametagColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPingColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetPingColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetCompassFilter) \
	{ \
		P_GET_ENUM(ERepresentationType,Z_Param_representationType); \
		P_GET_UBOOL(Z_Param_visible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetCompassFilter_Validate(ERepresentationType(Z_Param_representationType),Z_Param_visible)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetCompassFilter_Validate")); \
			return; \
		} \
		P_THIS->Server_SetCompassFilter_Implementation(ERepresentationType(Z_Param_representationType),Z_Param_visible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetMapFilter) \
	{ \
		P_GET_ENUM(ERepresentationType,Z_Param_representationType); \
		P_GET_UBOOL(Z_Param_visible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetMapFilter_Validate(ERepresentationType(Z_Param_representationType),Z_Param_visible)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetMapFilter_Validate")); \
			return; \
		} \
		P_THIS->Server_SetMapFilter_Implementation(ERepresentationType(Z_Param_representationType),Z_Param_visible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetItemCategoryCollapsed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemCategory); \
		P_GET_UBOOL(Z_Param_collapsed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetItemCategoryCollapsed_Validate(Z_Param_itemCategory,Z_Param_collapsed)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetItemCategoryCollapsed_Validate")); \
			return; \
		} \
		P_THIS->Server_SetItemCategoryCollapsed_Implementation(Z_Param_itemCategory,Z_Param_collapsed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemCategoryCollapsed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemCategory); \
		P_GET_UBOOL(Z_Param_collapsed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetItemCategoryCollapsed(Z_Param_itemCategory,Z_Param_collapsed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollapsedItemCategories) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemCategory> >*)Z_Param__Result=P_THIS->GetCollapsedItemCategories(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetOnlyShowAffordableRecipes) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetOnlyShowAffordableRecipes_Validate(Z_Param_enabled)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetOnlyShowAffordableRecipes_Validate")); \
			return; \
		} \
		P_THIS->Server_SetOnlyShowAffordableRecipes_Implementation(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnlyShowAffordableRecipes) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnlyShowAffordableRecipes(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOnlyShowAffordableRecipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetOnlyShowAffordableRecipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddArmSlots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_slotsToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddArmSlots(Z_Param_slotsToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumArmSlots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumArmSlots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RemoveRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RemoveRecipe_Validate(Z_Param_recipe)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RemoveRecipe_Validate")); \
			return; \
		} \
		P_THIS->Server_RemoveRecipe_Implementation(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNewRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_newRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNewRecipes(Z_Param_Out_out_newRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateShortcut) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_shortcutClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGHotbarShortcut**)Z_Param__Result=P_THIS->CreateShortcut(Z_Param_shortcutClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMessageData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMessageData>*)Z_Param__Result=P_THIS->GetAllMessageData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMessages) \
	{ \
		P_GET_ENUM(EMessageType,Z_Param_messageType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGMessageBase> >*)Z_Param__Result=P_THIS->GetAllMessages(EMessageType(Z_Param_messageType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTutorialSubsystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGTutorialSubsystem**)Z_Param__Result=P_THIS->GetTutorialSubsystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSteamID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqeNetId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetUniqeNetId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUserID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUserName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSlotNum(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetCompassFilter_Validate(ERepresentationType , bool ); \
	virtual void Server_SetCompassFilter_Implementation(ERepresentationType representationType, bool visible); \
	virtual bool Server_SetMapFilter_Validate(ERepresentationType , bool ); \
	virtual void Server_SetMapFilter_Implementation(ERepresentationType representationType, bool visible); \
	virtual bool Server_SetItemCategoryCollapsed_Validate(TSubclassOf<UFGItemCategory>  , bool ); \
	virtual void Server_SetItemCategoryCollapsed_Implementation(TSubclassOf<UFGItemCategory>  itemCategory, bool collapsed); \
	virtual bool Server_SetOnlyShowAffordableRecipes_Validate(bool ); \
	virtual void Server_SetOnlyShowAffordableRecipes_Implementation(bool enabled); \
	virtual bool Server_RemoveRecipe_Validate(TSubclassOf<UFGRecipe>  ); \
	virtual void Server_RemoveRecipe_Implementation(TSubclassOf<UFGRecipe>  recipe); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentHotbarIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentHotbarIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HotbarShortcuts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HotbarShortcuts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLastSelectedResourceSinkShopCategory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_selectedCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLastSelectedResourceSinkShopCategory(Z_Param_selectedCategory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastSelectedResourceSinkShopCategory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematicCategory> *)Z_Param__Result=P_THIS->GetLastSelectedResourceSinkShopCategory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServerAdmin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsServerAdmin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNametagColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetNametagColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPingColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetPingColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetCompassFilter) \
	{ \
		P_GET_ENUM(ERepresentationType,Z_Param_representationType); \
		P_GET_UBOOL(Z_Param_visible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetCompassFilter_Validate(ERepresentationType(Z_Param_representationType),Z_Param_visible)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetCompassFilter_Validate")); \
			return; \
		} \
		P_THIS->Server_SetCompassFilter_Implementation(ERepresentationType(Z_Param_representationType),Z_Param_visible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetMapFilter) \
	{ \
		P_GET_ENUM(ERepresentationType,Z_Param_representationType); \
		P_GET_UBOOL(Z_Param_visible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetMapFilter_Validate(ERepresentationType(Z_Param_representationType),Z_Param_visible)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetMapFilter_Validate")); \
			return; \
		} \
		P_THIS->Server_SetMapFilter_Implementation(ERepresentationType(Z_Param_representationType),Z_Param_visible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetItemCategoryCollapsed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemCategory); \
		P_GET_UBOOL(Z_Param_collapsed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetItemCategoryCollapsed_Validate(Z_Param_itemCategory,Z_Param_collapsed)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetItemCategoryCollapsed_Validate")); \
			return; \
		} \
		P_THIS->Server_SetItemCategoryCollapsed_Implementation(Z_Param_itemCategory,Z_Param_collapsed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemCategoryCollapsed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemCategory); \
		P_GET_UBOOL(Z_Param_collapsed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetItemCategoryCollapsed(Z_Param_itemCategory,Z_Param_collapsed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollapsedItemCategories) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemCategory> >*)Z_Param__Result=P_THIS->GetCollapsedItemCategories(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetOnlyShowAffordableRecipes) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetOnlyShowAffordableRecipes_Validate(Z_Param_enabled)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetOnlyShowAffordableRecipes_Validate")); \
			return; \
		} \
		P_THIS->Server_SetOnlyShowAffordableRecipes_Implementation(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnlyShowAffordableRecipes) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnlyShowAffordableRecipes(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOnlyShowAffordableRecipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetOnlyShowAffordableRecipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddArmSlots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_slotsToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddArmSlots(Z_Param_slotsToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumArmSlots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumArmSlots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RemoveRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RemoveRecipe_Validate(Z_Param_recipe)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RemoveRecipe_Validate")); \
			return; \
		} \
		P_THIS->Server_RemoveRecipe_Implementation(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNewRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_newRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNewRecipes(Z_Param_Out_out_newRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateShortcut) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_shortcutClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGHotbarShortcut**)Z_Param__Result=P_THIS->CreateShortcut(Z_Param_shortcutClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMessageData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMessageData>*)Z_Param__Result=P_THIS->GetAllMessageData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMessages) \
	{ \
		P_GET_ENUM(EMessageType,Z_Param_messageType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGMessageBase> >*)Z_Param__Result=P_THIS->GetAllMessages(EMessageType(Z_Param_messageType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTutorialSubsystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGTutorialSubsystem**)Z_Param__Result=P_THIS->GetTutorialSubsystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSteamID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqeNetId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetUniqeNetId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUserID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUserName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSlotNum(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_EVENT_PARMS \
	struct FGPlayerState_eventServer_RemoveRecipe_Parms \
	{ \
		TSubclassOf<UFGRecipe>  recipe; \
	}; \
	struct FGPlayerState_eventServer_SetCompassFilter_Parms \
	{ \
		ERepresentationType representationType; \
		bool visible; \
	}; \
	struct FGPlayerState_eventServer_SetItemCategoryCollapsed_Parms \
	{ \
		TSubclassOf<UFGItemCategory>  itemCategory; \
		bool collapsed; \
	}; \
	struct FGPlayerState_eventServer_SetMapFilter_Parms \
	{ \
		ERepresentationType representationType; \
		bool visible; \
	}; \
	struct FGPlayerState_eventServer_SetOnlyShowAffordableRecipes_Parms \
	{ \
		bool enabled; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGPlayerState, NO_API)


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGPlayerState(); \
	friend struct Z_Construct_UClass_AFGPlayerState_Statics; \
public: \
	DECLARE_CLASS(AFGPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayerState) \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGPlayerState*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_INCLASS \
private: \
	static void StaticRegisterNativesAFGPlayerState(); \
	friend struct Z_Construct_UClass_AFGPlayerState_Statics; \
public: \
	DECLARE_CLASS(AFGPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayerState) \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGPlayerState*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayerState(AFGPlayerState&&); \
	NO_API AFGPlayerState(const AFGPlayerState&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayerState(AFGPlayerState&&); \
	NO_API AFGPlayerState(const AFGPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGPlayerState)


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mHotbars() { return STRUCT_OFFSET(AFGPlayerState, mHotbars); } \
	FORCEINLINE static uint32 __PPO__mPresetHotbars() { return STRUCT_OFFSET(AFGPlayerState, mPresetHotbars); } \
	FORCEINLINE static uint32 __PPO__mCurrentHotbarIndex() { return STRUCT_OFFSET(AFGPlayerState, mCurrentHotbarIndex); } \
	FORCEINLINE static uint32 __PPO__mDefaultRecipeShortcuts() { return STRUCT_OFFSET(AFGPlayerState, mDefaultRecipeShortcuts); } \
	FORCEINLINE static uint32 __PPO__mNewRecipes() { return STRUCT_OFFSET(AFGPlayerState, mNewRecipes); } \
	FORCEINLINE static uint32 __PPO__mSlotNum() { return STRUCT_OFFSET(AFGPlayerState, mSlotNum); } \
	FORCEINLINE static uint32 __PPO__mSlotData() { return STRUCT_OFFSET(AFGPlayerState, mSlotData); } \
	FORCEINLINE static uint32 __PPO__mOwnedPawn() { return STRUCT_OFFSET(AFGPlayerState, mOwnedPawn); } \
	FORCEINLINE static uint32 __PPO__mTutorialSubsystem() { return STRUCT_OFFSET(AFGPlayerState, mTutorialSubsystem); } \
	FORCEINLINE static uint32 __PPO__mTutorialSubsystemClass() { return STRUCT_OFFSET(AFGPlayerState, mTutorialSubsystemClass); } \
	FORCEINLINE static uint32 __PPO__mMessageData() { return STRUCT_OFFSET(AFGPlayerState, mMessageData); } \
	FORCEINLINE static uint32 __PPO__mRememberedFirstTimeEquipmentClasses() { return STRUCT_OFFSET(AFGPlayerState, mRememberedFirstTimeEquipmentClasses); } \
	FORCEINLINE static uint32 __PPO__mNumArmSlots() { return STRUCT_OFFSET(AFGPlayerState, mNumArmSlots); } \
	FORCEINLINE static uint32 __PPO__mOnlyShowAffordableRecipes() { return STRUCT_OFFSET(AFGPlayerState, mOnlyShowAffordableRecipes); } \
	FORCEINLINE static uint32 __PPO__mCollapsedItemCategories() { return STRUCT_OFFSET(AFGPlayerState, mCollapsedItemCategories); } \
	FORCEINLINE static uint32 __PPO__mFilteredOutMapTypes() { return STRUCT_OFFSET(AFGPlayerState, mFilteredOutMapTypes); } \
	FORCEINLINE static uint32 __PPO__mFilteredOutCompassTypes() { return STRUCT_OFFSET(AFGPlayerState, mFilteredOutCompassTypes); } \
	FORCEINLINE static uint32 __PPO__mLastSelectedResourceSinkShopCategory() { return STRUCT_OFFSET(AFGPlayerState, mLastSelectedResourceSinkShopCategory); }


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_130_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPlayerState_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
