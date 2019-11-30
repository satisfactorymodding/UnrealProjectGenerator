// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGGlobalSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGlobalSettings() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGlobalSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGlobalSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDropPodSettings_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEnvironmentSettings_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactorySettings_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHardDriveSettings_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceSettings_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignSettings_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSubsystemClasses_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UFGGlobalSettings::StaticRegisterNativesUFGGlobalSettings()
	{
		UClass* Class = UFGGlobalSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDropPodSettingsCDO", &UFGGlobalSettings::execGetDropPodSettingsCDO },
			{ "GetEnvironmentSettingsCDO", &UFGGlobalSettings::execGetEnvironmentSettingsCDO },
			{ "GetFactorySettingsCDO", &UFGGlobalSettings::execGetFactorySettingsCDO },
			{ "GetGlobalSettingsClassCDO", &UFGGlobalSettings::execGetGlobalSettingsClassCDO },
			{ "GetHardDriveSettingsCDO", &UFGGlobalSettings::execGetHardDriveSettingsCDO },
			{ "GetResourceSettingsCDO", &UFGGlobalSettings::execGetResourceSettingsCDO },
			{ "GetSignSettingsCDO", &UFGGlobalSettings::execGetSignSettingsCDO },
			{ "GetSubsystemClassesCDO", &UFGGlobalSettings::execGetSubsystemClassesCDO },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics
	{
		struct FGGlobalSettings_eventGetDropPodSettingsCDO_Parms
		{
			UFGDropPodSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGlobalSettings_eventGetDropPodSettingsCDO_Parms, ReturnValue), Z_Construct_UClass_UFGDropPodSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGlobalSettings, "GetDropPodSettingsCDO", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGGlobalSettings_eventGetDropPodSettingsCDO_Parms), Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics
	{
		struct FGGlobalSettings_eventGetEnvironmentSettingsCDO_Parms
		{
			UFGEnvironmentSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGlobalSettings_eventGetEnvironmentSettingsCDO_Parms, ReturnValue), Z_Construct_UClass_UFGEnvironmentSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGlobalSettings, "GetEnvironmentSettingsCDO", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGGlobalSettings_eventGetEnvironmentSettingsCDO_Parms), Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics
	{
		struct FGGlobalSettings_eventGetFactorySettingsCDO_Parms
		{
			UFGFactorySettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGlobalSettings_eventGetFactorySettingsCDO_Parms, ReturnValue), Z_Construct_UClass_UFGFactorySettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGlobalSettings, "GetFactorySettingsCDO", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGGlobalSettings_eventGetFactorySettingsCDO_Parms), Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics
	{
		struct FGGlobalSettings_eventGetGlobalSettingsClassCDO_Parms
		{
			UFGGlobalSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGlobalSettings_eventGetGlobalSettingsClassCDO_Parms, ReturnValue), Z_Construct_UClass_UFGGlobalSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGlobalSettings, "GetGlobalSettingsClassCDO", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGGlobalSettings_eventGetGlobalSettingsClassCDO_Parms), Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics
	{
		struct FGGlobalSettings_eventGetHardDriveSettingsCDO_Parms
		{
			UFGHardDriveSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGlobalSettings_eventGetHardDriveSettingsCDO_Parms, ReturnValue), Z_Construct_UClass_UFGHardDriveSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGlobalSettings, "GetHardDriveSettingsCDO", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGGlobalSettings_eventGetHardDriveSettingsCDO_Parms), Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics
	{
		struct FGGlobalSettings_eventGetResourceSettingsCDO_Parms
		{
			UFGResourceSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGlobalSettings_eventGetResourceSettingsCDO_Parms, ReturnValue), Z_Construct_UClass_UFGResourceSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGlobalSettings, "GetResourceSettingsCDO", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGGlobalSettings_eventGetResourceSettingsCDO_Parms), Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics
	{
		struct FGGlobalSettings_eventGetSignSettingsCDO_Parms
		{
			UFGSignSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGlobalSettings_eventGetSignSettingsCDO_Parms, ReturnValue), Z_Construct_UClass_UFGSignSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGlobalSettings, "GetSignSettingsCDO", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGGlobalSettings_eventGetSignSettingsCDO_Parms), Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics
	{
		struct FGGlobalSettings_eventGetSubsystemClassesCDO_Parms
		{
			UFGSubsystemClasses* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGlobalSettings_eventGetSubsystemClassesCDO_Parms, ReturnValue), Z_Construct_UClass_UFGSubsystemClasses_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGlobalSettings, "GetSubsystemClassesCDO", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGGlobalSettings_eventGetSubsystemClassesCDO_Parms), Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGGlobalSettings_NoRegister()
	{
		return UFGGlobalSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGGlobalSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGlobalSettingsClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mGlobalSettingsClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSignSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSubsystemClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSubsystemClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnvironmentSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mEnvironmentSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHardDriveSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mHardDriveSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDropPodSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDropPodSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFactorySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mFactorySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mResourceSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGlobalSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGGlobalSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGGlobalSettings_GetDropPodSettingsCDO, "GetDropPodSettingsCDO" }, // 1598258501
		{ &Z_Construct_UFunction_UFGGlobalSettings_GetEnvironmentSettingsCDO, "GetEnvironmentSettingsCDO" }, // 1353090258
		{ &Z_Construct_UFunction_UFGGlobalSettings_GetFactorySettingsCDO, "GetFactorySettingsCDO" }, // 2034061484
		{ &Z_Construct_UFunction_UFGGlobalSettings_GetGlobalSettingsClassCDO, "GetGlobalSettingsClassCDO" }, // 2602991363
		{ &Z_Construct_UFunction_UFGGlobalSettings_GetHardDriveSettingsCDO, "GetHardDriveSettingsCDO" }, // 2998668701
		{ &Z_Construct_UFunction_UFGGlobalSettings_GetResourceSettingsCDO, "GetResourceSettingsCDO" }, // 2643525018
		{ &Z_Construct_UFunction_UFGGlobalSettings_GetSignSettingsCDO, "GetSignSettingsCDO" }, // 4193613967
		{ &Z_Construct_UFunction_UFGGlobalSettings_GetSubsystemClassesCDO, "GetSubsystemClassesCDO" }, // 2248225810
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGlobalSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGGlobalSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mGlobalSettingsClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
		{ "ToolTip", "Default class for specifying the settings class" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mGlobalSettingsClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "mGlobalSettingsClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080002004000, 1, nullptr, STRUCT_OFFSET(UFGGlobalSettings, mGlobalSettingsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mGlobalSettingsClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mGlobalSettingsClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSignSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSignSettings = { UE4CodeGen_Private::EPropertyClass::Class, "mSignSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGGlobalSettings, mSignSettings), Z_Construct_UClass_UFGSignSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSignSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSignSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSubsystemClasses_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSubsystemClasses = { UE4CodeGen_Private::EPropertyClass::Class, "mSubsystemClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGGlobalSettings, mSubsystemClasses), Z_Construct_UClass_UFGSubsystemClasses_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSubsystemClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSubsystemClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mEnvironmentSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
		{ "ToolTip", "Settings for drop pods" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mEnvironmentSettings = { UE4CodeGen_Private::EPropertyClass::Class, "mEnvironmentSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGGlobalSettings, mEnvironmentSettings), Z_Construct_UClass_UFGEnvironmentSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mEnvironmentSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mEnvironmentSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mHardDriveSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
		{ "ToolTip", "Settings for Hard Drive Research" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mHardDriveSettings = { UE4CodeGen_Private::EPropertyClass::Class, "mHardDriveSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGGlobalSettings, mHardDriveSettings), Z_Construct_UClass_UFGHardDriveSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mHardDriveSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mHardDriveSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mDropPodSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
		{ "ToolTip", "Settings for drop pods" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mDropPodSettings = { UE4CodeGen_Private::EPropertyClass::Class, "mDropPodSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGGlobalSettings, mDropPodSettings), Z_Construct_UClass_UFGDropPodSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mDropPodSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mDropPodSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mFactorySettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
		{ "ToolTip", "Settings for resources" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mFactorySettings = { UE4CodeGen_Private::EPropertyClass::Class, "mFactorySettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGGlobalSettings, mFactorySettings), Z_Construct_UClass_UFGFactorySettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mFactorySettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mFactorySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mResourceSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FGGlobalSettings.h" },
		{ "ToolTip", "Settings for resources" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mResourceSettings = { UE4CodeGen_Private::EPropertyClass::Class, "mResourceSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGGlobalSettings, mResourceSettings), Z_Construct_UClass_UFGResourceSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mResourceSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mResourceSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGGlobalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mGlobalSettingsClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSignSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mSubsystemClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mEnvironmentSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mHardDriveSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mDropPodSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mFactorySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGlobalSettings_Statics::NewProp_mResourceSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGlobalSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGlobalSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGlobalSettings_Statics::ClassParams = {
		&UFGGlobalSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGGlobalSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGGlobalSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGGlobalSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGlobalSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGlobalSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGlobalSettings, 1051468389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGlobalSettings(Z_Construct_UClass_UFGGlobalSettings, &UFGGlobalSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGGlobalSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGlobalSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
