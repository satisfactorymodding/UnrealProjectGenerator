// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGAttack;
#ifdef FACTORYGAME_FGGameplayTask_Attack_generated_h
#error "FGGameplayTask_Attack.generated.h already included, missing '#pragma once' in FGGameplayTask_Attack.h"
#endif
#define FACTORYGAME_FGGameplayTask_Attack_generated_h

#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttackClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGAttack> *)Z_Param__Result=P_THIS->GetAttackClass(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttackClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGAttack> *)Z_Param__Result=P_THIS->GetAttackClass(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGGameplayTask_Attack(); \
	friend struct Z_Construct_UClass_UFGGameplayTask_Attack_Statics; \
public: \
	DECLARE_CLASS(UFGGameplayTask_Attack, UFGGameplayTask_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameplayTask_Attack)


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFGGameplayTask_Attack(); \
	friend struct Z_Construct_UClass_UFGGameplayTask_Attack_Statics; \
public: \
	DECLARE_CLASS(UFGGameplayTask_Attack, UFGGameplayTask_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameplayTask_Attack)


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameplayTask_Attack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameplayTask_Attack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameplayTask_Attack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameplayTask_Attack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameplayTask_Attack(UFGGameplayTask_Attack&&); \
	NO_API UFGGameplayTask_Attack(const UFGGameplayTask_Attack&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameplayTask_Attack(UFGGameplayTask_Attack&&); \
	NO_API UFGGameplayTask_Attack(const UFGGameplayTask_Attack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameplayTask_Attack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameplayTask_Attack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameplayTask_Attack)


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAttackClass() { return STRUCT_OFFSET(UFGGameplayTask_Attack, mAttackClass); }


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGGameplayTask_Attack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGGameplayTask_Attack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
