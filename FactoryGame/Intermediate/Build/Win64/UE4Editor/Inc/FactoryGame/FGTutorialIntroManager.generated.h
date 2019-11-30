// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
enum class EIntroTutorialSteps : uint8;
class UFGSchematic;
class AFGBuildable;
class AFGPlayerController;
class UObject;
class AFGTutorialIntroManager;
#ifdef FACTORYGAME_FGTutorialIntroManager_generated_h
#error "FGTutorialIntroManager.generated.h already included, missing '#pragma once' in FGTutorialIntroManager.h"
#endif
#define FACTORYGAME_FGTutorialIntroManager_generated_h

#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialHintData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FTutorialHintData>();

#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_16_DELEGATE \
static inline void FIntroSequenceStateUpdate_DelegateWrapper(const FMulticastScriptDelegate& IntroSequenceStateUpdate) \
{ \
	IntroSequenceStateUpdate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_TradingPostLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TradingPostLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasTradingpostBeenBuilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasTradingpostBeenBuilt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayerAddedItemToArmSlot) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerAddedItemToArmSlot(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayerAddedItemToInventory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerAddedItemToInventory(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTutorial) \
	{ \
		P_GET_ENUM(EIntroTutorialSteps,Z_Param_nextTutorialStep); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTutorial(EIntroTutorialSteps(Z_Param_nextTutorialStep)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSchematicPurchased) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSchematicPurchased(Z_Param_newSchematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBuildingBuiltGlobal) \
	{ \
		P_GET_OBJECT(AFGBuildable,Z_Param_buildable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBuildingBuiltGlobal(Z_Param_buildable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanSkipTutorial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCanSkipTutorial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanSkipTutorialIntro) \
	{ \
		P_GET_UBOOL(Z_Param_canSkip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanSkipTutorialIntro(Z_Param_canSkip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntroDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntroDone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompleteTutorial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CompleteTutorial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTradingPostLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTradingPostLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedProgressToSkip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNormalizedProgressToSkip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndSkipIntroSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndSkipIntroSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelSkipIntroSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelSkipIntroSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSkipIntroSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSkipIntroSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputGatesFromTutorialLevel) \
	{ \
		P_GET_OBJECT(AFGPlayerController,Z_Param_playerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputGatesFromTutorialLevel(Z_Param_playerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTutorialStep) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EIntroTutorialSteps*)Z_Param__Result=P_THIS->GetCurrentTutorialStep(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsTutorialCompleted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsTutorialCompleted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsIntroSequenceDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsIntroSequenceDone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTutorialIntroManager**)Z_Param__Result=AFGTutorialIntroManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_TradingPostLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TradingPostLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasTradingpostBeenBuilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasTradingpostBeenBuilt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayerAddedItemToArmSlot) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerAddedItemToArmSlot(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayerAddedItemToInventory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerAddedItemToInventory(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTutorial) \
	{ \
		P_GET_ENUM(EIntroTutorialSteps,Z_Param_nextTutorialStep); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTutorial(EIntroTutorialSteps(Z_Param_nextTutorialStep)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSchematicPurchased) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSchematicPurchased(Z_Param_newSchematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBuildingBuiltGlobal) \
	{ \
		P_GET_OBJECT(AFGBuildable,Z_Param_buildable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBuildingBuiltGlobal(Z_Param_buildable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanSkipTutorial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCanSkipTutorial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanSkipTutorialIntro) \
	{ \
		P_GET_UBOOL(Z_Param_canSkip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanSkipTutorialIntro(Z_Param_canSkip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntroDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntroDone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompleteTutorial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CompleteTutorial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTradingPostLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTradingPostLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedProgressToSkip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNormalizedProgressToSkip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndSkipIntroSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndSkipIntroSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelSkipIntroSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelSkipIntroSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSkipIntroSequence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSkipIntroSequence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputGatesFromTutorialLevel) \
	{ \
		P_GET_OBJECT(AFGPlayerController,Z_Param_playerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputGatesFromTutorialLevel(Z_Param_playerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTutorialStep) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EIntroTutorialSteps*)Z_Param__Result=P_THIS->GetCurrentTutorialStep(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsTutorialCompleted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsTutorialCompleted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsIntroSequenceDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsIntroSequenceDone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTutorialIntroManager**)Z_Param__Result=AFGTutorialIntroManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGTutorialIntroManager(); \
	friend struct Z_Construct_UClass_AFGTutorialIntroManager_Statics; \
public: \
	DECLARE_CLASS(AFGTutorialIntroManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGTutorialIntroManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGTutorialIntroManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_INCLASS \
private: \
	static void StaticRegisterNativesAFGTutorialIntroManager(); \
	friend struct Z_Construct_UClass_AFGTutorialIntroManager_Statics; \
public: \
	DECLARE_CLASS(AFGTutorialIntroManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGTutorialIntroManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGTutorialIntroManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGTutorialIntroManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGTutorialIntroManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGTutorialIntroManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGTutorialIntroManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGTutorialIntroManager(AFGTutorialIntroManager&&); \
	NO_API AFGTutorialIntroManager(const AFGTutorialIntroManager&); \
public:


#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGTutorialIntroManager(AFGTutorialIntroManager&&); \
	NO_API AFGTutorialIntroManager(const AFGTutorialIntroManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGTutorialIntroManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGTutorialIntroManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGTutorialIntroManager)


#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTradingPostBuilt() { return STRUCT_OFFSET(AFGTutorialIntroManager, mTradingPostBuilt); } \
	FORCEINLINE static uint32 __PPO__mPendingTutorial() { return STRUCT_OFFSET(AFGTutorialIntroManager, mPendingTutorial); } \
	FORCEINLINE static uint32 __PPO__mHasCompletedIntroTutorial() { return STRUCT_OFFSET(AFGTutorialIntroManager, mHasCompletedIntroTutorial); } \
	FORCEINLINE static uint32 __PPO__mHasCompletedIntroSequence() { return STRUCT_OFFSET(AFGTutorialIntroManager, mHasCompletedIntroSequence); } \
	FORCEINLINE static uint32 __PPO__mTradingPostDescriptor() { return STRUCT_OFFSET(AFGTutorialIntroManager, mTradingPostDescriptor); } \
	FORCEINLINE static uint32 __PPO__mTradingPost() { return STRUCT_OFFSET(AFGTutorialIntroManager, mTradingPost); } \
	FORCEINLINE static uint32 __PPO__mIntroTutorialData() { return STRUCT_OFFSET(AFGTutorialIntroManager, mIntroTutorialData); } \
	FORCEINLINE static uint32 __PPO__mIronOreDescriptor() { return STRUCT_OFFSET(AFGTutorialIntroManager, mIronOreDescriptor); } \
	FORCEINLINE static uint32 __PPO__mDidPickUpIronOre() { return STRUCT_OFFSET(AFGTutorialIntroManager, mDidPickUpIronOre); } \
	FORCEINLINE static uint32 __PPO__mDropPodItemClass() { return STRUCT_OFFSET(AFGTutorialIntroManager, mDropPodItemClass); } \
	FORCEINLINE static uint32 __PPO__mDidDismantleDropPod() { return STRUCT_OFFSET(AFGTutorialIntroManager, mDidDismantleDropPod); } \
	FORCEINLINE static uint32 __PPO__mStunSpearItemClass() { return STRUCT_OFFSET(AFGTutorialIntroManager, mStunSpearItemClass); } \
	FORCEINLINE static uint32 __PPO__mDidEquipStunSpear() { return STRUCT_OFFSET(AFGTutorialIntroManager, mDidEquipStunSpear); } \
	FORCEINLINE static uint32 __PPO__mStep1UpgradeSchematic() { return STRUCT_OFFSET(AFGTutorialIntroManager, mStep1UpgradeSchematic); } \
	FORCEINLINE static uint32 __PPO__mDidStep1Upgrade() { return STRUCT_OFFSET(AFGTutorialIntroManager, mDidStep1Upgrade); } \
	FORCEINLINE static uint32 __PPO__mStep2UpgradeSchematic() { return STRUCT_OFFSET(AFGTutorialIntroManager, mStep2UpgradeSchematic); } \
	FORCEINLINE static uint32 __PPO__mDidStep2Upgrade() { return STRUCT_OFFSET(AFGTutorialIntroManager, mDidStep2Upgrade); } \
	FORCEINLINE static uint32 __PPO__mStep3UpgradeSchematic() { return STRUCT_OFFSET(AFGTutorialIntroManager, mStep3UpgradeSchematic); } \
	FORCEINLINE static uint32 __PPO__mDidStep3Upgrade() { return STRUCT_OFFSET(AFGTutorialIntroManager, mDidStep3Upgrade); } \
	FORCEINLINE static uint32 __PPO__mStep4UpgradeSchematic() { return STRUCT_OFFSET(AFGTutorialIntroManager, mStep4UpgradeSchematic); } \
	FORCEINLINE static uint32 __PPO__mDidStep4Upgrade() { return STRUCT_OFFSET(AFGTutorialIntroManager, mDidStep4Upgrade); } \
	FORCEINLINE static uint32 __PPO__mStep5UpgradeSchematic() { return STRUCT_OFFSET(AFGTutorialIntroManager, mStep5UpgradeSchematic); } \
	FORCEINLINE static uint32 __PPO__mDidStep5Upgrade() { return STRUCT_OFFSET(AFGTutorialIntroManager, mDidStep5Upgrade); } \
	FORCEINLINE static uint32 __PPO__mStartingPodClass() { return STRUCT_OFFSET(AFGTutorialIntroManager, mStartingPodClass); } \
	FORCEINLINE static uint32 __PPO__mStartingPod() { return STRUCT_OFFSET(AFGTutorialIntroManager, mStartingPod); } \
	FORCEINLINE static uint32 __PPO__mSkipTutorialInPIE() { return STRUCT_OFFSET(AFGTutorialIntroManager, mSkipTutorialInPIE); } \
	FORCEINLINE static uint32 __PPO__mTradingPostLevel() { return STRUCT_OFFSET(AFGTutorialIntroManager, mTradingPostLevel); } \
	FORCEINLINE static uint32 __PPO__mWaitTimeAfterCompletingMinorStep() { return STRUCT_OFFSET(AFGTutorialIntroManager, mWaitTimeAfterCompletingMinorStep); } \
	FORCEINLINE static uint32 __PPO__mWaitTimeAfterCompletingHubStep() { return STRUCT_OFFSET(AFGTutorialIntroManager, mWaitTimeAfterCompletingHubStep); } \
	FORCEINLINE static uint32 __PPO__mHoldTimeToSkipIntro() { return STRUCT_OFFSET(AFGTutorialIntroManager, mHoldTimeToSkipIntro); } \
	FORCEINLINE static uint32 __PPO__mHoldToSkipTimerHandle() { return STRUCT_OFFSET(AFGTutorialIntroManager, mHoldToSkipTimerHandle); }


#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_66_PROLOG
#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_INCLASS \
	FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGTutorialIntroManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGTutorialIntroManager_h


#define FOREACH_ENUM_EINTROTUTORIALSTEPS(op) \
	op(EIntroTutorialSteps::ITS_NONE) \
	op(EIntroTutorialSteps::ITS_INTRO) \
	op(EIntroTutorialSteps::ITS_DISMANTLE_POD) \
	op(EIntroTutorialSteps::ITS_STUN_SPEAR) \
	op(EIntroTutorialSteps::ITS_IRON_ORE) \
	op(EIntroTutorialSteps::ITS_HUB) \
	op(EIntroTutorialSteps::ITS_HUB_LVL1) \
	op(EIntroTutorialSteps::ITS_HUB_LVL2) \
	op(EIntroTutorialSteps::ITS_HUB_LVL3) \
	op(EIntroTutorialSteps::ITS_HUB_LVL4) \
	op(EIntroTutorialSteps::ITS_HUB_LVL5) \
	op(EIntroTutorialSteps::ITS_DONE) 

enum class EIntroTutorialSteps : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EIntroTutorialSteps>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
