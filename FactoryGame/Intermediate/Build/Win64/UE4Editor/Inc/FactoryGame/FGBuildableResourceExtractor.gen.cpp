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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_IsStartupComplete();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResourceForm();
// End Cross Module References
	void AFGBuildableResourceExtractor::StaticRegisterNativesAFGBuildableResourceExtractor()
	{
		UClass* Class = AFGBuildableResourceExtractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMiningParticle", &AFGBuildableResourceExtractor::execGetMiningParticle },
			{ "GetOutputInventory", &AFGBuildableResourceExtractor::execGetOutputInventory },
			{ "GetResourceNode", &AFGBuildableResourceExtractor::execGetResourceNode },
			{ "IsStartupComplete", &AFGBuildableResourceExtractor::execIsStartupComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
	struct Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics
	{
		struct FGBuildableResourceExtractor_eventGetResourceNode_Parms
		{
			AFGResourceNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableResourceExtractor_eventGetResourceNode_Parms, ReturnValue), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Get the resource node this miner is mining from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableResourceExtractor, nullptr, "GetResourceNode", sizeof(FGBuildableResourceExtractor_eventGetResourceNode_Parms), Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOutputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOutputInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentExtractProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentExtractProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractResourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExtractResourceNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mExtractionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllowedResourceForms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllowedResourceForms;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mAllowedResourceForms_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mAllowedResourceForms_Inner_Underlying;
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
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetMiningParticle, "GetMiningParticle" }, // 2379677134
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetOutputInventory, "GetOutputInventory" }, // 2639203458
		{ &Z_Construct_UFunction_AFGBuildableResourceExtractor_GetResourceNode, "GetResourceNode" }, // 15500616
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "Our output inventory," },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory = { "mOutputInventory", nullptr, (EPropertyFlags)0x0020080001080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mOutputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Current extract progress in the range [0, 1]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress = { "mCurrentExtractProgress", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mCurrentExtractProgress), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
		{ "ToolTip", "The resource node we want to extract from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode = { "mExtractResourceNode", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractResourceNode), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset_MetaData[] = {
		{ "Category", "Extraction" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableResourceExtractor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset = { "mExtractionOffset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mOutputInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mCurrentExtractProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractResourceNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mExtractionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableResourceExtractor_Statics::NewProp_mAllowedResourceForms_Inner_Underlying,
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
	IMPLEMENT_CLASS(AFGBuildableResourceExtractor, 4132997858);
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
