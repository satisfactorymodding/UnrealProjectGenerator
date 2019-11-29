// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IFGAggroTargetInterface;
class AActor;
#ifdef FACTORYGAME_FGAISystem_generated_h
#error "FGAISystem.generated.h already included, missing '#pragma once' in FGAISystem.h"
#endif
#define FACTORYGAME_FGAISystem_generated_h

#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_15_DELEGATE \
struct _Script_FactoryGame_eventAggroTargetRemovedSignature_Parms \
{ \
	TScriptInterface<IFGAggroTargetInterface> aggroTarget; \
}; \
static inline void FAggroTargetRemovedSignature_DelegateWrapper(const FMulticastScriptDelegate& AggroTargetRemovedSignature, const TScriptInterface<IFGAggroTargetInterface>& aggroTarget) \
{ \
	_Script_FactoryGame_eventAggroTargetRemovedSignature_Parms Parms; \
	Parms.aggroTarget=aggroTarget; \
	AggroTargetRemovedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_14_DELEGATE \
struct _Script_FactoryGame_eventAggroTargetAddedSignature_Parms \
{ \
	TScriptInterface<IFGAggroTargetInterface> aggroTarget; \
}; \
static inline void FAggroTargetAddedSignature_DelegateWrapper(const FMulticastScriptDelegate& AggroTargetAddedSignature, const TScriptInterface<IFGAggroTargetInterface>& aggroTarget) \
{ \
	_Script_FactoryGame_eventAggroTargetAddedSignature_Parms Parms; \
	Parms.aggroTarget=aggroTarget; \
	AggroTargetAddedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayerDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerDestroyed(Z_Param_destroyedPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatureDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedEnemy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreatureDestroyed(Z_Param_destroyedEnemy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAggroTargetDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AggroTargetDestroyed(Z_Param_destroyedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorPardoned) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorPardoned(Z_Param_inActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpardonActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnpardonActor(Z_Param_inActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPardonActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PardonActor(Z_Param_inActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllPardonedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllPardonedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAggroTargetList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TScriptInterface<IFGAggroTargetInterface> >*)Z_Param__Result=P_THIS->GetAggroTargetList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromTargetableList) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGAISystem::RemoveFromTargetableList(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToTargetableList) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGAISystem::AddToTargetableList(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerDestroyed(Z_Param_destroyedPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatureDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedEnemy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreatureDestroyed(Z_Param_destroyedEnemy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAggroTargetDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AggroTargetDestroyed(Z_Param_destroyedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorPardoned) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorPardoned(Z_Param_inActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpardonActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnpardonActor(Z_Param_inActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPardonActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PardonActor(Z_Param_inActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllPardonedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllPardonedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAggroTargetList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TScriptInterface<IFGAggroTargetInterface> >*)Z_Param__Result=P_THIS->GetAggroTargetList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromTargetableList) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGAISystem::RemoveFromTargetableList(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToTargetableList) \
	{ \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_aggroTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGAISystem::AddToTargetableList(Z_Param_aggroTarget); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGAISystem(); \
	friend struct Z_Construct_UClass_UFGAISystem_Statics; \
public: \
	DECLARE_CLASS(UFGAISystem, UAISystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAISystem)


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFGAISystem(); \
	friend struct Z_Construct_UClass_UFGAISystem_Statics; \
public: \
	DECLARE_CLASS(UFGAISystem, UAISystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAISystem)


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAISystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAISystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAISystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAISystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAISystem(UFGAISystem&&); \
	NO_API UFGAISystem(const UFGAISystem&); \
public:


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAISystem(UFGAISystem&&); \
	NO_API UFGAISystem(const UFGAISystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAISystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAISystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAISystem)


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mActivateSpawnerDistance() { return STRUCT_OFFSET(UFGAISystem, mActivateSpawnerDistance); } \
	FORCEINLINE static uint32 __PPO__mDisablePawnMovement() { return STRUCT_OFFSET(UFGAISystem, mDisablePawnMovement); } \
	FORCEINLINE static uint32 __PPO__mMaxCreatureIterationsPerTick() { return STRUCT_OFFSET(UFGAISystem, mMaxCreatureIterationsPerTick); } \
	FORCEINLINE static uint32 __PPO__mMaxSpawnerIterationsPerTick() { return STRUCT_OFFSET(UFGAISystem, mMaxSpawnerIterationsPerTick); }


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_20_PROLOG
#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_INCLASS \
	FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_AI_FGAISystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGAISystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_AI_FGAISystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
