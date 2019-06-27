// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGInventoryComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGInventoryComponent() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSharedInventoryStatePtr();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_AddStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_AddStacks();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_Empty();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetNumItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasAuthority();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsEmpty();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_OnRep_InventoryStacks();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_Remove();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_Resize();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_Server_SortInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_SortInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnItemRemoved_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 numRemoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numRemoved;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::NewProp_numRemoved = { UE4CodeGen_Private::EPropertyClass::Int, "numRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnItemRemoved_Parms, numRemoved), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnItemRemoved_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::NewProp_numRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnItemRemoved__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnItemRemoved_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnItemAdded_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 numAdded;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numAdded;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::NewProp_numAdded = { UE4CodeGen_Private::EPropertyClass::Int, "numAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnItemAdded_Parms, numAdded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnItemAdded_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::NewProp_numAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnItemAdded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnItemAdded_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventGetItemDropLocation_Parms
		{
			const UFGInventoryComponent* component;
			FInventoryStack stack;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventGetItemDropLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::NewProp_stack = { UE4CodeGen_Private::EPropertyClass::Struct, "stack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventGetItemDropLocation_Parms, stack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::NewProp_component = { UE4CodeGen_Private::EPropertyClass::Object, "component", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080082, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventGetItemDropLocation_Parms, component), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::NewProp_component_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::NewProp_stack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "GetItemDropLocation__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_FactoryGame_eventGetItemDropLocation_Parms), Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_GetItemDropLocation__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventInventoryResized_Parms
		{
			int32 oldSize;
			int32 newSize;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::NewProp_newSize = { UE4CodeGen_Private::EPropertyClass::Int, "newSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventInventoryResized_Parms, newSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::NewProp_oldSize = { UE4CodeGen_Private::EPropertyClass::Int, "oldSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventInventoryResized_Parms, oldSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::NewProp_newSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::NewProp_oldSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "InventoryResized__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventInventoryResized_Parms), Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FInventoryStack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FInventoryStack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryStack, Z_Construct_UPackage__Script_FactoryGame(), TEXT("InventoryStack"), sizeof(FInventoryStack), Get_Z_Construct_UScriptStruct_FInventoryStack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventoryStack(FInventoryStack::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("InventoryStack"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFInventoryStack
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFInventoryStack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventoryStack")),new UScriptStruct::TCppStructOps<FInventoryStack>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFInventoryStack;
	struct Z_Construct_UScriptStruct_FInventoryStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryStack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Struct containing a stack of items, stacks is what the inventory handles.\nWhen handling single items outside an inventory, i.e. conveyor belt, the FInventoryItem struct is used.\nNote that single items in the inventory is described as a stack with 1 item." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryStack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_NumItems_MetaData[] = {
		{ "Category", "InventoryStack" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Number of items in this stack." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_NumItems = { UE4CodeGen_Private::EPropertyClass::Int, "NumItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000001, 1, nullptr, STRUCT_OFFSET(FInventoryStack, NumItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_NumItems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_NumItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "InventoryStack" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Type of item in this stack." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Struct, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000001, 1, nullptr, STRUCT_OFFSET(FInventoryStack, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_NumItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStack_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"InventoryStack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInventoryStack),
		alignof(FInventoryStack),
		Z_Construct_UScriptStruct_FInventoryStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryStack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventoryStack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventoryStack"), sizeof(FInventoryStack), Get_Z_Construct_UScriptStruct_FInventoryStack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventoryStack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventoryStack_CRC() { return 1042463133U; }
class UScriptStruct* FInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, Z_Construct_UPackage__Script_FactoryGame(), TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventoryItem(FInventoryItem::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("InventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFInventoryItem
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFInventoryItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventoryItem")),new UScriptStruct::TCppStructOps<FInventoryItem>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFInventoryItem;
	struct Z_Construct_UScriptStruct_FInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Describes an item that can be placed in the inventory.\nAn item has a type and optionally a state.\nE.g. a weapon is of type 'Desc_NailGun' and has the state '9 nail loaded'." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemState_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Optionally store an actor, e.g. an equipment, so we can remember it's state." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemState = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInventoryItem, ItemState), Z_Construct_UScriptStruct_FSharedInventoryStatePtr, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "The type of item" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemClass = { UE4CodeGen_Private::EPropertyClass::Class, "ItemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FInventoryItem, ItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"InventoryItem",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInventoryItem),
		alignof(FInventoryItem),
		Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_CRC() { return 2172918613U; }
	static FName NAME_UFGInventoryComponent_Server_SortInventory = FName(TEXT("Server_SortInventory"));
	void UFGInventoryComponent::Server_SortInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGInventoryComponent_Server_SortInventory),NULL);
	}
	void UFGInventoryComponent::StaticRegisterNativesUFGInventoryComponent()
	{
		UClass* Class = UFGInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddArbitrarySlotSize", &UFGInventoryComponent::execAddArbitrarySlotSize },
			{ "AddStack", &UFGInventoryComponent::execAddStack },
			{ "AddStacks", &UFGInventoryComponent::execAddStacks },
			{ "AddStackToIndex", &UFGInventoryComponent::execAddStackToIndex },
			{ "CanSplitStackAtIdx", &UFGInventoryComponent::execCanSplitStackAtIdx },
			{ "Empty", &UFGInventoryComponent::execEmpty },
			{ "FindEmptyIndex", &UFGInventoryComponent::execFindEmptyIndex },
			{ "GetAllowedItemOnIndex", &UFGInventoryComponent::execGetAllowedItemOnIndex },
			{ "GetCanBeRearranged", &UFGInventoryComponent::execGetCanBeRearranged },
			{ "GetFullestStackIndex", &UFGInventoryComponent::execGetFullestStackIndex },
			{ "GetInventoryStacks", &UFGInventoryComponent::execGetInventoryStacks },
			{ "GetNumItems", &UFGInventoryComponent::execGetNumItems },
			{ "GetSizeLinear", &UFGInventoryComponent::execGetSizeLinear },
			{ "GetSlotSize", &UFGInventoryComponent::execGetSlotSize },
			{ "GetStackFromIndex", &UFGInventoryComponent::execGetStackFromIndex },
			{ "HasAuthority", &UFGInventoryComponent::execHasAuthority },
			{ "HasEnoughSpaceForItem", &UFGInventoryComponent::execHasEnoughSpaceForItem },
			{ "HasEnoughSpaceForStack", &UFGInventoryComponent::execHasEnoughSpaceForStack },
			{ "HasEnoughSpaceForStacks", &UFGInventoryComponent::execHasEnoughSpaceForStacks },
			{ "HasItems", &UFGInventoryComponent::execHasItems },
			{ "IsEmpty", &UFGInventoryComponent::execIsEmpty },
			{ "IsIndexEmpty", &UFGInventoryComponent::execIsIndexEmpty },
			{ "IsItemAllowed", &UFGInventoryComponent::execIsItemAllowed },
			{ "IsSomethingOnIndex", &UFGInventoryComponent::execIsSomethingOnIndex },
			{ "IsValidIndex", &UFGInventoryComponent::execIsValidIndex },
			{ "OnRep_InventoryStacks", &UFGInventoryComponent::execOnRep_InventoryStacks },
			{ "Remove", &UFGInventoryComponent::execRemove },
			{ "RemoveAllFromIndex", &UFGInventoryComponent::execRemoveAllFromIndex },
			{ "RemoveFromIndex", &UFGInventoryComponent::execRemoveFromIndex },
			{ "Resize", &UFGInventoryComponent::execResize },
			{ "Server_SortInventory", &UFGInventoryComponent::execServer_SortInventory },
			{ "SetAllowedItemOnIndex", &UFGInventoryComponent::execSetAllowedItemOnIndex },
			{ "SetCanBeRearranged", &UFGInventoryComponent::execSetCanBeRearranged },
			{ "SortInventory", &UFGInventoryComponent::execSortInventory },
			{ "SplitStackAtIdx", &UFGInventoryComponent::execSplitStackAtIdx },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics
	{
		struct FGInventoryComponent_eventAddArbitrarySlotSize_Parms
		{
			int32 index;
			int32 arbitrarySlotSize;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_arbitrarySlotSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::NewProp_arbitrarySlotSize = { UE4CodeGen_Private::EPropertyClass::Int, "arbitrarySlotSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventAddArbitrarySlotSize_Parms, arbitrarySlotSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventAddArbitrarySlotSize_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::NewProp_arbitrarySlotSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot Size" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Adds or replaces a arbitrary size for a slot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "AddArbitrarySlotSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInventoryComponent_eventAddArbitrarySlotSize_Parms), Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics
	{
		struct FGInventoryComponent_eventAddStack_Parms
		{
			FInventoryStack stack;
			bool allowPartialAdd;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_allowPartialAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allowPartialAdd;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventAddStack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_allowPartialAdd_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventAddStack_Parms*)Obj)->allowPartialAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_allowPartialAdd = { UE4CodeGen_Private::EPropertyClass::Bool, "allowPartialAdd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventAddStack_Parms), &Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_allowPartialAdd_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_stack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_stack = { UE4CodeGen_Private::EPropertyClass::Struct, "stack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventAddStack_Parms, stack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_stack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_stack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_allowPartialAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_allowPartialAdd", "false" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Tries to add an item to our inventory, stack it if possible.\n@note Server only\n\n@param allowPartialAdd - If true we add what we can and ignore the rest; otherwise it assumes everything fits and warns otherwise.\n                         @note It is the callers responsibility to take care of the items that where not added.\n\n@return Number of items added, may be less than the input if partial adds are allowed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "AddStack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(FGInventoryComponent_eventAddStack_Parms), Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_AddStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_AddStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics
	{
		struct FGInventoryComponent_eventAddStacks_Parms
		{
			TArray<FInventoryStack> stacks;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_stacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stacks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::NewProp_stacks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::NewProp_stacks = { UE4CodeGen_Private::EPropertyClass::Array, "stacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventAddStacks_Parms, stacks), METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::NewProp_stacks_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::NewProp_stacks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::NewProp_stacks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "stacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::NewProp_stacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::NewProp_stacks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Add the given items to the inventory.\n@note Server only\n\n@param stacks - Stacks to add, caller must ensure that the stacks fit in the inventory.\n\n@note It is the callers responsibility to ensure that the inventory has enough space to store the items." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "AddStacks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGInventoryComponent_eventAddStacks_Parms), Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_AddStacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_AddStacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics
	{
		struct FGInventoryComponent_eventAddStackToIndex_Parms
		{
			int32 idx;
			FInventoryStack stack;
			bool allowPartial;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_allowPartial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allowPartial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stack;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventAddStackToIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_allowPartial_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventAddStackToIndex_Parms*)Obj)->allowPartial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_allowPartial = { UE4CodeGen_Private::EPropertyClass::Bool, "allowPartial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventAddStackToIndex_Parms), &Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_allowPartial_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_stack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_stack = { UE4CodeGen_Private::EPropertyClass::Struct, "stack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventAddStackToIndex_Parms, stack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_stack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_stack_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventAddStackToIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_allowPartial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_stack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_allowPartial", "false" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Tries to add an item to our inventory at a give index, stack it if possible.\n@note Server only\n\n@param idx - A valid index in mInventoryStacks.\n@param item - The item to add.\n@param allowPartialAdd - If true we add what we can and ignore the rest; otherwise it assumes everything fits and warns otherwise.\n                         @note It is the callers responsibility to take care of the items that where not added.\n\n@return Number of items added, may be less than the input if partial adds are allowed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "AddStackToIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(FGInventoryComponent_eventAddStackToIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics
	{
		struct FGInventoryComponent_eventCanSplitStackAtIdx_Parms
		{
			int32 idx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventCanSplitStackAtIdx_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventCanSplitStackAtIdx_Parms), &Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventCanSplitStackAtIdx_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Split" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Returns true if we can split the stack that is on the passed idx" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "CanSplitStackAtIdx", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInventoryComponent_eventCanSplitStackAtIdx_Parms), Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_Empty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Clears the inventory, ALL items will be forever gone!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "Empty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_Empty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics
	{
		struct FGInventoryComponent_eventFindEmptyIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventFindEmptyIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "@return first empty index, -1 if none is found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "FindEmptyIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventFindEmptyIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics
	{
		struct FGInventoryComponent_eventGetAllowedItemOnIndex_Parms
		{
			int32 idx;
			TSubclassOf<UFGItemDescriptor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetAllowedItemOnIndex_Parms, ReturnValue), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetAllowedItemOnIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Set the allowed item type for this slot, can only be one item.\n@return Allowed item type if set; nullptr if any item is allowed or invalid index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "GetAllowedItemOnIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInventoryComponent_eventGetAllowedItemOnIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics
	{
		struct FGInventoryComponent_eventGetCanBeRearranged_Parms
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
	void Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventGetCanBeRearranged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventGetCanBeRearranged_Parms), &Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Can stuff in this inventory be rearranged, that is moved from one slot to the other?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "GetCanBeRearranged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventGetCanBeRearranged_Parms), Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics
	{
		struct FGInventoryComponent_eventGetFullestStackIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetFullestStackIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Returns index of the stack that has percentually the most items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "GetFullestStackIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInventoryComponent_eventGetFullestStackIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics
	{
		struct FGInventoryComponent_eventGetInventoryStacks_Parms
		{
			TArray<FInventoryStack> out_stacks;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_stacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_stacks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::NewProp_out_stacks = { UE4CodeGen_Private::EPropertyClass::Array, "out_stacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetInventoryStacks_Parms, out_stacks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::NewProp_out_stacks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_stacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::NewProp_out_stacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::NewProp_out_stacks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Get all stacks that's in the players inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "GetInventoryStacks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGInventoryComponent_eventGetInventoryStacks_Parms), Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics
	{
		struct FGInventoryComponent_eventGetNumItems_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetNumItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetNumItems_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Get the number of items we have of the specified class.\n\n@param itemClass - The items class.\n\n@return Total amount of the item we have in the inventory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "GetNumItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventGetNumItems_Parms), Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetNumItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_GetNumItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics
	{
		struct FGInventoryComponent_eventGetSizeLinear_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetSizeLinear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "The total size of the inventory, when accessing inventory linearly using indices." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "GetSizeLinear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInventoryComponent_eventGetSizeLinear_Parms), Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics
	{
		struct FGInventoryComponent_eventGetSlotSize_Parms
		{
			int32 index;
			TSubclassOf<UFGItemDescriptor>  itemDesc;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemDesc;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetSlotSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::NewProp_itemDesc = { UE4CodeGen_Private::EPropertyClass::Class, "itemDesc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetSlotSize_Parms, itemDesc), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetSlotSize_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::NewProp_itemDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot Size" },
		{ "CPP_Default_itemDesc", "None" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "This returns the arbitrary slot size if one is set, otherwise the stack size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "GetSlotSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventGetSlotSize_Parms), Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics
	{
		struct FGInventoryComponent_eventGetStackFromIndex_Parms
		{
			int32 idx;
			FInventoryStack out_stack;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_stack;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventGetStackFromIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventGetStackFromIndex_Parms), &Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::NewProp_out_stack = { UE4CodeGen_Private::EPropertyClass::Struct, "out_stack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetStackFromIndex_Parms, out_stack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventGetStackFromIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::NewProp_out_stack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Get the item of a slot.\n@note true if valid index, it is the callers responsibility to check if the slot contains an item or not.\n\n@param idx - A valid index in mInventoryStacks.\n@param out_item - The item on the location. If not a valid index this is undefined.\n\n@return true if valid index; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "GetStackFromIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44420401, sizeof(FGInventoryComponent_eventGetStackFromIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics
	{
		struct FGInventoryComponent_eventHasAuthority_Parms
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
	void Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventHasAuthority_Parms), &Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Checks if our owner has authority, and assumes that if they have, then so do we" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "HasAuthority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventHasAuthority_Parms), Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics
	{
		struct FGInventoryComponent_eventHasEnoughSpaceForItem_Parms
		{
			FInventoryItem stack;
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
	void Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventHasEnoughSpaceForItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventHasEnoughSpaceForItem_Parms), &Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::NewProp_stack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::NewProp_stack = { UE4CodeGen_Private::EPropertyClass::Struct, "stack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventHasEnoughSpaceForItem_Parms, stack), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::NewProp_stack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::NewProp_stack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "@return true if we have enough space for the item; false if not or not allowed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "HasEnoughSpaceForItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGInventoryComponent_eventHasEnoughSpaceForItem_Parms), Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics
	{
		struct FGInventoryComponent_eventHasEnoughSpaceForStack_Parms
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
	void Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventHasEnoughSpaceForStack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventHasEnoughSpaceForStack_Parms), &Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::NewProp_stack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::NewProp_stack = { UE4CodeGen_Private::EPropertyClass::Struct, "stack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventHasEnoughSpaceForStack_Parms, stack), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::NewProp_stack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::NewProp_stack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Check if the inventory has enough space to store the given items." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "HasEnoughSpaceForStack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGInventoryComponent_eventHasEnoughSpaceForStack_Parms), Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics
	{
		struct FGInventoryComponent_eventHasEnoughSpaceForStacks_Parms
		{
			TArray<FInventoryStack> stacks;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_stacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stacks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventHasEnoughSpaceForStacks_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventHasEnoughSpaceForStacks_Parms), &Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_stacks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_stacks = { UE4CodeGen_Private::EPropertyClass::Array, "stacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventHasEnoughSpaceForStacks_Parms, stacks), METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_stacks_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_stacks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_stacks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "stacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_stacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::NewProp_stacks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Check if the inventory has enough space to store the given items.\n@param stacks - Stacks to check enough space for.\n@return - true if the items can be stored in the inventory; false if the inventory has insufficent space or the type for any of the items cannot be stored in this inventory.\n\n@note This can be slow for large inventories and item quantities as it need to check every grid location, try stacking and consider stacking limits etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "HasEnoughSpaceForStacks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGInventoryComponent_eventHasEnoughSpaceForStacks_Parms), Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics
	{
		struct FGInventoryComponent_eventHasItems_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 num;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_num;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventHasItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventHasItems_Parms), &Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::NewProp_num = { UE4CodeGen_Private::EPropertyClass::Int, "num", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventHasItems_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventHasItems_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::NewProp_num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Check if the inventory has the given items, good for checking building costs etc.\n\n@param itemClass - Item type to check.\n@param num - Item amount to check.\n\n@return - true if the inventory has the amount requested." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "HasItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventHasItems_Parms), Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_HasItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_HasItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics
	{
		struct FGInventoryComponent_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventIsEmpty_Parms), &Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Check if the entire inventory is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "IsEmpty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventIsEmpty_Parms), Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics
	{
		struct FGInventoryComponent_eventIsIndexEmpty_Parms
		{
			int32 idx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventIsIndexEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventIsIndexEmpty_Parms), &Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventIsIndexEmpty_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Check if the given index is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "IsIndexEmpty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventIsIndexEmpty_Parms), Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics
	{
		struct FGInventoryComponent_eventIsItemAllowed_Parms
		{
			TSubclassOf<UFGItemDescriptor>  item;
			int32 idx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventIsItemAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventIsItemAllowed_Parms), &Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_idx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventIsItemAllowed_Parms, idx), METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_idx_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_idx_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Class, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventIsItemAllowed_Parms, item), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_idx", "-1" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "@return true if the item is allowed in this inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "IsItemAllowed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventIsItemAllowed_Parms), Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics
	{
		struct FGInventoryComponent_eventIsSomethingOnIndex_Parms
		{
			int32 idx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventIsSomethingOnIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventIsSomethingOnIndex_Parms), &Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventIsSomethingOnIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Opposite of IsIndexEmpty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "IsSomethingOnIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventIsSomethingOnIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics
	{
		struct FGInventoryComponent_eventIsValidIndex_Parms
		{
			int32 idx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventIsValidIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventIsValidIndex_Parms), &Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventIsValidIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "@return true if the index is a valid index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "IsValidIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponent_eventIsValidIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_OnRep_InventoryStacks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_OnRep_InventoryStacks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Used to call OnItemAdded/OnItemRemoved on clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_OnRep_InventoryStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "OnRep_InventoryStacks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_OnRep_InventoryStacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_OnRep_InventoryStacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_OnRep_InventoryStacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_OnRep_InventoryStacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics
	{
		struct FGInventoryComponent_eventRemove_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 num;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_num;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::NewProp_num = { UE4CodeGen_Private::EPropertyClass::Int, "num", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventRemove_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventRemove_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::NewProp_num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Removes the number of specified items from the inventory.\n@note Server only\n\n@param itemClass - Type of items to remove.\n@param num - Number of items to remove. Must be >= 0. If count is more than the items available, a partial remove is done and a warning is raised." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "Remove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInventoryComponent_eventRemove_Parms), Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics
	{
		struct FGInventoryComponent_eventRemoveAllFromIndex_Parms
		{
			int32 idx;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventRemoveAllFromIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Clears the index, ALL items will be forever gone!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "RemoveAllFromIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInventoryComponent_eventRemoveAllFromIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics
	{
		struct FGInventoryComponent_eventRemoveFromIndex_Parms
		{
			int32 idx;
			int32 num;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_num;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::NewProp_num = { UE4CodeGen_Private::EPropertyClass::Int, "num", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventRemoveFromIndex_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventRemoveFromIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::NewProp_num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Removes number of items in the specified index.\n@note Server only\n\n@param idx - A valid index in mInventoryStacks.\n@param num - Number of items to remove. Must be >= 0. If count is more than the items available, nothing is removed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "RemoveFromIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInventoryComponent_eventRemoveFromIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics
	{
		struct FGInventoryComponent_eventResize_Parms
		{
			int32 newSize;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::NewProp_newSize = { UE4CodeGen_Private::EPropertyClass::Int, "newSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventResize_Parms, newSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::NewProp_newSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_newSize", "1" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Changes the size of the inventory to something else than 1\n\n@param newSize How many itemslots does this component have" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "Resize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInventoryComponent_eventResize_Parms), Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_Resize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_Resize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_Server_SortInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_Server_SortInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_Server_SortInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "Server_SortInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_Server_SortInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_Server_SortInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_Server_SortInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_Server_SortInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics
	{
		struct FGInventoryComponent_eventSetAllowedItemOnIndex_Parms
		{
			int32 idx;
			TSubclassOf<UFGItemDescriptor>  allowedItemClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_allowedItemClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::NewProp_allowedItemClass = { UE4CodeGen_Private::EPropertyClass::Class, "allowedItemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventSetAllowedItemOnIndex_Parms, allowedItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventSetAllowedItemOnIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::NewProp_allowedItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Get the allowed item type for this slot.\n@param idx Slot index, function does nullptr if this is invalid.\n@param allowedItemClass Item type to allow, if nothing then all items are allowed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "SetAllowedItemOnIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInventoryComponent_eventSetAllowedItemOnIndex_Parms), Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics
	{
		struct FGInventoryComponent_eventSetCanBeRearranged_Parms
		{
			bool canBeRearranged;
		};
		static void NewProp_canBeRearranged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canBeRearranged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::NewProp_canBeRearranged_SetBit(void* Obj)
	{
		((FGInventoryComponent_eventSetCanBeRearranged_Parms*)Obj)->canBeRearranged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::NewProp_canBeRearranged = { UE4CodeGen_Private::EPropertyClass::Bool, "canBeRearranged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponent_eventSetCanBeRearranged_Parms), &Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::NewProp_canBeRearranged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::NewProp_canBeRearranged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Setter for mCanBeRearranged" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "SetCanBeRearranged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInventoryComponent_eventSetCanBeRearranged_Parms), Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_SortInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_SortInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Sorts the inventory in alphabetic order in the following manner:\n1) Equipment\n2) other" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_SortInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "SortInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_SortInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_SortInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_SortInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_SortInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics
	{
		struct FGInventoryComponent_eventSplitStackAtIdx_Parms
		{
			int32 idx;
			int32 numItemsToMove;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numItemsToMove;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::NewProp_numItemsToMove = { UE4CodeGen_Private::EPropertyClass::Int, "numItemsToMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventSplitStackAtIdx_Parms, numItemsToMove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponent_eventSplitStackAtIdx_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::NewProp_numItemsToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Split" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Splits the stack at the current index and moves the passed amount of items to first valid slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponent, "SplitStackAtIdx", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInventoryComponent_eventSplitStackAtIdx_Parms), Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister()
	{
		return UFGInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanBeRearrange_MetaData[];
#endif
		static void NewProp_mCanBeRearrange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanBeRearrange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllowedItemDescriptors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllowedItemDescriptors;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAllowedItemDescriptors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArbitrarySlotSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mArbitrarySlotSizes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mArbitrarySlotSizes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventoryStacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mInventoryStacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mInventoryStacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAdjustedSizeDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mAdjustedSizeDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultInventorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mDefaultInventorySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemRemovedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemovedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemAddedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAddedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResizeInventoryDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResizeInventoryDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGInventoryComponent_AddArbitrarySlotSize, "AddArbitrarySlotSize" }, // 3882185651
		{ &Z_Construct_UFunction_UFGInventoryComponent_AddStack, "AddStack" }, // 2748562214
		{ &Z_Construct_UFunction_UFGInventoryComponent_AddStacks, "AddStacks" }, // 2739943621
		{ &Z_Construct_UFunction_UFGInventoryComponent_AddStackToIndex, "AddStackToIndex" }, // 401383863
		{ &Z_Construct_UFunction_UFGInventoryComponent_CanSplitStackAtIdx, "CanSplitStackAtIdx" }, // 3801566784
		{ &Z_Construct_UFunction_UFGInventoryComponent_Empty, "Empty" }, // 1354277397
		{ &Z_Construct_UFunction_UFGInventoryComponent_FindEmptyIndex, "FindEmptyIndex" }, // 1361531905
		{ &Z_Construct_UFunction_UFGInventoryComponent_GetAllowedItemOnIndex, "GetAllowedItemOnIndex" }, // 2115485783
		{ &Z_Construct_UFunction_UFGInventoryComponent_GetCanBeRearranged, "GetCanBeRearranged" }, // 1844657658
		{ &Z_Construct_UFunction_UFGInventoryComponent_GetFullestStackIndex, "GetFullestStackIndex" }, // 792546030
		{ &Z_Construct_UFunction_UFGInventoryComponent_GetInventoryStacks, "GetInventoryStacks" }, // 3795496219
		{ &Z_Construct_UFunction_UFGInventoryComponent_GetNumItems, "GetNumItems" }, // 3528141187
		{ &Z_Construct_UFunction_UFGInventoryComponent_GetSizeLinear, "GetSizeLinear" }, // 1484181607
		{ &Z_Construct_UFunction_UFGInventoryComponent_GetSlotSize, "GetSlotSize" }, // 3613851132
		{ &Z_Construct_UFunction_UFGInventoryComponent_GetStackFromIndex, "GetStackFromIndex" }, // 404570098
		{ &Z_Construct_UFunction_UFGInventoryComponent_HasAuthority, "HasAuthority" }, // 3479494138
		{ &Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForItem, "HasEnoughSpaceForItem" }, // 3872830063
		{ &Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStack, "HasEnoughSpaceForStack" }, // 3257781712
		{ &Z_Construct_UFunction_UFGInventoryComponent_HasEnoughSpaceForStacks, "HasEnoughSpaceForStacks" }, // 3749945647
		{ &Z_Construct_UFunction_UFGInventoryComponent_HasItems, "HasItems" }, // 95221241
		{ &Z_Construct_UFunction_UFGInventoryComponent_IsEmpty, "IsEmpty" }, // 993108774
		{ &Z_Construct_UFunction_UFGInventoryComponent_IsIndexEmpty, "IsIndexEmpty" }, // 2259373674
		{ &Z_Construct_UFunction_UFGInventoryComponent_IsItemAllowed, "IsItemAllowed" }, // 486818019
		{ &Z_Construct_UFunction_UFGInventoryComponent_IsSomethingOnIndex, "IsSomethingOnIndex" }, // 3777993882
		{ &Z_Construct_UFunction_UFGInventoryComponent_IsValidIndex, "IsValidIndex" }, // 2139246021
		{ &Z_Construct_UFunction_UFGInventoryComponent_OnRep_InventoryStacks, "OnRep_InventoryStacks" }, // 2497777592
		{ &Z_Construct_UFunction_UFGInventoryComponent_Remove, "Remove" }, // 3911465247
		{ &Z_Construct_UFunction_UFGInventoryComponent_RemoveAllFromIndex, "RemoveAllFromIndex" }, // 780547222
		{ &Z_Construct_UFunction_UFGInventoryComponent_RemoveFromIndex, "RemoveFromIndex" }, // 4020766139
		{ &Z_Construct_UFunction_UFGInventoryComponent_Resize, "Resize" }, // 2691493338
		{ &Z_Construct_UFunction_UFGInventoryComponent_Server_SortInventory, "Server_SortInventory" }, // 301244909
		{ &Z_Construct_UFunction_UFGInventoryComponent_SetAllowedItemOnIndex, "SetAllowedItemOnIndex" }, // 2643390989
		{ &Z_Construct_UFunction_UFGInventoryComponent_SetCanBeRearranged, "SetCanBeRearranged" }, // 1927547822
		{ &Z_Construct_UFunction_UFGInventoryComponent_SortInventory, "SortInventory" }, // 775019316
		{ &Z_Construct_UFunction_UFGInventoryComponent_SplitStackAtIdx, "SplitStackAtIdx" }, // 3087040003
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FGInventoryComponent.h" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "@brief Handles the different parts of the inventory for a actor\nComposed of several UFGInventoryComponents that does all the dirty work, this\nobject just collects them together and gives access to them\nThe outer object of this object needs to implement GetWorld" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mCanBeRearrange_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Can stuff in this inventory be rearranged, that is moved from one slot to the other?" },
	};
#endif
	void Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mCanBeRearrange_SetBit(void* Obj)
	{
		((UFGInventoryComponent*)Obj)->mCanBeRearrange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mCanBeRearrange = { UE4CodeGen_Private::EPropertyClass::Bool, "mCanBeRearrange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGInventoryComponent), &Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mCanBeRearrange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mCanBeRearrange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mCanBeRearrange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAllowedItemDescriptors_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "This are the allowed inventory items, this we we can \"filter\" in BluePrint as well." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAllowedItemDescriptors = { UE4CodeGen_Private::EPropertyClass::Array, "mAllowedItemDescriptors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000001000020, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponent, mAllowedItemDescriptors), METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAllowedItemDescriptors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAllowedItemDescriptors_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAllowedItemDescriptors_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mAllowedItemDescriptors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mArbitrarySlotSizes_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "In some rare cases we don't want to use the StackSize to limit the slot, so this way we can have larger or smaller slots" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mArbitrarySlotSizes = { UE4CodeGen_Private::EPropertyClass::Array, "mArbitrarySlotSizes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponent, mArbitrarySlotSizes), METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mArbitrarySlotSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mArbitrarySlotSizes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mArbitrarySlotSizes_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "mArbitrarySlotSizes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mInventoryStacks_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "All items in the inventory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mInventoryStacks = { UE4CodeGen_Private::EPropertyClass::Array, "mInventoryStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000101000020, 1, "OnRep_InventoryStacks", STRUCT_OFFSET(UFGInventoryComponent, mInventoryStacks), METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mInventoryStacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mInventoryStacks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mInventoryStacks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mInventoryStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAdjustedSizeDiff_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "When we resize the inventory we save how much bigger or smaller the inventory was made" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAdjustedSizeDiff = { UE4CodeGen_Private::EPropertyClass::Int, "mAdjustedSizeDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponent, mAdjustedSizeDiff), METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAdjustedSizeDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAdjustedSizeDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mDefaultInventorySize_MetaData[] = {
		{ "Category", "FGInventoryComponent" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "When we make an inventory by adding the component to an actor we use this to specify its size" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mDefaultInventorySize = { UE4CodeGen_Private::EPropertyClass::Int, "mDefaultInventorySize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponent, mDefaultInventorySize), METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mDefaultInventorySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mDefaultInventorySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemRemovedDelegate_MetaData[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "OnItemRemoved" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Called when something has been removed from the inventory, @note: Client doesn't garantuee order of Added/Remove delegate" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemRemovedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnItemRemovedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponent, OnItemRemovedDelegate), Z_Construct_UDelegateFunction_FactoryGame_OnItemRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemRemovedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemRemovedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemAddedDelegate_MetaData[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "OnItemAdded" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Called when this inventory has something added to it, @note: Client doesn't garantuee order of Added/Remove delegate" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemAddedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnItemAddedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponent, OnItemAddedDelegate), Z_Construct_UDelegateFunction_FactoryGame_OnItemAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemAddedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemAddedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_ResizeInventoryDelegate_MetaData[] = {
		{ "Category", "Inventory" },
		{ "DisplayName", "OnInventoryResized" },
		{ "ModuleRelativePath", "FGInventoryComponent.h" },
		{ "ToolTip", "Called when this inventory has been resized" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_ResizeInventoryDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ResizeInventoryDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponent, ResizeInventoryDelegate), Z_Construct_UDelegateFunction_FactoryGame_InventoryResized__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_ResizeInventoryDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_ResizeInventoryDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mCanBeRearrange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAllowedItemDescriptors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAllowedItemDescriptors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mArbitrarySlotSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mArbitrarySlotSizes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mInventoryStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mInventoryStacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mAdjustedSizeDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_mDefaultInventorySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemRemovedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_OnItemAddedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponent_Statics::NewProp_ResizeInventoryDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGInventoryComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(UFGInventoryComponent, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGInventoryComponent_Statics::ClassParams = {
		&UFGInventoryComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGInventoryComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGInventoryComponent, 720333270);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGInventoryComponent(Z_Construct_UClass_UFGInventoryComponent, &UFGInventoryComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGInventoryComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFGInventoryComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
