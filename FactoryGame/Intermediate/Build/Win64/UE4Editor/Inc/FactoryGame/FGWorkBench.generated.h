// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGManufacturingButton;
class AFGCharacterPlayer;
class UFGInventoryComponent;
class UFGRecipe;
#ifdef FACTORYGAME_FGWorkBench_generated_h
#error "FGWorkBench.generated.h already included, missing '#pragma once' in FGWorkBench.h"
#endif
#define FACTORYGAME_FGWorkBench_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupManufacturingButton) \
	{ \
		P_GET_OBJECT(UFGManufacturingButton,Z_Param_inButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupManufacturingButton(Z_Param_inButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveManufacturingTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActiveManufacturingTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentFatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerWorkingAtBench) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetPlayerWorkingAtBench(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManufacturingSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveIngredientsAndAwardRewards) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory); \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveIngredientsAndAwardRewards(Z_Param_inventory,Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorkBenchUser) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_newUser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorkBenchUser(Z_Param_newUser); \
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
	DECLARE_FUNCTION(execSetInventory) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_newInventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInventory(Z_Param_newInventory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorkBenchUser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetWorkBenchUser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRecipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGRecipe> *)Z_Param__Result=P_THIS->GetCurrentRecipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManufacturingProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProduce) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Produce(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsProducing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanProduce) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanProduce(Z_Param_recipe,Z_Param_inventory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupManufacturingButton) \
	{ \
		P_GET_OBJECT(UFGManufacturingButton,Z_Param_inButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupManufacturingButton(Z_Param_inButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveManufacturingTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActiveManufacturingTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentFatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerWorkingAtBench) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetPlayerWorkingAtBench(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManufacturingSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveIngredientsAndAwardRewards) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory); \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveIngredientsAndAwardRewards(Z_Param_inventory,Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorkBenchUser) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_newUser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorkBenchUser(Z_Param_newUser); \
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
	DECLARE_FUNCTION(execSetInventory) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_newInventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInventory(Z_Param_newInventory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorkBenchUser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetWorkBenchUser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRecipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGRecipe> *)Z_Param__Result=P_THIS->GetCurrentRecipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManufacturingProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProduce) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Produce(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsProducing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanProduce) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanProduce(Z_Param_recipe,Z_Param_inventory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGWorkBench(); \
	friend struct Z_Construct_UClass_UFGWorkBench_Statics; \
public: \
	DECLARE_CLASS(UFGWorkBench, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWorkBench) \
	virtual UObject* _getUObject() const override { return const_cast<UFGWorkBench*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFGWorkBench(); \
	friend struct Z_Construct_UClass_UFGWorkBench_Statics; \
public: \
	DECLARE_CLASS(UFGWorkBench, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWorkBench) \
	virtual UObject* _getUObject() const override { return const_cast<UFGWorkBench*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGWorkBench(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWorkBench) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWorkBench); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWorkBench); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWorkBench(UFGWorkBench&&); \
	NO_API UFGWorkBench(const UFGWorkBench&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWorkBench(UFGWorkBench&&); \
	NO_API UFGWorkBench(const UFGWorkBench&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWorkBench); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWorkBench); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGWorkBench)


#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPlayerWorkingAtBench() { return STRUCT_OFFSET(UFGWorkBench, mPlayerWorkingAtBench); } \
	FORCEINLINE static uint32 __PPO__mRecipeRate() { return STRUCT_OFFSET(UFGWorkBench, mRecipeRate); } \
	FORCEINLINE static uint32 __PPO__mIsProducing() { return STRUCT_OFFSET(UFGWorkBench, mIsProducing); } \
	FORCEINLINE static uint32 __PPO__mInventory() { return STRUCT_OFFSET(UFGWorkBench, mInventory); } \
	FORCEINLINE static uint32 __PPO__mFatigueMultiplier() { return STRUCT_OFFSET(UFGWorkBench, mFatigueMultiplier); } \
	FORCEINLINE static uint32 __PPO__mFatigueDecreaseSpeedMultiplier() { return STRUCT_OFFSET(UFGWorkBench, mFatigueDecreaseSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__mHoldProduceTime() { return STRUCT_OFFSET(UFGWorkBench, mHoldProduceTime); } \
	FORCEINLINE static uint32 __PPO__mManufacturingButton() { return STRUCT_OFFSET(UFGWorkBench, mManufacturingButton); } \
	FORCEINLINE static uint32 __PPO__mFatigueUpdaterInterval() { return STRUCT_OFFSET(UFGWorkBench, mFatigueUpdaterInterval); } \
	FORCEINLINE static uint32 __PPO__mRecipeDuration() { return STRUCT_OFFSET(UFGWorkBench, mRecipeDuration); } \
	FORCEINLINE static uint32 __PPO__mCooldownDelay() { return STRUCT_OFFSET(UFGWorkBench, mCooldownDelay); } \
	FORCEINLINE static uint32 __PPO__mIsFatigueEnabled() { return STRUCT_OFFSET(UFGWorkBench, mIsFatigueEnabled); }


#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_16_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGWorkBench_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGWorkBench>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGWorkBench_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
