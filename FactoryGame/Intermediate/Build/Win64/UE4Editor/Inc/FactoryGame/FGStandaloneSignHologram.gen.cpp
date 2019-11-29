// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGStandaloneSignHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGStandaloneSignHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGStandaloneSignHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGStandaloneSignHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGStandaloneSignHologram::StaticRegisterNativesAFGStandaloneSignHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGStandaloneSignHologram_NoRegister()
	{
		return AFGStandaloneSignHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGStandaloneSignHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGStandaloneSignHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStandaloneSignHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGStandaloneSignHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGStandaloneSignHologram.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGStandaloneSignHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGStandaloneSignHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGStandaloneSignHologram_Statics::ClassParams = {
		&AFGStandaloneSignHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGStandaloneSignHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGStandaloneSignHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGStandaloneSignHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGStandaloneSignHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGStandaloneSignHologram, 3621081384);
	template<> FACTORYGAME_API UClass* StaticClass<AFGStandaloneSignHologram>()
	{
		return AFGStandaloneSignHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGStandaloneSignHologram(Z_Construct_UClass_AFGStandaloneSignHologram, &AFGStandaloneSignHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGStandaloneSignHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGStandaloneSignHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
