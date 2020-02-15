// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FResearchTreeMessageData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResearchTree_NoRegister();
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FResearchTreeMessageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FResearchTreeMessageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResearchTreeMessageData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ResearchTreeMessageData"), sizeof(FResearchTreeMessageData), Get_Z_Construct_UScriptStruct_FResearchTreeMessageData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FResearchTreeMessageData>()
{
	return FResearchTreeMessageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResearchTreeMessageData(FResearchTreeMessageData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ResearchTreeMessageData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFResearchTreeMessageData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFResearchTreeMessageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ResearchTreeMessageData")),new UScriptStruct::TCppStructOps<FResearchTreeMessageData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFResearchTreeMessageData;
	struct Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ResearchTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Messages;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Messages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResearchTreeMessageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_ResearchTree_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Associated research tree" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_ResearchTree = { "ResearchTree", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResearchTreeMessageData, ResearchTree), Z_Construct_UClass_UFGResearchTree_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_ResearchTree_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_ResearchTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_Messages_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Message to display" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResearchTreeMessageData, Messages), METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_Messages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_Messages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_ResearchTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_Messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::NewProp_Messages_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ResearchTreeMessageData",
		sizeof(FResearchTreeMessageData),
		alignof(FResearchTreeMessageData),
		Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResearchTreeMessageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResearchTreeMessageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResearchTreeMessageData"), sizeof(FResearchTreeMessageData), Get_Z_Construct_UScriptStruct_FResearchTreeMessageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResearchTreeMessageData_Hash() { return 1510340561U; }
class UScriptStruct* FSchematicMessagePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSchematicMessagePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSchematicMessagePair, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SchematicMessagePair"), sizeof(FSchematicMessagePair), Get_Z_Construct_UScriptStruct_FSchematicMessagePair_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSchematicMessagePair>()
{
	return FSchematicMessagePair::StaticStruct();
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
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_SchematicUnlocked = { "SchematicUnlocked", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSchematicMessagePair, SchematicUnlocked), Z_Construct_UClass_UFGSchematic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_SchematicUnlocked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_SchematicUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Message to display" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSchematicMessagePair, Messages), METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
		sizeof(FSchematicMessagePair),
		alignof(FSchematicMessagePair),
		Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSchematicMessagePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSchematicMessagePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SchematicMessagePair"), sizeof(FSchematicMessagePair), Get_Z_Construct_UScriptStruct_FSchematicMessagePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSchematicMessagePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSchematicMessagePair_Hash() { return 400862940U; }
class UScriptStruct* FItemFoundData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FItemFoundData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemFoundData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ItemFoundData"), sizeof(FItemFoundData), Get_Z_Construct_UScriptStruct_FItemFoundData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FItemFoundData>()
{
	return FItemFoundData::StaticStruct();
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
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemFoundData, ItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_ItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_SchematicClass_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Schematic to unlock ( if any )" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_SchematicClass = { "SchematicClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemFoundData, SchematicClass), Z_Construct_UClass_UFGSchematic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_SchematicClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_SchematicClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Message that should be added when Class is found for the first time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemFoundData, Messages), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound = { "WasFound", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemFoundData), &Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::NewProp_WasFound_MetaData)) };
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
		sizeof(FItemFoundData),
		alignof(FItemFoundData),
		Z_Construct_UScriptStruct_FItemFoundData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemFoundData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemFoundData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemFoundData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemFoundData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemFoundData"), sizeof(FItemFoundData), Get_Z_Construct_UScriptStruct_FItemFoundData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemFoundData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemFoundData_Hash() { return 3154293130U; }
class UScriptStruct* FMapAreaVisitedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapAreaVisitedData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MapAreaVisitedData"), sizeof(FMapAreaVisitedData), Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FMapAreaVisitedData>()
{
	return FMapAreaVisitedData::StaticStruct();
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
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_SchematicClass = { "SchematicClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapAreaVisitedData, SchematicClass), Z_Construct_UClass_UFGSchematic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_SchematicClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_SchematicClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Message that should be added when MapAreaClass is found for the first time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapAreaVisitedData, Messages), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_MapAreaClass_MetaData[] = {
		{ "Category", "Story" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Map area class we are looking for" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_MapAreaClass = { "MapAreaClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapAreaVisitedData, MapAreaClass), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_MapAreaClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::NewProp_MapAreaClass_MetaData)) };
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
		sizeof(FMapAreaVisitedData),
		alignof(FMapAreaVisitedData),
		Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapAreaVisitedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapAreaVisitedData"), sizeof(FMapAreaVisitedData), Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapAreaVisitedData_Hash() { return 3445234091U; }
	void AFGStorySubsystem::StaticRegisterNativesAFGStorySubsystem()
	{
		UClass* Class = AFGStorySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlayer", &AFGStorySubsystem::execAddPlayer },
			{ "OnMapAreaVisited", &AFGStorySubsystem::execOnMapAreaVisited },
			{ "OnPlayerAddedItemToInventory", &AFGStorySubsystem::execOnPlayerAddedItemToInventory },
			{ "OnResearchRecipeTimerComplete", &AFGStorySubsystem::execOnResearchRecipeTimerComplete },
			{ "OnResearchTreeUnlocked", &AFGStorySubsystem::execOnResearchTreeUnlocked },
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGStorySubsystem_eventAddPlayer_Parms, inPlayer), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::NewProp_inPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "A player was added to the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, nullptr, "AddPlayer", sizeof(FGStorySubsystem_eventAddPlayer_Parms), Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_AddPlayer_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::NewProp_mapArea = { "mapArea", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGStorySubsystem_eventOnMapAreaVisited_Parms, mapArea), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::NewProp_mapArea,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Delegate for when a map area is visited for the first time by anyone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, nullptr, "OnMapAreaVisited", sizeof(FGStorySubsystem_eventOnMapAreaVisited_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited_Statics::FuncParams);
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::NewProp_numAdded = { "numAdded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGStorySubsystem_eventOnPlayerAddedItemToInventory_Parms, numAdded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGStorySubsystem_eventOnPlayerAddedItemToInventory_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, nullptr, "OnPlayerAddedItemToInventory", sizeof(FGStorySubsystem_eventOnPlayerAddedItemToInventory_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory_Statics::Function_MetaDataParams)) };
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
			TSubclassOf<UFGSchematic>  schematic;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGStorySubsystem_eventOnResearchRecipeTimerComplete_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Called when a schematic has completed is research in the MAM" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, nullptr, "OnResearchRecipeTimerComplete", sizeof(FGStorySubsystem_eventOnResearchRecipeTimerComplete_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics
	{
		struct FGStorySubsystem_eventOnResearchTreeUnlocked_Parms
		{
			TSubclassOf<UFGResearchTree>  researchTree;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_researchTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::NewProp_researchTree = { "researchTree", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGStorySubsystem_eventOnResearchTreeUnlocked_Parms, researchTree), Z_Construct_UClass_UFGResearchTree_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::NewProp_researchTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Called when a new research tree in unlocked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, nullptr, "OnResearchTreeUnlocked", sizeof(FGStorySubsystem_eventOnResearchTreeUnlocked_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked_Statics::FuncParams);
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::NewProp_newSchematic = { "newSchematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGStorySubsystem_eventOnSchematicPurchased_Parms, newSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::NewProp_newSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "Called when a schematic is unlocked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, nullptr, "OnSchematicPurchased", sizeof(FGStorySubsystem_eventOnSchematicPurchased_Parms), Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStorySubsystem, nullptr, "SetupDelegates", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResearchTimerCompleteMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mResearchTimerCompleteMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResearchTreeMessageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mResearchTreeMessageData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mResearchTreeMessageData_Inner;
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
		{ &Z_Construct_UFunction_AFGStorySubsystem_AddPlayer, "AddPlayer" }, // 3785638917
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnMapAreaVisited, "OnMapAreaVisited" }, // 3232576435
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnPlayerAddedItemToInventory, "OnPlayerAddedItemToInventory" }, // 2062021719
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnResearchRecipeTimerComplete, "OnResearchRecipeTimerComplete" }, // 1894263926
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnResearchTreeUnlocked, "OnResearchTreeUnlocked" }, // 1664443484
		{ &Z_Construct_UFunction_AFGStorySubsystem_OnSchematicPurchased, "OnSchematicPurchased" }, // 1370800343
		{ &Z_Construct_UFunction_AFGStorySubsystem_SetupDelegates, "SetupDelegates" }, // 1812036020
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage_MetaData[] = {
		{ "Category", "Story|Research" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage = { "mResearchTimerCompleteMessage", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGStorySubsystem, mResearchTimerCompleteMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTreeMessageData_MetaData[] = {
		{ "Category", "Story|Research" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTreeMessageData = { "mResearchTreeMessageData", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGStorySubsystem, mResearchTreeMessageData), METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTreeMessageData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTreeMessageData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTreeMessageData_Inner = { "mResearchTreeMessageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResearchTreeMessageData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData_MetaData[] = {
		{ "Category", "Story|Item" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "array of item descriptor class/message and if they have been found already" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData = { "mItemFoundData", nullptr, (EPropertyFlags)0x0040000001010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGStorySubsystem, mItemFoundData), METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mItemFoundData_Inner = { "mItemFoundData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemFoundData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData_MetaData[] = {
		{ "Category", "Story|Schematic" },
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
		{ "ToolTip", "array of schematic/message pairs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData = { "mSchematicMessageData", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGStorySubsystem, mSchematicMessageData), METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mSchematicMessageData_Inner = { "mSchematicMessageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSchematicMessagePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGStorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers = { "mActivePlayers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGStorySubsystem, mActivePlayers), METADATA_PARAMS(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mActivePlayers_Inner = { "mActivePlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGStorySubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTimerCompleteMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTreeMessageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStorySubsystem_Statics::NewProp_mResearchTreeMessageData_Inner,
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGStorySubsystem_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGStorySubsystem_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
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
	IMPLEMENT_CLASS(AFGStorySubsystem, 2212633301);
	template<> FACTORYGAME_API UClass* StaticClass<AFGStorySubsystem>()
	{
		return AFGStorySubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGStorySubsystem(Z_Construct_UClass_AFGStorySubsystem, &AFGStorySubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGStorySubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGStorySubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
