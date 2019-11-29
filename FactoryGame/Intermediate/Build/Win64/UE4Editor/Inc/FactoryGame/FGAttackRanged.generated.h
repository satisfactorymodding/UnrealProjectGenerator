// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AFGEnemy;
#ifdef FACTORYGAME_FGAttackRanged_generated_h
#error "FGAttackRanged.generated.h already included, missing '#pragma once' in FGAttackRanged.h"
#endif
#define FACTORYGAME_FGAttackRanged_generated_h

#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_RPC_WRAPPERS \
	virtual void SpawnProjectile_Implementation(AActor* targetActor, AFGEnemy* sourceActor); \
 \
	DECLARE_FUNCTION(execSpawnProjectile) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_targetActor); \
		P_GET_OBJECT(AFGEnemy,Z_Param_sourceActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnProjectile_Implementation(Z_Param_targetActor,Z_Param_sourceActor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnProjectile_Implementation(AActor* targetActor, AFGEnemy* sourceActor); \
 \
	DECLARE_FUNCTION(execSpawnProjectile) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_targetActor); \
		P_GET_OBJECT(AFGEnemy,Z_Param_sourceActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnProjectile_Implementation(Z_Param_targetActor,Z_Param_sourceActor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_EVENT_PARMS \
	struct FGAttackRanged_eventSpawnProjectile_Parms \
	{ \
		AActor* targetActor; \
		AFGEnemy* sourceActor; \
	};


#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGAttackRanged(); \
	friend struct Z_Construct_UClass_UFGAttackRanged_Statics; \
public: \
	DECLARE_CLASS(UFGAttackRanged, UFGAttack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAttackRanged)


#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGAttackRanged(); \
	friend struct Z_Construct_UClass_UFGAttackRanged_Statics; \
public: \
	DECLARE_CLASS(UFGAttackRanged, UFGAttack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAttackRanged)


#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAttackRanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAttackRanged) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAttackRanged); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAttackRanged); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAttackRanged(UFGAttackRanged&&); \
	NO_API UFGAttackRanged(const UFGAttackRanged&); \
public:


#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAttackRanged() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAttackRanged(UFGAttackRanged&&); \
	NO_API UFGAttackRanged(const UFGAttackRanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAttackRanged); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAttackRanged); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGAttackRanged)


#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_14_PROLOG \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGAttackRanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_AI_FGAttackRanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
