// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
struct FVector;
class UFGInventoryComponent;
struct FInventoryStack;
struct FInventoryItem;
#ifdef FACTORYGAME_FGInventoryComponent_generated_h
#error "FGInventoryComponent.generated.h already included, missing '#pragma once' in FGInventoryComponent.h"
#endif
#define FACTORYGAME_FGInventoryComponent_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryStack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FInventoryStack>();

#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FInventoryItem>();

#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_130_DELEGATE \
struct _Script_FactoryGame_eventOnItemRemoved_Parms \
{ \
	TSubclassOf<UFGItemDescriptor>  itemClass; \
	int32 numRemoved; \
}; \
static inline void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved, TSubclassOf<UFGItemDescriptor>  itemClass, int32 numRemoved) \
{ \
	_Script_FactoryGame_eventOnItemRemoved_Parms Parms; \
	Parms.itemClass=itemClass; \
	Parms.numRemoved=numRemoved; \
	OnItemRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_128_DELEGATE \
struct _Script_FactoryGame_eventOnItemAdded_Parms \
{ \
	TSubclassOf<UFGItemDescriptor>  itemClass; \
	int32 numAdded; \
}; \
static inline void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, TSubclassOf<UFGItemDescriptor>  itemClass, int32 numAdded) \
{ \
	_Script_FactoryGame_eventOnItemAdded_Parms Parms; \
	Parms.itemClass=itemClass; \
	Parms.numAdded=numAdded; \
	OnItemAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_126_DELEGATE \
struct _Script_FactoryGame_eventGetItemDropLocation_Parms \
{ \
	const UFGInventoryComponent* component; \
	FInventoryStack stack; \
	FVector ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_FactoryGame_eventGetItemDropLocation_Parms() \
		: ReturnValue(ForceInit) \
	{ \
	} \
}; \
static inline FVector FGetItemDropLocation_DelegateWrapper(const FScriptDelegate& GetItemDropLocation, const UFGInventoryComponent* component, FInventoryStack stack) \
{ \
	_Script_FactoryGame_eventGetItemDropLocation_Parms Parms; \
	Parms.component=component; \
	Parms.stack=stack; \
	GetItemDropLocation.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_14_DELEGATE \
struct _Script_FactoryGame_eventInventoryResized_Parms \
{ \
	int32 oldSize; \
	int32 newSize; \
}; \
static inline void FInventoryResized_DelegateWrapper(const FMulticastScriptDelegate& InventoryResized, int32 oldSize, int32 newSize) \
{ \
	_Script_FactoryGame_eventInventoryResized_Parms Parms; \
	Parms.oldSize=oldSize; \
	Parms.newSize=newSize; \
	InventoryResized.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_RPC_WRAPPERS \
	virtual bool Server_SortInventory_Validate(); \
	virtual void Server_SortInventory_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_InventoryStacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InventoryStacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanBeRearranged) \
	{ \
		P_GET_UBOOL(Z_Param_canBeRearranged); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanBeRearranged(Z_Param_canBeRearranged); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanBeRearranged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCanBeRearranged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitStackAtIdx) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numItemsToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitStackAtIdx(Z_Param_idx,Z_Param_numItemsToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSplitStackAtIdx) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSplitStackAtIdx(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowedItemOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_OBJECT(UClass,Z_Param_allowedItemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowedItemOnIndex(Z_Param_idx,Z_Param_allowedItemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowedItemOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetAllowedItemOnIndex(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_OBJECT(UClass,Z_Param_itemDesc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSlotSize(Z_Param_index,Z_Param_itemDesc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveArbitrarySlotSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveArbitrarySlotSize(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddArbitrarySlotSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_arbitrarySlotSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddArbitrarySlotSize(Z_Param_index,Z_Param_arbitrarySlotSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantStackIndexes) \
	{ \
		P_GET_TARRAY(TSubclassOf<UFGItemDescriptor> ,Z_Param_relevantClasses); \
		P_GET_PROPERTY(UIntProperty,Z_Param_stackLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetRelevantStackIndexes(Z_Param_relevantClasses,Z_Param_stackLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventoryStacks) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_out_stacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetInventoryStacks(Z_Param_Out_out_stacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullestStackIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFullestStackIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSizeLinear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSizeLinear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEnoughSpaceForItem) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasEnoughSpaceForItem(Z_Param_Out_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEnoughSpaceForStack) \
	{ \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasEnoughSpaceForStack(Z_Param_Out_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEnoughSpaceForStacks) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_stacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasEnoughSpaceForStacks(Z_Param_Out_stacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumItems) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumItems(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasItems) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasItems(Z_Param_itemClass,Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Empty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSomethingOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSomethingOnIndex(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsIndexEmpty) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsIndexEmpty(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEmpty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllFromIndex(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromIndex(Z_Param_idx,Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemove) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Remove(Z_Param_itemClass,Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_out_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetStackFromIndex(Z_Param_idx,Z_Param_Out_out_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStackToIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_GET_UBOOL(Z_Param_allowPartial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddStackToIndex(Z_Param_idx,Z_Param_Out_stack,Z_Param_allowPartial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStacks) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_stacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStacks(Z_Param_Out_stacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStack) \
	{ \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_GET_UBOOL(Z_Param_allowPartialAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddStack(Z_Param_Out_stack,Z_Param_allowPartialAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindEmptyIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindEmptyIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidIndex(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAuthority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAuthority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SortInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SortInventory_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SortInventory_Validate")); \
			return; \
		} \
		P_THIS->Server_SortInventory_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Resize(Z_Param_newSize); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SortInventory_Validate(); \
	virtual void Server_SortInventory_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_InventoryStacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InventoryStacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanBeRearranged) \
	{ \
		P_GET_UBOOL(Z_Param_canBeRearranged); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanBeRearranged(Z_Param_canBeRearranged); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanBeRearranged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCanBeRearranged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitStackAtIdx) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numItemsToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitStackAtIdx(Z_Param_idx,Z_Param_numItemsToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSplitStackAtIdx) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSplitStackAtIdx(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowedItemOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_OBJECT(UClass,Z_Param_allowedItemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowedItemOnIndex(Z_Param_idx,Z_Param_allowedItemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowedItemOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetAllowedItemOnIndex(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_OBJECT(UClass,Z_Param_itemDesc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSlotSize(Z_Param_index,Z_Param_itemDesc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveArbitrarySlotSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveArbitrarySlotSize(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddArbitrarySlotSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_arbitrarySlotSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddArbitrarySlotSize(Z_Param_index,Z_Param_arbitrarySlotSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantStackIndexes) \
	{ \
		P_GET_TARRAY(TSubclassOf<UFGItemDescriptor> ,Z_Param_relevantClasses); \
		P_GET_PROPERTY(UIntProperty,Z_Param_stackLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetRelevantStackIndexes(Z_Param_relevantClasses,Z_Param_stackLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventoryStacks) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_out_stacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetInventoryStacks(Z_Param_Out_out_stacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullestStackIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFullestStackIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSizeLinear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSizeLinear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEnoughSpaceForItem) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasEnoughSpaceForItem(Z_Param_Out_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEnoughSpaceForStack) \
	{ \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasEnoughSpaceForStack(Z_Param_Out_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEnoughSpaceForStacks) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_stacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasEnoughSpaceForStacks(Z_Param_Out_stacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumItems) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumItems(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasItems) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasItems(Z_Param_itemClass,Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Empty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSomethingOnIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSomethingOnIndex(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsIndexEmpty) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsIndexEmpty(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEmpty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllFromIndex(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromIndex(Z_Param_idx,Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemove) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Remove(Z_Param_itemClass,Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_out_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetStackFromIndex(Z_Param_idx,Z_Param_Out_out_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStackToIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_GET_UBOOL(Z_Param_allowPartial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddStackToIndex(Z_Param_idx,Z_Param_Out_stack,Z_Param_allowPartial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStacks) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_stacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStacks(Z_Param_Out_stacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStack) \
	{ \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_GET_UBOOL(Z_Param_allowPartialAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddStack(Z_Param_Out_stack,Z_Param_allowPartialAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindEmptyIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindEmptyIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidIndex(Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAuthority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAuthority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SortInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SortInventory_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SortInventory_Validate")); \
			return; \
		} \
		P_THIS->Server_SortInventory_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Resize(Z_Param_newSize); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFGInventoryComponent, NO_API)


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGInventoryComponent(); \
	friend struct Z_Construct_UClass_UFGInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UFGInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInventoryComponent) \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFGInventoryComponent*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_INCLASS \
private: \
	static void StaticRegisterNativesUFGInventoryComponent(); \
	friend struct Z_Construct_UClass_UFGInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UFGInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInventoryComponent) \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFGInventoryComponent*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInventoryComponent(UFGInventoryComponent&&); \
	NO_API UFGInventoryComponent(const UFGInventoryComponent&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInventoryComponent(UFGInventoryComponent&&); \
	NO_API UFGInventoryComponent(const UFGInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGInventoryComponent)


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDefaultInventorySize() { return STRUCT_OFFSET(UFGInventoryComponent, mDefaultInventorySize); } \
	FORCEINLINE static uint32 __PPO__mAdjustedSizeDiff() { return STRUCT_OFFSET(UFGInventoryComponent, mAdjustedSizeDiff); } \
	FORCEINLINE static uint32 __PPO__mInventoryStacks() { return STRUCT_OFFSET(UFGInventoryComponent, mInventoryStacks); } \
	FORCEINLINE static uint32 __PPO__mArbitrarySlotSizes() { return STRUCT_OFFSET(UFGInventoryComponent, mArbitrarySlotSizes); } \
	FORCEINLINE static uint32 __PPO__mAllowedItemDescriptors() { return STRUCT_OFFSET(UFGInventoryComponent, mAllowedItemDescriptors); } \
	FORCEINLINE static uint32 __PPO__mCanBeRearrange() { return STRUCT_OFFSET(UFGInventoryComponent, mCanBeRearrange); }


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_138_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
