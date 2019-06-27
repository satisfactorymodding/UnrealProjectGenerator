// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGFloorHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFloorHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFloorHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFloorHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryBuildingHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGFloorHologram::StaticRegisterNativesAFGFloorHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGFloorHologram_NoRegister()
	{
		return AFGFloorHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGFloorHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFloorHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFactoryBuildingHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFloorHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGFloorHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGFloorHologram.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFloorHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFloorHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFloorHologram_Statics::ClassParams = {
		&AFGFloorHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGFloorHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFloorHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFloorHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFloorHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFloorHologram, 752467693);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFloorHologram(Z_Construct_UClass_AFGFloorHologram, &AFGFloorHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFloorHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFloorHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
