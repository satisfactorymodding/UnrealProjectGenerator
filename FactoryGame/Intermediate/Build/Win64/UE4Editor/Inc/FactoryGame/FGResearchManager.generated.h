// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGResearchRecipe;
struct FCompletedResearch;
struct FResearchRecipeReward;
class AFGCharacterPlayer;
struct FItemAmount;
class UFGInventoryComponent;
class UFGItemDescriptor;
class UObject;
class AFGResearchManager;
#ifdef FACTORYGAME_FGResearchManager_generated_h
#error "FGResearchManager.generated.h already included, missing '#pragma once' in FGResearchManager.h"
#endif
#define FACTORYGAME_FGResearchManager_generated_h

#define FactoryGame_Source_FactoryGame_FGResearchManager_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompletedResearch_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FCompletedResearch>();

#define FactoryGame_Source_FactoryGame_FGResearchManager_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResearchTime_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FResearchTime>();

#define FactoryGame_Source_FactoryGame_FGResearchManager_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResearchCost_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FResearchCost>();

#define FactoryGame_Source_FactoryGame_FGResearchManager_h_19_DELEGATE \
struct _Script_FactoryGame_eventResearchNewAvailable_Parms \
{ \
	TSubclassOf<UFGResearchRecipe>  researchRecipe; \
}; \
static inline void FResearchNewAvailable_DelegateWrapper(const FMulticastScriptDelegate& ResearchNewAvailable, TSubclassOf<UFGResearchRecipe>  researchRecipe) \
{ \
	_Script_FactoryGame_eventResearchNewAvailable_Parms Parms; \
	Parms.researchRecipe=researchRecipe; \
	ResearchNewAvailable.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_18_DELEGATE \
struct _Script_FactoryGame_eventResearchResultsClaimed_Parms \
{ \
	TSubclassOf<UFGResearchRecipe>  researchRecipe; \
}; \
static inline void FResearchResultsClaimed_DelegateWrapper(const FMulticastScriptDelegate& ResearchResultsClaimed, TSubclassOf<UFGResearchRecipe>  researchRecipe) \
{ \
	_Script_FactoryGame_eventResearchResultsClaimed_Parms Parms; \
	Parms.researchRecipe=researchRecipe; \
	ResearchResultsClaimed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_17_DELEGATE \
struct _Script_FactoryGame_eventResearchCompletedDelegate_Parms \
{ \
	TSubclassOf<UFGResearchRecipe>  researchRecipe; \
}; \
static inline void FResearchCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResearchCompletedDelegate, TSubclassOf<UFGResearchRecipe>  researchRecipe) \
{ \
	_Script_FactoryGame_eventResearchCompletedDelegate_Parms Parms; \
	Parms.researchRecipe=researchRecipe; \
	ResearchCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_16_DELEGATE \
struct _Script_FactoryGame_eventPaidOffResearchDelegate_Parms \
{ \
	TSubclassOf<UFGResearchRecipe>  researchRecipe; \
}; \
static inline void FPaidOffResearchDelegate_DelegateWrapper(const FMulticastScriptDelegate& PaidOffResearchDelegate, TSubclassOf<UFGResearchRecipe>  researchRecipe) \
{ \
	_Script_FactoryGame_eventPaidOffResearchDelegate_Parms Parms; \
	Parms.researchRecipe=researchRecipe; \
	PaidOffResearchDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_15_DELEGATE \
struct _Script_FactoryGame_eventResearchStartedDelegate_Parms \
{ \
	TSubclassOf<UFGResearchRecipe>  researchRecipe; \
}; \
static inline void FResearchStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResearchStartedDelegate, TSubclassOf<UFGResearchRecipe>  researchRecipe) \
{ \
	_Script_FactoryGame_eventResearchStartedDelegate_Parms Parms; \
	Parms.researchRecipe=researchRecipe; \
	ResearchStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_221_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnResearchTimerComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchTimerComplete(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanConsumeStructurePoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanConsumeStructurePoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeStructurePoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ConsumeStructurePoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStructurePoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStructurePoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStructurePoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStructurePoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanConsumeDecorPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanConsumeDecorPoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeDecorPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ConsumeDecorPoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDecorPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDecorPoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecorPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDecorPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitiateResearch) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InitiateResearch(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyResearchBeingConducted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyResearchBeingConducted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanResearchRewardBeClaimed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanResearchRewardBeClaimed(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRewardsFromCompletedResearch) \
	{ \
		P_GET_STRUCT(FCompletedResearch,Z_Param_completedResearch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FResearchRecipeReward>*)Z_Param__Result=P_THIS->GetRewardsFromCompletedResearch(Z_Param_completedResearch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedRewardIndexByRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_completedResearch); \
		P_GET_PROPERTY(UIntProperty,Z_Param_selectedIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedRewardIndexByRecipe(Z_Param_completedResearch,Z_Param_selectedIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompletedResearchRewardByRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_completedResearch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCompletedResearch*)Z_Param__Result=P_THIS->GetCompletedResearchRewardByRecipe(Z_Param_completedResearch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClaimResearchResults) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_instigatorPlayer); \
		P_GET_OBJECT(UClass,Z_Param_completedResearch); \
		P_GET_PROPERTY(UIntProperty,Z_Param_selectedRewardIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClaimResearchResults(Z_Param_instigatorPlayer,Z_Param_completedResearch,Z_Param_selectedRewardIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCompletedResearchResultSelectable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCompletedResearchResultSelectable(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchBeingConducted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGResearchRecipe> *)Z_Param__Result=P_THIS->GetResearchBeingConducted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchDuration) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetResearchDuration(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOngoingResearchTimeLeft) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetOngoingResearchTimeLeft(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContainsAnyCompletedButUnclaimedResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ContainsAnyCompletedButUnclaimedResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchComplete(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchBeingConducted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchBeingConducted(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchAccessibleAndPaidOff) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchAccessibleAndPaidOff(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchRecipeAccessible) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchRecipeAccessible(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanResearchBeInitiated) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanResearchBeInitiated(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAccessToResearch) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipeClass); \
		P_GET_UBOOL(Z_Param_accessedViaCheats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAccessToResearch(Z_Param_researchRecipeClass,Z_Param_accessedViaCheats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCompletedAndClaimedResearch) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGResearchRecipe> ,Z_Param_Out_out_ResearchRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCompletedAndClaimedResearch(Z_Param_Out_out_ResearchRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAccessibleResearch) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGResearchRecipe> ,Z_Param_Out_out_ResearchRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllAccessibleResearch(Z_Param_Out_out_ResearchRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllResearchRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGResearchRecipe> ,Z_Param_Out_out_ResearchRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllResearchRecipes(Z_Param_Out_out_ResearchRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPayOffBalanceForResearch) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_out_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPayOffBalanceForResearch(Z_Param_researchRecipe,Z_Param_Out_out_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffFromInventory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_inventorySlotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PayOffFromInventory(Z_Param_researchRecipe,Z_Param_inventory,Z_Param_inventorySlotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffOnResearch) \
	{ \
		P_GET_STRUCT(FItemAmount,Z_Param_payOff); \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PayOffOnResearch(Z_Param_payOff,Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockResearchWithItem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockResearchWithItem(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResearchManager**)Z_Param__Result=AFGResearchManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_221_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnResearchTimerComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchTimerComplete(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanConsumeStructurePoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanConsumeStructurePoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeStructurePoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ConsumeStructurePoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStructurePoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStructurePoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStructurePoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStructurePoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanConsumeDecorPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanConsumeDecorPoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeDecorPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ConsumeDecorPoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDecorPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDecorPoints(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecorPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDecorPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitiateResearch) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InitiateResearch(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyResearchBeingConducted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyResearchBeingConducted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanResearchRewardBeClaimed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanResearchRewardBeClaimed(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRewardsFromCompletedResearch) \
	{ \
		P_GET_STRUCT(FCompletedResearch,Z_Param_completedResearch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FResearchRecipeReward>*)Z_Param__Result=P_THIS->GetRewardsFromCompletedResearch(Z_Param_completedResearch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedRewardIndexByRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_completedResearch); \
		P_GET_PROPERTY(UIntProperty,Z_Param_selectedIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedRewardIndexByRecipe(Z_Param_completedResearch,Z_Param_selectedIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompletedResearchRewardByRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_completedResearch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCompletedResearch*)Z_Param__Result=P_THIS->GetCompletedResearchRewardByRecipe(Z_Param_completedResearch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClaimResearchResults) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_instigatorPlayer); \
		P_GET_OBJECT(UClass,Z_Param_completedResearch); \
		P_GET_PROPERTY(UIntProperty,Z_Param_selectedRewardIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClaimResearchResults(Z_Param_instigatorPlayer,Z_Param_completedResearch,Z_Param_selectedRewardIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCompletedResearchResultSelectable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCompletedResearchResultSelectable(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchBeingConducted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGResearchRecipe> *)Z_Param__Result=P_THIS->GetResearchBeingConducted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchDuration) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetResearchDuration(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOngoingResearchTimeLeft) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetOngoingResearchTimeLeft(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContainsAnyCompletedButUnclaimedResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ContainsAnyCompletedButUnclaimedResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchComplete(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchBeingConducted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchBeingConducted(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchAccessibleAndPaidOff) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchAccessibleAndPaidOff(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchRecipeAccessible) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchRecipeAccessible(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanResearchBeInitiated) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanResearchBeInitiated(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAccessToResearch) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipeClass); \
		P_GET_UBOOL(Z_Param_accessedViaCheats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAccessToResearch(Z_Param_researchRecipeClass,Z_Param_accessedViaCheats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCompletedAndClaimedResearch) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGResearchRecipe> ,Z_Param_Out_out_ResearchRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCompletedAndClaimedResearch(Z_Param_Out_out_ResearchRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAccessibleResearch) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGResearchRecipe> ,Z_Param_Out_out_ResearchRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllAccessibleResearch(Z_Param_Out_out_ResearchRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllResearchRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGResearchRecipe> ,Z_Param_Out_out_ResearchRecipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllResearchRecipes(Z_Param_Out_out_ResearchRecipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPayOffBalanceForResearch) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_out_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPayOffBalanceForResearch(Z_Param_researchRecipe,Z_Param_Out_out_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffFromInventory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_inventorySlotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PayOffFromInventory(Z_Param_researchRecipe,Z_Param_inventory,Z_Param_inventorySlotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffOnResearch) \
	{ \
		P_GET_STRUCT(FItemAmount,Z_Param_payOff); \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PayOffOnResearch(Z_Param_payOff,Z_Param_researchRecipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockResearchWithItem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockResearchWithItem(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResearchManager**)Z_Param__Result=AFGResearchManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_221_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGResearchManager(); \
	friend struct Z_Construct_UClass_AFGResearchManager_Statics; \
public: \
	DECLARE_CLASS(AFGResearchManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResearchManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGResearchManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_221_INCLASS \
private: \
	static void StaticRegisterNativesAFGResearchManager(); \
	friend struct Z_Construct_UClass_AFGResearchManager_Statics; \
public: \
	DECLARE_CLASS(AFGResearchManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResearchManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGResearchManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_221_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGResearchManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGResearchManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGResearchManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGResearchManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGResearchManager(AFGResearchManager&&); \
	NO_API AFGResearchManager(const AFGResearchManager&); \
public:


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_221_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGResearchManager(AFGResearchManager&&); \
	NO_API AFGResearchManager(const AFGResearchManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGResearchManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGResearchManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGResearchManager)


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_221_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCanConductMultipleResearch() { return STRUCT_OFFSET(AFGResearchManager, mCanConductMultipleResearch); } \
	FORCEINLINE static uint32 __PPO__mDefaultStartingResearch() { return STRUCT_OFFSET(AFGResearchManager, mDefaultStartingResearch); } \
	FORCEINLINE static uint32 __PPO__mAllResearchRecipes() { return STRUCT_OFFSET(AFGResearchManager, mAllResearchRecipes); } \
	FORCEINLINE static uint32 __PPO__mResearchCosts() { return STRUCT_OFFSET(AFGResearchManager, mResearchCosts); } \
	FORCEINLINE static uint32 __PPO__mCompletedResearch() { return STRUCT_OFFSET(AFGResearchManager, mCompletedResearch); } \
	FORCEINLINE static uint32 __PPO__mOngoingResearch() { return STRUCT_OFFSET(AFGResearchManager, mOngoingResearch); } \
	FORCEINLINE static uint32 __PPO__mSavedOngoingResearch() { return STRUCT_OFFSET(AFGResearchManager, mSavedOngoingResearch); } \
	FORCEINLINE static uint32 __PPO__mDecorPoints() { return STRUCT_OFFSET(AFGResearchManager, mDecorPoints); } \
	FORCEINLINE static uint32 __PPO__mStructurePoints() { return STRUCT_OFFSET(AFGResearchManager, mStructurePoints); }


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_218_PROLOG
#define FactoryGame_Source_FactoryGame_FGResearchManager_h_221_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGResearchManager_h_221_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGResearchManager_h_221_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGResearchManager_h_221_INCLASS \
	FactoryGame_Source_FactoryGame_FGResearchManager_h_221_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGResearchManager_h_221_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGResearchManager_h_221_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGResearchManager_h_221_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGResearchManager_h_221_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGResearchManager_h_221_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGResearchManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGResearchManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
