// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSharedPostProcessSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSharedPostProcessSettings() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSharedPostProcessSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSharedPostProcessSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
// End Cross Module References
	void UFGSharedPostProcessSettings::StaticRegisterNativesUFGSharedPostProcessSettings()
	{
	}
	UClass* Z_Construct_UClass_UFGSharedPostProcessSettings_NoRegister()
	{
		return UFGSharedPostProcessSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGSharedPostProcessSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBlendRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBlendRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPostProcessSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGSharedPostProcessSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGSharedPostProcessSettings.h" },
		{ "ToolTip", "Presets for post process settings for water volumes" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPriority_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Public/FGSharedPostProcessSettings.h" },
		{ "ToolTip", "Priority of the post process effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPriority = { "mPriority", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSharedPostProcessSettings, mPriority), METADATA_PARAMS(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendWeight_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Public/FGSharedPostProcessSettings.h" },
		{ "ToolTip", "How much do we want to blend in the post process effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendWeight = { "mBlendWeight", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSharedPostProcessSettings, mBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendRadius_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Public/FGSharedPostProcessSettings.h" },
		{ "ToolTip", "At what distance do we want to blend in the post process settings for the water" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendRadius = { "mBlendRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSharedPostProcessSettings, mBlendRadius), METADATA_PARAMS(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPostProcessSettings_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Public/FGSharedPostProcessSettings.h" },
		{ "ToolTip", "Normal settings for post process" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPostProcessSettings = { "mPostProcessSettings", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSharedPostProcessSettings, mPostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPostProcessSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPostProcessSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mBlendRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::NewProp_mPostProcessSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSharedPostProcessSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::ClassParams = {
		&UFGSharedPostProcessSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSharedPostProcessSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSharedPostProcessSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSharedPostProcessSettings, 1254125070);
	template<> FACTORYGAME_API UClass* StaticClass<UFGSharedPostProcessSettings>()
	{
		return UFGSharedPostProcessSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSharedPostProcessSettings(Z_Construct_UClass_UFGSharedPostProcessSettings, &UFGSharedPostProcessSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSharedPostProcessSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSharedPostProcessSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
