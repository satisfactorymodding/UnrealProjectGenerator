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
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarGradientCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFogOfWarGradientCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mForceSingleThreadedCalculations_MetaData[];
#endif
		static void NewProp_mForceSingleThreadedCalculations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mForceSingleThreadedCalculations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnableFogOfWarTextureUpdates_MetaData[];
#endif
		static void NewProp_mEnableFogOfWarTextureUpdates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mEnableFogOfWarTextureUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnableFogOfWarRevealCalculations_MetaData[];
#endif
		static void NewProp_mEnableFogOfWarRevealCalculations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mEnableFogOfWarRevealCalculations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarGradientExpandValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFogOfWarGradientExpandValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarUpperRangeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFogOfWarUpperRangeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarUpperRangeMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFogOfWarUpperRangeMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHighestWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mHighestWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLowestWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLowestWorldLocation;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientCurve_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "DisplayName", "Fog of war gradient curve" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "Curve that determines the fog of war gradient" },
		{ "XAxisName", "RadiusScale" },
		{ "YAxisName", "GradientScale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "mFogOfWarGradientCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFGDeveloperSettings, mFogOfWarGradientCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mForceSingleThreadedCalculations_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "" },
	};
#endif
	void Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mForceSingleThreadedCalculations_SetBit(void* Obj)
	{
		((UFGDeveloperSettings*)Obj)->mForceSingleThreadedCalculations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mForceSingleThreadedCalculations = { UE4CodeGen_Private::EPropertyClass::Bool, "mForceSingleThreadedCalculations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGDeveloperSettings), &Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mForceSingleThreadedCalculations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mForceSingleThreadedCalculations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mForceSingleThreadedCalculations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarTextureUpdates_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "Enables the fog of war texture update" },
	};
#endif
	void Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarTextureUpdates_SetBit(void* Obj)
	{
		((UFGDeveloperSettings*)Obj)->mEnableFogOfWarTextureUpdates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarTextureUpdates = { UE4CodeGen_Private::EPropertyClass::Bool, "mEnableFogOfWarTextureUpdates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGDeveloperSettings), &Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarTextureUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarTextureUpdates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarTextureUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarRevealCalculations_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "Enables the fog of war reveal calculations" },
	};
#endif
	void Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarRevealCalculations_SetBit(void* Obj)
	{
		((UFGDeveloperSettings*)Obj)->mEnableFogOfWarRevealCalculations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarRevealCalculations = { UE4CodeGen_Private::EPropertyClass::Bool, "mEnableFogOfWarRevealCalculations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGDeveloperSettings), &Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarRevealCalculations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarRevealCalculations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarRevealCalculations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientExpandValue_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "" },
		{ "UIMax", "5.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientExpandValue = { UE4CodeGen_Private::EPropertyClass::Float, "mFogOfWarGradientExpandValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFGDeveloperSettings, mFogOfWarGradientExpandValue), METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientExpandValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientExpandValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMax_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "ClampMax", "255.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "" },
		{ "UIMax", "255.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "mFogOfWarUpperRangeMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFGDeveloperSettings, mFogOfWarUpperRangeMax), METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMin_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "ClampMax", "255.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "" },
		{ "UIMax", "255.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "mFogOfWarUpperRangeMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFGDeveloperSettings, mFogOfWarUpperRangeMin), METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mHighestWorldLocation_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mHighestWorldLocation = { UE4CodeGen_Private::EPropertyClass::Float, "mHighestWorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFGDeveloperSettings, mHighestWorldLocation), METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mHighestWorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mHighestWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mLowestWorldLocation_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "FGDeveloperSettings.h" },
		{ "ToolTip", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mLowestWorldLocation = { UE4CodeGen_Private::EPropertyClass::Float, "mLowestWorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UFGDeveloperSettings, mLowestWorldLocation), METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mLowestWorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mLowestWorldLocation_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mForceSingleThreadedCalculations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarTextureUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mEnableFogOfWarRevealCalculations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarGradientExpandValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mFogOfWarUpperRangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mHighestWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mLowestWorldLocation,
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
	IMPLEMENT_CLASS(UFGDeveloperSettings, 3382221927);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDeveloperSettings(Z_Construct_UClass_UFGDeveloperSettings, &UFGDeveloperSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
