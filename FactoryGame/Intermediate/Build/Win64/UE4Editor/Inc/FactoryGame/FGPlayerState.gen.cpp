// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGPlayerState.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPlayerState() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPresetHotbar();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FHotbar();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHotbarShortcut_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMessageData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageBase_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSlotData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerState_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_AddArmSlots();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_AddMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_CreateShortcut();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetAllMessageData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetAllMessages();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EMessageType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemCategory_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematicCategory_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetNametagColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetNewRecipes();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetPingColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetSlotNum();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetSteamID();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGTutorialSubsystem_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetUserID();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetUserName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_IsServerAdmin();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_OnRep_CurrentHotbarIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_ReadMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_RemoveMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_RemoveRecipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ERepresentationType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnBuildableConstructedNew_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemDesc;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemDesc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::NewProp_itemDesc = { "itemDesc", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnBuildableConstructedNew_Parms, itemDesc), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::NewProp_itemDesc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnBuildableConstructedNew__DelegateSignature", sizeof(_Script_FactoryGame_eventOnBuildableConstructedNew_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FPresetHotbar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPresetHotbar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresetHotbar, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PresetHotbar"), sizeof(FPresetHotbar), Get_Z_Construct_UScriptStruct_FPresetHotbar_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FPresetHotbar>()
{
	return FPresetHotbar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPresetHotbar(FPresetHotbar::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PresetHotbar"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPresetHotbar
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPresetHotbar()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PresetHotbar")),new UScriptStruct::TCppStructOps<FPresetHotbar>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPresetHotbar;
	struct Z_Construct_UScriptStruct_FPresetHotbar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hotbar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hotbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IconIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PresetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetHotbar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "A preset represents a way for players to create pre made hotbars they can replace there current hotbar with" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresetHotbar>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_Hotbar_MetaData[] = {
		{ "Category", "PresetHotbar" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "The hotbar shortcuts for this preset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_Hotbar = { "Hotbar", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetHotbar, Hotbar), Z_Construct_UScriptStruct_FHotbar, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_Hotbar_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_Hotbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_IconIndex_MetaData[] = {
		{ "Category", "PresetHotbar" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "The shortcut in the hotbar with this index will decide the icon for the preset" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_IconIndex = { "IconIndex", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetHotbar, IconIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_IconIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_IconIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_PresetName_MetaData[] = {
		{ "Category", "PresetHotbar" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetHotbar, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_PresetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_PresetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresetHotbar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_Hotbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_IconIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetHotbar_Statics::NewProp_PresetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresetHotbar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PresetHotbar",
		sizeof(FPresetHotbar),
		alignof(FPresetHotbar),
		Z_Construct_UScriptStruct_FPresetHotbar_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetHotbar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetHotbar_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetHotbar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPresetHotbar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPresetHotbar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PresetHotbar"), sizeof(FPresetHotbar), Get_Z_Construct_UScriptStruct_FPresetHotbar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPresetHotbar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPresetHotbar_Hash() { return 3255257548U; }
class UScriptStruct* FHotbar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FHotbar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHotbar, Z_Construct_UPackage__Script_FactoryGame(), TEXT("Hotbar"), sizeof(FHotbar), Get_Z_Construct_UScriptStruct_FHotbar_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FHotbar>()
{
	return FHotbar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHotbar(FHotbar::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("Hotbar"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFHotbar
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFHotbar()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Hotbar")),new UScriptStruct::TCppStructOps<FHotbar>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFHotbar;
	struct Z_Construct_UScriptStruct_FHotbar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotbarShortcuts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HotbarShortcuts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HotbarShortcuts_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotbar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "A hotbar with a set of shortcuts that can be assigned and executed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHotbar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHotbar>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotbar_Statics::NewProp_HotbarShortcuts_MetaData[] = {
		{ "Category", "Hotbar" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHotbar_Statics::NewProp_HotbarShortcuts = { "HotbarShortcuts", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotbar, HotbarShortcuts), METADATA_PARAMS(Z_Construct_UScriptStruct_FHotbar_Statics::NewProp_HotbarShortcuts_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotbar_Statics::NewProp_HotbarShortcuts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHotbar_Statics::NewProp_HotbarShortcuts_Inner = { "HotbarShortcuts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGHotbarShortcut_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHotbar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotbar_Statics::NewProp_HotbarShortcuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotbar_Statics::NewProp_HotbarShortcuts_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHotbar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"Hotbar",
		sizeof(FHotbar),
		alignof(FHotbar),
		Z_Construct_UScriptStruct_FHotbar_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHotbar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHotbar_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotbar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHotbar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHotbar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Hotbar"), sizeof(FHotbar), Get_Z_Construct_UScriptStruct_FHotbar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHotbar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHotbar_Hash() { return 203999653U; }
class UScriptStruct* FMessageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMessageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MessageData"), sizeof(FMessageData), Get_Z_Construct_UScriptStruct_FMessageData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FMessageData>()
{
	return FMessageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMessageData(FMessageData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("MessageData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFMessageData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFMessageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MessageData")),new UScriptStruct::TCppStructOps<FMessageData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFMessageData;
	struct Z_Construct_UScriptStruct_FMessageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MessageClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasRead_MetaData[];
#endif
		static void NewProp_WasRead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasRead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Data associated with a message" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_MessageClass_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "What class is the message" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_MessageClass = { "MessageClass", nullptr, (EPropertyFlags)0x0014000001010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessageData, MessageClass), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_MessageClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_MessageClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Has message been read" },
	};
#endif
	void Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_SetBit(void* Obj)
	{
		((FMessageData*)Obj)->WasRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead = { "WasRead", nullptr, (EPropertyFlags)0x0010000001010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMessageData), &Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_MessageClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MessageData",
		sizeof(FMessageData),
		alignof(FMessageData),
		Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMessageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MessageData"), sizeof(FMessageData), Get_Z_Construct_UScriptStruct_FMessageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMessageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMessageData_Hash() { return 490320232U; }
class UScriptStruct* FSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SlotData"), sizeof(FSlotData), Get_Z_Construct_UScriptStruct_FSlotData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSlotData>()
{
	return FSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlotData(FSlotData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SlotData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSlotData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSlotData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlotData")),new UScriptStruct::TCppStructOps<FSlotData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSlotData;
	struct Z_Construct_UScriptStruct_FSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NametagColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NametagColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PingColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Collected data for a slot that is specified" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_NametagColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "The color of the players nametag above their head, and in the UI" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_NametagColor = { "NametagColor", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotData, NametagColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_NametagColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_NametagColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "The color of the players ping" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor = { "PingColor", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotData, PingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_NametagColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SlotData",
		sizeof(FSlotData),
		alignof(FSlotData),
		Z_Construct_UScriptStruct_FSlotData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlotData"), sizeof(FSlotData), Get_Z_Construct_UScriptStruct_FSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlotData_Hash() { return 2838140562U; }
	static FName NAME_AFGPlayerState_Server_RemoveRecipe = FName(TEXT("Server_RemoveRecipe"));
	void AFGPlayerState::Server_RemoveRecipe(TSubclassOf<UFGRecipe>  recipe)
	{
		FGPlayerState_eventServer_RemoveRecipe_Parms Parms;
		Parms.recipe=recipe;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerState_Server_RemoveRecipe),&Parms);
	}
	static FName NAME_AFGPlayerState_Server_SetCompassFilter = FName(TEXT("Server_SetCompassFilter"));
	void AFGPlayerState::Server_SetCompassFilter(ERepresentationType representationType, bool visible)
	{
		FGPlayerState_eventServer_SetCompassFilter_Parms Parms;
		Parms.representationType=representationType;
		Parms.visible=visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerState_Server_SetCompassFilter),&Parms);
	}
	static FName NAME_AFGPlayerState_Server_SetItemCategoryCollapsed = FName(TEXT("Server_SetItemCategoryCollapsed"));
	void AFGPlayerState::Server_SetItemCategoryCollapsed(TSubclassOf<UFGItemCategory>  itemCategory, bool collapsed)
	{
		FGPlayerState_eventServer_SetItemCategoryCollapsed_Parms Parms;
		Parms.itemCategory=itemCategory;
		Parms.collapsed=collapsed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerState_Server_SetItemCategoryCollapsed),&Parms);
	}
	static FName NAME_AFGPlayerState_Server_SetMapFilter = FName(TEXT("Server_SetMapFilter"));
	void AFGPlayerState::Server_SetMapFilter(ERepresentationType representationType, bool visible)
	{
		FGPlayerState_eventServer_SetMapFilter_Parms Parms;
		Parms.representationType=representationType;
		Parms.visible=visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerState_Server_SetMapFilter),&Parms);
	}
	static FName NAME_AFGPlayerState_Server_SetOnlyShowAffordableRecipes = FName(TEXT("Server_SetOnlyShowAffordableRecipes"));
	void AFGPlayerState::Server_SetOnlyShowAffordableRecipes(bool enabled)
	{
		FGPlayerState_eventServer_SetOnlyShowAffordableRecipes_Parms Parms;
		Parms.enabled=enabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerState_Server_SetOnlyShowAffordableRecipes),&Parms);
	}
	void AFGPlayerState::StaticRegisterNativesAFGPlayerState()
	{
		UClass* Class = AFGPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddArmSlots", &AFGPlayerState::execAddArmSlots },
			{ "AddMessage", &AFGPlayerState::execAddMessage },
			{ "CreateShortcut", &AFGPlayerState::execCreateShortcut },
			{ "GetAllMessageData", &AFGPlayerState::execGetAllMessageData },
			{ "GetAllMessages", &AFGPlayerState::execGetAllMessages },
			{ "GetCollapsedItemCategories", &AFGPlayerState::execGetCollapsedItemCategories },
			{ "GetLastSelectedResourceSinkShopCategory", &AFGPlayerState::execGetLastSelectedResourceSinkShopCategory },
			{ "GetNametagColor", &AFGPlayerState::execGetNametagColor },
			{ "GetNewRecipes", &AFGPlayerState::execGetNewRecipes },
			{ "GetNumArmSlots", &AFGPlayerState::execGetNumArmSlots },
			{ "GetOnlyShowAffordableRecipes", &AFGPlayerState::execGetOnlyShowAffordableRecipes },
			{ "GetPingColor", &AFGPlayerState::execGetPingColor },
			{ "GetSlotNum", &AFGPlayerState::execGetSlotNum },
			{ "GetSteamID", &AFGPlayerState::execGetSteamID },
			{ "GetTutorialSubsystem", &AFGPlayerState::execGetTutorialSubsystem },
			{ "GetUniqeNetId", &AFGPlayerState::execGetUniqeNetId },
			{ "GetUserID", &AFGPlayerState::execGetUserID },
			{ "GetUserName", &AFGPlayerState::execGetUserName },
			{ "IsServerAdmin", &AFGPlayerState::execIsServerAdmin },
			{ "OnRep_CurrentHotbarIndex", &AFGPlayerState::execOnRep_CurrentHotbarIndex },
			{ "OnRep_HotbarShortcuts", &AFGPlayerState::execOnRep_HotbarShortcuts },
			{ "ReadMessage", &AFGPlayerState::execReadMessage },
			{ "RemoveMessage", &AFGPlayerState::execRemoveMessage },
			{ "RemoveRecipe", &AFGPlayerState::execRemoveRecipe },
			{ "Server_RemoveRecipe", &AFGPlayerState::execServer_RemoveRecipe },
			{ "Server_SetCompassFilter", &AFGPlayerState::execServer_SetCompassFilter },
			{ "Server_SetItemCategoryCollapsed", &AFGPlayerState::execServer_SetItemCategoryCollapsed },
			{ "Server_SetMapFilter", &AFGPlayerState::execServer_SetMapFilter },
			{ "Server_SetOnlyShowAffordableRecipes", &AFGPlayerState::execServer_SetOnlyShowAffordableRecipes },
			{ "SetItemCategoryCollapsed", &AFGPlayerState::execSetItemCategoryCollapsed },
			{ "SetLastSelectedResourceSinkShopCategory", &AFGPlayerState::execSetLastSelectedResourceSinkShopCategory },
			{ "SetOnlyShowAffordableRecipes", &AFGPlayerState::execSetOnlyShowAffordableRecipes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics
	{
		struct FGPlayerState_eventAddArmSlots_Parms
		{
			int32 slotsToAdd;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_slotsToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::NewProp_slotsToAdd = { "slotsToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventAddArmSlots_Parms, slotsToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::NewProp_slotsToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Equipment" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Adds more arm slots ( can also be a negative number to decrease number of slots )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "AddArmSlots", sizeof(FGPlayerState_eventAddArmSlots_Parms), Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_AddArmSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics
	{
		struct FGPlayerState_eventAddMessage_Parms
		{
			TSubclassOf<UFGMessageBase>  inMessage;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::NewProp_inMessage = { "inMessage", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventAddMessage_Parms, inMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "AddMessage", sizeof(FGPlayerState_eventAddMessage_Parms), Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_AddMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics
	{
		struct FGPlayerState_eventCreateShortcut_Parms
		{
			TSubclassOf<UFGHotbarShortcut>  shortcutClass;
			UFGHotbarShortcut* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_shortcutClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventCreateShortcut_Parms, ReturnValue), Z_Construct_UClass_UFGHotbarShortcut_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::NewProp_shortcutClass = { "shortcutClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventCreateShortcut_Parms, shortcutClass), Z_Construct_UClass_UFGHotbarShortcut_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::NewProp_shortcutClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "shortcutClass" },
		{ "DisplayName", "CreateShortcut" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Create a shortcut of a specified class, only valid on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "CreateShortcut", sizeof(FGPlayerState_eventCreateShortcut_Parms), Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_CreateShortcut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics
	{
		struct FGPlayerState_eventGetAllMessageData_Parms
		{
			TArray<FMessageData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetAllMessageData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMessageData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Message" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Gets all messagedata from messages we have received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetAllMessageData", sizeof(FGPlayerState_eventGetAllMessageData_Parms), Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetAllMessageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics
	{
		struct FGPlayerState_eventGetAllMessages_Parms
		{
			EMessageType messageType;
			TArray<TSubclassOf<UFGMessageBase> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_messageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_messageType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetAllMessages_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_messageType = { "messageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetAllMessages_Parms, messageType), Z_Construct_UEnum_FactoryGame_EMessageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_messageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_messageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_messageType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Message" },
		{ "CPP_Default_messageType", "MT_UNDEFINED" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Gets all messages we have received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetAllMessages", sizeof(FGPlayerState_eventGetAllMessages_Parms), Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetAllMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics
	{
		struct FGPlayerState_eventGetCollapsedItemCategories_Parms
		{
			TArray<TSubclassOf<UFGItemCategory> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetCollapsedItemCategories_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGItemCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|ItemCategory" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Get the item categories that the user have collapsed in manufacturing widgets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetCollapsedItemCategories", sizeof(FGPlayerState_eventGetCollapsedItemCategories_Parms), Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics
	{
		struct FGPlayerState_eventGetLastSelectedResourceSinkShopCategory_Parms
		{
			TSubclassOf<UFGSchematicCategory>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetLastSelectedResourceSinkShopCategory_Parms, ReturnValue), Z_Construct_UClass_UFGSchematicCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Schematic" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetLastSelectedResourceSinkShopCategory", sizeof(FGPlayerState_eventGetLastSelectedResourceSinkShopCategory_Parms), Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics
	{
		struct FGPlayerState_eventGetNametagColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetNametagColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Color" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetNametagColor", sizeof(FGPlayerState_eventGetNametagColor_Parms), Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetNametagColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetNametagColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics
	{
		struct FGPlayerState_eventGetNewRecipes_Parms
		{
			TArray<TSubclassOf<UFGRecipe> > out_newRecipes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_newRecipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_newRecipes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::NewProp_out_newRecipes = { "out_newRecipes", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetNewRecipes_Parms, out_newRecipes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::NewProp_out_newRecipes_Inner = { "out_newRecipes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::NewProp_out_newRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::NewProp_out_newRecipes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipes" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Get all recipes that are new to the player. This is only for UI feedback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetNewRecipes", sizeof(FGPlayerState_eventGetNewRecipes_Parms), Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetNewRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetNewRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics
	{
		struct FGPlayerState_eventGetNumArmSlots_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetNumArmSlots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Equipment" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Gets number of slots for arm equipment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetNumArmSlots", sizeof(FGPlayerState_eventGetNumArmSlots_Parms), Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics
	{
		struct FGPlayerState_eventGetOnlyShowAffordableRecipes_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPlayerState_eventGetOnlyShowAffordableRecipes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerState_eventGetOnlyShowAffordableRecipes_Parms), &Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipes" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Get if we only should show affordable recipes in manufacturing widgets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetOnlyShowAffordableRecipes", sizeof(FGPlayerState_eventGetOnlyShowAffordableRecipes_Parms), Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics
	{
		struct FGPlayerState_eventGetPingColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetPingColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Color" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetPingColor", sizeof(FGPlayerState_eventGetPingColor_Parms), Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetPingColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetPingColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics
	{
		struct FGPlayerState_eventGetSlotNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetSlotNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slots" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Get the slot the player has claimed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetSlotNum", sizeof(FGPlayerState_eventGetSlotNum_Parms), Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetSlotNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics
	{
		struct FGPlayerState_eventGetSteamID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetSteamID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetUserID instead" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetSteamID", sizeof(FGPlayerState_eventGetSteamID_Parms), Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics
	{
		struct FGPlayerState_eventGetTutorialSubsystem_Parms
		{
			UFGTutorialSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetTutorialSubsystem_Parms, ReturnValue), Z_Construct_UClass_UFGTutorialSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Tutorial" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Gets the subsystem for BP usage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetTutorialSubsystem", sizeof(FGPlayerState_eventGetTutorialSubsystem_Parms), Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics
	{
		struct FGPlayerState_eventGetUniqeNetId_Parms
		{
			FUniqueNetIdRepl ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetUniqeNetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Networking" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Get the unique ID of the user from the online subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetUniqeNetId", sizeof(FGPlayerState_eventGetUniqeNetId_Parms), Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics
	{
		struct FGPlayerState_eventGetUserID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Networking" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Get the unique ID of the user from the online subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetUserID", sizeof(FGPlayerState_eventGetUserID_Parms), Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics
	{
		struct FGPlayerState_eventGetUserName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventGetUserName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Networking" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Get the unique ID of the user from the online subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "GetUserName", sizeof(FGPlayerState_eventGetUserName_Parms), Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics
	{
		struct FGPlayerState_eventIsServerAdmin_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPlayerState_eventIsServerAdmin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerState_eventIsServerAdmin_Parms), &Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Admin" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "IsServerAdmin", sizeof(FGPlayerState_eventIsServerAdmin_Parms), Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_IsServerAdmin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_IsServerAdmin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_OnRep_CurrentHotbarIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_OnRep_CurrentHotbarIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Client get notified that the hotbar index has changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_OnRep_CurrentHotbarIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "OnRep_CurrentHotbarIndex", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_OnRep_CurrentHotbarIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_OnRep_CurrentHotbarIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_OnRep_CurrentHotbarIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_OnRep_CurrentHotbarIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Client get notified that the hotbar has changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "OnRep_HotbarShortcuts", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics
	{
		struct FGPlayerState_eventReadMessage_Parms
		{
			TSubclassOf<UFGMessageBase>  inMessage;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::NewProp_inMessage = { "inMessage", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventReadMessage_Parms, inMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Message" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Change read status of a message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "ReadMessage", sizeof(FGPlayerState_eventReadMessage_Parms), Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_ReadMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics
	{
		struct FGPlayerState_eventRemoveMessage_Parms
		{
			TSubclassOf<UFGMessageBase>  inMessage;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::NewProp_inMessage = { "inMessage", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventRemoveMessage_Parms, inMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Used primarily to reset tutorial flow, verifies it exists before attempting removal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "RemoveMessage", sizeof(FGPlayerState_eventRemoveMessage_Parms), Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_RemoveMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics
	{
		struct FGPlayerState_eventRemoveRecipe_Parms
		{
			TSubclassOf<UFGRecipe>  recipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventRemoveRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipes" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Removes a recipe from the list of new recipes. This is only for UI feedback and doesn't remove the players ability to use the recipe" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "RemoveRecipe", sizeof(FGPlayerState_eventRemoveRecipe_Parms), Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_RemoveRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventServer_RemoveRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Lets the server remove a recipe from the list of new recipes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "Server_RemoveRecipe", sizeof(FGPlayerState_eventServer_RemoveRecipe_Parms), Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_representationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_representationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((FGPlayerState_eventServer_SetCompassFilter_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerState_eventServer_SetCompassFilter_Parms), &Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::NewProp_representationType = { "representationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventServer_SetCompassFilter_Parms, representationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::NewProp_representationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::NewProp_representationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::NewProp_representationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Representation" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Let server set the compass filter visibility for the given representation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "Server_SetCompassFilter", sizeof(FGPlayerState_eventServer_SetCompassFilter_Parms), Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics
	{
		static void NewProp_collapsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_collapsed;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::NewProp_collapsed_SetBit(void* Obj)
	{
		((FGPlayerState_eventServer_SetItemCategoryCollapsed_Parms*)Obj)->collapsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::NewProp_collapsed = { "collapsed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerState_eventServer_SetItemCategoryCollapsed_Parms), &Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::NewProp_collapsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::NewProp_itemCategory = { "itemCategory", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventServer_SetItemCategoryCollapsed_Parms, itemCategory), Z_Construct_UClass_UFGItemCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::NewProp_collapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::NewProp_itemCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|ItemCategory" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Let server set if an item category is collapsed in manufacturing widgets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "Server_SetItemCategoryCollapsed", sizeof(FGPlayerState_eventServer_SetItemCategoryCollapsed_Parms), Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_representationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_representationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((FGPlayerState_eventServer_SetMapFilter_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerState_eventServer_SetMapFilter_Parms), &Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::NewProp_representationType = { "representationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventServer_SetMapFilter_Parms, representationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::NewProp_representationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::NewProp_representationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::NewProp_representationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Representation" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Let server set the map filter visibility for the given representation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "Server_SetMapFilter", sizeof(FGPlayerState_eventServer_SetMapFilter_Parms), Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((FGPlayerState_eventServer_SetOnlyShowAffordableRecipes_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerState_eventServer_SetOnlyShowAffordableRecipes_Parms), &Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipes" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Let server set if we only should show affordable recipes in manufacturing widgets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "Server_SetOnlyShowAffordableRecipes", sizeof(FGPlayerState_eventServer_SetOnlyShowAffordableRecipes_Parms), Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics
	{
		struct FGPlayerState_eventSetItemCategoryCollapsed_Parms
		{
			TSubclassOf<UFGItemCategory>  itemCategory;
			bool collapsed;
		};
		static void NewProp_collapsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_collapsed;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::NewProp_collapsed_SetBit(void* Obj)
	{
		((FGPlayerState_eventSetItemCategoryCollapsed_Parms*)Obj)->collapsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::NewProp_collapsed = { "collapsed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerState_eventSetItemCategoryCollapsed_Parms), &Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::NewProp_collapsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::NewProp_itemCategory = { "itemCategory", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventSetItemCategoryCollapsed_Parms, itemCategory), Z_Construct_UClass_UFGItemCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::NewProp_collapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::NewProp_itemCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|ItemCategory" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Set if an item category is collapsed in manufacturing widgets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "SetItemCategoryCollapsed", sizeof(FGPlayerState_eventSetItemCategoryCollapsed_Parms), Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics
	{
		struct FGPlayerState_eventSetLastSelectedResourceSinkShopCategory_Parms
		{
			TSubclassOf<UFGSchematicCategory>  selectedCategory;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_selectedCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::NewProp_selectedCategory = { "selectedCategory", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerState_eventSetLastSelectedResourceSinkShopCategory_Parms, selectedCategory), Z_Construct_UClass_UFGSchematicCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::NewProp_selectedCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Schematic" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "SetLastSelectedResourceSinkShopCategory", sizeof(FGPlayerState_eventSetLastSelectedResourceSinkShopCategory_Parms), Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics
	{
		struct FGPlayerState_eventSetOnlyShowAffordableRecipes_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((FGPlayerState_eventSetOnlyShowAffordableRecipes_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerState_eventSetOnlyShowAffordableRecipes_Parms), &Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipes" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Set if we only should show affordable recipes in manufacturing widgets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, nullptr, "SetOnlyShowAffordableRecipes", sizeof(FGPlayerState_eventSetOnlyShowAffordableRecipes_Parms), Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGPlayerState_NoRegister()
	{
		return AFGPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AFGPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLastSelectedResourceSinkShopCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mLastSelectedResourceSinkShopCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFilteredOutCompassTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFilteredOutCompassTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mFilteredOutCompassTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mFilteredOutCompassTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFilteredOutMapTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFilteredOutMapTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mFilteredOutMapTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mFilteredOutMapTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollapsedItemCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCollapsedItemCategories;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mCollapsedItemCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnlyShowAffordableRecipes_MetaData[];
#endif
		static void NewProp_mOnlyShowAffordableRecipes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mOnlyShowAffordableRecipes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumArmSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumArmSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRememberedFirstTimeEquipmentClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mRememberedFirstTimeEquipmentClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mRememberedFirstTimeEquipmentClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMessageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mMessageData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mMessageData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTutorialSubsystemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mTutorialSubsystemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTutorialSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTutorialSubsystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsServerAdmin_MetaData[];
#endif
		static void NewProp_mIsServerAdmin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsServerAdmin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasReceivedInitialItems_MetaData[];
#endif
		static void NewProp_mHasReceivedInitialItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasReceivedInitialItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOwnedPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOwnedPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSlotData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSlotNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mSlotNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNewRecipes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mNewRecipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mNewRecipes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultRecipeShortcuts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDefaultRecipeShortcuts;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDefaultRecipeShortcuts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentHotbarIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCurrentHotbarIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPresetHotbars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPresetHotbars;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPresetHotbars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHotbars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mHotbars;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mHotbars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildableConstructedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BuildableConstructedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGPlayerState_AddArmSlots, "AddArmSlots" }, // 1556260911
		{ &Z_Construct_UFunction_AFGPlayerState_AddMessage, "AddMessage" }, // 799764994
		{ &Z_Construct_UFunction_AFGPlayerState_CreateShortcut, "CreateShortcut" }, // 527159467
		{ &Z_Construct_UFunction_AFGPlayerState_GetAllMessageData, "GetAllMessageData" }, // 490396742
		{ &Z_Construct_UFunction_AFGPlayerState_GetAllMessages, "GetAllMessages" }, // 2719563180
		{ &Z_Construct_UFunction_AFGPlayerState_GetCollapsedItemCategories, "GetCollapsedItemCategories" }, // 891381697
		{ &Z_Construct_UFunction_AFGPlayerState_GetLastSelectedResourceSinkShopCategory, "GetLastSelectedResourceSinkShopCategory" }, // 3630493618
		{ &Z_Construct_UFunction_AFGPlayerState_GetNametagColor, "GetNametagColor" }, // 2259183885
		{ &Z_Construct_UFunction_AFGPlayerState_GetNewRecipes, "GetNewRecipes" }, // 3170125264
		{ &Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots, "GetNumArmSlots" }, // 4025000975
		{ &Z_Construct_UFunction_AFGPlayerState_GetOnlyShowAffordableRecipes, "GetOnlyShowAffordableRecipes" }, // 3249873035
		{ &Z_Construct_UFunction_AFGPlayerState_GetPingColor, "GetPingColor" }, // 3136672301
		{ &Z_Construct_UFunction_AFGPlayerState_GetSlotNum, "GetSlotNum" }, // 1495185719
		{ &Z_Construct_UFunction_AFGPlayerState_GetSteamID, "GetSteamID" }, // 22660408
		{ &Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem, "GetTutorialSubsystem" }, // 593953896
		{ &Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId, "GetUniqeNetId" }, // 933867060
		{ &Z_Construct_UFunction_AFGPlayerState_GetUserID, "GetUserID" }, // 1152285082
		{ &Z_Construct_UFunction_AFGPlayerState_GetUserName, "GetUserName" }, // 627137807
		{ &Z_Construct_UFunction_AFGPlayerState_IsServerAdmin, "IsServerAdmin" }, // 3617883060
		{ &Z_Construct_UFunction_AFGPlayerState_OnRep_CurrentHotbarIndex, "OnRep_CurrentHotbarIndex" }, // 1791645495
		{ &Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts, "OnRep_HotbarShortcuts" }, // 1858748135
		{ &Z_Construct_UFunction_AFGPlayerState_ReadMessage, "ReadMessage" }, // 2521145621
		{ &Z_Construct_UFunction_AFGPlayerState_RemoveMessage, "RemoveMessage" }, // 4185757974
		{ &Z_Construct_UFunction_AFGPlayerState_RemoveRecipe, "RemoveRecipe" }, // 3729087156
		{ &Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe, "Server_RemoveRecipe" }, // 1236358063
		{ &Z_Construct_UFunction_AFGPlayerState_Server_SetCompassFilter, "Server_SetCompassFilter" }, // 2082697328
		{ &Z_Construct_UFunction_AFGPlayerState_Server_SetItemCategoryCollapsed, "Server_SetItemCategoryCollapsed" }, // 759044807
		{ &Z_Construct_UFunction_AFGPlayerState_Server_SetMapFilter, "Server_SetMapFilter" }, // 230223779
		{ &Z_Construct_UFunction_AFGPlayerState_Server_SetOnlyShowAffordableRecipes, "Server_SetOnlyShowAffordableRecipes" }, // 3398843629
		{ &Z_Construct_UFunction_AFGPlayerState_SetItemCategoryCollapsed, "SetItemCategoryCollapsed" }, // 3571149141
		{ &Z_Construct_UFunction_AFGPlayerState_SetLastSelectedResourceSinkShopCategory, "SetLastSelectedResourceSinkShopCategory" }, // 667625539
		{ &Z_Construct_UFunction_AFGPlayerState_SetOnlyShowAffordableRecipes, "SetOnlyShowAffordableRecipes" }, // 281679396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGPlayerState.h" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mLastSelectedResourceSinkShopCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "The last selected category in the resource sink shop so we can open the shop at the same category later" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mLastSelectedResourceSinkShopCategory = { "mLastSelectedResourceSinkShopCategory", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mLastSelectedResourceSinkShopCategory), Z_Construct_UClass_UFGSchematicCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mLastSelectedResourceSinkShopCategory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mLastSelectedResourceSinkShopCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutCompassTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutCompassTypes = { "mFilteredOutCompassTypes", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mFilteredOutCompassTypes), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutCompassTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutCompassTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutCompassTypes_Inner = { "mFilteredOutCompassTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutCompassTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutMapTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutMapTypes = { "mFilteredOutMapTypes", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mFilteredOutMapTypes), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutMapTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutMapTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutMapTypes_Inner = { "mFilteredOutMapTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutMapTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCollapsedItemCategories_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "The item categories that the user have collapsed in manufacturing widgets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCollapsedItemCategories = { "mCollapsedItemCategories", nullptr, (EPropertyFlags)0x0044000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mCollapsedItemCategories), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCollapsedItemCategories_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCollapsedItemCategories_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCollapsedItemCategories_Inner = { "mCollapsedItemCategories", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGItemCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOnlyShowAffordableRecipes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "True if we only should show affordable recipes in manufacturing widgets" },
	};
#endif
	void Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOnlyShowAffordableRecipes_SetBit(void* Obj)
	{
		((AFGPlayerState*)Obj)->mOnlyShowAffordableRecipes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOnlyShowAffordableRecipes = { "mOnlyShowAffordableRecipes", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGPlayerState), &Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOnlyShowAffordableRecipes_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOnlyShowAffordableRecipes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOnlyShowAffordableRecipes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Total number of arm equipment slots for this player" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots = { "mNumArmSlots", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mNumArmSlots), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "List of equipment classes that have been equipped at least once." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses = { "mRememberedFirstTimeEquipmentClasses", nullptr, (EPropertyFlags)0x0044000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mRememberedFirstTimeEquipmentClasses), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_Inner = { "mRememberedFirstTimeEquipmentClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Data about all messages that can be displayed in the codex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData = { "mMessageData", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mMessageData), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_Inner = { "mMessageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMessageData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Class of tutorial subsystem to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass = { "mTutorialSubsystemClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mTutorialSubsystemClass), Z_Construct_UClass_UFGTutorialSubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Each local player has their own tutorial subsystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem = { "mTutorialSubsystem", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mTutorialSubsystem), Z_Construct_UClass_UFGTutorialSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mIsServerAdmin_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "If true, then we are server admin" },
	};
#endif
	void Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mIsServerAdmin_SetBit(void* Obj)
	{
		((AFGPlayerState*)Obj)->mIsServerAdmin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mIsServerAdmin = { "mIsServerAdmin", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AFGPlayerState), &Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mIsServerAdmin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mIsServerAdmin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mIsServerAdmin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Set to true after we have received our initial items" },
	};
#endif
	void Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_SetBit(void* Obj)
	{
		((AFGPlayerState*)Obj)->mHasReceivedInitialItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems = { "mHasReceivedInitialItems", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AFGPlayerState), &Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Pawn we should take control of when rejoining game/loading game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn = { "mOwnedPawn", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mOwnedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "This players color container" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData = { "mSlotData", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mSlotData), Z_Construct_UScriptStruct_FSlotData, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "The slot num of this player state" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum = { "mSlotNum", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mSlotNum), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Recipes that are new to the player. This is only for UI feedback and doesn't affect the players ability to use the recipe" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes = { "mNewRecipes", nullptr, (EPropertyFlags)0x0024080001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mNewRecipes), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_Inner = { "mNewRecipes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_MetaData[] = {
		{ "Category", "Shortcuts" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Default recipes to have shortcuts to" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts = { "mDefaultRecipeShortcuts", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mDefaultRecipeShortcuts), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_Inner = { "mDefaultRecipeShortcuts", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCurrentHotbarIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "The index of the current hotbar" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCurrentHotbarIndex = { "mCurrentHotbarIndex", "OnRep_CurrentHotbarIndex", (EPropertyFlags)0x0020080101000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mCurrentHotbarIndex), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCurrentHotbarIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCurrentHotbarIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mPresetHotbars_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "All hotbar actions assigned to presets. A preset is a saved set of shortcuts that can be assigned to the hotbar" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mPresetHotbars = { "mPresetHotbars", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mPresetHotbars), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mPresetHotbars_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mPresetHotbars_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mPresetHotbars_Inner = { "mPresetHotbars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPresetHotbar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbars_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "All hotbar actions assigned" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbars = { "mHotbars", "OnRep_HotbarShortcuts", (EPropertyFlags)0x0020080101000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, mHotbars), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbars_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbars_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbars_Inner = { "mHotbars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHotbar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_BuildableConstructedDelegate_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "OnBuildableConstructed" },
		{ "ModuleRelativePath", "Public/FGPlayerState.h" },
		{ "ToolTip", "Broadcast when a buildable or decor has been constructed." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_BuildableConstructedDelegate = { "BuildableConstructedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerState, BuildableConstructedDelegate), Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_BuildableConstructedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_BuildableConstructedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mLastSelectedResourceSinkShopCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutCompassTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutCompassTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutCompassTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutMapTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutMapTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mFilteredOutMapTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCollapsedItemCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCollapsedItemCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOnlyShowAffordableRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mIsServerAdmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mCurrentHotbarIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mPresetHotbars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mPresetHotbars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_BuildableConstructedDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGPlayerState, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPlayerState_Statics::ClassParams = {
		&AFGPlayerState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGPlayerState_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPlayerState, 2616361594);
	template<> FACTORYGAME_API UClass* StaticClass<AFGPlayerState>()
	{
		return AFGPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPlayerState(Z_Construct_UClass_AFGPlayerState, &AFGPlayerState::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPlayerState);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGPlayerState)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
