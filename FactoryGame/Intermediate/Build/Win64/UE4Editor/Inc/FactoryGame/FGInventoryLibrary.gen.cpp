// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGInventoryLibrary.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResourceForm();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_HasItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_HasState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm();
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
			{ "GetAmountConvertedByForm", &UFGInventoryLibrary::execGetAmountConvertedByForm },
			{ "GetAmountConvertedFromItemAmount", &UFGInventoryLibrary::execGetAmountConvertedFromItemAmount },
			{ "GetConversionScalarByForm", &UFGInventoryLibrary::execGetConversionScalarByForm },
			{ "GetMinNumSlotsForItems", &UFGInventoryLibrary::execGetMinNumSlotsForItems },
			{ "GetProductionSuffixFromFormType", &UFGInventoryLibrary::execGetProductionSuffixFromFormType },
			{ "GetUIDataFullForInventoryStack", &UFGInventoryLibrary::execGetUIDataFullForInventoryStack },
			{ "GetUIDataPartialForInventoryStack", &UFGInventoryLibrary::execGetUIDataPartialForInventoryStack },
			{ "GrabAllItemsFromInventory", &UFGInventoryLibrary::execGrabAllItemsFromInventory },
			{ "HasItems", &UFGInventoryLibrary::execHasItems },
			{ "HasState", &UFGInventoryLibrary::execHasState },
			{ "IsValidItem", &UFGInventoryLibrary::execIsValidItem },
			{ "MakeInventoryItem", &UFGInventoryLibrary::execMakeInventoryItem },
			{ "MakeInventoryStack", &UFGInventoryLibrary::execMakeInventoryStack },
			{ "MergeInventoryItem", &UFGInventoryLibrary::execMergeInventoryItem },
			{ "MoveInventoryItem", &UFGInventoryLibrary::execMoveInventoryItem },
			{ "RemoveAllItemsNotOfResourceForm", &UFGInventoryLibrary::execRemoveAllItemsNotOfResourceForm },
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemState = { "out_itemState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryItem_Parms, out_itemState), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemState_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass_MetaData[] = {
		{ "DisplayName", "Class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass = { "out_itemClass", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryItem_Parms, out_itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryItem_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_out_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Manual break for inventory item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "BreakInventoryItem", sizeof(FGInventoryLibrary_eventBreakInventoryItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_item = { "out_item", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryStack_Parms, out_item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems_MetaData[] = {
		{ "DisplayName", "Num Items" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems = { "out_numItems", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryStack_Parms, out_numItems), METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventBreakInventoryStack_Parms, stack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_out_numItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Manual break for inventory stack." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "BreakInventoryStack", sizeof(FGInventoryLibrary_eventBreakInventoryStack_Parms), Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventConsolidateInventoryItems_Parms, items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::NewProp_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Helper to consolidate the given items into as few items as possible.\nE.g. consolidate this:    50 iron, 50 iron, 30 copper, 35 iron\n     into this:           135 iron, 30 copper\n\n@note This do not apply any stacking limits.\n        //@todoinventory RENAME Stacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "ConsolidateInventoryItems", sizeof(FGInventoryLibrary_eventConsolidateInventoryItems_Parms), Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventConsolidateItemsAmount_Parms, items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::NewProp_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Helper to consolidate the given items into as few items as possible.\nE.g. consolidate this:    50 iron, 50 iron, 30 copper, 35 iron\n     into this:           135 iron, 30 copper\n\n@note This do not apply any stacking limits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "ConsolidateItemsAmount", sizeof(FGInventoryLibrary_eventConsolidateItemsAmount_Parms), Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponent_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponent_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Dynamically create a default inventory component with a given size." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "CreateInventoryComponent", sizeof(FGInventoryLibrary_eventCreateInventoryComponent_Parms), Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms, name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass_MetaData[] = {
		{ "DisplayName", "Class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms, inClass), Z_Construct_UClass_UFGInventoryComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_inClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Dynamically create an inventory component of a given class with a given size." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "CreateInventoryComponentOfClass", sizeof(FGInventoryLibrary_eventCreateInventoryComponentOfClass_Parms), Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics
	{
		struct FGInventoryLibrary_eventGetAmountConvertedByForm_Parms
		{
			int32 amount;
			EResourceForm form;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_form;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_form_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetAmountConvertedByForm_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::NewProp_form = { "form", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetAmountConvertedByForm_Parms, form), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::NewProp_form_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetAmountConvertedByForm_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::NewProp_form,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::NewProp_form_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Returns the amount of inventory items converted to the appropriate units for displaying in the UI\n@param amount - quantity of unmodified inventory items. eg. 1000 Liquid inventory will be divided by 1000.f to return 1 m^3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "GetAmountConvertedByForm", sizeof(FGInventoryLibrary_eventGetAmountConvertedByForm_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics
	{
		struct FGInventoryLibrary_eventGetAmountConvertedFromItemAmount_Parms
		{
			FItemAmount itemAmount;
			TSubclassOf<UFGItemDescriptor>  itemClass;
			float amountConverted;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amountConverted;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::NewProp_amountConverted = { "amountConverted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetAmountConvertedFromItemAmount_Parms, amountConverted), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetAmountConvertedFromItemAmount_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::NewProp_itemAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::NewProp_itemAmount = { "itemAmount", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetAmountConvertedFromItemAmount_Parms, itemAmount), Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::NewProp_itemAmount_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::NewProp_itemAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::NewProp_amountConverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::NewProp_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::NewProp_itemAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Returns the amount of inventory items converted to the appropriate units for displaying in the UI. Also returns the split itemAmount for ease of access in widgets.\n@param itemAmount - FItemAmount to use as the base for conversion. The item form will be pulled from the itemAmount.ItemClass to determine the conversion.\n@param itemClass - (Out) The item class of the FItemAmount\n@param amountConverted - The amount converted to the correct representation in the UI. eg. 1000 Liquid inventory will be divided by 1000.f to return 1.f ( m^3 )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "GetAmountConvertedFromItemAmount", sizeof(FGInventoryLibrary_eventGetAmountConvertedFromItemAmount_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics
	{
		struct FGInventoryLibrary_eventGetConversionScalarByForm_Parms
		{
			EResourceForm form;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_form;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_form_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetConversionScalarByForm_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::NewProp_form = { "form", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetConversionScalarByForm_Parms, form), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::NewProp_form_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::NewProp_form,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::NewProp_form_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "GetConversionScalarByForm", sizeof(FGInventoryLibrary_eventGetConversionScalarByForm_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm_Statics::FuncParams);
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetMinNumSlotsForItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetMinNumSlotsForItems_Parms, items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::NewProp_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Calculates how many inventory slots the passed number of items requires.\n\nASSUMES CONSOLIDATED ARRAY" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "GetMinNumSlotsForItems", sizeof(FGInventoryLibrary_eventGetMinNumSlotsForItems_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics
	{
		struct FGInventoryLibrary_eventGetProductionSuffixFromFormType_Parms
		{
			EResourceForm form;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_form;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_form_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetProductionSuffixFromFormType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::NewProp_form = { "form", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetProductionSuffixFromFormType_Parms, form), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::NewProp_form_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::NewProp_form,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::NewProp_form_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Returns the UI Suffix for production quantities based on a Resource Form Type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "GetProductionSuffixFromFormType", sizeof(FGInventoryLibrary_eventGetProductionSuffixFromFormType_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics
	{
		struct FGInventoryLibrary_eventGetUIDataFullForInventoryStack_Parms
		{
			FInventoryStack inventoryStack;
			const TSubclassOf<AFGBuildableFactory>  buildableFactory;
			TSubclassOf<UFGItemDescriptor>  itemClass;
			float numItemsConverted;
			float maxItemsConverted;
			FText suffix;
			EResourceForm form;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_form;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_form_Underlying;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_suffix;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxItemsConverted;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_numItemsConverted;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildableFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_buildableFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inventoryStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_form = { "form", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataFullForInventoryStack_Parms, form), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_form_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_suffix = { "suffix", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataFullForInventoryStack_Parms, suffix), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_maxItemsConverted = { "maxItemsConverted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataFullForInventoryStack_Parms, maxItemsConverted), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_numItemsConverted = { "numItemsConverted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataFullForInventoryStack_Parms, numItemsConverted), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataFullForInventoryStack_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_buildableFactory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_buildableFactory = { "buildableFactory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataFullForInventoryStack_Parms, buildableFactory), Z_Construct_UClass_AFGBuildableFactory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_buildableFactory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_buildableFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_inventoryStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_inventoryStack = { "inventoryStack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataFullForInventoryStack_Parms, inventoryStack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_inventoryStack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_inventoryStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_form,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_form_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_maxItemsConverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_numItemsConverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_buildableFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::NewProp_inventoryStack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Returns the amount of stack items converted to the appropriate units for displaying in the UI including suffix and form data. This also returns the split data for ease of access in Widgets.\n@param inventoryStack - (In) FInventoryStack to use as the base for conversion. The item form will be pulled from the stacks ItemClass to determine the conversion.\n@param buildableClass - (In) (Optional) if passed a valid buildable and the resource form is not SOLID, the converted maximimum stack will also be scaled by the buildables stack size\n@param itemClass - (Out) The item class of the inventory stack.\n@param numItemsConverted - (Out) The numItems converted to the correct representation for the UI. eg. 1000 Liquid inventory will be divided by 1000.f to return 1.f ( m^3 )\n@param maxItemsConverted - (Out) The max stack size for this InventoryStack. If a buildableClass was passed and the resource form is not SOLID, this value will also be scaled to by the buildables stack size scalar.\n@param suffix - (Out) The UI suffix for this part form ( Tex. Solid = \"Parts\", Liquid = \"m^3\" )\n@param form - (Out) The resource form of this ItemStack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "GetUIDataFullForInventoryStack", sizeof(FGInventoryLibrary_eventGetUIDataFullForInventoryStack_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics
	{
		struct FGInventoryLibrary_eventGetUIDataPartialForInventoryStack_Parms
		{
			FInventoryStack inventoryStack;
			const TSubclassOf<AFGBuildableFactory>  buildableFactory;
			TSubclassOf<UFGItemDescriptor>  itemClass;
			float numItemsConverted;
			float maxItemsConverted;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxItemsConverted;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_numItemsConverted;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildableFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_buildableFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inventoryStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_maxItemsConverted = { "maxItemsConverted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataPartialForInventoryStack_Parms, maxItemsConverted), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_numItemsConverted = { "numItemsConverted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataPartialForInventoryStack_Parms, numItemsConverted), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataPartialForInventoryStack_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_buildableFactory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_buildableFactory = { "buildableFactory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataPartialForInventoryStack_Parms, buildableFactory), Z_Construct_UClass_AFGBuildableFactory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_buildableFactory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_buildableFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_inventoryStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_inventoryStack = { "inventoryStack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGetUIDataPartialForInventoryStack_Parms, inventoryStack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_inventoryStack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_inventoryStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_maxItemsConverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_numItemsConverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_buildableFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::NewProp_inventoryStack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Returns the amount of stack items converted to the appropriate units for displaying in the UI, excluding suffix and form data. This also returns the split data for ease of access in Widgets.\n@param inventoryStack - (In) FInventoryStack to use as the base for conversion. The item form will be pulled from the stacks ItemClass to determine the conversion.\n@param buildableClass - (In) (Optional) if passed a valid buildable and the resource form is not SOLID, the converted maximimum stack will also be scaled by the buildables stack size\n@param itemClass - (Out) The item class of the inventory stack.\n@param numItemsConverted - (Out) The numItems converted to the correct representation for the UI. eg. 1000 Liquid inventory will be divided by 1000.f to return 1.f ( m^3 )\n@param maxItemsConverted - (Out) The max stack size for this InventoryStack. If a buildableClass was passed and the resource form is not SOLID, this value will also be scaled to by the buildables stack size scalar." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "GetUIDataPartialForInventoryStack", sizeof(FGInventoryLibrary_eventGetUIDataPartialForInventoryStack_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_onlyGrabOfDesc = { "onlyGrabOfDesc", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms, onlyGrabOfDesc), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_destinationComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_destinationComponent = { "destinationComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms, destinationComponent), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_destinationComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_destinationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_sourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_sourceComponent = { "sourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms, sourceComponent), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_sourceComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::NewProp_sourceComponent_MetaData)) };
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
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Tries to grab all items in the source and add them to the dest. I can't decide what optimal grabbing is, so this is just the easiest implementation.\n@note Server only\n\n@return true on success; false if something goes wrong during the move." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "GrabAllItemsFromInventory", sizeof(FGInventoryLibrary_eventGrabAllItemsFromInventory_Parms), Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGInventoryLibrary_eventHasItems_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventHasItems_Parms, stack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "@return true if the stack has any items; false if the stack is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "HasItems", sizeof(FGInventoryLibrary_eventHasItems_Parms), Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasItems_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGInventoryLibrary_eventHasState_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventHasState_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "@return true if this inventory item has a state; otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "HasState", sizeof(FGInventoryLibrary_eventHasState_Parms), Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_HasState_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGInventoryLibrary_eventIsValidItem_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventIsValidItem_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "@return true if the inventory item is a valid item; otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "IsValidItem", sizeof(FGInventoryLibrary_eventIsValidItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass_MetaData[] = {
		{ "DisplayName", "Class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryItem_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Manual make for inventory item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "MakeInventoryItem", sizeof(FGInventoryLibrary_eventMakeInventoryItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryStack_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryStack_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_numItems = { "numItems", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMakeInventoryStack_Parms, numItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::NewProp_numItems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Manual make for inventory stack." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "MakeInventoryStack", sizeof(FGInventoryLibrary_eventMakeInventoryStack_Parms), Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMergeInventoryItem_Parms, item), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMergeInventoryItem_Parms, items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::NewProp_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Helper to merge an inventory item into an array of other inventory items.\n\n@param items - Merge item into this array.\n@param item - This is the item to merge into the items array.\n\n@note This do not apply any stacking limits.\n        //@todoinventory RENAME Stack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "MergeInventoryItem", sizeof(FGInventoryLibrary_eventMergeInventoryItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGInventoryLibrary_eventMoveInventoryItem_Parms), &Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationIdx = { "destinationIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMoveInventoryItem_Parms, destinationIdx), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationComponent = { "destinationComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMoveInventoryItem_Parms, destinationComponent), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_destinationComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceIdx = { "sourceIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMoveInventoryItem_Parms, sourceIdx), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceComponent = { "sourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventMoveInventoryItem_Parms, sourceComponent), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::NewProp_sourceComponent_MetaData)) };
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
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "This is a UI helper function for drag n drop that automagically moves or swaps items.\nIt moves or swaps an item from a one location to another location. Verifying that the move or swap is allowed.\n@note Server only\n\n@return true on success; false if something goes wrong during the move.\n        //@todoinventory RENAME Stack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "MoveInventoryItem", sizeof(FGInventoryLibrary_eventMoveInventoryItem_Parms), Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics
	{
		struct FGInventoryLibrary_eventRemoveAllItemsNotOfResourceForm_Parms
		{
			TArray<FInventoryStack> items;
			EResourceForm validForm;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_validForm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_validForm_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::NewProp_validForm = { "validForm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventRemoveAllItemsNotOfResourceForm_Parms, validForm), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::NewProp_validForm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInventoryLibrary_eventRemoveAllItemsNotOfResourceForm_Parms, items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::NewProp_validForm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::NewProp_validForm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::NewProp_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_validForm", "RF_SOLID" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Removes all stacks whom's resource form does not match the passed form\n@param items - Array of items by ref to remove from\n@param validForm - Keep items of this form. Default == RF_SOLID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryLibrary, nullptr, "RemoveAllItemsNotOfResourceForm", sizeof(FGInventoryLibrary_eventRemoveAllItemsNotOfResourceForm_Parms), Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryItem, "BreakInventoryItem" }, // 3039540074
		{ &Z_Construct_UFunction_UFGInventoryLibrary_BreakInventoryStack, "BreakInventoryStack" }, // 2287042084
		{ &Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateInventoryItems, "ConsolidateInventoryItems" }, // 3451332969
		{ &Z_Construct_UFunction_UFGInventoryLibrary_ConsolidateItemsAmount, "ConsolidateItemsAmount" }, // 3035905722
		{ &Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponent, "CreateInventoryComponent" }, // 1279328882
		{ &Z_Construct_UFunction_UFGInventoryLibrary_CreateInventoryComponentOfClass, "CreateInventoryComponentOfClass" }, // 195531373
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedByForm, "GetAmountConvertedByForm" }, // 259177286
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GetAmountConvertedFromItemAmount, "GetAmountConvertedFromItemAmount" }, // 828306326
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GetConversionScalarByForm, "GetConversionScalarByForm" }, // 646368782
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GetMinNumSlotsForItems, "GetMinNumSlotsForItems" }, // 3901132798
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GetProductionSuffixFromFormType, "GetProductionSuffixFromFormType" }, // 3087233621
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataFullForInventoryStack, "GetUIDataFullForInventoryStack" }, // 1943188342
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GetUIDataPartialForInventoryStack, "GetUIDataPartialForInventoryStack" }, // 2403067432
		{ &Z_Construct_UFunction_UFGInventoryLibrary_GrabAllItemsFromInventory, "GrabAllItemsFromInventory" }, // 1091470000
		{ &Z_Construct_UFunction_UFGInventoryLibrary_HasItems, "HasItems" }, // 1774446307
		{ &Z_Construct_UFunction_UFGInventoryLibrary_HasState, "HasState" }, // 2824438847
		{ &Z_Construct_UFunction_UFGInventoryLibrary_IsValidItem, "IsValidItem" }, // 4188289172
		{ &Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryItem, "MakeInventoryItem" }, // 770391353
		{ &Z_Construct_UFunction_UFGInventoryLibrary_MakeInventoryStack, "MakeInventoryStack" }, // 1455698016
		{ &Z_Construct_UFunction_UFGInventoryLibrary_MergeInventoryItem, "MergeInventoryItem" }, // 2740858737
		{ &Z_Construct_UFunction_UFGInventoryLibrary_MoveInventoryItem, "MoveInventoryItem" }, // 259760545
		{ &Z_Construct_UFunction_UFGInventoryLibrary_RemoveAllItemsNotOfResourceForm, "RemoveAllItemsNotOfResourceForm" }, // 530867313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGInventoryLibrary.h" },
		{ "ModuleRelativePath", "Public/FGInventoryLibrary.h" },
		{ "ToolTip", "Function library to provide the glue between c++ and the inventory in blueprint so we can handle inventory items with a state easy in blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGInventoryLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGInventoryLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGInventoryLibrary_Statics::ClassParams = {
		&UFGInventoryLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
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
	IMPLEMENT_CLASS(UFGInventoryLibrary, 3152772004);
	template<> FACTORYGAME_API UClass* StaticClass<UFGInventoryLibrary>()
	{
		return UFGInventoryLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGInventoryLibrary(Z_Construct_UClass_UFGInventoryLibrary, &UFGInventoryLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGInventoryLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGInventoryLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
