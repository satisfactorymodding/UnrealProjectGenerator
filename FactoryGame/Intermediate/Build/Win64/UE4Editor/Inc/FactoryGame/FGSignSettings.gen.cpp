// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGSignSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSignSettings() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSignColorData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignSettings();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSettings();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSignSettings_GetSignColorData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FSignColorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSignColorData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSignColorData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SignColorData"), sizeof(FSignColorData), Get_Z_Construct_UScriptStruct_FSignColorData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSignColorData(FSignColorData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SignColorData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSignColorData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSignColorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SignColorData")),new UScriptStruct::TCppStructOps<FSignColorData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSignColorData;
	struct Z_Construct_UScriptStruct_FSignColorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ColorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SignColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignColorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSignColorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSignColorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_BackgroundMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "The material instance is created at runtime and stored here when it is needed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_BackgroundMaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "BackgroundMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSignColorData, BackgroundMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_BackgroundMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_BackgroundMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_TextMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "The material instance is created at runtime and stored here when it is needed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_TextMaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "TextMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSignColorData, TextMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_TextMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_TextMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_ColorName_MetaData[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "A text name to display with the icon inside of menus" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_ColorName = { UE4CodeGen_Private::EPropertyClass::Text, "ColorName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FSignColorData, ColorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_ColorName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_ColorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_SignColor_MetaData[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "The static mesh that will be rendered on the actual sign in the world" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_SignColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SignColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FSignColorData, SignColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_SignColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_SignColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSignColorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_BackgroundMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_TextMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_ColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignColorData_Statics::NewProp_SignColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSignColorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SignColorData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSignColorData),
		alignof(FSignColorData),
		Z_Construct_UScriptStruct_FSignColorData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignColorData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSignColorData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignColorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSignColorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSignColorData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SignColorData"), sizeof(FSignColorData), Get_Z_Construct_UScriptStruct_FSignColorData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSignColorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSignColorData_CRC() { return 3113654068U; }
	void UFGSignSettings::StaticRegisterNativesUFGSignSettings()
	{
		UClass* Class = UFGSignSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBackgroundMaterialInstanceFromIndex", &UFGSignSettings::execGetBackgroundMaterialInstanceFromIndex },
			{ "GetSignColorData", &UFGSignSettings::execGetSignColorData },
			{ "GetTextMaterialInstanceFromIndex", &UFGSignSettings::execGetTextMaterialInstanceFromIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics
	{
		struct FGSignSettings_eventGetBackgroundMaterialInstanceFromIndex_Parms
		{
			int32 index;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSignSettings_eventGetBackgroundMaterialInstanceFromIndex_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSignSettings_eventGetBackgroundMaterialInstanceFromIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "Returns the corresponding background material instance from the sign color data array. If one does not exist yet it is created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSignSettings, "GetBackgroundMaterialInstanceFromIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSignSettings_eventGetBackgroundMaterialInstanceFromIndex_Parms), Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics
	{
		struct FGSignSettings_eventGetSignColorData_Parms
		{
			TArray<FSignColorData> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(FGSignSettings_eventGetSignColorData_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSignColorData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSignSettings, "GetSignColorData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSignSettings_eventGetSignColorData_Parms), Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSignSettings_GetSignColorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSignSettings_GetSignColorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics
	{
		struct FGSignSettings_eventGetTextMaterialInstanceFromIndex_Parms
		{
			int32 index;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSignSettings_eventGetTextMaterialInstanceFromIndex_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSignSettings_eventGetTextMaterialInstanceFromIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "Returns the corresponding text material instance from the sign color data array. If one does not exist yet it is created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSignSettings, "GetTextMaterialInstanceFromIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSignSettings_eventGetTextMaterialInstanceFromIndex_Parms), Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGSignSettings_NoRegister()
	{
		return UFGSignSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGSignSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignColorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSignColorData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSignColorData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBackgroundMaterialColorParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mBackgroundMaterialColorParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTextMaterialColorParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mTextMaterialColorParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBackgroundMeshMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mBackgroundMeshMaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBackgroundMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBackgroundMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTextMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTextMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSignSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGSignSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGSignSettings_GetBackgroundMaterialInstanceFromIndex, "GetBackgroundMaterialInstanceFromIndex" }, // 3365194755
		{ &Z_Construct_UFunction_UFGSignSettings_GetSignColorData, "GetSignColorData" }, // 1009590885
		{ &Z_Construct_UFunction_UFGSignSettings_GetTextMaterialInstanceFromIndex, "GetTextMaterialInstanceFromIndex" }, // 2078859776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGSignSettings.h" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "Master settings for Standalone Sign parameters and attributes" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mSignColorData_MetaData[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "Array of sign color data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mSignColorData = { UE4CodeGen_Private::EPropertyClass::Array, "mSignColorData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSignSettings, mSignColorData), METADATA_PARAMS(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mSignColorData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mSignColorData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mSignColorData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mSignColorData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSignColorData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterialColorParam_MetaData[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "Parameter name of color adjustment FVector inside the background material" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterialColorParam = { UE4CodeGen_Private::EPropertyClass::Name, "mBackgroundMaterialColorParam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSignSettings, mBackgroundMaterialColorParam), METADATA_PARAMS(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterialColorParam_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterialColorParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterialColorParam_MetaData[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "Parameter name of color adjustment FVector inside the text material" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterialColorParam = { UE4CodeGen_Private::EPropertyClass::Name, "mTextMaterialColorParam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSignSettings, mTextMaterialColorParam), METADATA_PARAMS(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterialColorParam_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterialColorParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMeshMaterialIndex_MetaData[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "The index in the sign mesh material array pointing to the screen / background material" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMeshMaterialIndex = { UE4CodeGen_Private::EPropertyClass::Int, "mBackgroundMeshMaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSignSettings, mBackgroundMeshMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMeshMaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMeshMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterial_MetaData[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "Base material to be used for sign background material instances" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "mBackgroundMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSignSettings, mBackgroundMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterial_MetaData[] = {
		{ "Category", "Sign Data Settings" },
		{ "ModuleRelativePath", "FGSignSettings.h" },
		{ "ToolTip", "Base material to be used for text component material instances" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "mTextMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSignSettings, mTextMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGSignSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mSignColorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mSignColorData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterialColorParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterialColorParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMeshMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mBackgroundMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignSettings_Statics::NewProp_mTextMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSignSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSignSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSignSettings_Statics::ClassParams = {
		&UFGSignSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGSignSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGSignSettings_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGSignSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSignSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSignSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSignSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSignSettings, 301943230);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSignSettings(Z_Construct_UClass_UFGSignSettings, &UFGSignSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSignSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSignSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
