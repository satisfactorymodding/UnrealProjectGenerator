// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGFoundationHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFoundationHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoundationHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoundationHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryBuildingHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGFoundationHologram::StaticRegisterNativesAFGFoundationHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGFoundationHologram_NoRegister()
	{
		return AFGFoundationHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGFoundationHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFoundationHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFactoryBuildingHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoundationHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGFoundationHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGFoundationHologram.h" },
		{ "ToolTip", "Base hologram for foundation type buildables." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFoundationHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFoundationHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFoundationHologram_Statics::ClassParams = {
		&AFGFoundationHologram::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFGFoundationHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFoundationHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFoundationHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFoundationHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFoundationHologram, 1111699507);
	template<> FACTORYGAME_API UClass* StaticClass<AFGFoundationHologram>()
	{
		return AFGFoundationHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFoundationHologram(Z_Construct_UClass_AFGFoundationHologram, &AFGFoundationHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFoundationHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFoundationHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
