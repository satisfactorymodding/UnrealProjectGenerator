// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGWorkBench.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWorkBench() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWorkBench_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWorkBench();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_CanProduce();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_CraftComplete();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_IsProducing();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_Produce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_SetInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_SetRecipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipeProducerInterface_NoRegister();
// End Cross Module References
	static FName NAME_UFGWorkBench_CraftComplete = FName(TEXT("CraftComplete"));
	void UFGWorkBench::CraftComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGWorkBench_CraftComplete),NULL);
	}
	void UFGWorkBench::StaticRegisterNativesUFGWorkBench()
	{
		UClass* Class = UFGWorkBench::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanProduce", &UFGWorkBench::execCanProduce },
			{ "GetCurrentRecipe", &UFGWorkBench::execGetCurrentRecipe },
			{ "GetHoldToProduce", &UFGWorkBench::execGetHoldToProduce },
			{ "GetInventory", &UFGWorkBench::execGetInventory },
			{ "GetManufacturingProgress", &UFGWorkBench::execGetManufacturingProgress },
			{ "GetManufacturingSpeed", &UFGWorkBench::execGetManufacturingSpeed },
			{ "GetPlayerWorkingAtBench", &UFGWorkBench::execGetPlayerWorkingAtBench },
			{ "GetProduceClickSpeed", &UFGWorkBench::execGetProduceClickSpeed },
			{ "GetWorkBenchUser", &UFGWorkBench::execGetWorkBenchUser },
			{ "IsProducing", &UFGWorkBench::execIsProducing },
			{ "Produce", &UFGWorkBench::execProduce },
			{ "RemoveIngredientsAndAwardRewards", &UFGWorkBench::execRemoveIngredientsAndAwardRewards },
			{ "SetHoldToProduce", &UFGWorkBench::execSetHoldToProduce },
			{ "SetInventory", &UFGWorkBench::execSetInventory },
			{ "SetIsPressingProduce", &UFGWorkBench::execSetIsPressingProduce },
			{ "SetRecipe", &UFGWorkBench::execSetRecipe },
			{ "SetWorkBenchUser", &UFGWorkBench::execSetWorkBenchUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics
	{
		struct FGWorkBench_eventCanProduce_Parms
		{
			TSubclassOf<UFGRecipe>  recipe;
			UFGInventoryComponent* inventory;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGWorkBench_eventCanProduce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGWorkBench_eventCanProduce_Parms), &Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory = { UE4CodeGen_Private::EPropertyClass::Object, "inventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventCanProduce_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_recipe = { UE4CodeGen_Private::EPropertyClass::Class, "recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventCanProduce_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "CanProduce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGWorkBench_eventCanProduce_Parms), Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_CanProduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "CraftComplete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_CraftComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics
	{
		struct FGWorkBench_eventGetCurrentRecipe_Parms
		{
			TSubclassOf<UFGRecipe>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventGetCurrentRecipe_Parms, ReturnValue), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "The recipe we're currently running." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "GetCurrentRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGWorkBench_eventGetCurrentRecipe_Parms), Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics
	{
		struct FGWorkBench_eventGetHoldToProduce_Parms
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
	void Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGWorkBench_eventGetHoldToProduce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGWorkBench_eventGetHoldToProduce_Parms), &Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Returns the player that is working at this workbench." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "GetHoldToProduce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGWorkBench_eventGetHoldToProduce_Parms), Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics
	{
		struct FGWorkBench_eventGetInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "@return The inventory this workbench is set to work with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "GetInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGWorkBench_eventGetInventory_Parms), Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics
	{
		struct FGWorkBench_eventGetManufacturingProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventGetManufacturingProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Manufacturing progress in range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "GetManufacturingProgress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGWorkBench_eventGetManufacturingProgress_Parms), Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics
	{
		struct FGWorkBench_eventGetManufacturingSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventGetManufacturingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "The speed of wich we manufacture stuff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "GetManufacturingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGWorkBench_eventGetManufacturingSpeed_Parms), Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics
	{
		struct FGWorkBench_eventGetPlayerWorkingAtBench_Parms
		{
			AFGCharacterPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventGetPlayerWorkingAtBench_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Returns the player that is working at this workbench." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "GetPlayerWorkingAtBench", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGWorkBench_eventGetPlayerWorkingAtBench_Parms), Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics
	{
		struct FGWorkBench_eventGetProduceClickSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventGetProduceClickSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Returns the click speed for producing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "GetProduceClickSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGWorkBench_eventGetProduceClickSpeed_Parms), Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics
	{
		struct FGWorkBench_eventGetWorkBenchUser_Parms
		{
			AFGCharacterPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventGetWorkBenchUser_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Returns current workbench user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "GetWorkBenchUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGWorkBench_eventGetWorkBenchUser_Parms), Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics
	{
		struct FGWorkBench_eventIsProducing_Parms
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
	void Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGWorkBench_eventIsProducing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGWorkBench_eventIsProducing_Parms), &Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "IsProducing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGWorkBench_eventIsProducing_Parms), Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_IsProducing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_Produce_Statics
	{
		struct FGWorkBench_eventProduce_Parms
		{
			float produceSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_produceSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_Produce_Statics::NewProp_produceSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "produceSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventProduce_Parms, produceSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_Produce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_Produce_Statics::NewProp_produceSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_Produce_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "CPP_Default_produceSpeed", "1.000000" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Produce one step" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_Produce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "Produce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGWorkBench_eventProduce_Parms), Z_Construct_UFunction_UFGWorkBench_Produce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_Produce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_Produce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_Produce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_Produce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_Produce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics
	{
		struct FGWorkBench_eventRemoveIngredientsAndAwardRewards_Parms
		{
			UFGInventoryComponent* inventory;
			TSubclassOf<UFGRecipe>  recipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_recipe = { UE4CodeGen_Private::EPropertyClass::Class, "recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventRemoveIngredientsAndAwardRewards_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory = { UE4CodeGen_Private::EPropertyClass::Object, "inventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventRemoveIngredientsAndAwardRewards_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_recipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Called when we finish a product and wants to give it to the inventory passed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "RemoveIngredientsAndAwardRewards", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGWorkBench_eventRemoveIngredientsAndAwardRewards_Parms), Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics
	{
		struct FGWorkBench_eventSetHoldToProduce_Parms
		{
			bool newHold;
		};
		static void NewProp_newHold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newHold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::NewProp_newHold_SetBit(void* Obj)
	{
		((FGWorkBench_eventSetHoldToProduce_Parms*)Obj)->newHold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::NewProp_newHold = { UE4CodeGen_Private::EPropertyClass::Bool, "newHold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGWorkBench_eventSetHoldToProduce_Parms), &Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::NewProp_newHold_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::NewProp_newHold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Change holdToProduce status from blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "SetHoldToProduce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGWorkBench_eventSetHoldToProduce_Parms), Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics
	{
		struct FGWorkBench_eventSetInventory_Parms
		{
			UFGInventoryComponent* newInventory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::NewProp_newInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::NewProp_newInventory = { UE4CodeGen_Private::EPropertyClass::Object, "newInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventSetInventory_Parms, newInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::NewProp_newInventory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::NewProp_newInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::NewProp_newInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "sets current inventory we want" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "SetInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGWorkBench_eventSetInventory_Parms), Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_SetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics
	{
		struct FGWorkBench_eventSetIsPressingProduce_Parms
		{
			bool isPressingProduce;
		};
		static void NewProp_isPressingProduce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPressingProduce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::NewProp_isPressingProduce_SetBit(void* Obj)
	{
		((FGWorkBench_eventSetIsPressingProduce_Parms*)Obj)->isPressingProduce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::NewProp_isPressingProduce = { UE4CodeGen_Private::EPropertyClass::Bool, "isPressingProduce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGWorkBench_eventSetIsPressingProduce_Parms), &Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::NewProp_isPressingProduce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::NewProp_isPressingProduce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Set the mIsPressingProduce" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "SetIsPressingProduce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGWorkBench_eventSetIsPressingProduce_Parms), Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics
	{
		struct FGWorkBench_eventSetRecipe_Parms
		{
			TSubclassOf<UFGRecipe>  recipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::NewProp_recipe = { UE4CodeGen_Private::EPropertyClass::Class, "recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventSetRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "SetRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGWorkBench_eventSetRecipe_Parms), Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_SetRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics
	{
		struct FGWorkBench_eventSetWorkBenchUser_Parms
		{
			AFGCharacterPlayer* newUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::NewProp_newUser = { UE4CodeGen_Private::EPropertyClass::Object, "newUser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGWorkBench_eventSetWorkBenchUser_Parms, newUser), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::NewProp_newUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "sets current workbench user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, "SetWorkBenchUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGWorkBench_eventSetWorkBenchUser_Parms), Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGWorkBench_NoRegister()
	{
		return UFGWorkBench::StaticClass();
	}
	struct Z_Construct_UClass_UFGWorkBench_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHoldToProduce_MetaData[];
#endif
		static void NewProp_mHoldToProduce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHoldToProduce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProduceClickSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mProduceClickSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsProducing_MetaData[];
#endif
		static void NewProp_mIsProducing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsProducing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRecipeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRecipeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlayerWorkingAtBench_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPlayerWorkingAtBench;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mManufacturingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mManufacturingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentManufacturingProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentManufacturingProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mCurrentRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWorkBench_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGWorkBench_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGWorkBench_CanProduce, "CanProduce" }, // 1144273475
		{ &Z_Construct_UFunction_UFGWorkBench_CraftComplete, "CraftComplete" }, // 2538426232
		{ &Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe, "GetCurrentRecipe" }, // 4280571816
		{ &Z_Construct_UFunction_UFGWorkBench_GetHoldToProduce, "GetHoldToProduce" }, // 2107918370
		{ &Z_Construct_UFunction_UFGWorkBench_GetInventory, "GetInventory" }, // 4099679366
		{ &Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress, "GetManufacturingProgress" }, // 1635533104
		{ &Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed, "GetManufacturingSpeed" }, // 2838815742
		{ &Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench, "GetPlayerWorkingAtBench" }, // 240109344
		{ &Z_Construct_UFunction_UFGWorkBench_GetProduceClickSpeed, "GetProduceClickSpeed" }, // 343045124
		{ &Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser, "GetWorkBenchUser" }, // 4232934493
		{ &Z_Construct_UFunction_UFGWorkBench_IsProducing, "IsProducing" }, // 2017246218
		{ &Z_Construct_UFunction_UFGWorkBench_Produce, "Produce" }, // 3140893174
		{ &Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards, "RemoveIngredientsAndAwardRewards" }, // 143159569
		{ &Z_Construct_UFunction_UFGWorkBench_SetHoldToProduce, "SetHoldToProduce" }, // 753293485
		{ &Z_Construct_UFunction_UFGWorkBench_SetInventory, "SetInventory" }, // 3519699129
		{ &Z_Construct_UFunction_UFGWorkBench_SetIsPressingProduce, "SetIsPressingProduce" }, // 3808285706
		{ &Z_Construct_UFunction_UFGWorkBench_SetRecipe, "SetRecipe" }, // 2894939572
		{ &Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser, "SetWorkBenchUser" }, // 995967218
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGWorkBench.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldToProduce_MetaData[] = {
		{ "Category", "Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Should we use hold to produce" },
	};
#endif
	void Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldToProduce_SetBit(void* Obj)
	{
		((UFGWorkBench*)Obj)->mHoldToProduce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldToProduce = { UE4CodeGen_Private::EPropertyClass::Bool, "mHoldToProduce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGWorkBench), &Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldToProduce_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldToProduce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldToProduce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mProduceClickSpeed_MetaData[] = {
		{ "Category", "Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "How much produce time a mouse click should represent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mProduceClickSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mProduceClickSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UFGWorkBench, mProduceClickSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mProduceClickSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mProduceClickSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "The inventory this workbench is set to work with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UFGWorkBench, mInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_MetaData[] = {
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Are we producing?" },
	};
#endif
	void Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_SetBit(void* Obj)
	{
		((UFGWorkBench*)Obj)->mIsProducing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsProducing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGWorkBench), &Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeRate_MetaData[] = {
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Manufacturing rate in product per second." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeRate = { UE4CodeGen_Private::EPropertyClass::Float, "mRecipeRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGWorkBench, mRecipeRate), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mPlayerWorkingAtBench_MetaData[] = {
		{ "ModuleRelativePath", "FGWorkBench.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mPlayerWorkingAtBench = { UE4CodeGen_Private::EPropertyClass::Object, "mPlayerWorkingAtBench", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGWorkBench, mPlayerWorkingAtBench), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mPlayerWorkingAtBench_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mPlayerWorkingAtBench_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingSpeed_MetaData[] = {
		{ "Category", "Workbench" },
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "The speed of which this manufacturer manufactures stuff. Slower for Work Bench" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mManufacturingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGWorkBench, mManufacturingSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentManufacturingProgress_MetaData[] = {
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "Manufacturing progress in range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentManufacturingProgress = { UE4CodeGen_Private::EPropertyClass::Float, "mCurrentManufacturingProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGWorkBench, mCurrentManufacturingProgress), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentManufacturingProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentManufacturingProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentRecipe_MetaData[] = {
		{ "ModuleRelativePath", "FGWorkBench.h" },
		{ "ToolTip", "The recipe we're currently running." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mCurrentRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UFGWorkBench, mCurrentRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentRecipe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGWorkBench_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldToProduce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mProduceClickSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mPlayerWorkingAtBench,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentManufacturingProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentRecipe,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGWorkBench_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGRecipeProducerInterface_NoRegister, (int32)VTABLE_OFFSET(UFGWorkBench, IFGRecipeProducerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWorkBench_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGWorkBench>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWorkBench_Statics::ClassParams = {
		&UFGWorkBench::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGWorkBench_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWorkBench()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWorkBench_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWorkBench, 2782656134);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWorkBench(Z_Construct_UClass_UFGWorkBench, &UFGWorkBench::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWorkBench"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWorkBench);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
