// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGRailroadSwitchHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadSwitchHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadSwitchHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadSwitchHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGRailroadSwitchHologram::StaticRegisterNativesAFGRailroadSwitchHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGRailroadSwitchHologram_NoRegister()
	{
		return AFGRailroadSwitchHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGRailroadSwitchHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRailroadSwitchHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGRailroadHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSwitchHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGRailroadSwitchHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadSwitchHologram.h" },
		{ "ToolTip", "Hologram for railroad switch controls." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRailroadSwitchHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRailroadSwitchHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRailroadSwitchHologram_Statics::ClassParams = {
		&AFGRailroadSwitchHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSwitchHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSwitchHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRailroadSwitchHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRailroadSwitchHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRailroadSwitchHologram, 1349617703);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRailroadSwitchHologram(Z_Construct_UClass_AFGRailroadSwitchHologram, &AFGRailroadSwitchHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRailroadSwitchHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRailroadSwitchHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
