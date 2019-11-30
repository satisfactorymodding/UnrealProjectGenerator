// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFGGameplayTask_Attack;
struct FVector;
#ifdef FACTORYGAME_FGEnemy_generated_h
#error "FGEnemy.generated.h already included, missing '#pragma once' in FGEnemy.h"
#endif
#define FACTORYGAME_FGEnemy_generated_h

#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_RPC_WRAPPERS \
	virtual void OnCurrentAggroTargetReplicated_Implementation(); \
	virtual void PerformCustomRadialAttack_Implementation(); \
	virtual FVector GetAttackLocation_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentAggroTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentAggroTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCurrentAggroTargetReplicated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCurrentAggroTargetReplicated_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAggroTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentAggroTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformCustomRadialAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformCustomRadialAttack_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAttackTask) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameplayTask_Attack**)Z_Param__Result=P_THIS->GetCurrentAttackTask(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetAttackLocation_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCurrentAggroTargetReplicated_Implementation(); \
	virtual void PerformCustomRadialAttack_Implementation(); \
	virtual FVector GetAttackLocation_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentAggroTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentAggroTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCurrentAggroTargetReplicated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCurrentAggroTargetReplicated_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAggroTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentAggroTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformCustomRadialAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformCustomRadialAttack_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAttackTask) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameplayTask_Attack**)Z_Param__Result=P_THIS->GetCurrentAttackTask(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetAttackLocation_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_EVENT_PARMS \
	struct FGEnemy_eventGetAttackLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGEnemy_eventGetAttackLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGEnemy(); \
	friend struct Z_Construct_UClass_AFGEnemy_Statics; \
public: \
	DECLARE_CLASS(AFGEnemy, AFGCreature, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEnemy)


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGEnemy(); \
	friend struct Z_Construct_UClass_AFGEnemy_Statics; \
public: \
	DECLARE_CLASS(AFGEnemy, AFGCreature, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEnemy)


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEnemy(AFGEnemy&&); \
	NO_API AFGEnemy(const AFGEnemy&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEnemy(AFGEnemy&&); \
	NO_API AFGEnemy(const AFGEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEnemy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGEnemy)


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCurrentAggroTarget() { return STRUCT_OFFSET(AFGEnemy, mCurrentAggroTarget); }


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_15_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
