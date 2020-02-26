// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableRadarTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRadarTower() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRadarTower_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRadarTower();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_OnRep_OnRadiusUpdated();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "RadarTowerRadiusUpdated__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AFGBuildableRadarTower::StaticRegisterNativesAFGBuildableRadarTower()
	{
		UClass* Class = AFGBuildableRadarTower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentExpansionStep", &AFGBuildableRadarTower::execGetCurrentExpansionStep },
			{ "GetCurrentRevealRadius", &AFGBuildableRadarTower::execGetCurrentRevealRadius },
			{ "GetMaxRevealRadius", &AFGBuildableRadarTower::execGetMaxRevealRadius },
			{ "GetMinRevealRadius", &AFGBuildableRadarTower::execGetMinRevealRadius },
			{ "GetNormalizedProgressValueForStep", &AFGBuildableRadarTower::execGetNormalizedProgressValueForStep },
			{ "GetNumRadarExpansionSteps", &AFGBuildableRadarTower::execGetNumRadarExpansionSteps },
			{ "GetTimeToNextExpansion", &AFGBuildableRadarTower::execGetTimeToNextExpansion },
			{ "OnRep_OnRadiusUpdated", &AFGBuildableRadarTower::execOnRep_OnRadiusUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics
	{
		struct FGBuildableRadarTower_eventGetCurrentExpansionStep_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRadarTower_eventGetCurrentExpansionStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "Returns a which step we are currently on, will never return higher than mNumRadarExpansionSteps" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, nullptr, "GetCurrentExpansionStep", sizeof(FGBuildableRadarTower_eventGetCurrentExpansionStep_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics
	{
		struct FGBuildableRadarTower_eventGetCurrentRevealRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRadarTower_eventGetCurrentRevealRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "End Factory Interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, nullptr, "GetCurrentRevealRadius", sizeof(FGBuildableRadarTower_eventGetCurrentRevealRadius_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics
	{
		struct FGBuildableRadarTower_eventGetMaxRevealRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRadarTower_eventGetMaxRevealRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, nullptr, "GetMaxRevealRadius", sizeof(FGBuildableRadarTower_eventGetMaxRevealRadius_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics
	{
		struct FGBuildableRadarTower_eventGetMinRevealRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRadarTower_eventGetMinRevealRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, nullptr, "GetMinRevealRadius", sizeof(FGBuildableRadarTower_eventGetMinRevealRadius_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics
	{
		struct FGBuildableRadarTower_eventGetNormalizedProgressValueForStep_Parms
		{
			int32 step;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRadarTower_eventGetNormalizedProgressValueForStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::NewProp_step = { "step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRadarTower_eventGetNormalizedProgressValueForStep_Parms, step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::NewProp_step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "Returns a normalized value for how much we will have revealed of the max reveal radius on a certain step" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, nullptr, "GetNormalizedProgressValueForStep", sizeof(FGBuildableRadarTower_eventGetNormalizedProgressValueForStep_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics
	{
		struct FGBuildableRadarTower_eventGetNumRadarExpansionSteps_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRadarTower_eventGetNumRadarExpansionSteps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, nullptr, "GetNumRadarExpansionSteps", sizeof(FGBuildableRadarTower_eventGetNumRadarExpansionSteps_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics
	{
		struct FGBuildableRadarTower_eventGetTimeToNextExpansion_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRadarTower_eventGetTimeToNextExpansion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, nullptr, "GetTimeToNextExpansion", sizeof(FGBuildableRadarTower_eventGetTimeToNextExpansion_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRadarTower_OnRep_OnRadiusUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_OnRep_OnRadiusUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "Broadcast that the radius of the radar tower have been updated.\nIf this is called from non game thread we schedule a call to be made on game thread." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_OnRep_OnRadiusUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, nullptr, "OnRep_OnRadiusUpdated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_OnRep_OnRadiusUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_OnRep_OnRadiusUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_OnRep_OnRadiusUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_OnRep_OnRadiusUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableRadarTower_NoRegister()
	{
		return AFGBuildableRadarTower::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRadarTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTimeToNextExpansion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTimeToNextExpansion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentExpansionStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCurrentExpansionStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRadarExpansionInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRadarExpansionInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumRadarExpansionSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumRadarExpansionSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxRevealRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxRevealRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinRevealRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinRevealRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRadarTowerRadiusUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRadarTowerRadiusUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRadarTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableRadarTower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep, "GetCurrentExpansionStep" }, // 1014472592
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius, "GetCurrentRevealRadius" }, // 1259398886
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius, "GetMaxRevealRadius" }, // 105556465
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius, "GetMinRevealRadius" }, // 1898849332
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetNormalizedProgressValueForStep, "GetNormalizedProgressValueForStep" }, // 1113866969
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps, "GetNumRadarExpansionSteps" }, // 41475187
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion, "GetTimeToNextExpansion" }, // 3961025130
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_OnRep_OnRadiusUpdated, "OnRep_OnRadiusUpdated" }, // 296916291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "FALSE" },
		{ "IncludePath", "Buildables/FGBuildableRadarTower.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "Radar Tower reveals nearby fog of war on the Map. Expanding over time until it reaches its max limit." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "Time left until we expand the reveal area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion = { "mTimeToNextExpansion", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRadarTower, mTimeToNextExpansion), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "The step we are on right now between 0 and mNumRadarExpansionSteps-1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep = { "mCurrentExpansionStep", "OnRep_OnRadiusUpdated", (EPropertyFlags)0x0040000101000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRadarTower, mCurrentExpansionStep), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "The time between radar expansions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval = { "mRadarExpansionInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRadarTower, mRadarExpansionInterval), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "Total amount of steps the radar tower have between Min Reveal Radius to Max Reveal Radius" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps = { "mNumRadarExpansionSteps", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRadarTower, mNumRadarExpansionSteps), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "The reveal radius when tower have fully expanded its range" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius = { "mMaxRevealRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRadarTower, mMaxRevealRadius), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "The initial reveal radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius = { "mMinRevealRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRadarTower, mMinRevealRadius), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusUpdated_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusUpdated = { "OnRadarTowerRadiusUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRadarTower, OnRadarTowerRadiusUpdated), Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRadarTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRadarTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRadarTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::ClassParams = {
		&AFGBuildableRadarTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableRadarTower_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableRadarTower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableRadarTower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableRadarTower, 1407694205);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableRadarTower>()
	{
		return AFGBuildableRadarTower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRadarTower(Z_Construct_UClass_AFGBuildableRadarTower, &AFGBuildableRadarTower::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRadarTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRadarTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
