// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
class IFGAggroTargetInterface;
struct FVector;
class UFGAttack;
struct FAggroEntry;
#ifdef FACTORYGAME_FGEnemyController_generated_h
#error "FGEnemyController.generated.h already included, missing '#pragma once' in FGEnemyController.h"
#endif
#define FACTORYGAME_FGEnemyController_generated_h

#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAggroEntry_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_RPC_WRAPPERS \
	virtual void OnAggroTargetUpdated_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPawnTakeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnTakeDamage(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAggroTargetRemoved) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AggroTargetRemoved(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAggroTargetAdded) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AggroTargetAdded(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLastValidTargetLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLastValidTargetLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetLastValidLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTargetLastValidLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAttackPattern) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAttackPattern(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAttackFromPattern) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGAttack> *)Z_Param__Result=P_THIS->GetCurrentAttackFromPattern(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackPatternIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAttackPatternIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGatherAggroTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GatherAggroTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAggroAndFindAndAssignTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAggroAndFindAndAssignTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetingDesireFromAggroEntry) \
	{ \
		P_GET_STRUCT(FAggroEntry,Z_Param_outTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetingDesireFromAggroEntry(Z_Param_outTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetingDesire) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetingDesire(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMostDesirableAggroTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TScriptInterface<IFGAggroTargetInterface>*)Z_Param__Result=P_THIS->GetMostDesirableAggroTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSeeActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSeeActor(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAggroThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAggroThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToAggroByTarget) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToAggroByTarget(Z_Param_target,Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAggroTargetUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAggroTargetUpdated_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentAggroTarget) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_newAggroTargetInterface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentAggroTarget(Z_Param_newAggroTargetInterface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindAndAssignTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindAndAssignTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInvalidAggroTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInvalidAggroTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAggroTargets) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_GET_UBOOL(Z_Param_fullCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAggroTargets(Z_Param_dt,Z_Param_fullCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldAddAggroTarget) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTargetInterface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldAddAggroTarget(Z_Param_aggroTargetInterface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOnIgnoreList) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTargetInterface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOnIgnoreList(Z_Param_aggroTargetInterface); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAggroTargetUpdated_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPawnTakeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnTakeDamage(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAggroTargetRemoved) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AggroTargetRemoved(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAggroTargetAdded) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AggroTargetAdded(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLastValidTargetLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLastValidTargetLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetLastValidLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTargetLastValidLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAttackPattern) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAttackPattern(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAttackFromPattern) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGAttack> *)Z_Param__Result=P_THIS->GetCurrentAttackFromPattern(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackPatternIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAttackPatternIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGatherAggroTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GatherAggroTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAggroAndFindAndAssignTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAggroAndFindAndAssignTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetingDesireFromAggroEntry) \
	{ \
		P_GET_STRUCT(FAggroEntry,Z_Param_outTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetingDesireFromAggroEntry(Z_Param_outTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetingDesire) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetingDesire(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMostDesirableAggroTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TScriptInterface<IFGAggroTargetInterface>*)Z_Param__Result=P_THIS->GetMostDesirableAggroTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSeeActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSeeActor(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAggroThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAggroThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToAggroByTarget) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToAggroByTarget(Z_Param_target,Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAggroTargetUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAggroTargetUpdated_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentAggroTarget) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_newAggroTargetInterface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentAggroTarget(Z_Param_newAggroTargetInterface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindAndAssignTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindAndAssignTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInvalidAggroTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInvalidAggroTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAggroTargets) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_GET_UBOOL(Z_Param_fullCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAggroTargets(Z_Param_dt,Z_Param_fullCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldAddAggroTarget) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTargetInterface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldAddAggroTarget(Z_Param_aggroTargetInterface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOnIgnoreList) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTargetInterface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOnIgnoreList(Z_Param_aggroTargetInterface); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_EVENT_PARMS \
	struct FGEnemyController_eventOnAggroTargetLost_Parms \
	{ \
		AActor* lostActor; \
	};


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGEnemyController(); \
	friend struct Z_Construct_UClass_AFGEnemyController_Statics; \
public: \
	DECLARE_CLASS(AFGEnemyController, AFGCreatureController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEnemyController)


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_INCLASS \
private: \
	static void StaticRegisterNativesAFGEnemyController(); \
	friend struct Z_Construct_UClass_AFGEnemyController_Statics; \
public: \
	DECLARE_CLASS(AFGEnemyController, AFGCreatureController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEnemyController)


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGEnemyController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGEnemyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEnemyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEnemyController(AFGEnemyController&&); \
	NO_API AFGEnemyController(const AFGEnemyController&); \
public:


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEnemyController(AFGEnemyController&&); \
	NO_API AFGEnemyController(const AFGEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEnemyController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGEnemyController)


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIgnoredAggroTargetClasses() { return STRUCT_OFFSET(AFGEnemyController, mIgnoredAggroTargetClasses); } \
	FORCEINLINE static uint32 __PPO__mPanicIgnoreTime() { return STRUCT_OFFSET(AFGEnemyController, mPanicIgnoreTime); }


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_90_PROLOG \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_INCLASS \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_AI_FGEnemyController_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_AI_FGEnemyController_h


#define FOREACH_ENUM_EIGNORE(op) \
	op(EIgnore::I_NONE) \
	op(EIgnore::I_FALSE) \
	op(EIgnore::I_NOT_VALID) \
	op(EIgnore::I_NO_PATH) \
	op(EIgnore::I_LastEnum) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
