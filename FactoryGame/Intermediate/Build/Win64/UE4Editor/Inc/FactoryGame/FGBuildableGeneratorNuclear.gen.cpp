// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableGeneratorNuclear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableGeneratorNuclear() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGeneratorNuclear_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGeneratorNuclear();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGeneratorFuel();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
// End Cross Module References
	void AFGBuildableGeneratorNuclear::StaticRegisterNativesAFGBuildableGeneratorNuclear()
	{
		UClass* Class = AFGBuildableGeneratorNuclear::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWasteInventory", &AFGBuildableGeneratorNuclear::execGetWasteInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics
	{
		struct FGBuildableGeneratorNuclear_eventGetWasteInventory_Parms
		{
			UFGInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGBuildableGeneratorNuclear_eventGetWasteInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nuclear" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorNuclear.h" },
		{ "ToolTip", "Returns the inventory for waste in the nuclear generator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorNuclear, "GetWasteInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(FGBuildableGeneratorNuclear_eventGetWasteInventory_Parms), Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableGeneratorNuclear_NoRegister()
	{
		return AFGBuildableGeneratorNuclear::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWasteLeftFromCurrentFuel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mWasteLeftFromCurrentFuel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOutputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOutputInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableGeneratorFuel,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableGeneratorNuclear_GetWasteInventory, "GetWasteInventory" }, // 3683659066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableGeneratorNuclear.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorNuclear.h" },
		{ "ToolTip", "A generator that runs on nuclear fuel and produces waste." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mWasteLeftFromCurrentFuel_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorNuclear.h" },
		{ "ToolTip", "Waste left to produce from the current fuel rod" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mWasteLeftFromCurrentFuel = { UE4CodeGen_Private::EPropertyClass::Int, "mWasteLeftFromCurrentFuel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableGeneratorNuclear, mWasteLeftFromCurrentFuel), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mWasteLeftFromCurrentFuel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mWasteLeftFromCurrentFuel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mOutputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorNuclear.h" },
		{ "ToolTip", "Spent fuel rods goes here." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mOutputInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mOutputInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001080028, 1, nullptr, STRUCT_OFFSET(AFGBuildableGeneratorNuclear, mOutputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mOutputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mOutputInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mWasteLeftFromCurrentFuel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::NewProp_mOutputInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableGeneratorNuclear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::ClassParams = {
		&AFGBuildableGeneratorNuclear::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableGeneratorNuclear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableGeneratorNuclear, 3219746931);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableGeneratorNuclear(Z_Construct_UClass_AFGBuildableGeneratorNuclear, &AFGBuildableGeneratorNuclear::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableGeneratorNuclear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableGeneratorNuclear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
