// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FInventoryStack;
struct FVector;
struct FRotator;
class UObject;
class AFGItemPickup_Spawnable;
#ifdef FACTORYGAME_FGItemPickup_Spawnable_generated_h
#error "FGItemPickup_Spawnable.generated.h already included, missing '#pragma once' in FGItemPickup_Spawnable.h"
#endif
#define FACTORYGAME_FGItemPickup_Spawnable_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindGroundLocationInfrontOfActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_sourceActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_offsetLength); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_item); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_out_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AFGItemPickup_Spawnable::FindGroundLocationInfrontOfActor(Z_Param_sourceActor,Z_Param_offsetLength,Z_Param_Out_item,Z_Param_Out_out_location,Z_Param_Out_out_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindGroundLocationAndRotation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT(FVector,Z_Param_fromLocation); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_actorsToIgnore); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_out_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AFGItemPickup_Spawnable::FindGroundLocationAndRotation(Z_Param_worldContext,Z_Param_fromLocation,Z_Param_Out_actorsToIgnore,Z_Param_Out_out_location,Z_Param_Out_out_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateItemDropsInCylinder) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_items); \
		P_GET_STRUCT(FVector,Z_Param_aroundLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_sphereRadius); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_actorsToIgnore); \
		P_GET_TARRAY_REF(AFGItemPickup_Spawnable*,Z_Param_Out_out_itemDrops); \
		P_GET_OBJECT(UClass,Z_Param_itemDropClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AFGItemPickup_Spawnable::CreateItemDropsInCylinder(Z_Param_worldContext,Z_Param_Out_items,Z_Param_aroundLocation,Z_Param_sphereRadius,Z_Param_Out_actorsToIgnore,Z_Param_Out_out_itemDrops,Z_Param_itemDropClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateItemDrop) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_item); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_STRUCT(FRotator,Z_Param_spawnRotation); \
		P_GET_OBJECT(UClass,Z_Param_itemDropClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGItemPickup_Spawnable**)Z_Param__Result=AFGItemPickup_Spawnable::CreateItemDrop(Z_Param_worldContext,Z_Param_Out_item,Z_Param_spawnLocation,Z_Param_spawnRotation,Z_Param_itemDropClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToWorldStackAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_item); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_STRUCT(FRotator,Z_Param_spawnRotation); \
		P_GET_OBJECT(UClass,Z_Param_itemDropClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGItemPickup_Spawnable**)Z_Param__Result=AFGItemPickup_Spawnable::AddItemToWorldStackAtLocation(Z_Param_worldContext,Z_Param_Out_item,Z_Param_spawnLocation,Z_Param_spawnRotation,Z_Param_itemDropClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindGroundLocationInfrontOfActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_sourceActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_offsetLength); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_item); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_out_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AFGItemPickup_Spawnable::FindGroundLocationInfrontOfActor(Z_Param_sourceActor,Z_Param_offsetLength,Z_Param_Out_item,Z_Param_Out_out_location,Z_Param_Out_out_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindGroundLocationAndRotation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT(FVector,Z_Param_fromLocation); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_actorsToIgnore); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_out_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AFGItemPickup_Spawnable::FindGroundLocationAndRotation(Z_Param_worldContext,Z_Param_fromLocation,Z_Param_Out_actorsToIgnore,Z_Param_Out_out_location,Z_Param_Out_out_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateItemDropsInCylinder) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_items); \
		P_GET_STRUCT(FVector,Z_Param_aroundLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_sphereRadius); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_actorsToIgnore); \
		P_GET_TARRAY_REF(AFGItemPickup_Spawnable*,Z_Param_Out_out_itemDrops); \
		P_GET_OBJECT(UClass,Z_Param_itemDropClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AFGItemPickup_Spawnable::CreateItemDropsInCylinder(Z_Param_worldContext,Z_Param_Out_items,Z_Param_aroundLocation,Z_Param_sphereRadius,Z_Param_Out_actorsToIgnore,Z_Param_Out_out_itemDrops,Z_Param_itemDropClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateItemDrop) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_item); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_STRUCT(FRotator,Z_Param_spawnRotation); \
		P_GET_OBJECT(UClass,Z_Param_itemDropClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGItemPickup_Spawnable**)Z_Param__Result=AFGItemPickup_Spawnable::CreateItemDrop(Z_Param_worldContext,Z_Param_Out_item,Z_Param_spawnLocation,Z_Param_spawnRotation,Z_Param_itemDropClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToWorldStackAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FInventoryStack,Z_Param_Out_item); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_STRUCT(FRotator,Z_Param_spawnRotation); \
		P_GET_OBJECT(UClass,Z_Param_itemDropClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGItemPickup_Spawnable**)Z_Param__Result=AFGItemPickup_Spawnable::AddItemToWorldStackAtLocation(Z_Param_worldContext,Z_Param_Out_item,Z_Param_spawnLocation,Z_Param_spawnRotation,Z_Param_itemDropClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGItemPickup_Spawnable(); \
	friend struct Z_Construct_UClass_AFGItemPickup_Spawnable_Statics; \
public: \
	DECLARE_CLASS(AFGItemPickup_Spawnable, AFGItemPickup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGItemPickup_Spawnable)


#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFGItemPickup_Spawnable(); \
	friend struct Z_Construct_UClass_AFGItemPickup_Spawnable_Statics; \
public: \
	DECLARE_CLASS(AFGItemPickup_Spawnable, AFGItemPickup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGItemPickup_Spawnable)


#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGItemPickup_Spawnable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGItemPickup_Spawnable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGItemPickup_Spawnable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGItemPickup_Spawnable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGItemPickup_Spawnable(AFGItemPickup_Spawnable&&); \
	NO_API AFGItemPickup_Spawnable(const AFGItemPickup_Spawnable&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGItemPickup_Spawnable(AFGItemPickup_Spawnable&&); \
	NO_API AFGItemPickup_Spawnable(const AFGItemPickup_Spawnable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGItemPickup_Spawnable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGItemPickup_Spawnable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGItemPickup_Spawnable)


#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMeshComponent() { return STRUCT_OFFSET(AFGItemPickup_Spawnable, mMeshComponent); } \
	FORCEINLINE static uint32 __PPO__mPlaySpawnEffect() { return STRUCT_OFFSET(AFGItemPickup_Spawnable, mPlaySpawnEffect); }


#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_12_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGItemPickup_Spawnable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
