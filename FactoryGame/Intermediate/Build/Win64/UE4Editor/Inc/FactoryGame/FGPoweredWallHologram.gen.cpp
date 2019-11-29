// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGPoweredWallHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPoweredWallHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPoweredWallHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPoweredWallHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWallHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGPoweredWallHologram::StaticRegisterNativesAFGPoweredWallHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGPoweredWallHologram_NoRegister()
	{
		return AFGPoweredWallHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGPoweredWallHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPoweredWallHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWallHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPoweredWallHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGPoweredWallHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGPoweredWallHologram.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPoweredWallHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPoweredWallHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPoweredWallHologram_Statics::ClassParams = {
		&AFGPoweredWallHologram::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFGPoweredWallHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGPoweredWallHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPoweredWallHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPoweredWallHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPoweredWallHologram, 3751816227);
	template<> FACTORYGAME_API UClass* StaticClass<AFGPoweredWallHologram>()
	{
		return AFGPoweredWallHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPoweredWallHologram(Z_Construct_UClass_AFGPoweredWallHologram, &AFGPoweredWallHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPoweredWallHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPoweredWallHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
