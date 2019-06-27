// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGBuildableStandaloneSign.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableStandaloneSign() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FStandaloneSignData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableStandaloneSign_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableStandaloneSign();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FStandaloneSignData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FStandaloneSignData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStandaloneSignData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("StandaloneSignData"), sizeof(FStandaloneSignData), Get_Z_Construct_UScriptStruct_FStandaloneSignData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStandaloneSignData(FStandaloneSignData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("StandaloneSignData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFStandaloneSignData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFStandaloneSignData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StandaloneSignData")),new UScriptStruct::TCppStructOps<FStandaloneSignData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFStandaloneSignData;
	struct Z_Construct_UScriptStruct_FStandaloneSignData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SignText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BackgroundColorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextColorIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandaloneSignData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Class for the creating of placeable signs with modifiable hologram mesh icon and text" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStandaloneSignData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextOffsetZ_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextOffsetZ = { UE4CodeGen_Private::EPropertyClass::Float, "TextOffsetZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000004, 1, nullptr, STRUCT_OFFSET(FStandaloneSignData, TextOffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextOffsetZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextMeshScale_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Scale of the text mesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextMeshScale = { UE4CodeGen_Private::EPropertyClass::Float, "TextMeshScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000004, 1, nullptr, STRUCT_OFFSET(FStandaloneSignData, TextMeshScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextMeshScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_SignText_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Text to be displayed on the sign" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_SignText = { UE4CodeGen_Private::EPropertyClass::Str, "SignText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000004, 1, nullptr, STRUCT_OFFSET(FStandaloneSignData, SignText), METADATA_PARAMS(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_SignText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_SignText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_BackgroundColorIndex_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Index of the selected color for the background from the FGSignSettings color data array" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_BackgroundColorIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BackgroundColorIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000004, 1, nullptr, STRUCT_OFFSET(FStandaloneSignData, BackgroundColorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_BackgroundColorIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_BackgroundColorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextColorIndex_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Index of the selected color for the text from the FGSignSettings color data array" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextColorIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TextColorIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000004, 1, nullptr, STRUCT_OFFSET(FStandaloneSignData, TextColorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextColorIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextColorIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStandaloneSignData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_SignText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_BackgroundColorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandaloneSignData_Statics::NewProp_TextColorIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStandaloneSignData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"StandaloneSignData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStandaloneSignData),
		alignof(FStandaloneSignData),
		Z_Construct_UScriptStruct_FStandaloneSignData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStandaloneSignData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStandaloneSignData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStandaloneSignData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StandaloneSignData"), sizeof(FStandaloneSignData), Get_Z_Construct_UScriptStruct_FStandaloneSignData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStandaloneSignData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStandaloneSignData_CRC() { return 1598217593U; }
	void AFGBuildableStandaloneSign::StaticRegisterNativesAFGBuildableStandaloneSign()
	{
		UClass* Class = AFGBuildableStandaloneSign::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentNormalizedTextOffsetZ", &AFGBuildableStandaloneSign::execGetCurrentNormalizedTextOffsetZ },
			{ "GetCurrentNormalizedTextScale", &AFGBuildableStandaloneSign::execGetCurrentNormalizedTextScale },
			{ "GetMaxTextOffsetZ", &AFGBuildableStandaloneSign::execGetMaxTextOffsetZ },
			{ "GetMaxTextScale", &AFGBuildableStandaloneSign::execGetMaxTextScale },
			{ "GetMinTextOffsetZ", &AFGBuildableStandaloneSign::execGetMinTextOffsetZ },
			{ "GetMinTextScale", &AFGBuildableStandaloneSign::execGetMinTextScale },
			{ "GetSignData", &AFGBuildableStandaloneSign::execGetSignData },
			{ "GetTextOffsetZ", &AFGBuildableStandaloneSign::execGetTextOffsetZ },
			{ "GetTextScaleFromNormalizedValue", &AFGBuildableStandaloneSign::execGetTextScaleFromNormalizedValue },
			{ "OnRep_SignData", &AFGBuildableStandaloneSign::execOnRep_SignData },
			{ "SetSignData", &AFGBuildableStandaloneSign::execSetSignData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics
	{
		struct FGBuildableStandaloneSign_eventGetCurrentNormalizedTextOffsetZ_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetCurrentNormalizedTextOffsetZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "GetCurrentNormalizedTextOffsetZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableStandaloneSign_eventGetCurrentNormalizedTextOffsetZ_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics
	{
		struct FGBuildableStandaloneSign_eventGetCurrentNormalizedTextScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetCurrentNormalizedTextScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "GetCurrentNormalizedTextScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableStandaloneSign_eventGetCurrentNormalizedTextScale_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics
	{
		struct FGBuildableStandaloneSign_eventGetMaxTextOffsetZ_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetMaxTextOffsetZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "GetMaxTextOffsetZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableStandaloneSign_eventGetMaxTextOffsetZ_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics
	{
		struct FGBuildableStandaloneSign_eventGetMaxTextScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetMaxTextScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "GetMaxTextScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableStandaloneSign_eventGetMaxTextScale_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics
	{
		struct FGBuildableStandaloneSign_eventGetMinTextOffsetZ_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetMinTextOffsetZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "GetMinTextOffsetZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableStandaloneSign_eventGetMinTextOffsetZ_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics
	{
		struct FGBuildableStandaloneSign_eventGetMinTextScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetMinTextScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Begin Widget Getter Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "GetMinTextScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableStandaloneSign_eventGetMinTextScale_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics
	{
		struct FGBuildableStandaloneSign_eventGetSignData_Parms
		{
			FStandaloneSignData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetSignData_Parms, ReturnValue), Z_Construct_UScriptStruct_FStandaloneSignData, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "GetSignData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableStandaloneSign_eventGetSignData_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics
	{
		struct FGBuildableStandaloneSign_eventGetTextOffsetZ_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetTextOffsetZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "GetTextOffsetZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableStandaloneSign_eventGetTextOffsetZ_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics
	{
		struct FGBuildableStandaloneSign_eventGetTextScaleFromNormalizedValue_Parms
		{
			float value;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetTextScaleFromNormalizedValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetTextScaleFromNormalizedValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "GetTextScaleFromNormalizedValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableStandaloneSign_eventGetTextScaleFromNormalizedValue_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Update sign components on replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "OnRep_SignData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics
	{
		struct FGBuildableStandaloneSign_eventSetSignData_Parms
		{
			FStandaloneSignData signData;
			bool bUpdate;
		};
		static void NewProp_bUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_signData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::NewProp_bUpdate_SetBit(void* Obj)
	{
		((FGBuildableStandaloneSign_eventSetSignData_Parms*)Obj)->bUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::NewProp_bUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableStandaloneSign_eventSetSignData_Parms), &Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::NewProp_signData = { UE4CodeGen_Private::EPropertyClass::Struct, "signData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableStandaloneSign_eventSetSignData_Parms, signData), Z_Construct_UScriptStruct_FStandaloneSignData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::NewProp_bUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::NewProp_signData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "CPP_Default_bUpdate", "true" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Called by server or client to update sign data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, "SetSignData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGBuildableStandaloneSign_eventSetSignData_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableStandaloneSign_NoRegister()
	{
		return AFGBuildableStandaloneSign::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableStandaloneSign_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSignData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxTextScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxTextScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinTextScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinTextScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxTextOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxTextOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinTextOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinTextOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGainSignificanceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mGainSignificanceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHologramParticleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHologramParticleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTextRenderComponentBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTextRenderComponentBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTextRenderComponentFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTextRenderComponentFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshComponentProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMeshComponentProxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTextDisplayRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTextDisplayRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignDisplayRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSignDisplayRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ, "GetCurrentNormalizedTextOffsetZ" }, // 2411681998
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale, "GetCurrentNormalizedTextScale" }, // 2251146615
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextOffsetZ, "GetMaxTextOffsetZ" }, // 1764581447
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMaxTextScale, "GetMaxTextScale" }, // 384072503
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextOffsetZ, "GetMinTextOffsetZ" }, // 2438620736
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetMinTextScale, "GetMinTextScale" }, // 3375219604
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignData, "GetSignData" }, // 1822631719
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextOffsetZ, "GetTextOffsetZ" }, // 2772123771
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue, "GetTextScaleFromNormalizedValue" }, // 3915234028
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData, "OnRep_SignData" }, // 2366125560
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_SetSignData, "SetSignData" }, // 1215482429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGBuildableStandaloneSign.h" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData_MetaData[] = {
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData = { UE4CodeGen_Private::EPropertyClass::Struct, "mSignData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000101000020, 1, "OnRep_SignData", STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignData), Z_Construct_UScriptStruct_FStandaloneSignData, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextScale_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "MAximum text scale multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextScale = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxTextScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mMaxTextScale), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextScale_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Minimum Text scale multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextScale = { UE4CodeGen_Private::EPropertyClass::Float, "mMinTextScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mMinTextScale), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextOffsetZ_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Maximum Text Z offset" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextOffsetZ = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxTextOffsetZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mMaxTextOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextOffsetZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextOffsetZ_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Minimum Text Z offset" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextOffsetZ = { UE4CodeGen_Private::EPropertyClass::Float, "mMinTextOffsetZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mMinTextOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextOffsetZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance_MetaData[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Distance at which to gain significance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mGainSignificanceDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mGainSignificanceDistance), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Particle system visual" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mHologramParticleComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mHologramParticleComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentBack_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Back text render component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentBack = { UE4CodeGen_Private::EPropertyClass::Object, "mTextRenderComponentBack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mTextRenderComponentBack), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentBack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentFront_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Front text render component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentFront = { UE4CodeGen_Private::EPropertyClass::Object, "mTextRenderComponentFront", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mTextRenderComponentFront), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentFront_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy = { UE4CodeGen_Private::EPropertyClass::Object, "mMeshComponentProxy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mMeshComponentProxy), Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Root component that parents the text objects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot = { UE4CodeGen_Private::EPropertyClass::Object, "mTextDisplayRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mTextDisplayRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Root Component that holds all the sign elements, text, mesh etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot = { UE4CodeGen_Private::EPropertyClass::Object, "mSignDisplayRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignDisplayRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMaxTextOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMinTextOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextRenderComponentFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGBuildableStandaloneSign, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableStandaloneSign>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::ClassParams = {
		&AFGBuildableStandaloneSign::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableStandaloneSign()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableStandaloneSign, 1349568778);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableStandaloneSign(Z_Construct_UClass_AFGBuildableStandaloneSign, &AFGBuildableStandaloneSign::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableStandaloneSign"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableStandaloneSign);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
