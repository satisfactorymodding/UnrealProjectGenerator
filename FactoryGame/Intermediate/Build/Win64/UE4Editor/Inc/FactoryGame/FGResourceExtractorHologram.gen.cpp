// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGResourceExtractorHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResourceExtractorHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceExtractorHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceExtractorHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableResourceExtractor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGExtractableResourceInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConstructDisqualifier_NoRegister();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResourceForm();
// End Cross Module References
	void AFGResourceExtractorHologram::StaticRegisterNativesAFGResourceExtractorHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGResourceExtractorHologram_NoRegister()
	{
		return AFGResourceExtractorHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGResourceExtractorHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpgradeTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mUpgradeTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedExtractableResource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_mSnappedExtractableResource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllowedResources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllowedResources;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAllowedResources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMustPlaceOnResourceDisqualifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mMustPlaceOnResourceDisqualifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllowedResourceForms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllowedResourceForms;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mAllowedResourceForms_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mAllowedResourceForms_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGResourceExtractorHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFactoryHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceExtractorHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGResourceExtractorHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGResourceExtractorHologram.h" },
		{ "ToolTip", "Hologram for buildings that can only be placed (snapped) on resource nodes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mUpgradeTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGResourceExtractorHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mUpgradeTarget = { "mUpgradeTarget", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResourceExtractorHologram, mUpgradeTarget), Z_Construct_UClass_AFGBuildableResourceExtractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mUpgradeTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mUpgradeTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedExtractableResource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGResourceExtractorHologram.h" },
		{ "ToolTip", "The resource node we snapped to." },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedExtractableResource = { "mSnappedExtractableResource", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResourceExtractorHologram, mSnappedExtractableResource), Z_Construct_UClass_UFGExtractableResourceInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedExtractableResource_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedExtractableResource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResources_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGResourceExtractorHologram.h" },
		{ "ToolTip", "If this buildable only allows certain resources for placement, this is the list of those taken from the buildable" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResources = { "mAllowedResources", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResourceExtractorHologram, mAllowedResources), METADATA_PARAMS(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResources_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResources_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResources_Inner = { "mAllowedResources", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mMustPlaceOnResourceDisqualifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGResourceExtractorHologram.h" },
		{ "ToolTip", "Class of disqualifier to display when not snapped to a resource ( copied from buildable )" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mMustPlaceOnResourceDisqualifier = { "mMustPlaceOnResourceDisqualifier", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResourceExtractorHologram, mMustPlaceOnResourceDisqualifier), Z_Construct_UClass_UFGConstructDisqualifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mMustPlaceOnResourceDisqualifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mMustPlaceOnResourceDisqualifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGResourceExtractorHologram.h" },
		{ "ToolTip", "What form can the overlapping resources be in." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms = { "mAllowedResourceForms", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResourceExtractorHologram, mAllowedResourceForms), METADATA_PARAMS(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_Inner = { "mAllowedResourceForms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGResourceExtractorHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mUpgradeTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedExtractableResource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mMustPlaceOnResourceDisqualifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_Inner_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGResourceExtractorHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGResourceExtractorHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::ClassParams = {
		&AFGResourceExtractorHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGResourceExtractorHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGResourceExtractorHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGResourceExtractorHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGResourceExtractorHologram, 2928680431);
	template<> FACTORYGAME_API UClass* StaticClass<AFGResourceExtractorHologram>()
	{
		return AFGResourceExtractorHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGResourceExtractorHologram(Z_Construct_UClass_AFGResourceExtractorHologram, &AFGResourceExtractorHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGResourceExtractorHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGResourceExtractorHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
