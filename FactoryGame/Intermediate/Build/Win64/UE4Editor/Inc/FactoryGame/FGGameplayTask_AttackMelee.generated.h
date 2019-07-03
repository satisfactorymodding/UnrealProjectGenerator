// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class AFGEnemy;
class IFGAggroTargetInterface;
class UFGAttack;
class UFGGameplayTask_AttackMelee;
#ifdef FACTORYGAME_FGGameplayTask_AttackMelee_generated_h
#error "FGGameplayTask_AttackMelee.generated.h already included, missing '#pragma once' in FGGameplayTask_AttackMelee.h"
#endif
#define FACTORYGAME_FGGameplayTask_AttackMelee_generated_h

#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMontageBlendingOut) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_montage); \
		P_GET_UBOOL(Z_Param_interrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMontageBlendingOut(Z_Param_montage,Z_Param_interrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_montage); \
		P_GET_UBOOL(Z_Param_interrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMontageEnded(Z_Param_montage,Z_Param_interrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_GET_OBJECT(AFGEnemy,Z_Param_enemy); \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_attackTarget); \
		P_GET_OBJECT(UClass,Z_Param_attackClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameplayTask_AttackMelee**)Z_Param__Result=UFGGameplayTask_AttackMelee::Attack(Z_Param_enemy,Z_Param_attackTarget,Z_Param_attackClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMontageBlendingOut) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_montage); \
		P_GET_UBOOL(Z_Param_interrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMontageBlendingOut(Z_Param_montage,Z_Param_interrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_montage); \
		P_GET_UBOOL(Z_Param_interrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMontageEnded(Z_Param_montage,Z_Param_interrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_GET_OBJECT(AFGEnemy,Z_Param_enemy); \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_attackTarget); \
		P_GET_OBJECT(UClass,Z_Param_attackClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameplayTask_AttackMelee**)Z_Param__Result=UFGGameplayTask_AttackMelee::Attack(Z_Param_enemy,Z_Param_attackTarget,Z_Param_attackClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGGameplayTask_AttackMelee(); \
	friend struct Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics; \
public: \
	DECLARE_CLASS(UFGGameplayTask_AttackMelee, UFGGameplayTask_Attack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameplayTask_AttackMelee)


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFGGameplayTask_AttackMelee(); \
	friend struct Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics; \
public: \
	DECLARE_CLASS(UFGGameplayTask_AttackMelee, UFGGameplayTask_Attack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameplayTask_AttackMelee)


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameplayTask_AttackMelee(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameplayTask_AttackMelee) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameplayTask_AttackMelee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameplayTask_AttackMelee); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameplayTask_AttackMelee(UFGGameplayTask_AttackMelee&&); \
	NO_API UFGGameplayTask_AttackMelee(const UFGGameplayTask_AttackMelee&); \
public:


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameplayTask_AttackMelee(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameplayTask_AttackMelee(UFGGameplayTask_AttackMelee&&); \
	NO_API UFGGameplayTask_AttackMelee(const UFGGameplayTask_AttackMelee&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameplayTask_AttackMelee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameplayTask_AttackMelee); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameplayTask_AttackMelee)


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOnAttackFinished() { return STRUCT_OFFSET(UFGGameplayTask_AttackMelee, mOnAttackFinished); } \
	FORCEINLINE static uint32 __PPO__mOnAttackFailed() { return STRUCT_OFFSET(UFGGameplayTask_AttackMelee, mOnAttackFailed); } \
	FORCEINLINE static uint32 __PPO__mAttackTarget() { return STRUCT_OFFSET(UFGGameplayTask_AttackMelee, mAttackTarget); }


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackMelee_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
