// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableConveyorAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableConveyorAttachment() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionItemStruct();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FConnectionItemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConnectionItemStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionItemStruct, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConnectionItemStruct"), sizeof(FConnectionItemStruct), Get_Z_Construct_UScriptStruct_FConnectionItemStruct_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FConnectionItemStruct>()
{
	return FConnectionItemStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConnectionItemStruct(FConnectionItemStruct::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ConnectionItemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFConnectionItemStruct
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFConnectionItemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConnectionItemStruct")),new UScriptStruct::TCppStructOps<FConnectionItemStruct>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFConnectionItemStruct;
	struct Z_Construct_UScriptStruct_FConnectionItemStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorAttachment.h" },
		{ "ToolTip", "This is a struct that will assign an item to a certain connection. Used by splitters to cycle outputs so all items dont always go to one output" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectionItemStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorAttachment.h" },
		{ "ToolTip", "The item to put on the connection" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConnectionItemStruct, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorAttachment.h" },
		{ "ToolTip", "The connection to put the item on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConnectionItemStruct, Connection), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConnectionItemStruct",
		sizeof(FConnectionItemStruct),
		alignof(FConnectionItemStruct),
		Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectionItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConnectionItemStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConnectionItemStruct"), sizeof(FConnectionItemStruct), Get_Z_Construct_UScriptStruct_FConnectionItemStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConnectionItemStruct_Hash() { return 754765215U; }
	void AFGBuildableConveyorAttachment::StaticRegisterNativesAFGBuildableConveyorAttachment()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment_NoRegister()
	{
		return AFGBuildableConveyorAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBufferInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBufferInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableConveyorAttachment.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorAttachment.h" },
		{ "ToolTip", "The inventory to store everything in. Don't use this directly, use mStorageInventoryHandler->GetActiveInventoryComponent()" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory = { "mBufferInventory", nullptr, (EPropertyFlags)0x0020080001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorAttachment, mBufferInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableConveyorAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::ClassParams = {
		&AFGBuildableConveyorAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableConveyorAttachment, 1823618559);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableConveyorAttachment>()
	{
		return AFGBuildableConveyorAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableConveyorAttachment(Z_Construct_UClass_AFGBuildableConveyorAttachment, &AFGBuildableConveyorAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableConveyorAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableConveyorAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
