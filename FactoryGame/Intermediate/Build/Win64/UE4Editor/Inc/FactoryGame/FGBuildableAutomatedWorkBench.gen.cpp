// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableAutomatedWorkBench.h"
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::NewProp_newManufacturingSpeed = { "newManufacturingSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableAutomatedWorkBench_eventSetManufacturingSpeed_Parms, newManufacturingSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::NewProp_newManufacturingSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automated WorkBench" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableAutomatedWorkBench.h" },
		{ "ToolTip", "The player can increase the manufacturing speed in the UI \"minigame\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableAutomatedWorkBench, nullptr, "SetManufacturingSpeed", sizeof(FGBuildableAutomatedWorkBench_eventSetManufacturingSpeed_Parms), Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGBuildableAutomatedWorkBench_SetManufacturingSpeed, "SetManufacturingSpeed" }, // 813377464
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "FALSE" },
		{ "IncludePath", "Buildables/FGBuildableAutomatedWorkBench.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableAutomatedWorkBench.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize_MetaData[] = {
		{ "Category", "Automated WorkBench" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableAutomatedWorkBench.h" },
		{ "ToolTip", "Size of the input inventory for the workbench" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize = { "mInputInventorySize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableAutomatedWorkBench, mInputInventorySize), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::NewProp_mInputInventorySize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableAutomatedWorkBench>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::ClassParams = {
		&AFGBuildableAutomatedWorkBench::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAutomatedWorkBench_Statics::PropPointers),
		0,
		0x009002A4u,
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
	IMPLEMENT_CLASS(AFGBuildableAutomatedWorkBench, 1412659972);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableAutomatedWorkBench>()
	{
		return AFGBuildableAutomatedWorkBench::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableAutomatedWorkBench(Z_Construct_UClass_AFGBuildableAutomatedWorkBench, &AFGBuildableAutomatedWorkBench::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableAutomatedWorkBench"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableAutomatedWorkBench);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
