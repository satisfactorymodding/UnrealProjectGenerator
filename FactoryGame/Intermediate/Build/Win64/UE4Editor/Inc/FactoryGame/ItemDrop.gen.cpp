// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/ItemDrop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDrop() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemDropWithChance();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemDrop();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
// End Cross Module References
class UScriptStruct* FItemDropWithChance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FItemDropWithChance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDropWithChance, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ItemDropWithChance"), sizeof(FItemDropWithChance), Get_Z_Construct_UScriptStruct_FItemDropWithChance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemDropWithChance(FItemDropWithChance::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ItemDropWithChance"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFItemDropWithChance
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFItemDropWithChance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemDropWithChance")),new UScriptStruct::TCppStructOps<FItemDropWithChance>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFItemDropWithChance;
	struct Z_Construct_UScriptStruct_FItemDropWithChance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Drop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Drop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDropWithChance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemDrop.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDropWithChance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_Drop_MetaData[] = {
		{ "Category", "ItemDropWithChance" },
		{ "ModuleRelativePath", "Public/ItemDrop.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The drop to be given if we gain the item" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_Drop = { UE4CodeGen_Private::EPropertyClass::Struct, "Drop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FItemDropWithChance, Drop), Z_Construct_UScriptStruct_FItemDrop, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_Drop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_Drop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_DropChance_MetaData[] = {
		{ "Category", "DropPackage" },
		{ "ModuleRelativePath", "Public/ItemDrop.h" },
		{ "ToolTip", "A chance between 0->1, 1 means 100% drop chance" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_DropChance = { UE4CodeGen_Private::EPropertyClass::Float, "DropChance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FItemDropWithChance, DropChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_DropChance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_DropChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDropWithChance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_Drop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDropWithChance_Statics::NewProp_DropChance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDropWithChance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ItemDropWithChance",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FItemDropWithChance),
		alignof(FItemDropWithChance),
		Z_Construct_UScriptStruct_FItemDropWithChance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDropWithChance_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDropWithChance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDropWithChance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemDropWithChance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemDropWithChance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemDropWithChance"), sizeof(FItemDropWithChance), Get_Z_Construct_UScriptStruct_FItemDropWithChance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemDropWithChance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemDropWithChance_CRC() { return 2998134846U; }
class UScriptStruct* FItemDrop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FItemDrop_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDrop, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ItemDrop"), sizeof(FItemDrop), Get_Z_Construct_UScriptStruct_FItemDrop_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemDrop(FItemDrop::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ItemDrop"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFItemDrop
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFItemDrop()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemDrop")),new UScriptStruct::TCppStructOps<FItemDrop>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFItemDrop;
	struct Z_Construct_UScriptStruct_FItemDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDrop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemDrop.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemDrop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDrop>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_NumItems_MetaData[] = {
		{ "Category", "DropPackage" },
		{ "ModuleRelativePath", "Public/ItemDrop.h" },
		{ "ToolTip", "Range of items you can get" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_NumItems = { UE4CodeGen_Private::EPropertyClass::Struct, "NumItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FItemDrop, NumItems), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_NumItems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_NumItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "DropPackage" },
		{ "ModuleRelativePath", "Public/ItemDrop.h" },
		{ "ToolTip", "Item class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_ItemClass = { UE4CodeGen_Private::EPropertyClass::Class, "ItemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000015, 1, nullptr, STRUCT_OFFSET(FItemDrop, ItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_ItemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_NumItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDrop_Statics::NewProp_ItemClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDrop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ItemDrop",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FItemDrop),
		alignof(FItemDrop),
		Z_Construct_UScriptStruct_FItemDrop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDrop_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDrop_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDrop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemDrop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemDrop_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemDrop"), sizeof(FItemDrop), Get_Z_Construct_UScriptStruct_FItemDrop_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemDrop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemDrop_CRC() { return 2416476989U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
