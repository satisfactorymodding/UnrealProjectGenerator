// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGExponentialHeightFog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGExponentialHeightFog() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FExponentialFogSettings();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDynamicExponentialFogVolume_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDynamicExponentialFogVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
// End Cross Module References
class UScriptStruct* FExponentialFogSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FExponentialFogSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExponentialFogSettings, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ExponentialFogSettings"), sizeof(FExponentialFogSettings), Get_Z_Construct_UScriptStruct_FExponentialFogSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExponentialFogSettings(FExponentialFogSettings::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ExponentialFogSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFExponentialFogSettings
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFExponentialFogSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExponentialFogSettings")),new UScriptStruct::TCppStructOps<FExponentialFogSettings>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFExponentialFogSettings;
	struct Z_Construct_UScriptStruct_FExponentialFogSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogCutoffDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogCutoffDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMaxOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogMaxOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringStartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringStartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonDirectionalInscatteringColorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonDirectionalInscatteringColorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyDirectionalInscatteringColorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullyDirectionalInscatteringColorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExponentialFogSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogCutoffDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Scene elements past this distance will not have fog applied.  This is useful for excluding skyboxes which already have fog baked in." },
		{ "UIMax", "20000000" },
		{ "UIMin", "100000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogCutoffDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FogCutoffDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, FogCutoffDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogCutoffDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogCutoffDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_StartDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Distance from the camera that the fog will start, in world units." },
		{ "UIMax", "5000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_StartDistance = { UE4CodeGen_Private::EPropertyClass::Float, "StartDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, StartDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_StartDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_StartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogMaxOpacity_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Maximum opacity of the fog.\nA value of 1 means the fog can become fully opaque at a distance and replace scene color completely,\nA value of 0 means the fog color will not be factored in at all." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogMaxOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "FogMaxOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, FogMaxOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogMaxOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogMaxOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeightFalloff_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Height density factor, controls how the density increases as height decreases.\nSmaller values make the visible transition larger." },
		{ "UIMax", "2" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeightFalloff = { UE4CodeGen_Private::EPropertyClass::Float, "FogHeightFalloff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, FogHeightFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeightFalloff_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DirectionalInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, DirectionalInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionalInscatteringStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, DirectionalInscatteringStartDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
		{ "UIMax", "64" },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringExponent = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionalInscatteringExponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, DirectionalInscatteringExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_NonDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Distance at which only the average color of InscatteringColorCubemap should be used as Inscattering Color." },
		{ "UIMax", "1000000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_NonDirectionalInscatteringColorDistance = { UE4CodeGen_Private::EPropertyClass::Float, "NonDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, NonDirectionalInscatteringColorDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_NonDirectionalInscatteringColorDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_NonDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FullyDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Distance at which InscatteringColorCubemap should be used directly for the Inscattering Color." },
		{ "UIMax", "1000000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FullyDirectionalInscatteringColorDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FullyDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, FullyDirectionalInscatteringColorDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FullyDirectionalInscatteringColorDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FullyDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogInscatteringColor_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogInscatteringColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FogInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, FogInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogInscatteringColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogDensity_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Density of the fog" },
		{ "UIMax", ".05" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogDensity = { UE4CodeGen_Private::EPropertyClass::Float, "FogDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, FogDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogDensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeight_MetaData[] = {
		{ "Category", "ExponentialHeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "The ZValue of the fog" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeight = { UE4CodeGen_Private::EPropertyClass::Float, "FogHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExponentialFogSettings, FogHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogCutoffDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_StartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogMaxOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeightFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_DirectionalInscatteringExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_NonDirectionalInscatteringColorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FullyDirectionalInscatteringColorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogInscatteringColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::NewProp_FogHeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ExponentialFogSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FExponentialFogSettings),
		alignof(FExponentialFogSettings),
		Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExponentialFogSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExponentialFogSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExponentialFogSettings"), sizeof(FExponentialFogSettings), Get_Z_Construct_UScriptStruct_FExponentialFogSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExponentialFogSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExponentialFogSettings_CRC() { return 1228011106U; }
	void AFGDynamicExponentialFogVolume::StaticRegisterNativesAFGDynamicExponentialFogVolume()
	{
	}
	UClass* Z_Construct_UClass_AFGDynamicExponentialFogVolume_NoRegister()
	{
		return AFGDynamicExponentialFogVolume::StaticClass();
	}
	struct Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPreviewSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPreviewTime;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnableGain_MetaData[];
#endif
		static void NewProp_mEnableGain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mEnableGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnableContrast_MetaData[];
#endif
		static void NewProp_mEnableContrast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mEnableContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnableSaturation_MetaData[];
#endif
		static void NewProp_mEnableSaturation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mEnableSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCloudOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCloudOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOverrideCloudOpacity_MetaData[];
#endif
		static void NewProp_mOverrideCloudOpacity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mOverrideCloudOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOverrideCloudColor_MetaData[];
#endif
		static void NewProp_mOverrideCloudColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mOverrideCloudColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOverrideZenithColor_MetaData[];
#endif
		static void NewProp_mOverrideZenithColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mOverrideZenithColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOverrideHorizonColor_MetaData[];
#endif
		static void NewProp_mOverrideHorizonColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mOverrideHorizonColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogCutoffDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFogCutoffDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mStartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogMaxOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFogMaxOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogHeightFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFogHeightFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDirectionalInscatteringStartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDirectionalInscatteringStartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDirectionalInscatteringExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDirectionalInscatteringExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNonDirectionalInscatteringColorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mNonDirectionalInscatteringColorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFullyDirectionalInscatteringColorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFullyDirectionalInscatteringColorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFogDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFogHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBlendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBlendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Tags Cooking Actor Mobile Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "FGExponentialHeightFog.h" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "@todo: Should be renamed to something else, as it does a lot more than give settings to fog" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewSettings_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "A preview of all the settings in the current fog-volume" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "mPreviewSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800020801, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mPreviewSettings), Z_Construct_UScriptStruct_FExponentialFogSettings, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewTime_MetaData[] = {
		{ "Category", "Preview" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "A stampdown in time, where we want to show of the preview settings" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewTime = { UE4CodeGen_Private::EPropertyClass::Float, "mPreviewTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000801, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mPreviewTime), METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableGain_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "MODDING EDIT\nInterpolate the contrast during the day\nUPROPERTY( EditAnywhere, BlueprintReadOnly, Category = \"PostProcess\", meta = ( EditCondition = \"mEnableContrast\" ) )\nFRuntimeCurveLinearColor mContrast;" },
	};
#endif
	void Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableGain_SetBit(void* Obj)
	{
		((AFGDynamicExponentialFogVolume*)Obj)->mEnableGain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableGain = { UE4CodeGen_Private::EPropertyClass::Bool, "mEnableGain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AFGDynamicExponentialFogVolume), &Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableGain_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableGain_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableContrast_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "MODDING EDIT\nInterpolate the saturation during the day\nUPROPERTY( EditAnywhere, BlueprintReadOnly, Category = \"PostProcess\", meta=(EditCondition=\"mEnableSaturation\"))\nFRuntimeCurveLinearColor mSaturation;" },
	};
#endif
	void Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableContrast_SetBit(void* Obj)
	{
		((AFGDynamicExponentialFogVolume*)Obj)->mEnableContrast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableContrast = { UE4CodeGen_Private::EPropertyClass::Bool, "mEnableContrast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AFGDynamicExponentialFogVolume), &Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableContrast_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableContrast_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableSaturation_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableSaturation_SetBit(void* Obj)
	{
		((AFGDynamicExponentialFogVolume*)Obj)->mEnableSaturation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableSaturation = { UE4CodeGen_Private::EPropertyClass::Bool, "mEnableSaturation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AFGDynamicExponentialFogVolume), &Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableSaturation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableSaturation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendWeight_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "The blend weight of the post process volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "mBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mBlendWeight), METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mCloudOpacity_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "EditCondition", "mOverrideCloudOpacity" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "How the opakeness of the clouds change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mCloudOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "mCloudOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mCloudOpacity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mCloudOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mCloudOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudOpacity_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "MODDING EDIT\nHow the color of clouds zenith changes during the day\nUPROPERTY( EditAnywhere, BlueprintReadOnly, Category = \"SkySphere\", meta = (EditCondition = \"mOverrideCloudColor\") )\nFRuntimeCurveLinearColor mCloudColorCurve;" },
	};
#endif
	void Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudOpacity_SetBit(void* Obj)
	{
		((AFGDynamicExponentialFogVolume*)Obj)->mOverrideCloudOpacity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudOpacity = { UE4CodeGen_Private::EPropertyClass::Bool, "mOverrideCloudOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGDynamicExponentialFogVolume), &Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudOpacity_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "MODDING EDIT\nHow the color of the zenith changes during the day\nUPROPERTY( EditAnywhere, BlueprintReadOnly, Category = \"SkySphere\", meta = (EditCondition = \"mOverrideZenithColor\") )\nFRuntimeCurveLinearColor mZenithColorCurve;" },
	};
#endif
	void Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudColor_SetBit(void* Obj)
	{
		((AFGDynamicExponentialFogVolume*)Obj)->mOverrideCloudColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudColor = { UE4CodeGen_Private::EPropertyClass::Bool, "mOverrideCloudColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGDynamicExponentialFogVolume), &Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideZenithColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "MODDING EDIT\nHow the color of the horizon changes during the day\nUPROPERTY( EditAnywhere, BlueprintReadOnly, Category = \"SkySphere\", meta = (EditCondition = \"mOverrideHorizonColor\") )\nFRuntimeCurveLinearColor mHorizonColorCurve;" },
	};
#endif
	void Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideZenithColor_SetBit(void* Obj)
	{
		((AFGDynamicExponentialFogVolume*)Obj)->mOverrideZenithColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideZenithColor = { UE4CodeGen_Private::EPropertyClass::Bool, "mOverrideZenithColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGDynamicExponentialFogVolume), &Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideZenithColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideZenithColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideZenithColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideHorizonColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideHorizonColor_SetBit(void* Obj)
	{
		((AFGDynamicExponentialFogVolume*)Obj)->mOverrideHorizonColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideHorizonColor = { UE4CodeGen_Private::EPropertyClass::Bool, "mOverrideHorizonColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGDynamicExponentialFogVolume), &Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideHorizonColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideHorizonColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideHorizonColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogCutoffDistance_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogCutoffDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "mFogCutoffDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogCutoffDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogCutoffDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogCutoffDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mStartDistance_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mStartDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "mStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mStartDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mStartDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mStartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogMaxOpacity_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogMaxOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "mFogMaxOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogMaxOpacity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogMaxOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogMaxOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeightFalloff_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeightFalloff = { UE4CodeGen_Private::EPropertyClass::Struct, "mFogHeightFalloff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogHeightFalloff), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeightFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringStartDistance_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringStartDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "mDirectionalInscatteringStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mDirectionalInscatteringStartDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringStartDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringStartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringExponent_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringExponent = { UE4CodeGen_Private::EPropertyClass::Struct, "mDirectionalInscatteringExponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mDirectionalInscatteringExponent), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mNonDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mNonDirectionalInscatteringColorDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "mNonDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mNonDirectionalInscatteringColorDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mNonDirectionalInscatteringColorDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mNonDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFullyDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFullyDirectionalInscatteringColorDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "mFullyDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFullyDirectionalInscatteringColorDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFullyDirectionalInscatteringColorDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFullyDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogDensity_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogDensity = { UE4CodeGen_Private::EPropertyClass::Struct, "mFogDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogDensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeight_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "Interpolate the fog height during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeight = { UE4CodeGen_Private::EPropertyClass::Struct, "mFogHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mFogHeight), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendDistance_MetaData[] = {
		{ "Category", "Shared" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
		{ "ToolTip", "The distance that the fog blends over" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mBlendDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mBlendDistance), METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPriority_MetaData[] = {
		{ "Category", "Shared" },
		{ "ModuleRelativePath", "FGExponentialHeightFog.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPriority = { UE4CodeGen_Private::EPropertyClass::Float, "mPriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AFGDynamicExponentialFogVolume, mPriority), METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPreviewTime,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mEnableSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mCloudOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideCloudColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideZenithColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mOverrideHorizonColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogCutoffDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mStartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogMaxOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeightFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringStartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mDirectionalInscatteringExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mNonDirectionalInscatteringColorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFullyDirectionalInscatteringColorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mFogHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mBlendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::NewProp_mPriority,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(AFGDynamicExponentialFogVolume, IInterface_PostProcessVolume), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGDynamicExponentialFogVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::ClassParams = {
		&AFGDynamicExponentialFogVolume::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGDynamicExponentialFogVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGDynamicExponentialFogVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGDynamicExponentialFogVolume, 583556022);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGDynamicExponentialFogVolume(Z_Construct_UClass_AFGDynamicExponentialFogVolume, &AFGDynamicExponentialFogVolume::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGDynamicExponentialFogVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGDynamicExponentialFogVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
