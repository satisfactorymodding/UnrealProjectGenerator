// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UAnimMontage;
class AFGEnemy;
class UFGAttackMeleeJump;
class UFGGameplayTask_AttackJump;
#ifdef FACTORYGAME_FGGameplayTask_AttackJump_generated_h
#error "FGGameplayTask_AttackJump.generated.h already included, missing '#pragma once' in FGGameplayTask_AttackJump.h"
#endif
#define FACTORYGAME_FGGameplayTask_AttackJump_generated_h

#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLandedCallback) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLandedCallback(Z_Param_Out_Hit); \
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
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_GET_OBJECT(AFGEnemy,Z_Param_enemy); \
		P_GET_OBJECT(UClass,Z_Param_attackClass); \
		P_GET_UBOOL(Z_Param_startJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameplayTask_AttackJump**)Z_Param__Result=UFGGameplayTask_AttackJump::StartJump(Z_Param_enemy,Z_Param_attackClass,Z_Param_startJump); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLandedCallback) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLandedCallback(Z_Param_Out_Hit); \
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
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_GET_OBJECT(AFGEnemy,Z_Param_enemy); \
		P_GET_OBJECT(UClass,Z_Param_attackClass); \
		P_GET_UBOOL(Z_Param_startJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameplayTask_AttackJump**)Z_Param__Result=UFGGameplayTask_AttackJump::StartJump(Z_Param_enemy,Z_Param_attackClass,Z_Param_startJump); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGGameplayTask_AttackJump(); \
	friend struct Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics; \
public: \
	DECLARE_CLASS(UFGGameplayTask_AttackJump, UFGGameplayTask_Attack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameplayTask_AttackJump)


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGGameplayTask_AttackJump(); \
	friend struct Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics; \
public: \
	DECLARE_CLASS(UFGGameplayTask_AttackJump, UFGGameplayTask_Attack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameplayTask_AttackJump)


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameplayTask_AttackJump(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameplayTask_AttackJump) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameplayTask_AttackJump); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameplayTask_AttackJump); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameplayTask_AttackJump(UFGGameplayTask_AttackJump&&); \
	NO_API UFGGameplayTask_AttackJump(const UFGGameplayTask_AttackJump&); \
public:


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameplayTask_AttackJump(UFGGameplayTask_AttackJump&&); \
	NO_API UFGGameplayTask_AttackJump(const UFGGameplayTask_AttackJump&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameplayTask_AttackJump); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameplayTask_AttackJump); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameplayTask_AttackJump)


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOnJumpAttackFinished() { return STRUCT_OFFSET(UFGGameplayTask_AttackJump, mOnJumpAttackFinished); } \
	FORCEINLINE static uint32 __PPO__mOnJumpAttackFailed() { return STRUCT_OFFSET(UFGGameplayTask_AttackJump, mOnJumpAttackFailed); }


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGGameplayTask_AttackJump>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Creature_Enemy_FGGameplayTask_AttackJump_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
