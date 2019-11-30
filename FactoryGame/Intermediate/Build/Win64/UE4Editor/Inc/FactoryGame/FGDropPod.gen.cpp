// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDropPod_OnRepair();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
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
	static FName NAME_AFGDropPod_OnRepair = FName(TEXT("OnRepair"));
	void AFGDropPod::OnRepair(AFGCharacterPlayer* InteractingCharacter)
	{
		FGDropPod_eventOnRepair_Parms Parms;
		Parms.InteractingCharacter=InteractingCharacter;
		ProcessEvent(FindFunctionChecked(NAME_AFGDropPod_OnRepair),&Parms);
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
			{ "OnRepair", &AFGDropPod::execOnRepair },
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::NewProp_numItemsCreated = { "numItemsCreated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDropPod_eventGenerateDropPodInventory_Parms, numItemsCreated), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::NewProp_includedItems = { "includedItems", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDropPod_eventGenerateDropPodInventory_Parms, includedItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::NewProp_includedItems_Inner = { "includedItems", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, nullptr, "GenerateDropPodInventory", sizeof(FGDropPod_eventGenerateDropPodInventory_Parms), Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDropPod_eventGetLootInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::NewProp_ReturnValue_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, nullptr, "GetLootInventory", sizeof(FGDropPod_eventGetLootInventory_Parms), Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_GetLootInventory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGDropPod_eventHasBeenOpened_Parms), &Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, nullptr, "HasBeenOpened", sizeof(FGDropPod_eventHasBeenOpened_Parms), Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_HasBeenOpened_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_OnOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, nullptr, "OnOpened", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_OnOpened_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_OnOpened_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, nullptr, "OnRep_HasBeenOpened", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDropPod_OnRepair_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDropPod_eventOnRepair_Parms, InteractingCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "Event called when player tries to repair the drop-pod." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, nullptr, "OnRepair", sizeof(FGDropPod_eventOnRepair_Parms), Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDropPod_OnRepair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDropPod_OnRepair_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, nullptr, "Open", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_Open_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_Open_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDropPod_eventRollDropPackage_Parms, ReturnValue), Z_Construct_UScriptStruct_FDropPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::NewProp_includedItems = { "includedItems", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDropPod_eventRollDropPackage_Parms, includedItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::NewProp_includedItems_Inner = { "includedItems", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, nullptr, "RollDropPackage", sizeof(FGDropPod_eventRollDropPackage_Parms), Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_RollDropPackage_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDropPod_RollLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDropPod, nullptr, "RollLoot", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDropPod_RollLoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDropPod_RollLoot_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGDropPod_GenerateDropPodInventory, "GenerateDropPodInventory" }, // 2261375103
		{ &Z_Construct_UFunction_AFGDropPod_GetLootInventory, "GetLootInventory" }, // 2929973043
		{ &Z_Construct_UFunction_AFGDropPod_HasBeenOpened, "HasBeenOpened" }, // 1170213183
		{ &Z_Construct_UFunction_AFGDropPod_OnOpened, "OnOpened" }, // 829892055
		{ &Z_Construct_UFunction_AFGDropPod_OnRep_HasBeenOpened, "OnRep_HasBeenOpened" }, // 747405007
		{ &Z_Construct_UFunction_AFGDropPod_OnRepair, "OnRepair" }, // 1237613895
		{ &Z_Construct_UFunction_AFGDropPod_Open, "Open" }, // 4101834315
		{ &Z_Construct_UFunction_AFGDropPod_RollDropPackage, "RollDropPackage" }, // 1539907999
		{ &Z_Construct_UFunction_AFGDropPod_RollLoot, "RollLoot" }, // 2572210927
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGDropPod_Statics::NewProp_mInventory = { "mInventory", nullptr, (EPropertyFlags)0x0040000001080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGDropPod, mInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mInventory_MetaData)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened = { "mHasBeenOpened", "OnRep_HasBeenOpened", (EPropertyFlags)0x0040000101000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGDropPod), &Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mHasBeenOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDropPod_Statics::NewProp_mAmountOfInventorySlots_MetaData[] = {
		{ "Category", "Drop Pod" },
		{ "ModuleRelativePath", "FGDropPod.h" },
		{ "ToolTip", "The amount of available inventory slots for the drop pod" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGDropPod_Statics::NewProp_mAmountOfInventorySlots = { "mAmountOfInventorySlots", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGDropPod, mAmountOfInventorySlots), METADATA_PARAMS(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mAmountOfInventorySlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDropPod_Statics::NewProp_mAmountOfInventorySlots_MetaData)) };
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGDropPod_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGDropPod_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
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
	IMPLEMENT_CLASS(AFGDropPod, 693234566);
	template<> FACTORYGAME_API UClass* StaticClass<AFGDropPod>()
	{
		return AFGDropPod::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGDropPod(Z_Construct_UClass_AFGDropPod, &AFGDropPod::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGDropPod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGDropPod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
