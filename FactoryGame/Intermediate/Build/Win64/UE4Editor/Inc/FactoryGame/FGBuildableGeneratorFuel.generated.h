// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UFGItemDescriptor;
enum class EResourceForm : uint8;
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGBuildableGeneratorFuel_generated_h
#error "FGBuildableGeneratorFuel.generated.h already included, missing '#pragma once' in FGBuildableGeneratorFuel.h"
#endif
#define FACTORYGAME_FGBuildableGeneratorFuel_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_FuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FuelInventory(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetSupplementalResourceClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetSupplementalResourceClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableFuelClasses) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemDescriptor> >*)Z_Param__Result=P_THIS->GetAvailableFuelClasses(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFuelClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetCurrentFuelClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupplementalAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSupplementalAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFuelAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupplementalConsumptionRateMaximum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSupplementalConsumptionRateMaximum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupplementalConsumptionRateCurrent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSupplementalConsumptionRateCurrent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequiresSupplementalResource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRequiresSupplementalResource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSuppleentalResource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSuppleentalResource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelResourceForm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EResourceForm*)Z_Param__Result=P_THIS->GetFuelResourceForm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFuel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFuelInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSupplementalResource) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidSupplementalResource(Z_Param_resource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidFuel) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidFuel(Z_Param_resource); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_FuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FuelInventory(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetSupplementalResourceClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetSupplementalResourceClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableFuelClasses) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemDescriptor> >*)Z_Param__Result=P_THIS->GetAvailableFuelClasses(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFuelClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetCurrentFuelClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupplementalAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSupplementalAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFuelAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupplementalConsumptionRateMaximum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSupplementalConsumptionRateMaximum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupplementalConsumptionRateCurrent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSupplementalConsumptionRateCurrent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequiresSupplementalResource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRequiresSupplementalResource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSuppleentalResource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSuppleentalResource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelResourceForm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EResourceForm*)Z_Param__Result=P_THIS->GetFuelResourceForm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFuel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFuelInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSupplementalResource) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidSupplementalResource(Z_Param_resource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidFuel) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidFuel(Z_Param_resource); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableGeneratorFuel(); \
	friend struct Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableGeneratorFuel, AFGBuildableGenerator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableGeneratorFuel)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableGeneratorFuel(); \
	friend struct Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableGeneratorFuel, AFGBuildableGenerator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableGeneratorFuel)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableGeneratorFuel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableGeneratorFuel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableGeneratorFuel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableGeneratorFuel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableGeneratorFuel(AFGBuildableGeneratorFuel&&); \
	NO_API AFGBuildableGeneratorFuel(const AFGBuildableGeneratorFuel&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableGeneratorFuel(AFGBuildableGeneratorFuel&&); \
	NO_API AFGBuildableGeneratorFuel(const AFGBuildableGeneratorFuel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableGeneratorFuel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableGeneratorFuel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableGeneratorFuel)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFuelInventoryHandler() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelInventoryHandler); } \
	FORCEINLINE static uint32 __PPO__mFuelClasses_DEPRECATED() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelClasses_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__mDefaultFuelClasses() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mDefaultFuelClasses); } \
	FORCEINLINE static uint32 __PPO__mAvailableFuelClasses() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mAvailableFuelClasses); } \
	FORCEINLINE static uint32 __PPO__mFuelResourceForm() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelResourceForm); } \
	FORCEINLINE static uint32 __PPO__mRequiresSupplementalResource() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mRequiresSupplementalResource); } \
	FORCEINLINE static uint32 __PPO__mSupplementalResourceClass() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mSupplementalResourceClass); } \
	FORCEINLINE static uint32 __PPO__mSupplementalLoadAmount() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mSupplementalLoadAmount); } \
	FORCEINLINE static uint32 __PPO__mSupplementalToPowerRatio() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mSupplementalToPowerRatio); } \
	FORCEINLINE static uint32 __PPO__mFuelInventory() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelInventory); } \
	FORCEINLINE static uint32 __PPO__mCachedInputConnections() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCachedInputConnections); } \
	FORCEINLINE static uint32 __PPO__mCachedPipeInputConnections() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCachedPipeInputConnections); } \
	FORCEINLINE static uint32 __PPO__mCurrentFuelAmount() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCurrentFuelAmount); } \
	FORCEINLINE static uint32 __PPO__mCurrentSupplementalAmount() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCurrentSupplementalAmount); } \
	FORCEINLINE static uint32 __PPO__mHasFuelCached() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mHasFuelCached); } \
	FORCEINLINE static uint32 __PPO__mHasSupplementalCached() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mHasSupplementalCached); } \
	FORCEINLINE static uint32 __PPO__mCurrentFuelClass() { return STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCurrentFuelClass); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_19_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableGeneratorFuel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableGeneratorFuel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
