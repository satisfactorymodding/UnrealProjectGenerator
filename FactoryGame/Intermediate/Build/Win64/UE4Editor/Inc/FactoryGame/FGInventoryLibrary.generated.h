// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemAmount;
struct FInventoryStack;
class UFGInventoryComponent;
class UFGItemDescriptor;
struct FInventoryItem;
class AActor;
#ifdef FACTORYGAME_FGInventoryLibrary_generated_h
#error "FGInventoryLibrary.generated.h already included, missing '#pragma once' in FGInventoryLibrary.h"
#endif
#define FACTORYGAME_FGInventoryLibrary_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConsolidateItemsAmount) \
	{ \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_items); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::ConsolidateItemsAmount(Z_Param_Out_items); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeInventoryItem) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_items); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::MergeInventoryItem(Z_Param_Out_items,Z_Param_Out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinNumSlotsForItems) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_items); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGInventoryLibrary::GetMinNumSlotsForItems(Z_Param_Out_items); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsolidateInventoryItems) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_items); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::ConsolidateInventoryItems(Z_Param_Out_items); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabAllItemsFromInventory) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_sourceComponent); \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_destinationComponent); \
		P_GET_OBJECT(UClass,Z_Param_onlyGrabOfDesc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::GrabAllItemsFromInventory(Z_Param_sourceComponent,Z_Param_destinationComponent,Z_Param_onlyGrabOfDesc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveInventoryItem) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_sourceComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_sourceIdx); \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_destinationComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_destinationIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::MoveInventoryItem(Z_Param_sourceComponent,Z_Param_sourceIdx,Z_Param_destinationComponent,Z_Param_destinationIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasItems) \
	{ \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::HasItems(Z_Param_Out_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasState) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::HasState(Z_Param_Out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidItem) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::IsValidItem(Z_Param_Out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeInventoryStack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numItems); \
		P_GET_STRUCT(FInventoryItem,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInventoryStack*)Z_Param__Result=UFGInventoryLibrary::MakeInventoryStack(Z_Param_numItems,Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeInventoryItem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInventoryItem*)Z_Param__Result=UFGInventoryLibrary::MakeInventoryItem(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakInventoryItem) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_item); \
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UFGItemDescriptor> ,Z_Param_Out_out_itemClass); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_out_itemState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::BreakInventoryItem(Z_Param_Out_item,Z_Param_Out_out_itemClass,Z_Param_Out_out_itemState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakInventoryStack) \
	{ \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_numItems); \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::BreakInventoryStack(Z_Param_Out_stack,Z_Param_Out_out_numItems,Z_Param_Out_out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInventoryComponentOfClass) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_owner); \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=UFGInventoryLibrary::CreateInventoryComponentOfClass(Z_Param_owner,Z_Param_inClass,Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInventoryComponent) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_owner); \
		P_GET_PROPERTY(UNameProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=UFGInventoryLibrary::CreateInventoryComponent(Z_Param_owner,Z_Param_name); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConsolidateItemsAmount) \
	{ \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_items); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::ConsolidateItemsAmount(Z_Param_Out_items); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeInventoryItem) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_items); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::MergeInventoryItem(Z_Param_Out_items,Z_Param_Out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinNumSlotsForItems) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_items); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGInventoryLibrary::GetMinNumSlotsForItems(Z_Param_Out_items); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsolidateInventoryItems) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_items); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::ConsolidateInventoryItems(Z_Param_Out_items); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabAllItemsFromInventory) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_sourceComponent); \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_destinationComponent); \
		P_GET_OBJECT(UClass,Z_Param_onlyGrabOfDesc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::GrabAllItemsFromInventory(Z_Param_sourceComponent,Z_Param_destinationComponent,Z_Param_onlyGrabOfDesc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveInventoryItem) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_sourceComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_sourceIdx); \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_destinationComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_destinationIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::MoveInventoryItem(Z_Param_sourceComponent,Z_Param_sourceIdx,Z_Param_destinationComponent,Z_Param_destinationIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasItems) \
	{ \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::HasItems(Z_Param_Out_stack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasState) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::HasState(Z_Param_Out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidItem) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInventoryLibrary::IsValidItem(Z_Param_Out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeInventoryStack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numItems); \
		P_GET_STRUCT(FInventoryItem,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInventoryStack*)Z_Param__Result=UFGInventoryLibrary::MakeInventoryStack(Z_Param_numItems,Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeInventoryItem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInventoryItem*)Z_Param__Result=UFGInventoryLibrary::MakeInventoryItem(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakInventoryItem) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_item); \
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UFGItemDescriptor> ,Z_Param_Out_out_itemClass); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_out_itemState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::BreakInventoryItem(Z_Param_Out_item,Z_Param_Out_out_itemClass,Z_Param_Out_out_itemState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakInventoryStack) \
	{ \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_stack); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_numItems); \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInventoryLibrary::BreakInventoryStack(Z_Param_Out_stack,Z_Param_Out_out_numItems,Z_Param_Out_out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInventoryComponentOfClass) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_owner); \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=UFGInventoryLibrary::CreateInventoryComponentOfClass(Z_Param_owner,Z_Param_inClass,Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInventoryComponent) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_owner); \
		P_GET_PROPERTY(UNameProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=UFGInventoryLibrary::CreateInventoryComponent(Z_Param_owner,Z_Param_name); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGInventoryLibrary(); \
	friend struct Z_Construct_UClass_UFGInventoryLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGInventoryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInventoryLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFGInventoryLibrary(); \
	friend struct Z_Construct_UClass_UFGInventoryLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGInventoryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInventoryLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInventoryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInventoryLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInventoryLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInventoryLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInventoryLibrary(UFGInventoryLibrary&&); \
	NO_API UFGInventoryLibrary(const UFGInventoryLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInventoryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInventoryLibrary(UFGInventoryLibrary&&); \
	NO_API UFGInventoryLibrary(const UFGInventoryLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInventoryLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInventoryLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInventoryLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGInventoryLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGInventoryLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
