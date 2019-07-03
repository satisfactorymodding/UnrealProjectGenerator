// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGResourceExtractorHologram.h"
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
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedResourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedResourceNode;
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
		{ "ModuleRelativePath", "Hologram/FGResourceExtractorHologram.h" },
		{ "ToolTip", "Hologram for buildings that can only be placed (snapped) on resource nodes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedResourceNode_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGResourceExtractorHologram.h" },
		{ "ToolTip", "The resource node we snapped to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedResourceNode = { UE4CodeGen_Private::EPropertyClass::Object, "mSnappedResourceNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGResourceExtractorHologram, mSnappedResourceNode), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedResourceNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedResourceNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGResourceExtractorHologram.h" },
		{ "ToolTip", "What form can the overlapping resources be in." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms = { UE4CodeGen_Private::EPropertyClass::Array, "mAllowedResourceForms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGResourceExtractorHologram, mAllowedResourceForms), METADATA_PARAMS(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "mAllowedResourceForms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGResourceExtractorHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mSnappedResourceNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceExtractorHologram_Statics::NewProp_mAllowedResourceForms_Inner_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGResourceExtractorHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGResourceExtractorHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGResourceExtractorHologram_Statics::ClassParams = {
		&AFGResourceExtractorHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGResourceExtractorHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGResourceExtractorHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGResourceExtractorHologram, 2621257153);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGResourceExtractorHologram(Z_Construct_UClass_AFGResourceExtractorHologram, &AFGResourceExtractorHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGResourceExtractorHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGResourceExtractorHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
