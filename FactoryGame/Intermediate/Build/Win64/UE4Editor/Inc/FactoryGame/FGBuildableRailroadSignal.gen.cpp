// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableRailroadSignal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRailroadSignal() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadSignal_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadSignal();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGBuildableRailroadSignal::StaticRegisterNativesAFGBuildableRailroadSignal()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableRailroadSignal_NoRegister()
	{
		return AFGBuildableRailroadSignal::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRailroadSignal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRailroadSignal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadSignal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableRailroadSignal.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRailroadSignal.h" },
		{ "ToolTip", "A signal for the railroad, these are placed on connection points and separate access to tracks by block signaling." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRailroadSignal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRailroadSignal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRailroadSignal_Statics::ClassParams = {
		&AFGBuildableRailroadSignal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadSignal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadSignal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableRailroadSignal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableRailroadSignal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableRailroadSignal, 2611683714);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableRailroadSignal>()
	{
		return AFGBuildableRailroadSignal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRailroadSignal(Z_Construct_UClass_AFGBuildableRailroadSignal, &AFGBuildableRailroadSignal::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRailroadSignal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRailroadSignal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
