// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableStandaloneSign.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableStandaloneSign() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableStandaloneSign_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableStandaloneSign();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSignElementConstraints();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSignData();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
	void AFGBuildableStandaloneSign::StaticRegisterNativesAFGBuildableStandaloneSign()
	{
		UClass* Class = AFGBuildableStandaloneSign::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentNormalizedTextOffsetZ", &AFGBuildableStandaloneSign::execGetCurrentNormalizedTextOffsetZ },
			{ "GetCurrentNormalizedTextScale", &AFGBuildableStandaloneSign::execGetCurrentNormalizedTextScale },
			{ "GetSignConstraints", &AFGBuildableStandaloneSign::execGetSignConstraints },
			{ "GetTextScaleFromNormalizedValue", &AFGBuildableStandaloneSign::execGetTextScaleFromNormalizedValue },
			{ "OnRep_SignData", &AFGBuildableStandaloneSign::execOnRep_SignData },
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetCurrentNormalizedTextOffsetZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, nullptr, "GetCurrentNormalizedTextOffsetZ", sizeof(FGBuildableStandaloneSign_eventGetCurrentNormalizedTextOffsetZ_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetCurrentNormalizedTextScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, nullptr, "GetCurrentNormalizedTextScale", sizeof(FGBuildableStandaloneSign_eventGetCurrentNormalizedTextScale_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics
	{
		struct FGBuildableStandaloneSign_eventGetSignConstraints_Parms
		{
			FSignElementConstraints ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetSignConstraints_Parms, ReturnValue), Z_Construct_UScriptStruct_FSignElementConstraints, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Begin Widget Getter Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, nullptr, "GetSignConstraints", sizeof(FGBuildableStandaloneSign_eventGetSignConstraints_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetTextScaleFromNormalizedValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableStandaloneSign_eventGetTextScaleFromNormalizedValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, nullptr, "GetTextScaleFromNormalizedValue", sizeof(FGBuildableStandaloneSign_eventGetTextScaleFromNormalizedValue_Parms), Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Update sign components on replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStandaloneSign, nullptr, "OnRep_SignData", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBackgroundGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mBackgroundGridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSignFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignConstraints_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSignConstraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGainSignificanceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mGainSignificanceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHologramParticleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHologramParticleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGridSquareDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mGridSquareDimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBoundingBox;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDataToComponentMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mDataToComponentMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mDataToComponentMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDataToComponentMap_ValueProp;
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
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextOffsetZ, "GetCurrentNormalizedTextOffsetZ" }, // 3353399753
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetCurrentNormalizedTextScale, "GetCurrentNormalizedTextScale" }, // 3001514049
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetSignConstraints, "GetSignConstraints" }, // 3212504835
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_GetTextScaleFromNormalizedValue, "GetTextScaleFromNormalizedValue" }, // 3443666327
		{ &Z_Construct_UFunction_AFGBuildableStandaloneSign_OnRep_SignData, "OnRep_SignData" }, // 61492723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableStandaloneSign.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Class for the creating of placeable signs. Implements the sign interface for adding and removing element via a widget class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData = { "mSignData", "OnRep_SignData", (EPropertyFlags)0x0020080101000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignData), Z_Construct_UScriptStruct_FSignData, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBackgroundGridSize_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBackgroundGridSize = { "mBackgroundGridSize", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mBackgroundGridSize), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBackgroundGridSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBackgroundGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignFont_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignFont = { "mSignFont", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignConstraints_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignConstraints = { "mSignConstraints", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignConstraints), Z_Construct_UScriptStruct_FSignElementConstraints, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignConstraints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignConstraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance_MetaData[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Distance at which to gain significance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance = { "mGainSignificanceDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mGainSignificanceDistance), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Particle system visual" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent = { "mHologramParticleComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mHologramParticleComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGridSquareDimensions_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "The size of each grid square on the this sign" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGridSquareDimensions = { "mGridSquareDimensions", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mGridSquareDimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGridSquareDimensions_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGridSquareDimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBoundingBox_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Bounding box used to cull text mesh. Is assign to the BoundedTextRenderComponents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBoundingBox = { "mBoundingBox", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mBoundingBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBoundingBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBoundingBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy = { "mMeshComponentProxy", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mMeshComponentProxy), Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Root component that parents the text objects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot = { "mTextDisplayRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mTextDisplayRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot_MetaData[] = {
		{ "Category", "StandaloneSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Root Component that holds all the sign elements, text, mesh etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot = { "mSignDisplayRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mSignDisplayRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mDataToComponentMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStandaloneSign.h" },
		{ "ToolTip", "Map of Element Ids to their associated component" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mDataToComponentMap = { "mDataToComponentMap", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableStandaloneSign, mDataToComponentMap), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mDataToComponentMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mDataToComponentMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mDataToComponentMap_Key_KeyProp = { "mDataToComponentMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mDataToComponentMap_ValueProp = { "mDataToComponentMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBackgroundGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGainSignificanceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mHologramParticleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mGridSquareDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mBoundingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mMeshComponentProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mTextDisplayRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mSignDisplayRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mDataToComponentMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mDataToComponentMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::NewProp_mDataToComponentMap_ValueProp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSignInterface_NoRegister, (int32)VTABLE_OFFSET(AFGBuildableStandaloneSign, IFGSignInterface), false },
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGBuildableStandaloneSign, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableStandaloneSign>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::ClassParams = {
		&AFGBuildableStandaloneSign::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStandaloneSign_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009002A5u,
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
	IMPLEMENT_CLASS(AFGBuildableStandaloneSign, 1973898190);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableStandaloneSign>()
	{
		return AFGBuildableStandaloneSign::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableStandaloneSign(Z_Construct_UClass_AFGBuildableStandaloneSign, &AFGBuildableStandaloneSign::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableStandaloneSign"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableStandaloneSign);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
