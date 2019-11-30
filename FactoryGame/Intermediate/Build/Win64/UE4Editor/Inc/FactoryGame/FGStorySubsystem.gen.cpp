// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGStorySubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGStorySubsystem() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FResearchMessageData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResearchRecipe_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageBase_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSchematicMessagePair();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemFoundData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMapAreaVisitedData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapArea_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGStorySubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGStorySubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_AddPlayer();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FResearchMessageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FResearchMessageData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResearchMessageData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ResearchMessageData"), sizeof(FResearchMessageData), Get_Z_Construct_UScriptStruct_FResearchMessageData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResearchMessageData(FResearchMessageData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ResearchMessageData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFResearchMessageData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFResearchMessageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ResearchMessageData")),new UScriptStruct::TCppStructOps<FResearchMessageData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFResearchMessageData;
	struct Z_Construct_UScriptStruct_FResearchMessageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchCollected_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ResearchCollected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Messages;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Messages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasCollected_MetaData[];
#endif
		static void NewProp_wasCollected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasCollected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchMessageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResearchMessageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_ResearchCollected_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Associated research" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_ResearchCollected = { UE4CodeGen_Private::EPropertyClass::SoftClass, "ResearchCollected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(FResearchMessageData, ResearchCollected), Z_Construct_UClass_UFGResearchRecipe_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_ResearchCollected_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_ResearchCollected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_Messages_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Message to display" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_Messages = { UE4CodeGen_Private::EPropertyClass::Array, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FResearchMessageData, Messages), METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_Messages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_Messages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_Messages_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_wasCollected_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_wasCollected_SetBit(void* Obj)
	{
		((FResearchMessageData*)Obj)->wasCollected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_wasCollected = { UE4CodeGen_Private::EPropertyClass::Bool, "wasCollected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FResearchMessageData), &Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_wasCollected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_wasCollected_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_wasCollected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResearchMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_ResearchCollected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_Messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_Messages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchMessageData_Statics::NewProp_wasCollected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResearchMessageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ResearchMessageData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FResearchMessageData),
		alignof(FResearchMessageData),
		Z_Construct_UScriptStruct_FResearchMessageData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchMessageData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchMessageData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchMessageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResearchMessageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResearchMessageData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResearchMessageData"), sizeof(FResearchMessageData), Get_Z_Construct_UScriptStruct_FResearchMessageData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResearchMessageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResearchMessageData_CRC() { return 3526821874U; }
class UScriptStruct* FSchematicMessagePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSchematicMessagePair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSchematicMessagePair, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SchematicMessagePair"), sizeof(FSchematicMessagePair), Get_Z_Construct_UScriptStruct_FSchematicMessagePair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSchematicMessagePair(FSchematicMessagePair::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SchematicMessagePair"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSchematicMessagePair
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSchematicMessagePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SchematicMessagePair")),new UScriptStruct::TCppStructOps<FSchematicMessagePair>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSchematicMessagePair;
	struct Z_Construct_UScriptStruct_FSchematicMessagePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SchematicUnlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SchematicUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Messages;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Messages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSchematicMessagePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_SchematicUnlocked_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Associated schematic" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_SchematicUnlocked = { UE4CodeGen_Private::EPropertyClass::SoftClass, "SchematicUnlocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(FSchematicMessagePair, SchematicUnlocked), Z_Construct_UClass_UFGSchematic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_SchematicUnlocked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_SchematicUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Message to display" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages = { UE4CodeGen_Private::EPropertyClass::Array, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FSchematicMessagePair, Messages), METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_SchematicUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SchematicMessagePair",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSchematicMessagePair),
		alignof(FSchematicMessagePair),
		Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSchematicMessagePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSchematicMessagePair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SchematicMessagePair"), sizeof(FSchematicMessagePair), Get_Z_Construct_UScriptStruct_FSchematicMessagePair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSchematicMessagePair_CRC() { return 2001287092U; }
class UScriptStruct* FItemFoundData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FItemFoundData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemFoundData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ItemFoundData"), sizeof(FItemFoundData), Get_Z_Construct_UScriptStruct_FItemFoundData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemFoundData(FItemFoundData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ItemFoundData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFItemFoundData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFItemFoundData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemFoundData")),new UScriptStruct::TCppStructOps<FItemFoundData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFItemFoundData;
	struct Z_Construct_UScriptStruct_FItemFoundData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SchematicClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SchematicClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Messages;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Messages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasFound_MetaData[];
#endif
		static void NewProp_WasFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasFound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemFoundData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemFoundData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemFoundData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Item descriptor we are looking for" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_ItemClass = { UE4CodeGen_Private::EPropertyClass::SoftClass, "ItemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(FItemFoundData, ItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_ItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_SchematicClass_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Schematic to unlock ( if any )" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_SchematicClass = { UE4CodeGen_Private::EPropertyClass::SoftClass, "SchematicClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(FItemFoundData, SchematicClass), Z_Construct_UClass_UFGSchematic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_SchematicClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_SchematicClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Message that should be added when Class is found for the first time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages = { UE4CodeGen_Private::EPropertyClass::Array, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FItemFoundData, Messages), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Already found or not?" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound_SetBit(void* Obj)
	{
		((FItemFoundData*)Obj)->WasFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound = { UE4CodeGen_Private::EPropertyClass::Bool, "WasFound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FItemFoundData), &Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemFoundData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_ItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_SchematicClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemFoundData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ItemFoundData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FItemFoundData),
		alignof(FItemFoundData),
		Z_Construct_UScriptStruct_FItemFoundData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemFoundData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemFoundData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemFoundData"), sizeof(FItemFoundData), Get_Z_Construct_UScriptStruct_FItemFoundData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemFoundData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemFoundData_CRC() { return 1140557595U; }
class UScriptStruct* FMapAreaVisitedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapAreaVisitedData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MapAreaVisitedData"), sizeof(FMapAreaVisitedData), Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapAreaVisitedData(FMapAreaVisitedData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("MapAreaVisitedData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFMapAreaVisitedData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFMapAreaVisitedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MapAreaVisitedData")),new UScriptStruct::TCppStructOps<FMapAreaVisitedData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFMapAreaVisitedData;
	struct Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SchematicClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SchematicClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Messages;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Messages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MapAreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapAreaVisitedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_SchematicClass_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Schematic to unlock ( if any )" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_SchematicClass = { UE4CodeGen_Private::EPropertyClass::SoftClass, "SchematicClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(FMapAreaVisitedData, SchematicClass), Z_Construct_UClass_UFGSchematic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_SchematicClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_SchematicClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Message that should be added when MapAreaClass is found for the first time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages = { UE4CodeGen_Private::EPropertyClass::Array, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FMapAreaVisitedData, Messages), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_MapAreaClass_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Map area class we are looking for" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_MapAreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "MapAreaClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FMapAreaVisitedData, MapAreaClass), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_MapAreaClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_MapAreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_SchematicClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_MapAreaClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MapAreaVisitedData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMapAreaVisitedData),
		alignof(FMapAreaVisitedData),
		Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapAreaVisitedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapAreaVisitedData"), sizeof(FMapAreaVisitedData), Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_CRC() { return 2643879415U; }
	void AFGStorySubsystem::StaticRegisterNativesAFGStorySubsystem()
	{
		UClass* Class = AFGStorySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlayer", &AFGStorySubsystem::execAddPlayer },
			{ "OnMapAreaVisited", &AFGStorySubsystem::execOnMapAreaVisited },
			{ "OnNewResearchRecipeAvailable", &AFGStorySubsystem::execOnNewResearchRecipeAvailable },
			{ "OnPlayerAddedItemToInventory", &AFGStorySubsystem::execOnPlayerAddedItemToInventory },
			{ "OnResearchRecipeTimerComplete", &AFGStorySubsystem::execOnResearchRecipeTimerComplete },
			{ "OnResearchRewardClaimed", &AFGStorySubsystem::execOnResearchRewardClaimed },
			{ "OnSchematicPurchased", &AFGStorySubsystem::execOnSchematicPurchased },
			{ "SetupDelegates", &AFGStorySubsystem::execSetupDelegates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics
	{
		struct FGStorySubsystem_eventAddPlayer_Parms
		{
			AFGCharacterPlayer* inPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::NewProp_inPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "inPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGStorySubsystem_eventAddPlayer_Parms, inPlayer), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::NewProp_inPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "A player was added to the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, "AddPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGStorySubsystem_eventAddPlayer_Parms), Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_AddPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics
	{
		struct FGStorySubsystem_eventOnMapAreaVisited_Parms
		{
			TSubclassOf<UFGMapArea>  mapArea;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mapArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::NewProp_mapArea = { UE4CodeGen_Private::EPropertyClass::Class, "mapArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGStorySubsystem_eventOnMapAreaVisited_Parms, mapArea), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::NewProp_mapArea,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Delegate for when a map area is visited for the first time by anyone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, "OnMapAreaVisited", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGStorySubsystem_eventOnMapAreaVisited_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics
	{
		struct FGStorySubsystem_eventOnNewResearchRecipeAvailable_Parms
		{
			TSubclassOf<UFGResearchRecipe>  researchRecipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_researchRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::NewProp_researchRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "researchRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGStorySubsystem_eventOnNewResearchRecipeAvailable_Parms, researchRecipe), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::NewProp_researchRecipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Called when a recipe has become available for research" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, "OnNewResearchRecipeAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGStorySubsystem_eventOnNewResearchRecipeAvailable_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics
	{
		struct FGStorySubsystem_eventOnPlayerAddedItemToInventory_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 numAdded;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numAdded;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::NewProp_numAdded = { UE4CodeGen_Private::EPropertyClass::Int, "numAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGStorySubsystem_eventOnPlayerAddedItemToInventory_Parms, numAdded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGStorySubsystem_eventOnPlayerAddedItemToInventory_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::NewProp_numAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Called when a player gets an item in its inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, "OnPlayerAddedItemToInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGStorySubsystem_eventOnPlayerAddedItemToInventory_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics
	{
		struct FGStorySubsystem_eventOnResearchRecipeTimerComplete_Parms
		{
			TSubclassOf<UFGResearchRecipe>  researchRecipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_researchRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::NewProp_researchRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "researchRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGStorySubsystem_eventOnResearchRecipeTimerComplete_Parms, researchRecipe), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::NewProp_researchRecipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Called when a recipe has completed is research in the MAM" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, "OnResearchRecipeTimerComplete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGStorySubsystem_eventOnResearchRecipeTimerComplete_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics
	{
		struct FGStorySubsystem_eventOnResearchRewardClaimed_Parms
		{
			TSubclassOf<UFGResearchRecipe>  researchRecipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_researchRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::NewProp_researchRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "researchRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGStorySubsystem_eventOnResearchRewardClaimed_Parms, researchRecipe), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::NewProp_researchRecipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Called when the player claims the reward for a completed piece of research" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, "OnResearchRewardClaimed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGStorySubsystem_eventOnResearchRewardClaimed_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics
	{
		struct FGStorySubsystem_eventOnSchematicPurchased_Parms
		{
			TSubclassOf<UFGSchematic>  newSchematic;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_newSchematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::NewProp_newSchematic = { UE4CodeGen_Private::EPropertyClass::Class, "newSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGStorySubsystem_eventOnSchematicPurchased_Parms, newSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::NewProp_newSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Called when a schematic is unlocked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, "OnSchematicPurchased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGStorySubsystem_eventOnSchematicPurchased_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Sets up initial delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, "SetupDelegates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGStorySubsystem_NoRegister()
	{
		return AFGStorySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGStorySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNewResearchAvailableMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mNewResearchAvailableMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResearchTimerCompleteMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mResearchTimerCompleteMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResearchMessageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mResearchMessageData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mResearchMessageData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemFoundData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mItemFoundData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mItemFoundData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSchematicMessageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSchematicMessageData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSchematicMessageData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActivePlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mActivePlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActivePlayers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGStorySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGStorySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGStorySubsystem_AddPlayer, "AddPlayer" }, // 2811574160
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited, "OnMapAreaVisited" }, // 2504634714
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnNewResearchRecipeAvailable, "OnNewResearchRecipeAvailable" }, // 980113347
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory, "OnPlayerAddedItemToInventory" }, // 2690691683
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete, "OnResearchRecipeTimerComplete" }, // 1693694003
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnResearchRewardClaimed, "OnResearchRewardClaimed" }, // 1763548448
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased, "OnSchematicPurchased" }, // 1285320681
		{ &Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates, "SetupDelegates" }, // 2217184252
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGStorySubsystem.h" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mNewResearchAvailableMessage_MetaData[] = {
		{ "Category", "Story|Research" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mNewResearchAvailableMessage = { UE4CodeGen_Private::EPropertyClass::Class, "mNewResearchAvailableMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AFGStorySubsystem, mNewResearchAvailableMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mNewResearchAvailableMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mNewResearchAvailableMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage_MetaData[] = {
		{ "Category", "Story|Research" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage = { UE4CodeGen_Private::EPropertyClass::Class, "mResearchTimerCompleteMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AFGStorySubsystem, mResearchTimerCompleteMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchMessageData_MetaData[] = {
		{ "Category", "Story|Research" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchMessageData = { UE4CodeGen_Private::EPropertyClass::Array, "mResearchMessageData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGStorySubsystem, mResearchMessageData), METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchMessageData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchMessageData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchMessageData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mResearchMessageData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FResearchMessageData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData_MetaData[] = {
		{ "Category", "Story|Item" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "array of item descriptor class/message and if they have been found already" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData = { UE4CodeGen_Private::EPropertyClass::Array, "mItemFoundData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001010001, 1, nullptr, STRUCT_OFFSET(AFGStorySubsystem, mItemFoundData), METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mItemFoundData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemFoundData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData_MetaData[] = {
		{ "Category", "Story|Schematic" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "array of schematic/message pairs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData = { UE4CodeGen_Private::EPropertyClass::Array, "mSchematicMessageData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGStorySubsystem, mSchematicMessageData), METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mSchematicMessageData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSchematicMessagePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers = { UE4CodeGen_Private::EPropertyClass::Array, "mActivePlayers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AFGStorySubsystem, mActivePlayers), METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mActivePlayers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGStorySubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mNewResearchAvailableMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchMessageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchMessageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGStorySubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGStorySubsystem, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGStorySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGStorySubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGStorySubsystem_Statics::ClassParams = {
		&AFGStorySubsystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGStorySubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGStorySubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGStorySubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGStorySubsystem, 3666520393);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGStorySubsystem(Z_Construct_UClass_AFGStorySubsystem, &AFGStorySubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGStorySubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGStorySubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
