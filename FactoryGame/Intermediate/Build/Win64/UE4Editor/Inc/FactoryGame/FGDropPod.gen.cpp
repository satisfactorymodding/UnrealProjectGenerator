// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGDropPod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDropPod() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDropPod_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDropPod();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDropPod_GetLootInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDropPod_HasBeenOpened();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDropPod_OnOpened();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDropPod_Open();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDropPod_RollDropPackage();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDropPackage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDropPod_RollLoot();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
	static FName NAME_AFGDropPod_OnOpened = FName(TEXT("OnOpened"));
	void AFGDropPod::OnOpened()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGDropPod_OnOpened),NULL);
	}
	static FName NAME_AFGDropPod_RollLoot = FName(TEXT("RollLoot"));
	void AFGDropPod::RollLoot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGDropPod_RollLoot),NULL);
	}
	void AFGDropPod::StaticRegisterNativesAFGDropPod()
	{
		UClass* Class = AFGDropPod::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateDropPodInventory", &AFGDropPod::execGenerateDropPodInventory },
			{ "GetLootInventory", &AFGDropPod::execGetLootInventory },
			{ "HasBeenOpened", &AFGDropPod::execHasBeenOpened },
			{ "OnOpened", &AFGDropPod::execOnOpened },
			{ "OnRep_HasBeenOpened", &AFGDropPod::execOnRep_HasBeenOpened },
			{ "Open", &AFGDropPod::execOpen },
			{ "RollDropPackage", &AFGDropPod::execRollDropPackage },
			{ "RollLoot", &AFGDropPod::execRollLoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics
	{
		struct FGDropPod_eventGenerateDropPodInventory_Parms
		{
			TArray<TSubclassOf<UFGItemDescriptor> > includedItems;
			int32 numItemsCreated;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numItemsCreated;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_includedItems;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_includedItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::NewProp_numItemsCreated = { UE4CodeGen_Private::EPropertyClass::Int, "numItemsCreated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDropPod_eventGenerateDropPodInventory_Parms, numItemsCreated), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::NewProp_includedItems = { UE4CodeGen_Private::EPropertyClass::Array, "includedItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGDropPod_eventGenerateDropPodInventory_Parms, includedItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::NewProp_includedItems_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "includedItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::NewProp_numItemsCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::NewProp_includedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::NewProp_includedItems_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, "GenerateDropPodInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(FGDropPod_eventGenerateDropPodInventory_Parms), Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics
	{
		struct FGDropPod_eventGetLootInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGDropPod_eventGetLootInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "@return The inventory containing possible loot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, "GetLootInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGDropPod_eventGetLootInventory_Parms), Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_GetLootInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics
	{
		struct FGDropPod_eventHasBeenOpened_Parms
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
	void Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDropPod_eventHasBeenOpened_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDropPod_eventHasBeenOpened_Parms), &Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "@return true if this has been opened." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, "HasBeenOpened", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGDropPod_eventHasBeenOpened_Parms), Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_HasBeenOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDropPod_OnOpened_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_OnOpened_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "Called on server, rolls the loot for the drop pod." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_OnOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, "OnOpened", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_OnOpened_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_OnOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_OnOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_OnOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGDropPod.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, "OnRep_HasBeenOpened", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDropPod_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "Open the drop pod." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, "Open", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_Open_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics
	{
		struct FGDropPod_eventRollDropPackage_Parms
		{
			TArray<TSubclassOf<UFGItemDescriptor> > includedItems;
			FDropPackage ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_includedItems;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_includedItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGDropPod_eventRollDropPackage_Parms, ReturnValue), Z_Construct_UScriptStruct_FDropPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::NewProp_includedItems = { UE4CodeGen_Private::EPropertyClass::Array, "includedItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGDropPod_eventRollDropPackage_Parms, includedItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::NewProp_includedItems_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "includedItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::NewProp_includedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::NewProp_includedItems_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "bool excludeItems," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, "RollDropPackage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(FGDropPod_eventRollDropPackage_Parms), Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_RollDropPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDropPod_RollLoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_RollLoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "Called on server, rolls the loot for the drop pod." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_RollLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, "RollLoot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_RollLoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_RollLoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_RollLoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_RollLoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGDropPod_NoRegister()
	{
		return AFGDropPod::StaticClass();
	}
	struct Z_Construct_UClass_AFGDropPod_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasBeenOpened_MetaData[];
#endif
		static void NewProp_mHasBeenOpened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasBeenOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAmountOfInventorySlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mAmountOfInventorySlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGDropPod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGDropPod_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory, "GenerateDropPodInventory" }, // 2562457711
		{ &Z_Construct_UFunction_AFGDropPod_GetLootInventory, "GetLootInventory" }, // 1407671476
		{ &Z_Construct_UFunction_AFGDropPod_HasBeenOpened, "HasBeenOpened" }, // 2650207560
		{ &Z_Construct_UFunction_AFGDropPod_OnOpened, "OnOpened" }, // 4109988785
		{ &Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened, "OnRep_HasBeenOpened" }, // 2825574570
		{ &Z_Construct_UFunction_AFGDropPod_Open, "Open" }, // 2543586310
		{ &Z_Construct_UFunction_AFGDropPod_RollDropPackage, "RollDropPackage" }, // 1590559032
		{ &Z_Construct_UFunction_AFGDropPod_RollLoot, "RollLoot" }, // 2844571509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDropPod_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGDropPod.h" },
		{ "ModuleRelativePath", "FGDropPod.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDropPod_Statics::NewProp_mInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "Contains the loot if any" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGDropPod_Statics::NewProp_mInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001080028, 1, nullptr, STRUCT_OFFSET(AFGDropPod, mInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened_MetaData[] = {
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "True when this has been opened" },
	};
#endif
	void Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened_SetBit(void* Obj)
	{
		((AFGDropPod*)Obj)->mHasBeenOpened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened = { UE4CodeGen_Private::EPropertyClass::Bool, "mHasBeenOpened", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000101000020, 1, "OnRep_HasBeenOpened", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGDropPod), &Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDropPod_Statics::NewProp_mAmountOfInventorySlots_MetaData[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "The amount of available inventory slots for the drop pod" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGDropPod_Statics::NewProp_mAmountOfInventorySlots = { UE4CodeGen_Private::EPropertyClass::Int, "mAmountOfInventorySlots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGDropPod, mAmountOfInventorySlots), METADATA_PARAMS(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mAmountOfInventorySlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mAmountOfInventorySlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGDropPod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDropPod_Statics::NewProp_mInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDropPod_Statics::NewProp_mAmountOfInventorySlots,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGDropPod_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGUseableInterface_NoRegister, (int32)VTABLE_OFFSET(AFGDropPod, IFGUseableInterface), false },
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGDropPod, IFGSaveInterface), false },
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGDropPod, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGDropPod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGDropPod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGDropPod_Statics::ClassParams = {
		&AFGDropPod::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGDropPod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGDropPod_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGDropPod_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGDropPod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGDropPod()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGDropPod_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGDropPod, 369307681);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGDropPod(Z_Construct_UClass_AFGDropPod, &AFGDropPod::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGDropPod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGDropPod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
