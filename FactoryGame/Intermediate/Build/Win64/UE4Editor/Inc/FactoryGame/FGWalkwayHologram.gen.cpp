// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGWalkwayHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWalkwayHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWalkwayHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWalkwayHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryBuildingHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGWalkwayHologram::StaticRegisterNativesAFGWalkwayHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGWalkwayHologram_NoRegister()
	{
		return AFGWalkwayHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGWalkwayHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWalkwayHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFactoryBuildingHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWalkwayHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGWalkwayHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGWalkwayHologram.h" },
		{ "ToolTip", "Hologram for walkways." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWalkwayHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWalkwayHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWalkwayHologram_Statics::ClassParams = {
		&AFGWalkwayHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGWalkwayHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWalkwayHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWalkwayHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWalkwayHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWalkwayHologram, 2983181946);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWalkwayHologram(Z_Construct_UClass_AFGWalkwayHologram, &AFGWalkwayHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWalkwayHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWalkwayHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
