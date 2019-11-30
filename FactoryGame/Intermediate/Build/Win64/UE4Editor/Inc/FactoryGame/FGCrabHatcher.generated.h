// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGCrabHatcher_generated_h
#error "FGCrabHatcher.generated.h already included, missing '#pragma once' in FGCrabHatcher.h"
#endif
#define FACTORYGAME_FGCrabHatcher_generated_h

#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_DidSpawnCrabs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DidSpawnCrabs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationLength(Z_Param_animLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDidSpawnCrabs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDidSpawnCrabs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDidSpawnCrabs) \
	{ \
		P_GET_UBOOL(Z_Param_inDidSPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDidSpawnCrabs(Z_Param_inDidSPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThreatNearby) \
	{ \
		P_GET_UBOOL(Z_Param_inNearby); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThreatNearby(Z_Param_inNearby); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThreatNearby) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetThreatNearby(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_DidSpawnCrabs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DidSpawnCrabs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationLength(Z_Param_animLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDidSpawnCrabs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDidSpawnCrabs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDidSpawnCrabs) \
	{ \
		P_GET_UBOOL(Z_Param_inDidSPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDidSpawnCrabs(Z_Param_inDidSPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThreatNearby) \
	{ \
		P_GET_UBOOL(Z_Param_inNearby); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThreatNearby(Z_Param_inNearby); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThreatNearby) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetThreatNearby(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCrabHatcher(); \
	friend struct Z_Construct_UClass_AFGCrabHatcher_Statics; \
public: \
	DECLARE_CLASS(AFGCrabHatcher, AFGEnemy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCrabHatcher)


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGCrabHatcher(); \
	friend struct Z_Construct_UClass_AFGCrabHatcher_Statics; \
public: \
	DECLARE_CLASS(AFGCrabHatcher, AFGEnemy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCrabHatcher)


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCrabHatcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCrabHatcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCrabHatcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCrabHatcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCrabHatcher(AFGCrabHatcher&&); \
	NO_API AFGCrabHatcher(const AFGCrabHatcher&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCrabHatcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCrabHatcher(AFGCrabHatcher&&); \
	NO_API AFGCrabHatcher(const AFGCrabHatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCrabHatcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCrabHatcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCrabHatcher)


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mThreatNearby() { return STRUCT_OFFSET(AFGCrabHatcher, mThreatNearby); } \
	FORCEINLINE static uint32 __PPO__mDidSpawnCrabs() { return STRUCT_OFFSET(AFGCrabHatcher, mDidSpawnCrabs); } \
	FORCEINLINE static uint32 __PPO__mThreatTimer() { return STRUCT_OFFSET(AFGCrabHatcher, mThreatTimer); } \
	FORCEINLINE static uint32 __PPO__mThreatTimerMax() { return STRUCT_OFFSET(AFGCrabHatcher, mThreatTimerMax); }


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_15_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Creature_Enemy_FGCrabHatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
