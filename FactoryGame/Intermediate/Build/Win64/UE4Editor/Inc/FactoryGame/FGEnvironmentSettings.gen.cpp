// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGEnvironmentSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEnvironmentSettings() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEnvironmentSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEnvironmentSettings();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSettings();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	void UFGEnvironmentSettings::StaticRegisterNativesUFGEnvironmentSettings()
	{
	}
	UClass* Z_Construct_UClass_UFGEnvironmentSettings_NoRegister()
	{
		return UFGEnvironmentSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGEnvironmentSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWorldBoundsParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mWorldBoundsParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGEnvironmentSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvironmentSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGEnvironmentSettings.h" },
		{ "ModuleRelativePath", "FGEnvironmentSettings.h" },
		{ "ToolTip", "Settings for the environment" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvironmentSettings_Statics::NewProp_mWorldBoundsParameters_MetaData[] = {
		{ "Category", "FGEnvironmentSettings" },
		{ "ModuleRelativePath", "FGEnvironmentSettings.h" },
		{ "ToolTip", "The collection containing the world bounds" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGEnvironmentSettings_Statics::NewProp_mWorldBoundsParameters = { UE4CodeGen_Private::EPropertyClass::Object, "mWorldBoundsParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGEnvironmentSettings, mWorldBoundsParameters), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGEnvironmentSettings_Statics::NewProp_mWorldBoundsParameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGEnvironmentSettings_Statics::NewProp_mWorldBoundsParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGEnvironmentSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGEnvironmentSettings_Statics::NewProp_mWorldBoundsParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGEnvironmentSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGEnvironmentSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGEnvironmentSettings_Statics::ClassParams = {
		&UFGEnvironmentSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		nullptr, 0,
		Z_Construct_UClass_UFGEnvironmentSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGEnvironmentSettings_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGEnvironmentSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGEnvironmentSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGEnvironmentSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGEnvironmentSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGEnvironmentSettings, 1925730401);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGEnvironmentSettings(Z_Construct_UClass_UFGEnvironmentSettings, &UFGEnvironmentSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGEnvironmentSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGEnvironmentSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
