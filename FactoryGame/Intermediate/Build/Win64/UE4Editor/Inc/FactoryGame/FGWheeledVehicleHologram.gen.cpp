// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGWheeledVehicleHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWheeledVehicleHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWheeledVehicleHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWheeledVehicleHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicleHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGWheeledVehicleHologram::StaticRegisterNativesAFGWheeledVehicleHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGWheeledVehicleHologram_NoRegister()
	{
		return AFGWheeledVehicleHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGWheeledVehicleHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWheeledVehicleHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGVehicleHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWheeledVehicleHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGWheeledVehicleHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGWheeledVehicleHologram.h" },
		{ "ToolTip", "The base class for wheeled vehicle holograms." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWheeledVehicleHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWheeledVehicleHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWheeledVehicleHologram_Statics::ClassParams = {
		&AFGWheeledVehicleHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGWheeledVehicleHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWheeledVehicleHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWheeledVehicleHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWheeledVehicleHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWheeledVehicleHologram, 4144902323);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWheeledVehicleHologram(Z_Construct_UClass_AFGWheeledVehicleHologram, &AFGWheeledVehicleHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWheeledVehicleHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWheeledVehicleHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
