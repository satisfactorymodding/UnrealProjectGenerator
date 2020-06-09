// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableAttachmentSplitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableAttachmentSplitter() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConveyorSpaceData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionItemStruct();
// End Cross Module References
class UScriptStruct* FConveyorSpaceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConveyorSpaceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConveyorSpaceData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConveyorSpaceData"), sizeof(FConveyorSpaceData), Get_Z_Construct_UScriptStruct_FConveyorSpaceData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FConveyorSpaceData>()
{
	return FConveyorSpaceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConveyorSpaceData(FConveyorSpaceData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ConveyorSpaceData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorSpaceData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorSpaceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConveyorSpaceData")),new UScriptStruct::TCppStructOps<FConveyorSpaceData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFConveyorSpaceData;
	struct Z_Construct_UScriptStruct_FConveyorSpaceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorSpaceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableAttachmentSplitter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConveyorSpaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConveyorSpaceData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConveyorSpaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConveyorSpaceData",
		sizeof(FConveyorSpaceData),
		alignof(FConveyorSpaceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorSpaceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorSpaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConveyorSpaceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConveyorSpaceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConveyorSpaceData"), sizeof(FConveyorSpaceData), Get_Z_Construct_UScriptStruct_FConveyorSpaceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConveyorSpaceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConveyorSpaceData_Hash() { return 791805699U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConveyorSpaceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mConveyorSpaceData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConveyorSpaceData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mConveyorSpaceData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDistributionTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDistributionTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDistributionTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentInventoryIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCurrentInventoryIndex;
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
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableAttachmentSplitter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mConveyorSpaceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableAttachmentSplitter.h" },
		{ "ToolTip", "Store last cached available space and if an item have been grabbed by the connected components" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mConveyorSpaceData = { "mConveyorSpaceData", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableAttachmentSplitter, mConveyorSpaceData), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mConveyorSpaceData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mConveyorSpaceData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mConveyorSpaceData_Key_KeyProp = { "mConveyorSpaceData_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mConveyorSpaceData_ValueProp = { "mConveyorSpaceData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FConveyorSpaceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableAttachmentSplitter.h" },
		{ "ToolTip", "Table of all items in the inventory mapped to a desired output. The array is filled from a call to FillDistributionTable which runs in factory tick" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable = { "mDistributionTable", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableAttachmentSplitter, mDistributionTable), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_Inner = { "mDistributionTable", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConnectionItemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentInventoryIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableAttachmentSplitter.h" },
		{ "NoAutoJson", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentInventoryIndex = { "mCurrentInventoryIndex", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableAttachmentSplitter, mCurrentInventoryIndex), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentInventoryIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentInventoryIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableAttachmentSplitter.h" },
		{ "NoAutoJson", "" },
		{ "ToolTip", "Cycles through the outputs, stores the output we want to put mItem on. Index is for the mOutputs array." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex = { "mCurrentOutputIndex", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableAttachmentSplitter, mCurrentOutputIndex), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mConveyorSpaceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mConveyorSpaceData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mConveyorSpaceData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentInventoryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mCurrentOutputIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableAttachmentSplitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::ClassParams = {
		&AFGBuildableAttachmentSplitter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::PropPointers),
		0,
		0x009002A4u,
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
	IMPLEMENT_CLASS(AFGBuildableAttachmentSplitter, 2222004227);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableAttachmentSplitter>()
	{
		return AFGBuildableAttachmentSplitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableAttachmentSplitter(Z_Construct_UClass_AFGBuildableAttachmentSplitter, &AFGBuildableAttachmentSplitter::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableAttachmentSplitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableAttachmentSplitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
