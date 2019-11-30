// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
struct FDropPackage;
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGDropPod_generated_h
#error "FGDropPod.generated.h already included, missing '#pragma once' in FGDropPod.h"
#endif
#define FACTORYGAME_FGDropPod_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_RPC_WRAPPERS \
	virtual void RollLoot_Implementation(); \
	virtual void OnOpened_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HasBeenOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HasBeenOpened(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateDropPodInventory) \
	{ \
		P_GET_TARRAY(TSubclassOf<UFGItemDescriptor> ,Z_Param_includedItems); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numItemsCreated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateDropPodInventory(Z_Param_includedItems,Z_Param_numItemsCreated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRollDropPackage) \
	{ \
		P_GET_TARRAY(TSubclassOf<UFGItemDescriptor> ,Z_Param_includedItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDropPackage*)Z_Param__Result=P_THIS->RollDropPackage(Z_Param_includedItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRollLoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RollLoot_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOpened_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Open(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLootInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetLootInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBeenOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBeenOpened(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RollLoot_Implementation(); \
	virtual void OnOpened_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HasBeenOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HasBeenOpened(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateDropPodInventory) \
	{ \
		P_GET_TARRAY(TSubclassOf<UFGItemDescriptor> ,Z_Param_includedItems); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numItemsCreated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateDropPodInventory(Z_Param_includedItems,Z_Param_numItemsCreated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRollDropPackage) \
	{ \
		P_GET_TARRAY(TSubclassOf<UFGItemDescriptor> ,Z_Param_includedItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDropPackage*)Z_Param__Result=P_THIS->RollDropPackage(Z_Param_includedItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRollLoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RollLoot_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOpened_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Open(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLootInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetLootInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBeenOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBeenOpened(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGDropPod(); \
	friend struct Z_Construct_UClass_AFGDropPod_Statics; \
public: \
	DECLARE_CLASS(AFGDropPod, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDropPod) \
	virtual UObject* _getUObject() const override { return const_cast<AFGDropPod*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGDropPod(); \
	friend struct Z_Construct_UClass_AFGDropPod_Statics; \
public: \
	DECLARE_CLASS(AFGDropPod, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDropPod) \
	virtual UObject* _getUObject() const override { return const_cast<AFGDropPod*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGDropPod(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGDropPod) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDropPod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDropPod); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDropPod(AFGDropPod&&); \
	NO_API AFGDropPod(const AFGDropPod&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDropPod(AFGDropPod&&); \
	NO_API AFGDropPod(const AFGDropPod&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDropPod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDropPod); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGDropPod)


#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAmountOfInventorySlots() { return STRUCT_OFFSET(AFGDropPod, mAmountOfInventorySlots); } \
	FORCEINLINE static uint32 __PPO__mHasBeenOpened() { return STRUCT_OFFSET(AFGDropPod, mHasBeenOpened); } \
	FORCEINLINE static uint32 __PPO__mInventory() { return STRUCT_OFFSET(AFGDropPod, mInventory); }


#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_15_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGDropPod_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGDropPod_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
