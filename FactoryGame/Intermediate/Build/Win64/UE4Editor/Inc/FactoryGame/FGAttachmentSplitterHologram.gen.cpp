// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGAttachmentSplitterHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAttachmentSplitterHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAttachmentSplitterHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAttachmentSplitterHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorAttachmentHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter_NoRegister();
// End Cross Module References
	void AFGAttachmentSplitterHologram::StaticRegisterNativesAFGAttachmentSplitterHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGAttachmentSplitterHologram_NoRegister()
	{
		return AFGAttachmentSplitterHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSnappedConnectionComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedConnectionComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpgradedSplitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mUpgradedSplitter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGConveyorAttachmentHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGAttachmentSplitterHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGAttachmentSplitterHologram.h" },
		{ "ToolTip", "Adds up/downgrade for splitters." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGAttachmentSplitterHologram.h" },
		{ "ToolTip", "Used when upgrading." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mSnappedConnectionComponents = { "mSnappedConnectionComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGAttachmentSplitterHologram, mSnappedConnectionComponents), METADATA_PARAMS(Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mSnappedConnectionComponents_Inner = { "mSnappedConnectionComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mUpgradedSplitter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGAttachmentSplitterHologram.h" },
		{ "ToolTip", "If we're upgrading another actor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mUpgradedSplitter = { "mUpgradedSplitter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGAttachmentSplitterHologram, mUpgradedSplitter), Z_Construct_UClass_AFGBuildableAttachmentSplitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mUpgradedSplitter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mUpgradedSplitter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mSnappedConnectionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mSnappedConnectionComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::NewProp_mUpgradedSplitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGAttachmentSplitterHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::ClassParams = {
		&AFGAttachmentSplitterHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGAttachmentSplitterHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGAttachmentSplitterHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGAttachmentSplitterHologram, 4133965981);
	template<> FACTORYGAME_API UClass* StaticClass<AFGAttachmentSplitterHologram>()
	{
		return AFGAttachmentSplitterHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGAttachmentSplitterHologram(Z_Construct_UClass_AFGAttachmentSplitterHologram, &AFGAttachmentSplitterHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGAttachmentSplitterHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGAttachmentSplitterHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
