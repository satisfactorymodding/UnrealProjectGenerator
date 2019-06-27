// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableSpeedSign.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableSpeedSign() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSpeedSign_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSpeedSign();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGBuildableSpeedSign::StaticRegisterNativesAFGBuildableSpeedSign()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableSpeedSign_NoRegister()
	{
		return AFGBuildableSpeedSign::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableSpeedSign_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableSpeedSign_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSpeedSign_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableSpeedSign.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpeedSign.h" },
		{ "ToolTip", "Vehicles can not go too fast past this." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableSpeedSign_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableSpeedSign>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableSpeedSign_Statics::ClassParams = {
		&AFGBuildableSpeedSign::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSpeedSign_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSpeedSign_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableSpeedSign()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableSpeedSign_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableSpeedSign, 644915559);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableSpeedSign(Z_Construct_UClass_AFGBuildableSpeedSign, &AFGBuildableSpeedSign::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableSpeedSign"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableSpeedSign);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
