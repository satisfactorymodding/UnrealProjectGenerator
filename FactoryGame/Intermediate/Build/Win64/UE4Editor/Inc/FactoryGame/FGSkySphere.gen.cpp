// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGSkySphere.h"
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSkySphereSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkySphereSettings, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SkySphereSettings"), sizeof(FSkySphereSettings), Get_Z_Construct_UScriptStruct_FSkySphereSettings_CRC());
	}
	return Singleton;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideCloudOpacity_MetaData[];
#endif
		static void NewProp_OverrideCloudOpacity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideCloudOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideCloudColor_MetaData[];
#endif
		static void NewProp_OverrideCloudColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideCloudColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideZenithColor_MetaData[];
#endif
		static void NewProp_OverrideZenithColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideZenithColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideHorizonColor_MetaData[];
#endif
		static void NewProp_OverrideHorizonColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideHorizonColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloudOpacity;
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
		{ "ModuleRelativePath", "FGSkySphere.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkySphereSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudOpacity_MetaData[] = {
		{ "ModuleRelativePath", "FGSkySphere.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudOpacity_SetBit(void* Obj)
	{
		((FSkySphereSettings*)Obj)->OverrideCloudOpacity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudOpacity = { UE4CodeGen_Private::EPropertyClass::Bool, "OverrideCloudOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkySphereSettings), &Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudOpacity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudColor_MetaData[] = {
		{ "ModuleRelativePath", "FGSkySphere.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudColor_SetBit(void* Obj)
	{
		((FSkySphereSettings*)Obj)->OverrideCloudColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudColor = { UE4CodeGen_Private::EPropertyClass::Bool, "OverrideCloudColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkySphereSettings), &Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideZenithColor_MetaData[] = {
		{ "ModuleRelativePath", "FGSkySphere.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideZenithColor_SetBit(void* Obj)
	{
		((FSkySphereSettings*)Obj)->OverrideZenithColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideZenithColor = { UE4CodeGen_Private::EPropertyClass::Bool, "OverrideZenithColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkySphereSettings), &Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideZenithColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideZenithColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideZenithColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideHorizonColor_MetaData[] = {
		{ "ModuleRelativePath", "FGSkySphere.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideHorizonColor_SetBit(void* Obj)
	{
		((FSkySphereSettings*)Obj)->OverrideHorizonColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideHorizonColor = { UE4CodeGen_Private::EPropertyClass::Bool, "OverrideHorizonColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkySphereSettings), &Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideHorizonColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideHorizonColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideHorizonColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "opacity of the clouds after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "CloudOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FSkySphereSettings, CloudOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "Color of the clouds after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor = { UE4CodeGen_Private::EPropertyClass::Struct, "CloudColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FSkySphereSettings, CloudColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "Color of the zenith after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ZenithColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FSkySphereSettings, ZenithColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor_MetaData[] = {
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "Color of the horizon after blending the skysphere curve with all volumes curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor = { UE4CodeGen_Private::EPropertyClass::Struct, "HorizonColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FSkySphereSettings, HorizonColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkySphereSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideCloudColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideZenithColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_OverrideHorizonColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_CloudColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_ZenithColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkySphereSettings_Statics::NewProp_HorizonColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkySphereSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SkySphereSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSkySphereSettings),
		alignof(FSkySphereSettings),
		Z_Construct_UScriptStruct_FSkySphereSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkySphereSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkySphereSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkySphereSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkySphereSettings"), sizeof(FSkySphereSettings), Get_Z_Construct_UScriptStruct_FSkySphereSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkySphereSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkySphereSettings_CRC() { return 4099149055U; }
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::NewProp_settings = { UE4CodeGen_Private::EPropertyClass::Struct, "settings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGSkySphere_eventApplySkySphereSettings_Parms, settings), Z_Construct_UScriptStruct_FSkySphereSettings, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::NewProp_settings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::NewProp_settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::NewProp_settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SkySphere" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "End ICurvePanningInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSkySphere, "ApplySkySphereSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(FGSkySphere_eventApplySkySphereSettings_Parms), Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSkySphere_eventGetFloatCurveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_time = { UE4CodeGen_Private::EPropertyClass::Float, "time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSkySphere_eventGetFloatCurveValue_Parms, time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve = { UE4CodeGen_Private::EPropertyClass::Struct, "curve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGSkySphere_eventGetFloatCurveValue_Parms, curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::NewProp_curve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "Expose getting a value from a FRuntimeFloatCurve to bp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSkySphere, "GetFloatCurveValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGSkySphere_eventGetFloatCurveValue_Parms), Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "Update the preview of the skyesphere in the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSkySphere_UpdatePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSkySphere, "UpdatePreview", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSkySphere_UpdatePreview_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSkySphere_UpdatePreview_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGSkySphere_ApplySkySphereSettings, "ApplySkySphereSettings" }, // 1933601197
		{ &Z_Construct_UFunction_AFGSkySphere_GetFloatCurveValue, "GetFloatCurveValue" }, // 677464562
		{ &Z_Construct_UFunction_AFGSkySphere_UpdatePreview, "UpdatePreview" }, // 1823402088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "FGSkySphere.h" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mPreviewTime_MetaData[] = {
		{ "Category", "Preview" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "How the sunlight changes during the day" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mPreviewTime = { UE4CodeGen_Private::EPropertyClass::Float, "mPreviewTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080800000801, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mPreviewTime), METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mPreviewTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mPreviewTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunFogMultiplier_MetaData[] = {
		{ "Category", "Curves|AtmosphericFog" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "How does the sun multiplier change during the day in the atmospheric fog" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunFogMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "mSunFogMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mSunFogMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunFogMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunFogMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mStarBrightness_MetaData[] = {
		{ "Category", "Curves|SkySphere" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "How does the stars brightness change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mStarBrightness = { UE4CodeGen_Private::EPropertyClass::Struct, "mStarBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mStarBrightness), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mStarBrightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mStarBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mCloudOpacity_MetaData[] = {
		{ "Category", "Curves|SkySphere" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "How the opakeness of the clouds change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mCloudOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "mCloudOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mCloudOpacity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mCloudOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mCloudOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSkyLightIntensity_MetaData[] = {
		{ "Category", "Curves|SkyLight" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "How does the sky light intensity change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSkyLightIntensity = { UE4CodeGen_Private::EPropertyClass::Struct, "mSkyLightIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mSkyLightIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSkyLightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSkyLightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonLightShaftOcclusionCurve_MetaData[] = {
		{ "Category", "Curves|Moon" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "Changes how the lightshafts changes during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonLightShaftOcclusionCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "mMoonLightShaftOcclusionCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mMoonLightShaftOcclusionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonLightShaftOcclusionCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonLightShaftOcclusionCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonRotationPitch_MetaData[] = {
		{ "Category", "Curves|Moon" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "Unlogical property, basically tells how the moons location in it's curve should change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonRotationPitch = { UE4CodeGen_Private::EPropertyClass::Struct, "mMoonRotationPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mMoonRotationPitch), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonRotationPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonRotationPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonIntensity_MetaData[] = {
		{ "Category", "Curves|Moon" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "How does the moons intensity change during the NIGHT" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonIntensity = { UE4CodeGen_Private::EPropertyClass::Struct, "mMoonIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mMoonIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mMoonIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunLightShaftOcclusionCurve_MetaData[] = {
		{ "Category", "Curves|Sun" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "Changes how the lightshafts changes during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunLightShaftOcclusionCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "mSunLightShaftOcclusionCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mSunLightShaftOcclusionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunLightShaftOcclusionCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunLightShaftOcclusionCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunRotationPitch_MetaData[] = {
		{ "Category", "Curves|Sun" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "Unlogical property, basically tells how the suns location in it's curve should change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunRotationPitch = { UE4CodeGen_Private::EPropertyClass::Struct, "mSunRotationPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mSunRotationPitch), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunRotationPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunRotationPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunIntensity_MetaData[] = {
		{ "Category", "Curves|Sun" },
		{ "ModuleRelativePath", "FGSkySphere.h" },
		{ "ToolTip", "How does the suns intensity change during the day" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunIntensity = { UE4CodeGen_Private::EPropertyClass::Struct, "mSunIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFGSkySphere, mSunIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::NewProp_mSunIntensity_MetaData)) };
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGSkySphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGSkySphere_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGSkySphere, 3617196920);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSkySphere(Z_Construct_UClass_AFGSkySphere, &AFGSkySphere::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSkySphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSkySphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
