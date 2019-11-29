// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableRamp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRamp() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRamp_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRamp();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFoundation();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGBuildableRamp::StaticRegisterNativesAFGBuildableRamp()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableRamp_NoRegister()
	{
		return AFGBuildableRamp::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRamp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRamp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFoundation,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRamp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableRamp.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRamp.h" },
		{ "ToolTip", "Base class for all kinds of ramps." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRamp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRamp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRamp_Statics::ClassParams = {
		&AFGBuildableRamp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRamp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRamp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableRamp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableRamp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableRamp, 363797678);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableRamp>()
	{
		return AFGBuildableRamp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRamp(Z_Construct_UClass_AFGBuildableRamp, &AFGBuildableRamp::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRamp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRamp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
