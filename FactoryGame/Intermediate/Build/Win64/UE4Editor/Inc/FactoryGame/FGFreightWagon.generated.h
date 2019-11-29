// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGFreightWagon_generated_h
#error "FGFreightWagon.generated.h already included, missing '#pragma once' in FGFreightWagon.h"
#endif
#define FACTORYGAME_FGFreightWagon_generated_h

#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeInventoryComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeInventoryComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemRemovedFromFreight) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemRemovedFromFreight(Z_Param_itemClass,Z_Param_numRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemAddedToFreight) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemAddedToFreight(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFreightInventoryFilledPercent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFreightInventoryFilledPercent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFreightInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFreightInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeInventoryComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeInventoryComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemRemovedFromFreight) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemRemovedFromFreight(Z_Param_itemClass,Z_Param_numRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemAddedToFreight) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemAddedToFreight(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFreightInventoryFilledPercent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFreightInventoryFilledPercent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFreightInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFreightInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGFreightWagon(); \
	friend struct Z_Construct_UClass_AFGFreightWagon_Statics; \
public: \
	DECLARE_CLASS(AFGFreightWagon, AFGRailroadVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFreightWagon)


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGFreightWagon(); \
	friend struct Z_Construct_UClass_AFGFreightWagon_Statics; \
public: \
	DECLARE_CLASS(AFGFreightWagon, AFGRailroadVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFreightWagon)


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGFreightWagon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGFreightWagon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFreightWagon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFreightWagon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFreightWagon(AFGFreightWagon&&); \
	NO_API AFGFreightWagon(const AFGFreightWagon&); \
public:


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFreightWagon(AFGFreightWagon&&); \
	NO_API AFGFreightWagon(const AFGFreightWagon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFreightWagon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFreightWagon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGFreightWagon)


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mLaunchedCharacters() { return STRUCT_OFFSET(AFGFreightWagon, mLaunchedCharacters); } \
	FORCEINLINE static uint32 __PPO__mVehicleMovement() { return STRUCT_OFFSET(AFGFreightWagon, mVehicleMovement); } \
	FORCEINLINE static uint32 __PPO__mStorageInventory() { return STRUCT_OFFSET(AFGFreightWagon, mStorageInventory); } \
	FORCEINLINE static uint32 __PPO__mInventorySize() { return STRUCT_OFFSET(AFGFreightWagon, mInventorySize); } \
	FORCEINLINE static uint32 __PPO__mCargoMeshComponent() { return STRUCT_OFFSET(AFGFreightWagon, mCargoMeshComponent); } \
	FORCEINLINE static uint32 __PPO__mLaunchCharacterScalar() { return STRUCT_OFFSET(AFGFreightWagon, mLaunchCharacterScalar); } \
	FORCEINLINE static uint32 __PPO__mCargoOverlapCollision() { return STRUCT_OFFSET(AFGFreightWagon, mCargoOverlapCollision); }


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGFreightWagon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGFreightWagon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
