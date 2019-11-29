// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGRoadHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRoadHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRoadHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRoadHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplineHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRoadConnectionComponent_NoRegister();
// End Cross Module References
	void AFGRoadHologram::StaticRegisterNativesAFGRoadHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGRoadHologram_NoRegister()
	{
		return AFGRoadHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGRoadHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedConnectionComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRoadHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSplineHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRoadHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGRoadHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGRoadHologram.h" },
		{ "ToolTip", "Hologram for spline roads." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hologram/FGRoadHologram.h" },
		{ "ToolTip", "The connection we snapped to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mSnappedConnectionComponents = { "mSnappedConnectionComponents", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mSnappedConnectionComponents, AFGRoadHologram), STRUCT_OFFSET(AFGRoadHologram, mSnappedConnectionComponents), Z_Construct_UClass_UFGRoadConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mConnectionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hologram/FGRoadHologram.h" },
		{ "ToolTip", "The connections we have." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mConnectionComponents = { "mConnectionComponents", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mConnectionComponents, AFGRoadHologram), STRUCT_OFFSET(AFGRoadHologram, mConnectionComponents), Z_Construct_UClass_UFGRoadConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mConnectionComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRoadHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mSnappedConnectionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRoadHologram_Statics::NewProp_mConnectionComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRoadHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRoadHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRoadHologram_Statics::ClassParams = {
		&AFGRoadHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGRoadHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGRoadHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGRoadHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRoadHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRoadHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRoadHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRoadHologram, 3591167036);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRoadHologram>()
	{
		return AFGRoadHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRoadHologram(Z_Construct_UClass_AFGRoadHologram, &AFGRoadHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRoadHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRoadHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
