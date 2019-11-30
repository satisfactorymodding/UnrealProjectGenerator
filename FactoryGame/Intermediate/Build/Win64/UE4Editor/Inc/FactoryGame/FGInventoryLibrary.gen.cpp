// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGInventoryLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGInventoryLibrary() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryLibrary_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_HasItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_HasState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem();
// End Cross Module References
	void UFGInventoryLibrary::StaticRegisterNativesUFGInventoryLibrary()
	{
		UClass* Class = UFGInventoryLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakInventoryItem", &UFGInventoryLibrary::execBreakInventoryItem },
			{ "BreakInventoryStack", &UFGInventoryLibrary::execBreakInventoryStack },
			{ "ConsolidateInventoryItems", &UFGInventoryLibrary::execConsolidateInventoryItems },
			{ "ConsolidateItemsAmount", &UFGInventoryLibrary::execConsolidateItemsAmount },
			{ "CreateInventoryComponent", &UFGInventoryLibrary::execCreateInventoryComponent },
			{ "CreateInventoryComponentOfClass", &UFGInventoryLibrary::execCreateInventoryComponentOfClass },
			{ "GetMinNumSlotsForItems", &UFGInventoryLibrary::execGetMinNumSlotsForItems },
			{ "GrabAllItemsFromInventory", &UFGInventoryLibrary::execGrabAllItemsFromInventory },
			{ "HasItems", &UFGInventoryLibrary::execHasItems },
			{ "HasState", &UFGInventoryLibrary::execHasState },
			{ "IsValidItem", &UFGInventoryLibrary::execIsValidItem },
			{ "MakeInventoryItem", &UFGInventoryLibrary::execMakeInventoryItem },
			{ "MakeInventoryStack", &UFGInventoryLibrary::execMakeInventoryStack },
			{ "MergeInventoryItem", &UFGInventoryLibrary::execMergeInventoryItem },
			{ "MoveInventoryItem", &UFGInventoryLibrary::execMoveInventoryItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics
	{
		struct FGInventoryLibrary_eventBreakInventoryItem_Parms
		{
			FInventoryItem item;
			TSubclassOf<UFGItemDescriptor>  out_itemClass;
			AActor* out_itemState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_itemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_itemState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_itemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_itemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemState_MetaData[] = {
		{ "DisplayName", "State" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemState = { UE4CodeGen_Private::EPropertyClass::Object, "out_itemState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryItem_Parms, out_itemState), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemState_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass_MetaData[] = {
		{ "DisplayName", "Class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "out_itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryItem_Parms, out_itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Struct, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryItem_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Manual break for inventory item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "BreakInventoryItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInventoryLibrary_eventBreakInventoryItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics
	{
		struct FGInventoryLibrary_eventBreakInventoryStack_Parms
		{
			FInventoryStack stack;
			int32 out_numItems;
			FInventoryItem out_item;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_numItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_numItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_item_MetaData[] = {
		{ "DisplayName", "Item" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_item = { UE4CodeGen_Private::EPropertyClass::Struct, "out_item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryStack_Parms, out_item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems_MetaData[] = {
		{ "DisplayName", "Num Items" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems = { UE4CodeGen_Private::EPropertyClass::Int, "out_numItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryStack_Parms, out_numItems), METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack = { UE4CodeGen_Private::EPropertyClass::Struct, "stack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryStack_Parms, stack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Manual break for inventory stack." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "BreakInventoryStack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInventoryLibrary_eventBreakInventoryStack_Parms), Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics
	{
		struct FGInventoryLibrary_eventConsolidateInventoryItems_Parms
		{
			TArray<FInventoryStack> items;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::NewProp_items = { UE4CodeGen_Private::EPropertyClass::Array, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventConsolidateInventoryItems_Parms, items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::NewProp_items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::NewProp_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Helper to consolidate the given items into as few items as possible.\nE.g. consolidate this:    50 iron, 50 iron, 30 copper, 35 iron\n     into this:           135 iron, 30 copper\n\n@note This do not apply any stacking limits.\n        //@todoinventory RENAME Stacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "ConsolidateInventoryItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FGInventoryLibrary_eventConsolidateInventoryItems_Parms), Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics
	{
		struct FGInventoryLibrary_eventConsolidateItemsAmount_Parms
		{
			TArray<FItemAmount> items;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::NewProp_items = { UE4CodeGen_Private::EPropertyClass::Array, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventConsolidateItemsAmount_Parms, items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::NewProp_items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::NewProp_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Helper to consolidate the given items into as few items as possible.\nE.g. consolidate this:    50 iron, 50 iron, 30 copper, 35 iron\n     into this:           135 iron, 30 copper\n\n@note This do not apply any stacking limits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "ConsolidateItemsAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FGInventoryLibrary_eventConsolidateItemsAmount_Parms), Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics
	{
		struct FGInventoryLibrary_eventCreateInventoryComponent_Parms
		{
			AActor* owner;
			FName name;
			UFGInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Name, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponent_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_owner = { UE4CodeGen_Private::EPropertyClass::Object, "owner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponent_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Dynamically create a default inventory component with a given size." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "CreateInventoryComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGInventoryLibrary_eventCreateInventoryComponent_Parms), Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics
	{
		struct FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms
		{
			AActor* owner;
			TSubclassOf<UFGInventoryComponent>  inClass;
			FName name;
			UFGInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Name, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms, name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass_MetaData[] = {
		{ "DisplayName", "Class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms, inClass), Z_Construct_UClass_UFGInventoryComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_owner = { UE4CodeGen_Private::EPropertyClass::Object, "owner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Dynamically create an inventory component of a given class with a given size." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "CreateInventoryComponentOfClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms), Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics
	{
		struct FGInventoryLibrary_eventGetMinNumSlotsForItems_Parms
		{
			TArray<FInventoryStack> items;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventGetMinNumSlotsForItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_items = { UE4CodeGen_Private::EPropertyClass::Array, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventGetMinNumSlotsForItems_Parms, items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Calculates how many inventory slots the passed number of items requires.\n\nASSUMES CONSOLIDATED ARRAY" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "GetMinNumSlotsForItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FGInventoryLibrary_eventGetMinNumSlotsForItems_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics
	{
		struct FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms
		{
			UFGInventoryComponent* sourceComponent;
			UFGInventoryComponent* destinationComponent;
			TSubclassOf<UFGItemDescriptor>  onlyGrabOfDesc;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_onlyGrabOfDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destinationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destinationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sourceComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_onlyGrabOfDesc = { UE4CodeGen_Private::EPropertyClass::Class, "onlyGrabOfDesc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms, onlyGrabOfDesc), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_destinationComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_destinationComponent = { UE4CodeGen_Private::EPropertyClass::Object, "destinationComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms, destinationComponent), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_destinationComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_destinationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_sourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_sourceComponent = { UE4CodeGen_Private::EPropertyClass::Object, "sourceComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms, sourceComponent), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_sourceComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_sourceComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_onlyGrabOfDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_destinationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_sourceComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_onlyGrabOfDesc", "None" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Tries to grab all items in the source and add them to the dest. I can't decide what optimal grabbing is, so this is just the easiest implementation.\n@note Server only\n\n@return true on success; false if something goes wrong during the move." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "GrabAllItemsFromInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics
	{
		struct FGInventoryLibrary_eventHasItems_Parms
		{
			FInventoryStack stack;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryLibrary_eventHasItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryLibrary_eventHasItems_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack = { UE4CodeGen_Private::EPropertyClass::Struct, "stack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventHasItems_Parms, stack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "@return true if the stack has any items; false if the stack is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "HasItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInventoryLibrary_eventHasItems_Parms), Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_HasItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics
	{
		struct FGInventoryLibrary_eventHasState_Parms
		{
			FInventoryItem item;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryLibrary_eventHasState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryLibrary_eventHasState_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Struct, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventHasState_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "@return true if this inventory item has a state; otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "HasState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInventoryLibrary_eventHasState_Parms), Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_HasState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics
	{
		struct FGInventoryLibrary_eventIsValidItem_Parms
		{
			FInventoryItem item;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryLibrary_eventIsValidItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryLibrary_eventIsValidItem_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Struct, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventIsValidItem_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "@return true if the inventory item is a valid item; otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "IsValidItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInventoryLibrary_eventIsValidItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics
	{
		struct FGInventoryLibrary_eventMakeInventoryItem_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			FInventoryItem ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass_MetaData[] = {
		{ "DisplayName", "Class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryItem_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Manual make for inventory item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "MakeInventoryItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInventoryLibrary_eventMakeInventoryItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics
	{
		struct FGInventoryLibrary_eventMakeInventoryStack_Parms
		{
			int32 numItems;
			FInventoryItem item;
			FInventoryStack ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryStack_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Struct, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryStack_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_numItems = { UE4CodeGen_Private::EPropertyClass::Int, "numItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryStack_Parms, numItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_numItems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Manual make for inventory stack." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "MakeInventoryStack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInventoryLibrary_eventMakeInventoryStack_Parms), Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics
	{
		struct FGInventoryLibrary_eventMergeInventoryItem_Parms
		{
			TArray<FInventoryStack> items;
			FInventoryStack item;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Struct, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMergeInventoryItem_Parms, item), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_items = { UE4CodeGen_Private::EPropertyClass::Array, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMergeInventoryItem_Parms, items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Helper to merge an inventory item into an array of other inventory items.\n\n@param items - Merge item into this array.\n@param item - This is the item to merge into the items array.\n\n@note This do not apply any stacking limits.\n        //@todoinventory RENAME Stack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "MergeInventoryItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FGInventoryLibrary_eventMergeInventoryItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics
	{
		struct FGInventoryLibrary_eventMoveInventoryItem_Parms
		{
			UFGInventoryComponent* sourceComponent;
			int32 sourceIdx;
			UFGInventoryComponent* destinationComponent;
			int32 destinationIdx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_destinationIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destinationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destinationComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sourceIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sourceComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryLibrary_eventMoveInventoryItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryLibrary_eventMoveInventoryItem_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationIdx = { UE4CodeGen_Private::EPropertyClass::Int, "destinationIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMoveInventoryItem_Parms, destinationIdx), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationComponent = { UE4CodeGen_Private::EPropertyClass::Object, "destinationComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMoveInventoryItem_Parms, destinationComponent), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceIdx = { UE4CodeGen_Private::EPropertyClass::Int, "sourceIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMoveInventoryItem_Parms, sourceIdx), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceComponent = { UE4CodeGen_Private::EPropertyClass::Object, "sourceComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGInventoryLibrary_eventMoveInventoryItem_Parms, sourceComponent), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "This is a UI helper function for drag n drop that automagically moves or swaps items.\nIt moves or swaps an item from a one location to another location. Verifying that the move or swap is allowed.\n@note Server only\n\n@return true on success; false if something goes wrong during the move.\n        //@todoinventory RENAME Stack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, "MoveInventoryItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGInventoryLibrary_eventMoveInventoryItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGInventoryLibrary_NoRegister()
	{
		return UFGInventoryLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFGInventoryLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGInventoryLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGInventoryLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem, "BreakInventoryItem" }, // 523540434
		{ &Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack, "BreakInventoryStack" }, // 3260136372
		{ &Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems, "ConsolidateInventoryItems" }, // 685361686
		{ &Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount, "ConsolidateItemsAmount" }, // 236975551
		{ &Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent, "CreateInventoryComponent" }, // 301668592
		{ &Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass, "CreateInventoryComponentOfClass" }, // 304125986
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems, "GetMinNumSlotsForItems" }, // 4177253872
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory, "GrabAllItemsFromInventory" }, // 3571656535
		{ &Z_Construct_UFunction_UFGInventoryLibrary_HasItems, "HasItems" }, // 24124249
		{ &Z_Construct_UFunction_UFGInventoryLibrary_HasState, "HasState" }, // 3040702323
		{ &Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem, "IsValidItem" }, // 2633334510
		{ &Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem, "MakeInventoryItem" }, // 918590388
		{ &Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack, "MakeInventoryStack" }, // 3761101840
		{ &Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem, "MergeInventoryItem" }, // 3238043333
		{ &Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem, "MoveInventoryItem" }, // 3859529168
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGInventoryLibrary.h" },
		{ "ModuleRelativePath", "FGInventoryLibrary.h" },
		{ "ToolTip", "Function library to provide the glue between c++ and the inventory in blueprint so we can handle inventory items with a state easy in blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGInventoryLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGInventoryLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGInventoryLibrary_Statics::ClassParams = {
		&UFGInventoryLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGInventoryLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGInventoryLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGInventoryLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGInventoryLibrary, 3632675);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGInventoryLibrary(Z_Construct_UClass_UFGInventoryLibrary, &UFGInventoryLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGInventoryLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGInventoryLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
