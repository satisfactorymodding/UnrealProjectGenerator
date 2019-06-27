// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableConveyorBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableConveyorBase() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConveyorBeltItems();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConveyorBeltItem();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBase();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FConveyorBeltItems::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConveyorBeltItems, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConveyorBeltItems"), sizeof(FConveyorBeltItems), Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConveyorBeltItems(FConveyorBeltItems::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ConveyorBeltItems"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItems
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItems()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConveyorBeltItems")),new UScriptStruct::TCppStructOps<FConveyorBeltItems>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItems;
	struct Z_Construct_UScriptStruct_FConveyorBeltItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayReplicationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayReplicationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ItemMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IDCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IDCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Struct to help replicate the conveyor belt items array.\nIt's a lean version of fast TArray replication that guarantee the same order of the elements on server and client.\nIt lacks support for:\n  - Item changes (initial replication only) there is a todo in the source file on how this can be added if needed.\n  - Mapping of object references (objects that are replicated that is). Look at fast TArray replication on how to implement this if needed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConveyorBeltItems>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ArrayReplicationKey_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Like a dirty flag." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ArrayReplicationKey = { UE4CodeGen_Private::EPropertyClass::Int, "ArrayReplicationKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItems, ArrayReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ArrayReplicationKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ArrayReplicationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "The items on the conveyor belt." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItems, Items), METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_Items_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FConveyorBeltItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ItemMap_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "This maps ReplicationID to our local index into the Items array" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ItemMap = { UE4CodeGen_Private::EPropertyClass::Map, "ItemMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItems, ItemMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ItemMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ItemMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ItemMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "ItemMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ItemMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "ItemMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_IDCounter_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Counter for assigning new replication IDs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_IDCounter = { UE4CodeGen_Private::EPropertyClass::Int, "IDCounter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItems, IDCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_IDCounter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_IDCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ArrayReplicationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ItemMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ItemMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_ItemMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewProp_IDCounter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConveyorBeltItems",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FConveyorBeltItems),
		alignof(FConveyorBeltItems),
		Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConveyorBeltItems()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConveyorBeltItems"), sizeof(FConveyorBeltItems), Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC() { return 1562560395U; }
class UScriptStruct* FConveyorBeltItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConveyorBeltItem, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConveyorBeltItem"), sizeof(FConveyorBeltItem), Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConveyorBeltItem(FConveyorBeltItem::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ConveyorBeltItem"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItem
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConveyorBeltItem")),new UScriptStruct::TCppStructOps<FConveyorBeltItem>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItem;
	struct Z_Construct_UScriptStruct_FConveyorBeltItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Holds data for an item traveling on the conveyor.\n\n@note This item must not contain any object references as they will not get replicated correctly.\n@note We do not yet support changes to variables, only initial replication will be done.\n@note We only support adds at the end of the array, no inserts allowed!\n\n@see FConveyorBeltItems::NetDeltaSerialize for more comments about the features supported and not." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConveyorBeltItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationKey_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationKey = { UE4CodeGen_Private::EPropertyClass::Int, "ReplicationKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItem, ReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationID_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationID = { UE4CodeGen_Private::EPropertyClass::Int, "ReplicationID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItem, ReplicationID), METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "The offset of this item along the conveyor belt in range [0,LENGTH].\n@todo This only need to replicate when the item is added to the conveyor as it is simulated locally on the client after that.\n      Having this replicated always works for now because we never mark an item as dirty after adding it.\n      I.e. we only do one replication per item." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Float, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItem, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "The type of this item." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Struct, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItem, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_ReplicationID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConveyorBeltItem",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FConveyorBeltItem),
		alignof(FConveyorBeltItem),
		Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConveyorBeltItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConveyorBeltItem"), sizeof(FConveyorBeltItem), Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC() { return 4178561828U; }
	void AFGBuildableConveyorBase::StaticRegisterNativesAFGBuildableConveyorBase()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableConveyorBase_NoRegister()
	{
		return AFGBuildableConveyorBase::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableConveyorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnection1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnection1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnection0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnection0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableConveyorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Shared base for conveyor belts and lifts.\nResponsible for common logic such as the factory ticking, replication, interactions etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1_MetaData[] = {
		{ "Category", "Conveyor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Second connection on conveyor belt" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1 = { UE4CodeGen_Private::EPropertyClass::Object, "mConnection1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorBase, mConnection1), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0_MetaData[] = {
		{ "Category", "Conveyor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "First connection on conveyor belt, Connections are always in the same order, mConnection0 is the input, mConnection1 is the output." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0 = { UE4CodeGen_Private::EPropertyClass::Object, "mConnection0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorBase, mConnection0), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "NoAutoJson", "" },
		{ "ToolTip", "All the locally simulated resource offsets on the conveyor belt." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems = { UE4CodeGen_Private::EPropertyClass::Struct, "mItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorBase, mItems), Z_Construct_UScriptStruct_FConveyorBeltItems, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed_MetaData[] = {
		{ "Category", "Conveyor" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Speed of this conveyor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorBase, mSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableConveyorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableConveyorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableConveyorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::ClassParams = {
		&AFGBuildableConveyorBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		nullptr, 0,
		Z_Construct_UClass_AFGBuildableConveyorBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableConveyorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableConveyorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableConveyorBase, 667522626);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableConveyorBase(Z_Construct_UClass_AFGBuildableConveyorBase, &AFGBuildableConveyorBase::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableConveyorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableConveyorBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGBuildableConveyorBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
