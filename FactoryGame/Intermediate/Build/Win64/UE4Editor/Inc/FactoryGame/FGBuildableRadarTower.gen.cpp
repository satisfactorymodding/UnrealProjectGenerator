// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableRadarTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRadarTower() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusExpanded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRadarTower_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRadarTower();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_Multicast_ExpandRadarRadius();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusExpanded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusExpanded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusExpanded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "RadarTowerRadiusExpanded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusExpanded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusExpanded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusExpanded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusExpanded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AFGBuildableRadarTower_Multicast_ExpandRadarRadius = FName(TEXT("Multicast_ExpandRadarRadius"));
	void AFGBuildableRadarTower::Multicast_ExpandRadarRadius()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableRadarTower_Multicast_ExpandRadarRadius),NULL);
	}
	void AFGBuildableRadarTower::StaticRegisterNativesAFGBuildableRadarTower()
	{
		UClass* Class = AFGBuildableRadarTower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentExpansionStep", &AFGBuildableRadarTower::execGetCurrentExpansionStep },
			{ "GetCurrentRevealRadius", &AFGBuildableRadarTower::execGetCurrentRevealRadius },
			{ "GetMaxRevealRadius", &AFGBuildableRadarTower::execGetMaxRevealRadius },
			{ "GetMinRevealRadius", &AFGBuildableRadarTower::execGetMinRevealRadius },
			{ "GetNumRadarExpansionSteps", &AFGBuildableRadarTower::execGetNumRadarExpansionSteps },
			{ "GetTimeToNextExpansion", &AFGBuildableRadarTower::execGetTimeToNextExpansion },
			{ "Multicast_ExpandRadarRadius", &AFGBuildableRadarTower::execMulticast_ExpandRadarRadius },
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableRadarTower_eventGetCurrentExpansionStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, "GetCurrentExpansionStep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableRadarTower_eventGetCurrentExpansionStep_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableRadarTower_eventGetCurrentRevealRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, "GetCurrentRevealRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableRadarTower_eventGetCurrentRevealRadius_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableRadarTower_eventGetMaxRevealRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, "GetMaxRevealRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableRadarTower_eventGetMaxRevealRadius_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableRadarTower_eventGetMinRevealRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, "GetMinRevealRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableRadarTower_eventGetMinRevealRadius_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius_Statics::FuncParams);
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableRadarTower_eventGetNumRadarExpansionSteps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, "GetNumRadarExpansionSteps", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableRadarTower_eventGetNumRadarExpansionSteps_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableRadarTower_eventGetTimeToNextExpansion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, "GetTimeToNextExpansion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableRadarTower_eventGetTimeToNextExpansion_Parms), Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRadarTower_Multicast_ExpandRadarRadius_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRadarTower_Multicast_ExpandRadarRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRadarTower_Multicast_ExpandRadarRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRadarTower, "Multicast_ExpandRadarRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00044CC1, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRadarTower_Multicast_ExpandRadarRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRadarTower_Multicast_ExpandRadarRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRadarTower_Multicast_ExpandRadarRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRadarTower_Multicast_ExpandRadarRadius_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRadarTowerRadiusExpanded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRadarTowerRadiusExpanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRadarTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableRadarTower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentExpansionStep, "GetCurrentExpansionStep" }, // 3390698503
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetCurrentRevealRadius, "GetCurrentRevealRadius" }, // 235479144
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetMaxRevealRadius, "GetMaxRevealRadius" }, // 2756325461
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetMinRevealRadius, "GetMinRevealRadius" }, // 2077063388
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetNumRadarExpansionSteps, "GetNumRadarExpansionSteps" }, // 4243760344
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_GetTimeToNextExpansion, "GetTimeToNextExpansion" }, // 1376740921
		{ &Z_Construct_UFunction_AFGBuildableRadarTower_Multicast_ExpandRadarRadius, "Multicast_ExpandRadarRadius" }, // 4260536199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "FALSE" },
		{ "IncludePath", "Buildables/FGBuildableRadarTower.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "Radar Tower reveals nearby fog of war on the Map. Expanding over time until it reaches its max limit." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion = { UE4CodeGen_Private::EPropertyClass::Float, "mTimeToNextExpansion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableRadarTower, mTimeToNextExpansion), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "The current expansion step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep = { UE4CodeGen_Private::EPropertyClass::Int, "mCurrentExpansionStep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRadarTower, mCurrentExpansionStep), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "The time between radar expansions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval = { UE4CodeGen_Private::EPropertyClass::Float, "mRadarExpansionInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableRadarTower, mRadarExpansionInterval), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "Total amount of steps the radar tower have between Min Reveal Radius to Max Reveal Radius" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps = { UE4CodeGen_Private::EPropertyClass::Int, "mNumRadarExpansionSteps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableRadarTower, mNumRadarExpansionSteps), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "The reveal radius when tower have fully expanded its range" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxRevealRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableRadarTower, mMaxRevealRadius), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
		{ "ToolTip", "The initial reveal radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius = { UE4CodeGen_Private::EPropertyClass::Float, "mMinRevealRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableRadarTower, mMinRevealRadius), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusExpanded_MetaData[] = {
		{ "Category", "Radar Tower" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRadarTower.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusExpanded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnRadarTowerRadiusExpanded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRadarTower, OnRadarTowerRadiusExpanded), Z_Construct_UDelegateFunction_FactoryGame_RadarTowerRadiusExpanded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusExpanded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusExpanded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRadarTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mTimeToNextExpansion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mCurrentExpansionStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mRadarExpansionInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mNumRadarExpansionSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMaxRevealRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_mMinRevealRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRadarTower_Statics::NewProp_OnRadarTowerRadiusExpanded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRadarTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRadarTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRadarTower_Statics::ClassParams = {
		&AFGBuildableRadarTower::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableRadarTower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRadarTower_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGBuildableRadarTower, 977552900);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRadarTower(Z_Construct_UClass_AFGBuildableRadarTower, &AFGBuildableRadarTower::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRadarTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRadarTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
