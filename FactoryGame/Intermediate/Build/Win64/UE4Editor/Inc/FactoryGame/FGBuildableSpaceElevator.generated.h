// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGInventoryComponent;
struct FItemAmount;
#ifdef FACTORYGAME_FGBuildableSpaceElevator_generated_h
#error "FGBuildableSpaceElevator.generated.h already included, missing '#pragma once' in FGBuildableSpaceElevator.h"
#endif
#define FACTORYGAME_FGBuildableSpaceElevator_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_RPC_WRAPPERS \
	virtual void LaunchTowTruck_Implementation(); \
	virtual void UpgradeTowTruck_Implementation(); \
 \
	DECLARE_FUNCTION(execLaunchTowTruck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchTowTruck_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpgradeTowTruck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpgradeTowTruck_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReadyToUpgrade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReadyToUpgrade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffFromInventory) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_inventorySlotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PayOffFromInventory(Z_Param_inventory,Z_Param_inventorySlotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextPhaseCost) \
	{ \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_out_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNextPhaseCost(Z_Param_Out_out_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFullyUpgraded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFullyUpgraded(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LaunchTowTruck_Implementation(); \
	virtual void UpgradeTowTruck_Implementation(); \
 \
	DECLARE_FUNCTION(execLaunchTowTruck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchTowTruck_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpgradeTowTruck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpgradeTowTruck_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReadyToUpgrade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReadyToUpgrade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffFromInventory) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_inventorySlotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PayOffFromInventory(Z_Param_inventory,Z_Param_inventorySlotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextPhaseCost) \
	{ \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_out_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNextPhaseCost(Z_Param_Out_out_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFullyUpgraded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFullyUpgraded(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableSpaceElevator(); \
	friend struct Z_Construct_UClass_AFGBuildableSpaceElevator_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableSpaceElevator, AFGBuildableFactory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableSpaceElevator)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableSpaceElevator(); \
	friend struct Z_Construct_UClass_AFGBuildableSpaceElevator_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableSpaceElevator, AFGBuildableFactory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableSpaceElevator)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableSpaceElevator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableSpaceElevator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableSpaceElevator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableSpaceElevator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableSpaceElevator(AFGBuildableSpaceElevator&&); \
	NO_API AFGBuildableSpaceElevator(const AFGBuildableSpaceElevator&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableSpaceElevator(AFGBuildableSpaceElevator&&); \
	NO_API AFGBuildableSpaceElevator(const AFGBuildableSpaceElevator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableSpaceElevator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableSpaceElevator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableSpaceElevator)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mInputInventory() { return STRUCT_OFFSET(AFGBuildableSpaceElevator, mInputInventory); } \
	FORCEINLINE static uint32 __PPO__mGamePhaseManager() { return STRUCT_OFFSET(AFGBuildableSpaceElevator, mGamePhaseManager); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableSpaceElevator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
