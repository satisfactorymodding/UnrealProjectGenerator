// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableAttachmentSplitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableAttachmentSplitter() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionItemStruct();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment();
// End Cross Module References
class UScriptStruct* FConnectionItemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConnectionItemStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionItemStruct, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConnectionItemStruct"), sizeof(FConnectionItemStruct), Get_Z_Construct_UScriptStruct_FConnectionItemStruct_CRC());
	}
	return Singleton;
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
		{ "ModuleRelativePath", "Buildables/FGBuildableAttachmentSplitter.h" },
		{ "ToolTip", "This is a struct that will assign an item to a certain connection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectionItemStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableAttachmentSplitter.h" },
		{ "ToolTip", "The item to put on the connection" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Struct, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConnectionItemStruct, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableAttachmentSplitter.h" },
		{ "ToolTip", "The connection to put the item on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FConnectionItemStruct, Connection), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::NewProp_Connection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConnectionItemStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FConnectionItemStruct),
		alignof(FConnectionItemStruct),
		Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectionItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConnectionItemStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConnectionItemStruct"), sizeof(FConnectionItemStruct), Get_Z_Construct_UScriptStruct_FConnectionItemStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConnectionItemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConnectionItemStruct_CRC() { return 1748410691U; }
	void AFGBuildableAttachmentSplitter::StaticRegisterNativesAFGBuildableAttachmentSplitter()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter_NoRegister()
	{
		return AFGBuildableAttachmentSplitter::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDistributionTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDistributionTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDistributionTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentOutputIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCurrentOutputIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableConveyorAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableAttachmentSplitter.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableAttachmentSplitter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableAttachmentSplitter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable = { UE4CodeGen_Private::EPropertyClass::Array, "mDistributionTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableAttachmentSplitter, mDistributionTable), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mDistributionTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FConnectionItemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableAttachmentSplitter.h" },
		{ "NoAutoJson", "" },
		{ "ToolTip", "Cycles through the outputs, stores the output we want to put mItem on. Index is for the mOutputs array." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex = { UE4CodeGen_Private::EPropertyClass::Int, "mCurrentOutputIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableAttachmentSplitter, mCurrentOutputIndex), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableAttachmentSplitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::ClassParams = {
		&AFGBuildableAttachmentSplitter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableAttachmentSplitter, 3450796410);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableAttachmentSplitter(Z_Construct_UClass_AFGBuildableAttachmentSplitter, &AFGBuildableAttachmentSplitter::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableAttachmentSplitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableAttachmentSplitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
