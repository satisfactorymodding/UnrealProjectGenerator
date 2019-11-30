// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGPortableMiner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPortableMiner() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPortableMiner_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPortableMiner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPortableMiner_CanProduce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPortableMiner_IsProducing();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPortableMiner_OnRep_IsProducing();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInteractWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	void AFGPortableMiner::StaticRegisterNativesAFGPortableMiner()
	{
		UClass* Class = AFGPortableMiner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanProduce", &AFGPortableMiner::execCanProduce },
			{ "GetDismantleInventoryReturns", &AFGPortableMiner::execGetDismantleInventoryReturns },
			{ "GetExtractionProgress", &AFGPortableMiner::execGetExtractionProgress },
			{ "GetOutputInventory", &AFGPortableMiner::execGetOutputInventory },
			{ "IsProducing", &AFGPortableMiner::execIsProducing },
			{ "OnRep_IsProducing", &AFGPortableMiner::execOnRep_IsProducing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics
	{
		struct FGPortableMiner_eventCanProduce_Parms
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
	void Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPortableMiner_eventCanProduce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPortableMiner_eventCanProduce_Parms), &Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Production" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "Can we start production i.e. do we have the items needed for assembly etc.\n\n@return - true if we can start production; otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPortableMiner, nullptr, "CanProduce", sizeof(FGPortableMiner_eventCanProduce_Parms), Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPortableMiner_CanProduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPortableMiner_CanProduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics
	{
		struct FGPortableMiner_eventGetDismantleInventoryReturns_Parms
		{
			TArray<FInventoryStack> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPortableMiner_eventGetDismantleInventoryReturns_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "What do we get back when dismantling this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPortableMiner, nullptr, "GetDismantleInventoryReturns", sizeof(FGPortableMiner_eventGetDismantleInventoryReturns_Parms), Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics
	{
		struct FGPortableMiner_eventGetExtractionProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPortableMiner_eventGetExtractionProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Production" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "@return Get the progress for the current bit of ore." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPortableMiner, nullptr, "GetExtractionProgress", sizeof(FGPortableMiner_eventGetExtractionProgress_Parms), Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics
	{
		struct FGPortableMiner_eventGetOutputInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPortableMiner_eventGetOutputInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "@return The miners output inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPortableMiner, nullptr, "GetOutputInventory", sizeof(FGPortableMiner_eventGetOutputInventory_Parms), Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics
	{
		struct FGPortableMiner_eventIsProducing_Parms
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
	void Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPortableMiner_eventIsProducing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPortableMiner_eventIsProducing_Parms), &Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Production" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "Are we producing?\n\n@return - true if producing; otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPortableMiner, nullptr, "IsProducing", sizeof(FGPortableMiner_eventIsProducing_Parms), Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPortableMiner_IsProducing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPortableMiner_IsProducing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPortableMiner_OnRep_IsProducing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPortableMiner_OnRep_IsProducing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "Calls Start/Stop Producing on client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPortableMiner_OnRep_IsProducing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPortableMiner, nullptr, "OnRep_IsProducing", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPortableMiner_OnRep_IsProducing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMiner_OnRep_IsProducing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPortableMiner_OnRep_IsProducing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPortableMiner_OnRep_IsProducing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGPortableMiner_NoRegister()
	{
		return AFGPortableMiner::StaticClass();
	}
	struct Z_Construct_UClass_AFGPortableMiner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsProducing_MetaData[];
#endif
		static void NewProp_mIsProducing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsProducing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mInventorySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInteractWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mInteractWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentExtractProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentExtractProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOutputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOutputInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractResourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExtractResourceNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractCycleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mExtractCycleTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPortableMiner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGPortableMiner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGPortableMiner_CanProduce, "CanProduce" }, // 2772389288
		{ &Z_Construct_UFunction_AFGPortableMiner_GetDismantleInventoryReturns, "GetDismantleInventoryReturns" }, // 2691177533
		{ &Z_Construct_UFunction_AFGPortableMiner_GetExtractionProgress, "GetExtractionProgress" }, // 2446558223
		{ &Z_Construct_UFunction_AFGPortableMiner_GetOutputInventory, "GetOutputInventory" }, // 942789476
		{ &Z_Construct_UFunction_AFGPortableMiner_IsProducing, "IsProducing" }, // 192952053
		{ &Z_Construct_UFunction_AFGPortableMiner_OnRep_IsProducing, "OnRep_IsProducing" }, // 1364613288
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMiner_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "TRUE" },
		{ "IncludePath", "FGPortableMiner.h" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mIsProducing_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Are we producing?" },
	};
#endif
	void Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mIsProducing_SetBit(void* Obj)
	{
		((AFGPortableMiner*)Obj)->mIsProducing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mIsProducing = { "mIsProducing", "OnRep_IsProducing", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGPortableMiner), &Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mIsProducing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mIsProducing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mIsProducing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInventorySize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "How many slots is the inventory" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInventorySize = { "mInventorySize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMiner, mInventorySize), METADATA_PARAMS(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInventorySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInventorySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInteractWidgetClass_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "The widget that will present our UI." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInteractWidgetClass = { "mInteractWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMiner, mInteractWidgetClass), Z_Construct_UClass_UFGInteractWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInteractWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInteractWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mCurrentExtractProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Current extract progress in the range [0, 1]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mCurrentExtractProgress = { "mCurrentExtractProgress", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMiner, mCurrentExtractProgress), METADATA_PARAMS(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mCurrentExtractProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mCurrentExtractProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mOutputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "The inventory of the factory node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mOutputInventory = { "mOutputInventory", nullptr, (EPropertyFlags)0x0010000001080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMiner, mOutputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mOutputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mOutputInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractResourceNode_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "The resource node we want to extract from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractResourceNode = { "mExtractResourceNode", nullptr, (EPropertyFlags)0x0010000001000024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMiner, mExtractResourceNode), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractResourceNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractResourceNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractCycleTime_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/FGPortableMiner.h" },
		{ "ToolTip", "How fast we mine expressed as 1.0f / ( mExtractCycleTime * resourceSpeedMultiplier ) * dt." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractCycleTime = { "mExtractCycleTime", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMiner, mExtractCycleTime), METADATA_PARAMS(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractCycleTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractCycleTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPortableMiner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mIsProducing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInventorySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mInteractWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mCurrentExtractProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mOutputInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractResourceNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMiner_Statics::NewProp_mExtractCycleTime,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGPortableMiner_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGUseableInterface_NoRegister, (int32)VTABLE_OFFSET(AFGPortableMiner, IFGUseableInterface), false },
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGPortableMiner, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPortableMiner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPortableMiner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPortableMiner_Statics::ClassParams = {
		&AFGPortableMiner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGPortableMiner_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGPortableMiner_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGPortableMiner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMiner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPortableMiner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPortableMiner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPortableMiner, 1926690558);
	template<> FACTORYGAME_API UClass* StaticClass<AFGPortableMiner>()
	{
		return AFGPortableMiner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPortableMiner(Z_Construct_UClass_AFGPortableMiner, &AFGPortableMiner::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPortableMiner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPortableMiner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
