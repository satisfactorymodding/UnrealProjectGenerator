// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGNetSerialization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNetSerialization() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomFastArraySerializer();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomFastArraySerializerItem();
// End Cross Module References
class UScriptStruct* FCustomFastArraySerializer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCustomFastArraySerializer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomFastArraySerializer, Z_Construct_UPackage__Script_FactoryGame(), TEXT("CustomFastArraySerializer"), sizeof(FCustomFastArraySerializer), Get_Z_Construct_UScriptStruct_FCustomFastArraySerializer_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FCustomFastArraySerializer>()
{
	return FCustomFastArraySerializer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomFastArraySerializer(FCustomFastArraySerializer::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("CustomFastArraySerializer"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFCustomFastArraySerializer
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFCustomFastArraySerializer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomFastArraySerializer")),new UScriptStruct::TCppStructOps<FCustomFastArraySerializer>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFCustomFastArraySerializer;
	struct Z_Construct_UScriptStruct_FCustomFastArraySerializer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFastArraySerializer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGNetSerialization.h" },
		{ "ToolTip", "Base struct for wrapping the array used in Custom Fast TArray Replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomFastArraySerializer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomFastArraySerializer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomFastArraySerializer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"CustomFastArraySerializer",
		sizeof(FCustomFastArraySerializer),
		alignof(FCustomFastArraySerializer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFastArraySerializer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFastArraySerializer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomFastArraySerializer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomFastArraySerializer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomFastArraySerializer"), sizeof(FCustomFastArraySerializer), Get_Z_Construct_UScriptStruct_FCustomFastArraySerializer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomFastArraySerializer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomFastArraySerializer_Hash() { return 1862058077U; }
class UScriptStruct* FCustomFastArraySerializerItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem, Z_Construct_UPackage__Script_FactoryGame(), TEXT("CustomFastArraySerializerItem"), sizeof(FCustomFastArraySerializerItem), Get_Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FCustomFastArraySerializerItem>()
{
	return FCustomFastArraySerializerItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomFastArraySerializerItem(FCustomFastArraySerializerItem::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("CustomFastArraySerializerItem"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFCustomFastArraySerializerItem
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFCustomFastArraySerializerItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomFastArraySerializerItem")),new UScriptStruct::TCppStructOps<FCustomFastArraySerializerItem>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFCustomFastArraySerializerItem;
	struct Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MostRecentArrayReplicationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MostRecentArrayReplicationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGNetSerialization.h" },
		{ "ToolTip", "Base struct for items using Custom Fast TArray Replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomFastArraySerializerItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGNetSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey = { "MostRecentArrayReplicationKey", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFastArraySerializerItem, MostRecentArrayReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGNetSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationKey = { "ReplicationKey", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFastArraySerializerItem, ReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGNetSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationID = { "ReplicationID", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFastArraySerializerItem, ReplicationID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::NewProp_ReplicationID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"CustomFastArraySerializerItem",
		sizeof(FCustomFastArraySerializerItem),
		alignof(FCustomFastArraySerializerItem),
		Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomFastArraySerializerItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomFastArraySerializerItem"), sizeof(FCustomFastArraySerializerItem), Get_Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomFastArraySerializerItem_Hash() { return 1653552545U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
