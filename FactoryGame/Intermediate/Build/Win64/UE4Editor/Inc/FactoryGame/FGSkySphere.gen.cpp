// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSkySphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSkySphere() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSkySphereSettings();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSkySphere_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSkySphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSkySphere_UpdatePreview();
// End Cross Module References
class UScriptStruct* FSkySphereSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSkySphereSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkySphereSettings, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SkySphereSettings"), sizeof(FSkySphereSettings), Get_Z_Construct_UScriptStruct_FSkySphereSettings_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSkySphereSettings>()
{
	return FSkySphereSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkySphereSettings(FSkySphereSettings::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SkySphereSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSkySphereSettings
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSkySphereSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkySphereSettings")),new UScriptStruct::TCppStructOps<FSkySphereSettings>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSkySphereSettings;
	struct Z_Construct_UScriptStruct_FSkySphereSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloudOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoonIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonLightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoonLightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunLightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SunLightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CloudColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZenithColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZenithColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizonColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizonColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkySphereSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "opacity of the clouds after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity = { "CloudOpacity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkySphereSettings, CloudOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonIntensity_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Color of the clouds after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonIntensity = { "MoonIntensity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkySphereSettings, MoonIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonLightColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Color of the clouds after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonLightColor = { "MoonLightColor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkySphereSettings, MoonLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonLightColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonLightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunIntensity_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Color of the clouds after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunIntensity = { "SunIntensity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkySphereSettings, SunIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunLightColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Color of the clouds after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunLightColor = { "SunLightColor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkySphereSettings, SunLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunLightColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunLightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Color of the clouds after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor = { "CloudColor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkySphereSettings, CloudColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Color of the zenith after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor = { "ZenithColor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkySphereSettings, ZenithColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Color of the horizon after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor = { "HorizonColor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkySphereSettings, HorizonColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkySphereSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_MoonLightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_SunLightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SkySphereSettings",
		sizeof(FSkySphereSettings),
		alignof(FSkySphereSettings),
		Z_Construct_UScriptStruct_FSkySphereSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkySphereSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkySphereSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkySphereSettings"), sizeof(FSkySphereSettings), Get_Z_Construct_UScriptStruct_FSkySphereSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkySphereSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkySphereSettings_Hash() { return 996099622U; }
	static FName NAME_AFGSkySphere_ApplySkySphereSettings = FName(TEXT("ApplySkySphereSettings"));
	void AFGSkySphere::ApplySkySphereSettings(FSkySphereSettings const& settings)
	{
		FGSkySphere_eventApplySkySphereSettings_Parms Parms;
		Parms.settings=settings;
		ProcessEvent(FindFunctionChecked(NAME_AFGSkySphere_ApplySkySphereSettings),&Parms);
	}
	static FName NAME_AFGSkySphere_UpdatePreview = FName(TEXT("UpdatePreview"));
	void AFGSkySphere::UpdatePreview()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGSkySphere_UpdatePreview),NULL);
	}
	void AFGSkySphere::StaticRegisterNativesAFGSkySphere()
	{
		UClass* Class = AFGSkySphere::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFloatCurveValue", &AFGSkySphere::execGetFloatCurveValue },
			{ "UpdatePreview", &AFGSkySphere::execUpdatePreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::NewProp_settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSkySphere_eventApplySkySphereSettings_Parms, settings), Z_Construct_UScriptStruct_FSkySphereSettings, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::NewProp_settings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::NewProp_settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::NewProp_settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "End ICurvePanningInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSkySphere, nullptr, "ApplySkySphereSettings", sizeof(FGSkySphere_eventApplySkySphereSettings_Parms), Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics
	{
		struct FGSkySphere_eventGetFloatCurveValue_Parms
		{
			FRuntimeFloatCurve curve;
			float time;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_curve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSkySphere_eventGetFloatCurveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSkySphere_eventGetFloatCurveValue_Parms, time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve = { "curve", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSkySphere_eventGetFloatCurveValue_Parms, curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Expose getting a value from a FRuntimeFloatCurve to bp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSkySphere, nullptr, "GetFloatCurveValue", sizeof(FGSkySphere_eventGetFloatCurveValue_Parms), Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSkySphere_UpdatePreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSkySphere_UpdatePreview_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Update the preview of the skyesphere in the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSkySphere_UpdatePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSkySphere, nullptr, "UpdatePreview", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_UpdatePreview_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_UpdatePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSkySphere_UpdatePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSkySphere_UpdatePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGSkySphere_NoRegister()
	{
		return AFGSkySphere::StaticClass();
	}
	struct Z_Construct_UClass_AFGSkySphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPreviewTime;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSunFogMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSunFogMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStarBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mStarBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCloudOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCloudOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSkyLightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSkyLightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMoonLightShaftOcclusionCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mMoonLightShaftOcclusionCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMoonRotationPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mMoonRotationPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMoonIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mMoonIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSunLightShaftOcclusionCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSunLightShaftOcclusionCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSunRotationPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSunRotationPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSunIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSunIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSkySphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGSkySphere_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings, "ApplySkySphereSettings" }, // 1126575981
		{ &Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue, "GetFloatCurveValue" }, // 1282729985
		{ &Z_Construct_UFunction_AFGSkySphere_UpdatePreview, "UpdatePreview" }, // 2877894387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "FGSkySphere.h" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mPreviewTime_MetaData[] = {
		{ "Category", "Preview" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "How the sunlight changes during the day" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mPreviewTime = { "mPreviewTime", nullptr, (EPropertyFlags)0x0020080800000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mPreviewTime), METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mPreviewTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mPreviewTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunFogMultiplier_MetaData[] = {
		{ "Category", "Curves|AtmosphericFog" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "How does the sun multiplier change during the day in the atmospheric fog" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunFogMultiplier = { "mSunFogMultiplier", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mSunFogMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunFogMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunFogMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mStarBrightness_MetaData[] = {
		{ "Category", "Curves|SkySphere" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "How does the stars brightness change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mStarBrightness = { "mStarBrightness", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mStarBrightness), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mStarBrightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mStarBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mCloudOpacity_MetaData[] = {
		{ "Category", "Curves|SkySphere" },
		{ "DisplayName", "Cloudiness" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "How the opakeness of the clouds change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mCloudOpacity = { "mCloudOpacity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mCloudOpacity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mCloudOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mCloudOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSkyLightIntensity_MetaData[] = {
		{ "Category", "Curves|SkyLight" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "How does the sky light intensity change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSkyLightIntensity = { "mSkyLightIntensity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mSkyLightIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSkyLightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSkyLightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonLightShaftOcclusionCurve_MetaData[] = {
		{ "Category", "Curves|Moon" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Changes how the lightshafts changes during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonLightShaftOcclusionCurve = { "mMoonLightShaftOcclusionCurve", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mMoonLightShaftOcclusionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonLightShaftOcclusionCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonLightShaftOcclusionCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonRotationPitch_MetaData[] = {
		{ "Category", "Curves|Moon" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Unlogical property, basically tells how the moons location in it's curve should change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonRotationPitch = { "mMoonRotationPitch", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mMoonRotationPitch), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonRotationPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonRotationPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonIntensity_MetaData[] = {
		{ "Category", "Curves|Moon" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "How does the moons intensity change during the NIGHT" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonIntensity = { "mMoonIntensity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mMoonIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunLightShaftOcclusionCurve_MetaData[] = {
		{ "Category", "Curves|Sun" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Changes how the lightshafts changes during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunLightShaftOcclusionCurve = { "mSunLightShaftOcclusionCurve", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mSunLightShaftOcclusionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunLightShaftOcclusionCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunLightShaftOcclusionCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunRotationPitch_MetaData[] = {
		{ "Category", "Curves|Sun" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "Unlogical property, basically tells how the suns location in it's curve should change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunRotationPitch = { "mSunRotationPitch", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mSunRotationPitch), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunRotationPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunRotationPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunIntensity_MetaData[] = {
		{ "Category", "Curves|Sun" },
		{ "ModuleRelativePath", "Public/FGSkySphere.h" },
		{ "ToolTip", "How does the suns intensity change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunIntensity = { "mSunIntensity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSkySphere, mSunIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunIntensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSkySphere_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mPreviewTime,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunFogMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mStarBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mCloudOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSkyLightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonLightShaftOcclusionCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonRotationPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunLightShaftOcclusionCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunRotationPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunIntensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSkySphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSkySphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSkySphere_Statics::ClassParams = {
		&AFGSkySphere::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGSkySphere_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSkySphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSkySphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSkySphere, 3497365320);
	template<> FACTORYGAME_API UClass* StaticClass<AFGSkySphere>()
	{
		return AFGSkySphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSkySphere(Z_Construct_UClass_AFGSkySphere, &AFGSkySphere::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSkySphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSkySphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
