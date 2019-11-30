// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGConveyorBeltHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConveyorBeltHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorBeltHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorBeltHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_ConnectionArrowComponentDirection();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_SplineData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBelt_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorPoleHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePointData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSplineComponent_NoRegister();
// End Cross Module References
	void AFGConveyorBeltHologram::StaticRegisterNativesAFGConveyorBeltHologram()
	{
		UClass* Class = AFGConveyorBeltHologram::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ConnectionArrowComponentDirection", &AFGConveyorBeltHologram::execOnRep_ConnectionArrowComponentDirection },
			{ "OnRep_SplineData", &AFGConveyorBeltHologram::execOnRep_SplineData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_ConnectionArrowComponentDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_ConnectionArrowComponentDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "Create connection arrow component on the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_ConnectionArrowComponentDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGConveyorBeltHologram, nullptr, "OnRep_ConnectionArrowComponentDirection", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_ConnectionArrowComponentDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_ConnectionArrowComponentDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_ConnectionArrowComponentDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_ConnectionArrowComponentDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_SplineData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_SplineData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "Update the spline on the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_SplineData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGConveyorBeltHologram, nullptr, "OnRep_SplineData", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_SplineData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_SplineData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_SplineData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_SplineData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGConveyorBeltHologram_NoRegister()
	{
		return AFGConveyorBeltHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGConveyorBeltHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionArrowComponentDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mConnectionArrowComponentDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mConnectionArrowComponentDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxIncline_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxIncline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBendRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBendRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultConveyorPoleRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDefaultConveyorPoleRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpgradedConveyorBelt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mUpgradedConveyorBelt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConveyorPoles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConveyorPoles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedConnectionComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSplineData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSplineData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGConveyorBeltHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGConveyorBeltHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_ConnectionArrowComponentDirection, "OnRep_ConnectionArrowComponentDirection" }, // 1492826348
		{ &Z_Construct_UFunction_AFGConveyorBeltHologram_OnRep_SplineData, "OnRep_SplineData" }, // 1127110618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGConveyorBeltHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "Hologram for the conveyor belts, contains all the curve bending magic." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "Arrow to indicate the direction of the conveyor while placing it." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponent = { "mConnectionArrowComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorBeltHologram, mConnectionArrowComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponentDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "Used to replicate the direction arrow." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponentDirection = { "mConnectionArrowComponentDirection", "OnRep_ConnectionArrowComponentDirection", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorBeltHologram, mConnectionArrowComponentDirection), Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponentDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponentDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponentDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxIncline_MetaData[] = {
		{ "Category", "Conveyor Belt" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "What is the maximum incline of the conveyor belt (degrees)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxIncline = { "mMaxIncline", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorBeltHologram, mMaxIncline), METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxIncline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxIncline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxLength_MetaData[] = {
		{ "Category", "Conveyor Belt" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "What is the maximum length of one segment." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxLength = { "mMaxLength", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorBeltHologram, mMaxLength), METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mBendRadius_MetaData[] = {
		{ "Category", "Conveyor Belt" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "What radius will the bends have." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mBendRadius = { "mBendRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorBeltHologram, mBendRadius), METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mBendRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mBendRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mDefaultConveyorPoleRecipe_MetaData[] = {
		{ "Category", "Conveyor Belt" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "Class of conveyor pole to place at the end." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mDefaultConveyorPoleRecipe = { "mDefaultConveyorPoleRecipe", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorBeltHologram, mDefaultConveyorPoleRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mDefaultConveyorPoleRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mDefaultConveyorPoleRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mUpgradedConveyorBelt_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "If we upgrade another conveyor belt this is the belt we replaces." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mUpgradedConveyorBelt = { "mUpgradedConveyorBelt", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorBeltHologram, mUpgradedConveyorBelt), Z_Construct_UClass_AFGBuildableConveyorBelt_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mUpgradedConveyorBelt_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mUpgradedConveyorBelt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConveyorPoles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "The poles we may place automatically." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConveyorPoles = { "mConveyorPoles", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mConveyorPoles, AFGConveyorBeltHologram), STRUCT_OFFSET(AFGConveyorBeltHologram, mConveyorPoles), Z_Construct_UClass_AFGConveyorPoleHologram_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConveyorPoles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConveyorPoles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "The connections we've made." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSnappedConnectionComponents = { "mSnappedConnectionComponents", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mSnappedConnectionComponents, AFGConveyorBeltHologram), STRUCT_OFFSET(AFGConveyorBeltHologram, mSnappedConnectionComponents), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "The two connection components for this conveyor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionComponents = { "mConnectionComponents", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mConnectionComponents, AFGConveyorBeltHologram), STRUCT_OFFSET(AFGConveyorBeltHologram, mConnectionComponents), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "This is the data needed to create the spline component (local space)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineData = { "mSplineData", "OnRep_SplineData", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorBeltHologram, mSplineData), METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineData_Inner = { "mSplineData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSplinePointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorBeltHologram.h" },
		{ "ToolTip", "The spline component we're placing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineComponent = { "mSplineComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorBeltHologram, mSplineComponent), Z_Construct_UClass_UFGSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGConveyorBeltHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponentDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionArrowComponentDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxIncline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mMaxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mBendRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mDefaultConveyorPoleRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mUpgradedConveyorBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConveyorPoles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSnappedConnectionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mConnectionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorBeltHologram_Statics::NewProp_mSplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGConveyorBeltHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGConveyorBeltHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGConveyorBeltHologram_Statics::ClassParams = {
		&AFGConveyorBeltHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGConveyorBeltHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorBeltHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGConveyorBeltHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGConveyorBeltHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGConveyorBeltHologram, 3249607118);
	template<> FACTORYGAME_API UClass* StaticClass<AFGConveyorBeltHologram>()
	{
		return AFGConveyorBeltHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGConveyorBeltHologram(Z_Construct_UClass_AFGConveyorBeltHologram, &AFGConveyorBeltHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGConveyorBeltHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGConveyorBeltHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
