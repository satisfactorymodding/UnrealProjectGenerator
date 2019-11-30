// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGBuildableDockingStation_generated_h
#error "FGBuildableDockingStation.generated.h already included, missing '#pragma once' in FGBuildableDockingStation.h"
#endif
#define FACTORYGAME_FGBuildableDockingStation_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFilterFuelClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_object); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FilterFuelClasses(Z_Param_object,Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FuelInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoadUnloading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoadUnloading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInLoadMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInLoadMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsInLoadMode) \
	{ \
		P_GET_UBOOL(Z_Param_isInLoadMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsInLoadMode(Z_Param_isInLoadMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUndock) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Undock(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDock) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Dock(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDockedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetDockedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFuelInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilterFuelClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_object); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FilterFuelClasses(Z_Param_object,Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FuelInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoadUnloading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoadUnloading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInLoadMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInLoadMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsInLoadMode) \
	{ \
		P_GET_UBOOL(Z_Param_isInLoadMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsInLoadMode(Z_Param_isInLoadMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUndock) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Undock(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDock) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Dock(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDockedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetDockedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFuelInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableDockingStation(); \
	friend struct Z_Construct_UClass_AFGBuildableDockingStation_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableDockingStation, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableDockingStation)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableDockingStation(); \
	friend struct Z_Construct_UClass_AFGBuildableDockingStation_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableDockingStation, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableDockingStation)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableDockingStation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableDockingStation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableDockingStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableDockingStation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableDockingStation(AFGBuildableDockingStation&&); \
	NO_API AFGBuildableDockingStation(const AFGBuildableDockingStation&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableDockingStation(AFGBuildableDockingStation&&); \
	NO_API AFGBuildableDockingStation(const AFGBuildableDockingStation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableDockingStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableDockingStation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableDockingStation)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mStorageSizeX() { return STRUCT_OFFSET(AFGBuildableDockingStation, mStorageSizeX); } \
	FORCEINLINE static uint32 __PPO__mStorageSizeY() { return STRUCT_OFFSET(AFGBuildableDockingStation, mStorageSizeY); } \
	FORCEINLINE static uint32 __PPO__mTransferSpeed() { return STRUCT_OFFSET(AFGBuildableDockingStation, mTransferSpeed); } \
	FORCEINLINE static uint32 __PPO__mFuelTransferSpeed() { return STRUCT_OFFSET(AFGBuildableDockingStation, mFuelTransferSpeed); } \
	FORCEINLINE static uint32 __PPO__mTransferProgress() { return STRUCT_OFFSET(AFGBuildableDockingStation, mTransferProgress); } \
	FORCEINLINE static uint32 __PPO__mFuelInventoryHandler() { return STRUCT_OFFSET(AFGBuildableDockingStation, mFuelInventoryHandler); } \
	FORCEINLINE static uint32 __PPO__mInventoryHandler() { return STRUCT_OFFSET(AFGBuildableDockingStation, mInventoryHandler); } \
	FORCEINLINE static uint32 __PPO__mDockedActor() { return STRUCT_OFFSET(AFGBuildableDockingStation, mDockedActor); } \
	FORCEINLINE static uint32 __PPO__mIsInLoadMode() { return STRUCT_OFFSET(AFGBuildableDockingStation, mIsInLoadMode); } \
	FORCEINLINE static uint32 __PPO__mStackTransferSize() { return STRUCT_OFFSET(AFGBuildableDockingStation, mStackTransferSize); } \
	FORCEINLINE static uint32 __PPO__mIsLoadUnloading() { return STRUCT_OFFSET(AFGBuildableDockingStation, mIsLoadUnloading); } \
	FORCEINLINE static uint32 __PPO__mInventory() { return STRUCT_OFFSET(AFGBuildableDockingStation, mInventory); } \
	FORCEINLINE static uint32 __PPO__mFuelInventory() { return STRUCT_OFFSET(AFGBuildableDockingStation, mFuelInventory); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_17_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableDockingStation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDockingStation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
