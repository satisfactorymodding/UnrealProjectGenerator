// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGWallHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWallHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWallHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWallHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryBuildingHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGWallHologram::StaticRegisterNativesAFGWallHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGWallHologram_NoRegister()
	{
		return AFGWallHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGWallHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWallHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFactoryBuildingHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWallHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGWallHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGWallHologram.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWallHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWallHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWallHologram_Statics::ClassParams = {
		&AFGWallHologram::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFGWallHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWallHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWallHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWallHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWallHologram, 3874867551);
	template<> FACTORYGAME_API UClass* StaticClass<AFGWallHologram>()
	{
		return AFGWallHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWallHologram(Z_Construct_UClass_AFGWallHologram, &AFGWallHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWallHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWallHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
