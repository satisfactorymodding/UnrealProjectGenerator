// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableAutomatedWorkBench.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableAutomatedWorkBench() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAutomatedWorkBench_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAutomatedWorkBench();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableManufacturer();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed();
// End Cross Module References
	void AFGBuildableAutomatedWorkBench::StaticRegisterNativesAFGBuildableAutomatedWorkBench()
	{
		UClass* Class = AFGBuildableAutomatedWorkBench::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetManufacturingSpeed", &AFGBuildableAutomatedWorkBench::execSetManufacturingSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics
	{
		struct FGBuildableAutomatedWorkBench_eventSetManufacturingSpeed_Parms
		{
			float newManufacturingSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newManufacturingSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::NewProp_newManufacturingSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "newManufacturingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableAutomatedWorkBench_eventSetManufacturingSpeed_Parms, newManufacturingSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::NewProp_newManufacturingSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automated WorkBench" },
		{ "ModuleRelativePath", "Buildables/FGBuildableAutomatedWorkBench.h" },
		{ "ToolTip", "The player can increase the manufacturing speed in the UI \"minigame\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableAutomatedWorkBench, "SetManufacturingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGBuildableAutomatedWorkBench_eventSetManufacturingSpeed_Parms), Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableAutomatedWorkBench_NoRegister()
	{
		return AFGBuildableAutomatedWorkBench::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInputInventorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mInputInventorySize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableManufacturer,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed, "SetManufacturingSpeed" }, // 3406827811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "FALSE" },
		{ "IncludePath", "Buildables/FGBuildableAutomatedWorkBench.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableAutomatedWorkBench.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize_MetaData[] = {
		{ "Category", "Automated WorkBench" },
		{ "ModuleRelativePath", "Buildables/FGBuildableAutomatedWorkBench.h" },
		{ "ToolTip", "Size of the input inventory for the workbench" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize = { UE4CodeGen_Private::EPropertyClass::Int, "mInputInventorySize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableAutomatedWorkBench, mInputInventorySize), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableAutomatedWorkBench>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::ClassParams = {
		&AFGBuildableAutomatedWorkBench::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableAutomatedWorkBench()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableAutomatedWorkBench, 743711865);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableAutomatedWorkBench(Z_Construct_UClass_AFGBuildableAutomatedWorkBench, &AFGBuildableAutomatedWorkBench::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableAutomatedWorkBench"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableAutomatedWorkBench);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
