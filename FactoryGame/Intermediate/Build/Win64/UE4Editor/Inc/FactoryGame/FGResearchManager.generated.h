// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGResearchTree;
class UFGSchematic;
enum class EResearchState : uint8;
class UFGInventoryComponent;
class AFGCharacterPlayer;
class UObject;
class AFGResearchManager;
#ifdef FACTORYGAME_FGResearchManager_generated_h
#error "FGResearchManager.generated.h already included, missing '#pragma once' in FGResearchManager.h"
#endif
#define FACTORYGAME_FGResearchManager_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResearchTime_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FResearchTime>();

#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResearchData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FResearchData>();

#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_29_DELEGATE \
struct _Script_FactoryGame_eventResearchTreeUnlocked_Parms \
{ \
	TSubclassOf<UFGResearchTree>  researchTree; \
}; \
static inline void FResearchTreeUnlocked_DelegateWrapper(const FMulticastScriptDelegate& ResearchTreeUnlocked, TSubclassOf<UFGResearchTree>  researchTree) \
{ \
	_Script_FactoryGame_eventResearchTreeUnlocked_Parms Parms; \
	Parms.researchTree=researchTree; \
	ResearchTreeUnlocked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_28_DELEGATE \
struct _Script_FactoryGame_eventResearchResultsClaimed_Parms \
{ \
	TSubclassOf<UFGSchematic>  schematic; \
}; \
static inline void FResearchResultsClaimed_DelegateWrapper(const FMulticastScriptDelegate& ResearchResultsClaimed, TSubclassOf<UFGSchematic>  schematic) \
{ \
	_Script_FactoryGame_eventResearchResultsClaimed_Parms Parms; \
	Parms.schematic=schematic; \
	ResearchResultsClaimed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_27_DELEGATE \
struct _Script_FactoryGame_eventResearchStateChangedDelegate_Parms \
{ \
	EResearchState researchState; \
}; \
static inline void FResearchStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResearchStateChangedDelegate, EResearchState researchState) \
{ \
	_Script_FactoryGame_eventResearchStateChangedDelegate_Parms Parms; \
	Parms.researchState=researchState; \
	ResearchStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_26_DELEGATE \
struct _Script_FactoryGame_eventResearchCompletedDelegate_Parms \
{ \
	TSubclassOf<UFGSchematic>  schematic; \
}; \
static inline void FResearchCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResearchCompletedDelegate, TSubclassOf<UFGSchematic>  schematic) \
{ \
	_Script_FactoryGame_eventResearchCompletedDelegate_Parms Parms; \
	Parms.schematic=schematic; \
	ResearchCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_25_DELEGATE \
struct _Script_FactoryGame_eventResearchStartedDelegate_Parms \
{ \
	TSubclassOf<UFGSchematic>  schematic; \
}; \
static inline void FResearchStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResearchStartedDelegate, TSubclassOf<UFGSchematic>  schematic) \
{ \
	_Script_FactoryGame_eventResearchStartedDelegate_Parms Parms; \
	Parms.schematic=schematic; \
	ResearchStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_RPC_WRAPPERS \
	virtual void Client_NewResearchStarted_Implementation(TSubclassOf<UFGSchematic>  research); \
 \
	DECLARE_FUNCTION(execOnResearchTimerComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchTimerComplete(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_NewResearchStarted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_research); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_NewResearchStarted_Implementation(Z_Param_research); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OngoingResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OngoingResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingRewards) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_rewards); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPendingRewards(Z_Param_schematic,Z_Param_Out_out_rewards); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitiatingResearchTree) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGResearchTree> *)Z_Param__Result=P_THIS->GetInitiatingResearchTree(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanConductMultipleResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanConductMultipleResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentResearchState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EResearchState*)Z_Param__Result=P_THIS->GetCurrentResearchState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanAffordResearch) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_playerInventory); \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanAffordResearch(Z_Param_playerInventory,Z_Param_schematic); \
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
	DECLARE_FUNCTION(execClaimResearchResults) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_instigatorPlayer); \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_GET_PROPERTY(UIntProperty,Z_Param_selectedRewardIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClaimResearchResults(Z_Param_instigatorPlayer,Z_Param_schematic,Z_Param_selectedRewardIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchBeingConducted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematic> *)Z_Param__Result=P_THIS->GetResearchBeingConducted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOngoingResearchTimeLeft) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetOngoingResearchTimeLeft(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCompletedResearch) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCompletedResearch(Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContainsAnyCompletedResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ContainsAnyCompletedResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchComplete(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchBeingConducted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchBeingConducted(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanResearchBeInitiated) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanResearchBeInitiated(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitiateResearch) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_playerInventory); \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_GET_OBJECT(UClass,Z_Param_initiatingResearchTree); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InitiateResearch(Z_Param_playerInventory,Z_Param_schematic,Z_Param_initiatingResearchTree); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResesearchTreeUnlocked) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchTree); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResesearchTreeUnlocked(Z_Param_researchTree); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllResearchTrees) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGResearchTree> ,Z_Param_Out_out_ResearchTrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllResearchTrees(Z_Param_Out_out_ResearchTrees); \
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


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_NewResearchStarted_Implementation(TSubclassOf<UFGSchematic>  research); \
 \
	DECLARE_FUNCTION(execOnResearchTimerComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchTimerComplete(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_NewResearchStarted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_research); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_NewResearchStarted_Implementation(Z_Param_research); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OngoingResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OngoingResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingRewards) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_rewards); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPendingRewards(Z_Param_schematic,Z_Param_Out_out_rewards); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitiatingResearchTree) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGResearchTree> *)Z_Param__Result=P_THIS->GetInitiatingResearchTree(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanConductMultipleResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanConductMultipleResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentResearchState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EResearchState*)Z_Param__Result=P_THIS->GetCurrentResearchState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanAffordResearch) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_playerInventory); \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanAffordResearch(Z_Param_playerInventory,Z_Param_schematic); \
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
	DECLARE_FUNCTION(execClaimResearchResults) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_instigatorPlayer); \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_GET_PROPERTY(UIntProperty,Z_Param_selectedRewardIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClaimResearchResults(Z_Param_instigatorPlayer,Z_Param_schematic,Z_Param_selectedRewardIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchBeingConducted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematic> *)Z_Param__Result=P_THIS->GetResearchBeingConducted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOngoingResearchTimeLeft) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetOngoingResearchTimeLeft(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCompletedResearch) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCompletedResearch(Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContainsAnyCompletedResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ContainsAnyCompletedResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchComplete(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchBeingConducted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchBeingConducted(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanResearchBeInitiated) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanResearchBeInitiated(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitiateResearch) \
	{ \
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_playerInventory); \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_GET_OBJECT(UClass,Z_Param_initiatingResearchTree); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InitiateResearch(Z_Param_playerInventory,Z_Param_schematic,Z_Param_initiatingResearchTree); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResesearchTreeUnlocked) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchTree); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResesearchTreeUnlocked(Z_Param_researchTree); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllResearchTrees) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGResearchTree> ,Z_Param_Out_out_ResearchTrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllResearchTrees(Z_Param_Out_out_ResearchTrees); \
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


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_EVENT_PARMS \
	struct FGResearchManager_eventClient_NewResearchStarted_Parms \
	{ \
		TSubclassOf<UFGSchematic>  research; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGResearchManager(); \
	friend struct Z_Construct_UClass_AFGResearchManager_Statics; \
public: \
	DECLARE_CLASS(AFGResearchManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResearchManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGResearchManager*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_INCLASS \
private: \
	static void StaticRegisterNativesAFGResearchManager(); \
	friend struct Z_Construct_UClass_AFGResearchManager_Statics; \
public: \
	DECLARE_CLASS(AFGResearchManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResearchManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGResearchManager*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGResearchManager(AFGResearchManager&&); \
	NO_API AFGResearchManager(const AFGResearchManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGResearchManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGResearchManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGResearchManager)


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCanConductMultipleResearch() { return STRUCT_OFFSET(AFGResearchManager, mCanConductMultipleResearch); } \
	FORCEINLINE static uint32 __PPO__mUnlockedResearchTrees() { return STRUCT_OFFSET(AFGResearchManager, mUnlockedResearchTrees); } \
	FORCEINLINE static uint32 __PPO__mCompletedResearch() { return STRUCT_OFFSET(AFGResearchManager, mCompletedResearch); } \
	FORCEINLINE static uint32 __PPO__mOngoingResearch() { return STRUCT_OFFSET(AFGResearchManager, mOngoingResearch); } \
	FORCEINLINE static uint32 __PPO__mSavedOngoingResearch() { return STRUCT_OFFSET(AFGResearchManager, mSavedOngoingResearch); }


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_113_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGResearchManager_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGResearchManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGResearchManager_h


#define FOREACH_ENUM_ERESEARCHSTATE(op) \
	op(EResearchState::ERS_NotResearching) \
	op(EResearchState::ERS_Researching) 

enum class EResearchState : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EResearchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
