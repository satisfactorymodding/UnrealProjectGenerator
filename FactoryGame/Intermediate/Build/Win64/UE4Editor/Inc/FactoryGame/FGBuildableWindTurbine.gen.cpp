// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableWindTurbine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableWindTurbine() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWindTurbine_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWindTurbine();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGBuildableWindTurbine::StaticRegisterNativesAFGBuildableWindTurbine()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableWindTurbine_NoRegister()
	{
		return AFGBuildableWindTurbine::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableWindTurbine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableWindTurbine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWindTurbine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableWindTurbine.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWindTurbine.h" },
		{ "ToolTip", "Generates power from wind." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableWindTurbine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableWindTurbine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableWindTurbine_Statics::ClassParams = {
		&AFGBuildableWindTurbine::StaticClass,
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
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWindTurbine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWindTurbine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableWindTurbine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableWindTurbine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableWindTurbine, 1861575452);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableWindTurbine>()
	{
		return AFGBuildableWindTurbine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableWindTurbine(Z_Construct_UClass_AFGBuildableWindTurbine, &AFGBuildableWindTurbine::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableWindTurbine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableWindTurbine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
