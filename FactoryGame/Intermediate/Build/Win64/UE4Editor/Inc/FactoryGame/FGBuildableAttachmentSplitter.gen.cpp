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
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionItemStruct();
// End Cross Module References
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable = { UE4CodeGen_Private::EPropertyClass::Array, "mDistributionTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableAttachmentSplitter, mDistributionTable), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentSplitter_Statics::NewProp_mDistributionTable_MetaData)) };
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
	IMPLEMENT_CLASS(AFGBuildableAttachmentSplitter, 3145577743);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableAttachmentSplitter(Z_Construct_UClass_AFGBuildableAttachmentSplitter, &AFGBuildableAttachmentSplitter::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableAttachmentSplitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableAttachmentSplitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
