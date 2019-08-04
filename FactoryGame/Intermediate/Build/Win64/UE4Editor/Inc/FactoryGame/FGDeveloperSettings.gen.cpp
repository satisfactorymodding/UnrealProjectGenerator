// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGDeveloperSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDeveloperSettings() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDeveloperSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGDeveloperSettings::StaticRegisterNativesUFGDeveloperSettings()
	{
	}
	UClass* Z_Construct_UClass_UFGDeveloperSettings_NoRegister()
	{
		return UFGDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGreedyFocusInPIE_MetaData[];
#endif
		static void NewProp_mGreedyFocusInPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mGreedyFocusInPIE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Satisfactory Developer Settings" },
		{ "IncludePath", "FGDeveloperSettings.h" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_MetaData[] = {
		{ "Category", "Focus" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "Should widgets grab focus back on focus lost in PIE" },
	};
#endif
	void Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_SetBit(void* Obj)
	{
		((UFGDeveloperSettings*)Obj)->mGreedyFocusInPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE = { UE4CodeGen_Private::EPropertyClass::Bool, "mGreedyFocusInPIE", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGDeveloperSettings), &Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGDeveloperSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGDeveloperSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDeveloperSettings_Statics::ClassParams = {
		&UFGDeveloperSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		nullptr, 0,
		Z_Construct_UClass_UFGDeveloperSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDeveloperSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDeveloperSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDeveloperSettings, 2243377774);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDeveloperSettings(Z_Construct_UClass_UFGDeveloperSettings, &UFGDeveloperSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
