// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGWorkBench.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_IsProducing();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_Produce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_SetInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_SetRecipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGManufacturingButton_NoRegister();
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
			{ "GetActiveManufacturingTime", &UFGWorkBench::execGetActiveManufacturingTime },
			{ "GetCurrentDuration", &UFGWorkBench::execGetCurrentDuration },
			{ "GetCurrentFatigue", &UFGWorkBench::execGetCurrentFatigue },
			{ "GetCurrentRecipe", &UFGWorkBench::execGetCurrentRecipe },
			{ "GetInventory", &UFGWorkBench::execGetInventory },
			{ "GetManufacturingProgress", &UFGWorkBench::execGetManufacturingProgress },
			{ "GetManufacturingSpeed", &UFGWorkBench::execGetManufacturingSpeed },
			{ "GetPlayerWorkingAtBench", &UFGWorkBench::execGetPlayerWorkingAtBench },
			{ "GetWorkBenchUser", &UFGWorkBench::execGetWorkBenchUser },
			{ "IsProducing", &UFGWorkBench::execIsProducing },
			{ "Produce", &UFGWorkBench::execProduce },
			{ "RemoveIngredientsAndAwardRewards", &UFGWorkBench::execRemoveIngredientsAndAwardRewards },
			{ "SetInventory", &UFGWorkBench::execSetInventory },
			{ "SetRecipe", &UFGWorkBench::execSetRecipe },
			{ "SetupManufacturingButton", &UFGWorkBench::execSetupManufacturingButton },
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGWorkBench_eventCanProduce_Parms), &Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventCanProduce_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventCanProduce_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Can we produce the given recipe, using the inventory passed for payment and output." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "CanProduce", sizeof(FGWorkBench_eventCanProduce_Parms), Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_CanProduce_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Called when a craft have been completed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "CraftComplete", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_CraftComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_CraftComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics
	{
		struct FGWorkBench_eventGetActiveManufacturingTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventGetActiveManufacturingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Gets the active time we spent manufacturing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "GetActiveManufacturingTime", sizeof(FGWorkBench_eventGetActiveManufacturingTime_Parms), Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics
	{
		struct FGWorkBench_eventGetCurrentDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventGetCurrentDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Gets recipes duration. Including fatigue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "GetCurrentDuration", sizeof(FGWorkBench_eventGetCurrentDuration_Parms), Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics
	{
		struct FGWorkBench_eventGetCurrentFatigue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventGetCurrentFatigue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Returns how much worse the workbench is currently performing. 0.2 means it's 20% worse currently" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "GetCurrentFatigue", sizeof(FGWorkBench_eventGetCurrentFatigue_Parms), Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue_Statics::FuncParams);
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventGetCurrentRecipe_Parms, ReturnValue), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "The recipe we're currently running." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "GetCurrentRecipe", sizeof(FGWorkBench_eventGetCurrentRecipe_Parms), Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe_Statics::FuncParams);
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "@return The inventory this workbench is set to work with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "GetInventory", sizeof(FGWorkBench_eventGetInventory_Parms), Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetInventory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventGetManufacturingProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Manufacturing progress in range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "GetManufacturingProgress", sizeof(FGWorkBench_eventGetManufacturingProgress_Parms), Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventGetManufacturingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "The speed of which we manufacture stuff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "GetManufacturingSpeed", sizeof(FGWorkBench_eventGetManufacturingSpeed_Parms), Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventGetPlayerWorkingAtBench_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Returns the player that is working at this workbench." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "GetPlayerWorkingAtBench", sizeof(FGWorkBench_eventGetPlayerWorkingAtBench_Parms), Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench_Statics::FuncParams);
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventGetWorkBenchUser_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Returns current workbench user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "GetWorkBenchUser", sizeof(FGWorkBench_eventGetWorkBenchUser_Parms), Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGWorkBench_eventIsProducing_Parms), &Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Are we currently producing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "IsProducing", sizeof(FGWorkBench_eventIsProducing_Parms), Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_IsProducing_Statics::Function_MetaDataParams)) };
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
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWorkBench_Produce_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventProduce_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_Produce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_Produce_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_Produce_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "CPP_Default_dt", "1.000000" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Produce one step" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_Produce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "Produce", sizeof(FGWorkBench_eventProduce_Parms), Z_Construct_UFunction_UFGWorkBench_Produce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_Produce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_Produce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_Produce_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventRemoveIngredientsAndAwardRewards_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventRemoveIngredientsAndAwardRewards_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_recipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::NewProp_inventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Called when we finish a product and wants to give it to the inventory passed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "RemoveIngredientsAndAwardRewards", sizeof(FGWorkBench_eventRemoveIngredientsAndAwardRewards_Parms), Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards_Statics::FuncParams);
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::NewProp_newInventory = { "newInventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventSetInventory_Parms, newInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::NewProp_newInventory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::NewProp_newInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::NewProp_newInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "sets current inventory we want" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "SetInventory", sizeof(FGWorkBench_eventSetInventory_Parms), Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_SetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_SetInventory_Statics::FuncParams);
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventSetRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Set the active recipe to produce." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "SetRecipe", sizeof(FGWorkBench_eventSetRecipe_Parms), Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_SetRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_SetRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics
	{
		struct FGWorkBench_eventSetupManufacturingButton_Parms
		{
			UFGManufacturingButton* inButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::NewProp_inButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::NewProp_inButton = { "inButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventSetupManufacturingButton_Parms, inButton), Z_Construct_UClass_UFGManufacturingButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::NewProp_inButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::NewProp_inButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::NewProp_inButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "SetupManufacturingButton", sizeof(FGWorkBench_eventSetupManufacturingButton_Parms), Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton_Statics::FuncParams);
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::NewProp_newUser = { "newUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorkBench_eventSetWorkBenchUser_Parms, newUser), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::NewProp_newUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "sets current workbench user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWorkBench, nullptr, "SetWorkBenchUser", sizeof(FGWorkBench_eventSetWorkBenchUser_Parms), Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsFatigueEnabled_MetaData[];
#endif
		static void NewProp_mIsFatigueEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsFatigueEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCooldownDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCooldownDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRecipeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRecipeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFatigueUpdaterInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mFatigueUpdaterInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mManufacturingButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mManufacturingButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHoldProduceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mHoldProduceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFatigueDecreaseSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFatigueDecreaseSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFatigueMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFatigueMultiplier;
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
		{ &Z_Construct_UFunction_UFGWorkBench_CanProduce, "CanProduce" }, // 3364312274
		{ &Z_Construct_UFunction_UFGWorkBench_CraftComplete, "CraftComplete" }, // 2493123148
		{ &Z_Construct_UFunction_UFGWorkBench_GetActiveManufacturingTime, "GetActiveManufacturingTime" }, // 2577966179
		{ &Z_Construct_UFunction_UFGWorkBench_GetCurrentDuration, "GetCurrentDuration" }, // 966554988
		{ &Z_Construct_UFunction_UFGWorkBench_GetCurrentFatigue, "GetCurrentFatigue" }, // 160649980
		{ &Z_Construct_UFunction_UFGWorkBench_GetCurrentRecipe, "GetCurrentRecipe" }, // 3261219642
		{ &Z_Construct_UFunction_UFGWorkBench_GetInventory, "GetInventory" }, // 2030527071
		{ &Z_Construct_UFunction_UFGWorkBench_GetManufacturingProgress, "GetManufacturingProgress" }, // 409129849
		{ &Z_Construct_UFunction_UFGWorkBench_GetManufacturingSpeed, "GetManufacturingSpeed" }, // 2055967166
		{ &Z_Construct_UFunction_UFGWorkBench_GetPlayerWorkingAtBench, "GetPlayerWorkingAtBench" }, // 314747584
		{ &Z_Construct_UFunction_UFGWorkBench_GetWorkBenchUser, "GetWorkBenchUser" }, // 632454598
		{ &Z_Construct_UFunction_UFGWorkBench_IsProducing, "IsProducing" }, // 1090050760
		{ &Z_Construct_UFunction_UFGWorkBench_Produce, "Produce" }, // 931709754
		{ &Z_Construct_UFunction_UFGWorkBench_RemoveIngredientsAndAwardRewards, "RemoveIngredientsAndAwardRewards" }, // 3480711989
		{ &Z_Construct_UFunction_UFGWorkBench_SetInventory, "SetInventory" }, // 2138173860
		{ &Z_Construct_UFunction_UFGWorkBench_SetRecipe, "SetRecipe" }, // 314824507
		{ &Z_Construct_UFunction_UFGWorkBench_SetupManufacturingButton, "SetupManufacturingButton" }, // 2361523831
		{ &Z_Construct_UFunction_UFGWorkBench_SetWorkBenchUser, "SetWorkBenchUser" }, // 100460662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGWorkBench.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Component attachable to things that should have a workbench, i.e. vehicles and of course the workbench building." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsFatigueEnabled_MetaData[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Should fatigue be used on this component" },
	};
#endif
	void Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsFatigueEnabled_SetBit(void* Obj)
	{
		((UFGWorkBench*)Obj)->mIsFatigueEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsFatigueEnabled = { "mIsFatigueEnabled", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGWorkBench), &Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsFatigueEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsFatigueEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsFatigueEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCooldownDelay_MetaData[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "How long to wait before applying cooldown" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCooldownDelay = { "mCooldownDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mCooldownDelay), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCooldownDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCooldownDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "DUration it takes to make a recipe with added multipliers of manufacturingspeed and manufacturingmultiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeDuration = { "mRecipeDuration", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mRecipeDuration), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueUpdaterInterval_MetaData[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "at what interval should the fatigue multiplier be applied?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueUpdaterInterval = { "mFatigueUpdaterInterval", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mFatigueUpdaterInterval), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueUpdaterInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueUpdaterInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingButton = { "mManufacturingButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mManufacturingButton), Z_Construct_UClass_UFGManufacturingButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldProduceTime_MetaData[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "How long it takes to produce one cycle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldProduceTime = { "mHoldProduceTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mHoldProduceTime), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldProduceTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldProduceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueDecreaseSpeedMultiplier_MetaData[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Multiplier for mFatigueUpdaterInterval, shows how long it takes to go down one step in fatigue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueDecreaseSpeedMultiplier = { "mFatigueDecreaseSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mFatigueDecreaseSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueDecreaseSpeedMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueDecreaseSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueMultiplier_MetaData[] = {
		{ "Category", "FactoryGame|Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Work bench efficiency decrease per interval. 0.2 means 20%" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueMultiplier = { "mFatigueMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mFatigueMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "The inventory this workbench is set to work with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mInventory = { "mInventory", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Are we producing?" },
	};
#endif
	void Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_SetBit(void* Obj)
	{
		((UFGWorkBench*)Obj)->mIsProducing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing = { "mIsProducing", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGWorkBench), &Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsProducing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Manufacturing rate in product per second." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeRate = { "mRecipeRate", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mRecipeRate), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mPlayerWorkingAtBench_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mPlayerWorkingAtBench = { "mPlayerWorkingAtBench", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mPlayerWorkingAtBench), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mPlayerWorkingAtBench_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mPlayerWorkingAtBench_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingSpeed_MetaData[] = {
		{ "Category", "Workbench" },
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "The speed of which this manufacturer manufactures stuff. Slower for Work Bench" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingSpeed = { "mManufacturingSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mManufacturingSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentManufacturingProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "Manufacturing progress in range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentManufacturingProgress = { "mCurrentManufacturingProgress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mCurrentManufacturingProgress), METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentManufacturingProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentManufacturingProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentRecipe_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorkBench.h" },
		{ "ToolTip", "The recipe we're currently running." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentRecipe = { "mCurrentRecipe", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWorkBench, mCurrentRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCurrentRecipe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGWorkBench_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mIsFatigueEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mCooldownDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mRecipeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueUpdaterInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mManufacturingButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mHoldProduceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueDecreaseSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWorkBench_Statics::NewProp_mFatigueMultiplier,
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
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGWorkBench_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGWorkBench_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
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
	IMPLEMENT_CLASS(UFGWorkBench, 1107994143);
	template<> FACTORYGAME_API UClass* StaticClass<UFGWorkBench>()
	{
		return UFGWorkBench::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWorkBench(Z_Construct_UClass_UFGWorkBench, &UFGWorkBench::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWorkBench"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWorkBench);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
