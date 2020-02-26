// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableResourceExtractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableResourceExtractor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableResourceExtractor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableResourceExtractor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGExtractableResourceInterface_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPipeConnectionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConstructDisqualifier_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResourceForm();
// End Cross Module References
	void AFGBuildableResourceExtractor::StaticRegisterNativesAFGBuildableResourceExtractor()
	{
		UClass* Class = AFGBuildableResourceExtractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetExtractableResource", &AFGBuildableResourceExtractor::execGetExtractableResource },
			{ "GetFlowRateSmoothed", &AFGBuildableResourceExtractor::execGetFlowRateSmoothed },
			{ "GetMaxFlowRate", &AFGBuildableResourceExtractor::execGetMaxFlowRate },
			{ "GetMiningParticle", &AFGBuildableResourceExtractor::execGetMiningParticle },
			{ "GetNumExtractedItemsPerCycle", &AFGBuildableResourceExtractor::execGetNumExtractedItemsPerCycle },
			{ "GetNumExtractedItemsPerCycleConverted", &AFGBuildableResourceExtractor::execGetNumExtractedItemsPerCycleConverted },
			{ "GetOutputInventory", &AFGBuildableResourceExtractor::execGetOutputInventory },
			{ "IsStartupComplete", &AFGBuildableResourceExtractor::execIsStartupComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics
	{
		struct FGBuildableResourceExtractor_eventGetExtractableResource_Parms
		{
			TScriptInterface<IFGExtractableResourceInterface> ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableResourceExtractor_eventGetExtractableResource_Parms, ReturnValue), Z_Construct_UClass_UFGExtractableResourceInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Get the extractable resource interface this miner is extracting from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableResourceExtractor, nullptr, "GetExtractableResource", sizeof(FGBuildableResourceExtractor_eventGetExtractableResource_Parms), Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics
	{
		struct FGBuildableResourceExtractor_eventGetFlowRateSmoothed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableResourceExtractor_eventGetFlowRateSmoothed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pipes" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Get the smoothed flow rate out of the extractor in m^3/s. Only valid for Liquid or Gas extractors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableResourceExtractor, nullptr, "GetFlowRateSmoothed", sizeof(FGBuildableResourceExtractor_eventGetFlowRateSmoothed_Parms), Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics
	{
		struct FGBuildableResourceExtractor_eventGetMaxFlowRate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableResourceExtractor_eventGetMaxFlowRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pipes" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Return the maximum out flow from inventory to pipeline conversion in m^3/s" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableResourceExtractor, nullptr, "GetMaxFlowRate", sizeof(FGBuildableResourceExtractor_eventGetMaxFlowRate_Parms), Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics
	{
		struct FGBuildableResourceExtractor_eventGetMiningParticle_Parms
		{
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableResourceExtractor_eventGetMiningParticle_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Gets particle for mining" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableResourceExtractor, nullptr, "GetMiningParticle", sizeof(FGBuildableResourceExtractor_eventGetMiningParticle_Parms), Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics
	{
		struct FGBuildableResourceExtractor_eventGetNumExtractedItemsPerCycle_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableResourceExtractor_eventGetNumExtractedItemsPerCycle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Get the quantity of items mined each production cycle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableResourceExtractor, nullptr, "GetNumExtractedItemsPerCycle", sizeof(FGBuildableResourceExtractor_eventGetNumExtractedItemsPerCycle_Parms), Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics
	{
		struct FGBuildableResourceExtractor_eventGetNumExtractedItemsPerCycleConverted_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableResourceExtractor_eventGetNumExtractedItemsPerCycleConverted_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Get the quantity of items extracted each cycle converted for displaying in the UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableResourceExtractor, nullptr, "GetNumExtractedItemsPerCycleConverted", sizeof(FGBuildableResourceExtractor_eventGetNumExtractedItemsPerCycleConverted_Parms), Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics
	{
		struct FGBuildableResourceExtractor_eventGetOutputInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableResourceExtractor_eventGetOutputInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Get the inventory we output the extracted resources to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableResourceExtractor, nullptr, "GetOutputInventory", sizeof(FGBuildableResourceExtractor_eventGetOutputInventory_Parms), Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics
	{
		struct FGBuildableResourceExtractor_eventIsStartupComplete_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableResourceExtractor_eventIsStartupComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableResourceExtractor_eventIsStartupComplete_Parms), &Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Are we done with startup animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableResourceExtractor, nullptr, "IsStartupComplete", sizeof(FGBuildableResourceExtractor_eventIsStartupComplete_Parms), Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableResourceExtractor_NoRegister()
	{
		return AFGBuildableResourceExtractor::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableResourceExtractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicatedFlowRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mReplicatedFlowRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOutputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOutputInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeOutputConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPipeOutputConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPipeOutputConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentExtractProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentExtractProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractableResource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExtractableResource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractResourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExtractResourceNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractorTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mExtractorTypeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMustPlaceOnResourceDisqualifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mMustPlaceOnResourceDisqualifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mExtractionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllowedResources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllowedResources;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAllowedResources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnlyAllowCertainResources_MetaData[];
#endif
		static void NewProp_mOnlyAllowCertainResources_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mOnlyAllowCertainResources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDepthTraceOriginOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDepthTraceOriginOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinimumDepthForPlacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinimumDepthForPlacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRequireResourceAtMinimumDepthChecks_MetaData[];
#endif
		static void NewProp_mRequireResourceAtMinimumDepthChecks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mRequireResourceAtMinimumDepthChecks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllowedResourceForms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllowedResourceForms;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mAllowedResourceForms_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mAllowedResourceForms_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemsPerCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mItemsPerCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractCycleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mExtractCycleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractStartupTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mExtractStartupTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetExtractableResource, "GetExtractableResource" }, // 2664904512
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetFlowRateSmoothed, "GetFlowRateSmoothed" }, // 4245448905
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMaxFlowRate, "GetMaxFlowRate" }, // 3359181057
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle, "GetMiningParticle" }, // 2379677134
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycle, "GetNumExtractedItemsPerCycle" }, // 1260270607
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetNumExtractedItemsPerCycleConverted, "GetNumExtractedItemsPerCycleConverted" }, // 2361263420
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory, "GetOutputInventory" }, // 2639203458
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete, "IsStartupComplete" }, // 3927286600
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableResourceExtractor.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "The base class for all resource extractors, i.e. miners and pumps." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mReplicatedFlowRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Replicated smoothed flow rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mReplicatedFlowRate = { "mReplicatedFlowRate", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mReplicatedFlowRate), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mReplicatedFlowRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mReplicatedFlowRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Our output inventory," },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory = { "mOutputInventory", nullptr, (EPropertyFlags)0x0020080001080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mOutputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mPipeOutputConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Cached pipe output connections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mPipeOutputConnections = { "mPipeOutputConnections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mPipeOutputConnections), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mPipeOutputConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mPipeOutputConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mPipeOutputConnections_Inner = { "mPipeOutputConnections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGPipeConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Current extract progress in the range [0, 1]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress = { "mCurrentExtractProgress", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mCurrentExtractProgress), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractableResource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractableResource = { "mExtractableResource", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractableResource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractableResource_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractableResource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "DEPRICATED - Only used for old save support. Use mExtractableResource instead.\n The resource node we want to extract from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode = { "mExtractResourceNode", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractResourceNode), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractorTypeName_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "name used to mathc types of extractros for compatiblility when upgrading" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractorTypeName = { "mExtractorTypeName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractorTypeName), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractorTypeName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractorTypeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMustPlaceOnResourceDisqualifier_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Class disqualifier to use when this resource extractor is not placed on a matching resource node ( used in the hologram )" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMustPlaceOnResourceDisqualifier = { "mMustPlaceOnResourceDisqualifier", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mMustPlaceOnResourceDisqualifier), Z_Construct_UClass_UFGConstructDisqualifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMustPlaceOnResourceDisqualifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMustPlaceOnResourceDisqualifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset = { "mExtractionOffset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResources_MetaData[] = {
		{ "Category", "Extraction" },
		{ "EditCondition", "mOnlyAllowCertainResources" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "List of acceptable resources this extractor can mine / pump" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResources = { "mAllowedResources", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mAllowedResources), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResources_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResources_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResources_Inner = { "mAllowedResources", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOnlyAllowCertainResources_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Should this extractor only allow extracting from specified resources?\n@note - mAllowedResourceForms will still affect placement validation." },
	};
#endif
	void Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOnlyAllowCertainResources_SetBit(void* Obj)
	{
		((AFGBuildableResourceExtractor*)Obj)->mOnlyAllowCertainResources = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOnlyAllowCertainResources = { "mOnlyAllowCertainResources", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableResourceExtractor), &Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOnlyAllowCertainResources_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOnlyAllowCertainResources_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOnlyAllowCertainResources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mDepthTraceOriginOffset_MetaData[] = {
		{ "Category", "Extraction" },
		{ "EditCondition", "mRequireResourceAtMinimumDepthChecks" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Offset from hologram origin to begin and end traces When performing minimum depth checks ( if enabled for this buildable ) during placement" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mDepthTraceOriginOffset = { "mDepthTraceOriginOffset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mDepthTraceOriginOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mDepthTraceOriginOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mDepthTraceOriginOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMinimumDepthForPlacement_MetaData[] = {
		{ "Category", "Extraction" },
		{ "EditCondition", "mRequireResourceAtMinimumDepthChecks" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "(For Hologram) Minimum depth to collision this extractor requires to be placed ( tex. Water Pumps need to be at least X distance above floor )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMinimumDepthForPlacement = { "mMinimumDepthForPlacement", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mMinimumDepthForPlacement), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMinimumDepthForPlacement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMinimumDepthForPlacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mRequireResourceAtMinimumDepthChecks_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "(For Hologram) Require resource at minimum depth checks?\nIf true, this will ensure placement is only allowed where a minimum depth trace collides with the resource class this extractor is snapped to" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mRequireResourceAtMinimumDepthChecks_SetBit(void* Obj)
	{
		((AFGBuildableResourceExtractor*)Obj)->mRequireResourceAtMinimumDepthChecks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mRequireResourceAtMinimumDepthChecks = { "mRequireResourceAtMinimumDepthChecks", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableResourceExtractor), &Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mRequireResourceAtMinimumDepthChecks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mRequireResourceAtMinimumDepthChecks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mRequireResourceAtMinimumDepthChecks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Can we mine solids, liquids, gases or many of the types." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms = { "mAllowedResourceForms", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mAllowedResourceForms), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms_Inner = { "mAllowedResourceForms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mItemsPerCycle_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "How many items are extracted per cycle" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mItemsPerCycle = { "mItemsPerCycle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mItemsPerCycle), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mItemsPerCycle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mItemsPerCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractCycleTime_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ClampMin", "0.0001" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "How long does it take to complete one mining cycle. In seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractCycleTime = { "mExtractCycleTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractCycleTime), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractCycleTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractCycleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractStartupTime_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Power up time for the extraction process, e.g. the time it takes for a drill to start spinning." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractStartupTime = { "mExtractStartupTime", nullptr, (EPropertyFlags)0x0020080000010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractStartupTime), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractStartupTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractStartupTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mReplicatedFlowRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mPipeOutputConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mPipeOutputConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractableResource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractorTypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMustPlaceOnResourceDisqualifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOnlyAllowCertainResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mDepthTraceOriginOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mMinimumDepthForPlacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mRequireResourceAtMinimumDepthChecks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mItemsPerCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractCycleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractStartupTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableResourceExtractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::ClassParams = {
		&AFGBuildableResourceExtractor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableResourceExtractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableResourceExtractor, 4263910001);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableResourceExtractor>()
	{
		return AFGBuildableResourceExtractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableResourceExtractor(Z_Construct_UClass_AFGBuildableResourceExtractor, &AFGBuildableResourceExtractor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableResourceExtractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableResourceExtractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
