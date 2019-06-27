// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSettings() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGSettings::StaticRegisterNativesUFGSettings()
	{
	}
	UClass* Z_Construct_UClass_UFGSettings_NoRegister()
	{
		return UFGSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSettings_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "TRUE" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSettings_Statics::ClassParams = {
		&UFGSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSettings, 1456080870);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSettings(Z_Construct_UClass_UFGSettings, &UFGSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
