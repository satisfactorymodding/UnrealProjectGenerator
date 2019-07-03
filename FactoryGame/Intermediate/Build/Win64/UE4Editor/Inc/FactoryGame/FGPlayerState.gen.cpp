// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGPlayerState.h"
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
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHotbarShortcut_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetAllMessageData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetAllMessages();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EMessageType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetSlotData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetSlotNum();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetSteamID();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGTutorialSubsystem_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetUserID();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_GetUserName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_ReadMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_RemoveMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_RemoveRecipe();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe();
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::NewProp_itemDesc = { UE4CodeGen_Private::EPropertyClass::Class, "itemDesc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnBuildableConstructedNew_Parms, itemDesc), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::NewProp_itemDesc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnBuildableConstructedNew__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnBuildableConstructedNew_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FMessageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMessageData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MessageData"), sizeof(FMessageData), Get_Z_Construct_UScriptStruct_FMessageData_CRC());
	}
	return Singleton;
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
		{ "ModuleRelativePath", "FGPlayerState.h" },
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
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "What class is the message" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_MessageClass = { UE4CodeGen_Private::EPropertyClass::Class, "MessageClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000001010015, 1, nullptr, STRUCT_OFFSET(FMessageData, MessageClass), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_MessageClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_MessageClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Has message been read" },
	};
#endif
	void Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_SetBit(void* Obj)
	{
		((FMessageData*)Obj)->WasRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead = { UE4CodeGen_Private::EPropertyClass::Bool, "WasRead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMessageData), &Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_MessageClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageData_Statics::NewProp_WasRead,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MessageData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMessageData),
		alignof(FMessageData),
		Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMessageData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MessageData"), sizeof(FMessageData), Get_Z_Construct_UScriptStruct_FMessageData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMessageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMessageData_CRC() { return 1407792740U; }
class UScriptStruct* FSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSlotData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SlotData"), sizeof(FSlotData), Get_Z_Construct_UScriptStruct_FSlotData_CRC());
	}
	return Singleton;
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
		{ "ModuleRelativePath", "FGPlayerState.h" },
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
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "The color of the players nametag above their head, and in the UI" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_NametagColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NametagColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FSlotData, NametagColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_NametagColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_NametagColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "The color of the players ping" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor = { UE4CodeGen_Private::EPropertyClass::Struct, "PingColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FSlotData, PingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_NametagColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotData_Statics::NewProp_PingColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SlotData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSlotData),
		alignof(FSlotData),
		Z_Construct_UScriptStruct_FSlotData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlotData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlotData"), sizeof(FSlotData), Get_Z_Construct_UScriptStruct_FSlotData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlotData_CRC() { return 1530629700U; }
	static FName NAME_AFGPlayerState_Server_RemoveRecipe = FName(TEXT("Server_RemoveRecipe"));
	void AFGPlayerState::Server_RemoveRecipe(TSubclassOf<UFGRecipe>  recipe)
	{
		FGPlayerState_eventServer_RemoveRecipe_Parms Parms;
		Parms.recipe=recipe;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerState_Server_RemoveRecipe),&Parms);
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
			{ "GetNumArmSlots", &AFGPlayerState::execGetNumArmSlots },
			{ "GetSlotData", &AFGPlayerState::execGetSlotData },
			{ "GetSlotNum", &AFGPlayerState::execGetSlotNum },
			{ "GetSteamID", &AFGPlayerState::execGetSteamID },
			{ "GetTutorialSubsystem", &AFGPlayerState::execGetTutorialSubsystem },
			{ "GetUniqeNetId", &AFGPlayerState::execGetUniqeNetId },
			{ "GetUserID", &AFGPlayerState::execGetUserID },
			{ "GetUserName", &AFGPlayerState::execGetUserName },
			{ "OnRep_HotbarShortcuts", &AFGPlayerState::execOnRep_HotbarShortcuts },
			{ "ReadMessage", &AFGPlayerState::execReadMessage },
			{ "RemoveMessage", &AFGPlayerState::execRemoveMessage },
			{ "RemoveRecipe", &AFGPlayerState::execRemoveRecipe },
			{ "Server_RemoveRecipe", &AFGPlayerState::execServer_RemoveRecipe },
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::NewProp_slotsToAdd = { UE4CodeGen_Private::EPropertyClass::Int, "slotsToAdd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventAddArmSlots_Parms, slotsToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::NewProp_slotsToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Adds more arm slots ( can also be a negative number to decrease number of slots )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "AddArmSlots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPlayerState_eventAddArmSlots_Parms), Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_AddArmSlots_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::NewProp_inMessage = { UE4CodeGen_Private::EPropertyClass::Class, "inMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventAddMessage_Parms, inMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "AddMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGPlayerState_eventAddMessage_Parms), Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_AddMessage_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventCreateShortcut_Parms, ReturnValue), Z_Construct_UClass_UFGHotbarShortcut_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::NewProp_shortcutClass = { UE4CodeGen_Private::EPropertyClass::Class, "shortcutClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventCreateShortcut_Parms, shortcutClass), Z_Construct_UClass_UFGHotbarShortcut_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::NewProp_shortcutClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "shortcutClass" },
		{ "DisplayName", "CreateShortcut" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Create a shortcut of a specified class, only valid on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "CreateShortcut", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPlayerState_eventCreateShortcut_Parms), Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_CreateShortcut_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetAllMessageData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMessageData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Gets all messagedata from messages we have received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetAllMessageData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerState_eventGetAllMessageData_Parms), Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetAllMessageData_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetAllMessages_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_messageType = { UE4CodeGen_Private::EPropertyClass::Enum, "messageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetAllMessages_Parms, messageType), Z_Construct_UEnum_FactoryGame_EMessageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_messageType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_messageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::NewProp_messageType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Message" },
		{ "CPP_Default_messageType", "MT_UNDEFINED" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Gets all messages we have received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetAllMessages", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerState_eventGetAllMessages_Parms), Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetAllMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetAllMessages_Statics::FuncParams);
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetNumArmSlots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Gets number of slots for arm equipment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetNumArmSlots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerState_eventGetNumArmSlots_Parms), Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics
	{
		struct FGPlayerState_eventGetSlotData_Parms
		{
			TArray<FSlotData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetSlotData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slots|Colors" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Get different colors for different players over the network, index by slot number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetSlotData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPlayerState_eventGetSlotData_Parms), Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetSlotData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetSlotData_Statics::FuncParams);
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetSlotNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Get the slot the player has claimed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetSlotNum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPlayerState_eventGetSlotNum_Parms), Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSlotNum_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetSteamID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetUserID instead" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetSteamID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerState_eventGetSteamID_Parms), Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetSteamID_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetTutorialSubsystem_Parms, ReturnValue), Z_Construct_UClass_UFGTutorialSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Gets the subsystem for BP usage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetTutorialSubsystem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerState_eventGetTutorialSubsystem_Parms), Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetUniqeNetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Get the unique ID of the user from the online subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetUniqeNetId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerState_eventGetUniqeNetId_Parms), Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Get the unique ID of the user from the online subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetUserID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerState_eventGetUserID_Parms), Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUserID_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventGetUserName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Get the unique ID of the user from the online subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "GetUserName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerState_eventGetUserName_Parms), Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_GetUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_GetUserName_Statics::FuncParams);
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
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Client get notified that the hotbar has changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "OnRep_HotbarShortcuts", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::NewProp_inMessage = { UE4CodeGen_Private::EPropertyClass::Class, "inMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventReadMessage_Parms, inMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Change read status of a message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "ReadMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPlayerState_eventReadMessage_Parms), Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_ReadMessage_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::NewProp_inMessage = { UE4CodeGen_Private::EPropertyClass::Class, "inMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventRemoveMessage_Parms, inMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Used primarily to reset tutorial flow, verifies it exists before attempting removal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "RemoveMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGPlayerState_eventRemoveMessage_Parms), Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_RemoveMessage_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::NewProp_recipe = { UE4CodeGen_Private::EPropertyClass::Class, "recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventRemoveRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipes" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Removes a recipe from the list of new recipes. This is only for UI feedback and doesn't remove the players ability to use the recipe" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "RemoveRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPlayerState_eventRemoveRecipe_Parms), Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_RemoveRecipe_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::NewProp_recipe = { UE4CodeGen_Private::EPropertyClass::Class, "recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerState_eventServer_RemoveRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Lets the server remove a recipe from the list of new recipes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerState, "Server_RemoveRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(FGPlayerState_eventServer_RemoveRecipe_Parms), Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasSetupDefaultShortcuts_MetaData[];
#endif
		static void NewProp_mHasSetupDefaultShortcuts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasSetupDefaultShortcuts;
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
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSlotData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSlotData_Inner;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHotbarShortcuts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mHotbarShortcuts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHotbarShortcuts_Inner;
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
		{ &Z_Construct_UFunction_AFGPlayerState_AddArmSlots, "AddArmSlots" }, // 3164781720
		{ &Z_Construct_UFunction_AFGPlayerState_AddMessage, "AddMessage" }, // 1511737093
		{ &Z_Construct_UFunction_AFGPlayerState_CreateShortcut, "CreateShortcut" }, // 2663961728
		{ &Z_Construct_UFunction_AFGPlayerState_GetAllMessageData, "GetAllMessageData" }, // 4040895360
		{ &Z_Construct_UFunction_AFGPlayerState_GetAllMessages, "GetAllMessages" }, // 835372783
		{ &Z_Construct_UFunction_AFGPlayerState_GetNumArmSlots, "GetNumArmSlots" }, // 2443048849
		{ &Z_Construct_UFunction_AFGPlayerState_GetSlotData, "GetSlotData" }, // 2323615411
		{ &Z_Construct_UFunction_AFGPlayerState_GetSlotNum, "GetSlotNum" }, // 3568191574
		{ &Z_Construct_UFunction_AFGPlayerState_GetSteamID, "GetSteamID" }, // 845700876
		{ &Z_Construct_UFunction_AFGPlayerState_GetTutorialSubsystem, "GetTutorialSubsystem" }, // 2295233421
		{ &Z_Construct_UFunction_AFGPlayerState_GetUniqeNetId, "GetUniqeNetId" }, // 2073889679
		{ &Z_Construct_UFunction_AFGPlayerState_GetUserID, "GetUserID" }, // 3916675707
		{ &Z_Construct_UFunction_AFGPlayerState_GetUserName, "GetUserName" }, // 825350181
		{ &Z_Construct_UFunction_AFGPlayerState_OnRep_HotbarShortcuts, "OnRep_HotbarShortcuts" }, // 1840611771
		{ &Z_Construct_UFunction_AFGPlayerState_ReadMessage, "ReadMessage" }, // 3022191053
		{ &Z_Construct_UFunction_AFGPlayerState_RemoveMessage, "RemoveMessage" }, // 392666162
		{ &Z_Construct_UFunction_AFGPlayerState_RemoveRecipe, "RemoveRecipe" }, // 556547574
		{ &Z_Construct_UFunction_AFGPlayerState_Server_RemoveRecipe, "Server_RemoveRecipe" }, // 1009823442
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGPlayerState.h" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Total number of arm equipment slots for this player" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots = { UE4CodeGen_Private::EPropertyClass::Int, "mNumArmSlots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mNumArmSlots), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "List of equipment classes that have been equipped at least once." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mRememberedFirstTimeEquipmentClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000001000020, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mRememberedFirstTimeEquipmentClasses), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mRememberedFirstTimeEquipmentClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Data about all messages that can be displayed in the codex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData = { UE4CodeGen_Private::EPropertyClass::Array, "mMessageData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mMessageData), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mMessageData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMessageData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Class of tutorial subsystem to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass = { UE4CodeGen_Private::EPropertyClass::Class, "mTutorialSubsystemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mTutorialSubsystemClass), Z_Construct_UClass_UFGTutorialSubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Each local player has their own tutorial subsystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem = { UE4CodeGen_Private::EPropertyClass::Object, "mTutorialSubsystem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mTutorialSubsystem), Z_Construct_UClass_UFGTutorialSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasSetupDefaultShortcuts_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Set to true after we have setup our initial shortcuts" },
	};
#endif
	void Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasSetupDefaultShortcuts_SetBit(void* Obj)
	{
		((AFGPlayerState*)Obj)->mHasSetupDefaultShortcuts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasSetupDefaultShortcuts = { UE4CodeGen_Private::EPropertyClass::Bool, "mHasSetupDefaultShortcuts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AFGPlayerState), &Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasSetupDefaultShortcuts_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasSetupDefaultShortcuts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasSetupDefaultShortcuts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Set to true after we have received our initial items" },
	};
#endif
	void Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_SetBit(void* Obj)
	{
		((AFGPlayerState*)Obj)->mHasReceivedInitialItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems = { UE4CodeGen_Private::EPropertyClass::Bool, "mHasReceivedInitialItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AFGPlayerState), &Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Pawn we should take control of when rejoining game/loading game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn = { UE4CodeGen_Private::EPropertyClass::Object, "mOwnedPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mOwnedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData_MetaData[] = {
		{ "Category", "Slots|Colors" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "The different colors to represent players over the network, @todo: Make this a config variables so that server admins can add to this array if they have lots of players" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData = { UE4CodeGen_Private::EPropertyClass::Array, "mSlotData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mSlotData), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mSlotData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "The slot num of this player state" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum = { UE4CodeGen_Private::EPropertyClass::Int, "mSlotNum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mSlotNum), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_MetaData[] = {
		{ "Category", "Recipes" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Recipes that are new to the player. This is only for UI feedback and doesn't affect the players ability to use the recipe" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes = { UE4CodeGen_Private::EPropertyClass::Array, "mNewRecipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080001000034, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mNewRecipes), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mNewRecipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_MetaData[] = {
		{ "Category", "Shortcuts" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Default recipes to have shortcuts to" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts = { UE4CodeGen_Private::EPropertyClass::Array, "mDefaultRecipeShortcuts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, mDefaultRecipeShortcuts), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mDefaultRecipeShortcuts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbarShortcuts_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "All hotbar actions assigned" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbarShortcuts = { UE4CodeGen_Private::EPropertyClass::Array, "mHotbarShortcuts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080101000020, 1, "OnRep_HotbarShortcuts", STRUCT_OFFSET(AFGPlayerState, mHotbarShortcuts), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbarShortcuts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbarShortcuts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbarShortcuts_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mHotbarShortcuts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGHotbarShortcut_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerState_Statics::NewProp_BuildableConstructedDelegate_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "OnBuildableConstructed" },
		{ "ModuleRelativePath", "FGPlayerState.h" },
		{ "ToolTip", "Broadcast when a buildable or decor has been constructed." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGPlayerState_Statics::NewProp_BuildableConstructedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BuildableConstructedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGPlayerState, BuildableConstructedDelegate), Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedNew__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_BuildableConstructedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::NewProp_BuildableConstructedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNumArmSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mRememberedFirstTimeEquipmentClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mMessageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mTutorialSubsystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasSetupDefaultShortcuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHasReceivedInitialItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mOwnedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mSlotNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mNewRecipes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mDefaultRecipeShortcuts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbarShortcuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerState_Statics::NewProp_mHotbarShortcuts_Inner,
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGPlayerState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerState_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AFGPlayerState, 942884459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPlayerState(Z_Construct_UClass_AFGPlayerState, &AFGPlayerState::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPlayerState);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGPlayerState)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
