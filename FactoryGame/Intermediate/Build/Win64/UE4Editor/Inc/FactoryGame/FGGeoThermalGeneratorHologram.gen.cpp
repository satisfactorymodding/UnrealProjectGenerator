// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGGeoThermalGeneratorHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGeoThermalGeneratorHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGeoThermalGeneratorHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGeoThermalGeneratorHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceExtractorHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGGeoThermalGeneratorHologram::StaticRegisterNativesAFGGeoThermalGeneratorHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGGeoThermalGeneratorHologram_NoRegister()
	{
		return AFGGeoThermalGeneratorHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGGeoThermalGeneratorHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGGeoThermalGeneratorHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGResourceExtractorHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGeoThermalGeneratorHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGGeoThermalGeneratorHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGGeoThermalGeneratorHologram.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGGeoThermalGeneratorHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGeoThermalGeneratorHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGGeoThermalGeneratorHologram_Statics::ClassParams = {
		&AFGGeoThermalGeneratorHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGGeoThermalGeneratorHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGGeoThermalGeneratorHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGGeoThermalGeneratorHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGGeoThermalGeneratorHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGGeoThermalGeneratorHologram, 448995842);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGGeoThermalGeneratorHologram(Z_Construct_UClass_AFGGeoThermalGeneratorHologram, &AFGGeoThermalGeneratorHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGGeoThermalGeneratorHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGGeoThermalGeneratorHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
