// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AFGSplinePath;
#ifdef FACTORYGAME_FGCreatureSpawner_generated_h
#error "FGCreatureSpawner.generated.h already included, missing '#pragma once' in FGCreatureSpawner.h"
#endif
#define FACTORYGAME_FGCreatureSpawner_generated_h

#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnData_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_RPC_WRAPPERS \
	virtual void DestroyCreatures_Implementation(); \
	virtual void SpawnCreatures_Implementation(); \
 \
	DECLARE_FUNCTION(execCalculateSpawningLocations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CalculateSpawningLocations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatureDied) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_thisActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreatureDied(Z_Param_thisActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyCreatures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyCreatures_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnCreatures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnCreatures_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpawnerActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpawnerActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplines) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AFGSplinePath*>*)Z_Param__Result=P_THIS->GetSplines(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DestroyCreatures_Implementation(); \
	virtual void SpawnCreatures_Implementation(); \
 \
	DECLARE_FUNCTION(execCalculateSpawningLocations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CalculateSpawningLocations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatureDied) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_thisActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreatureDied(Z_Param_thisActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyCreatures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyCreatures_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnCreatures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnCreatures_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpawnerActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpawnerActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplines) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AFGSplinePath*>*)Z_Param__Result=P_THIS->GetSplines(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCreatureSpawner(); \
	friend struct Z_Construct_UClass_AFGCreatureSpawner_Statics; \
public: \
	DECLARE_CLASS(AFGCreatureSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCreatureSpawner) \
	virtual UObject* _getUObject() const override { return const_cast<AFGCreatureSpawner*>(this); }


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_INCLASS \
private: \
	static void StaticRegisterNativesAFGCreatureSpawner(); \
	friend struct Z_Construct_UClass_AFGCreatureSpawner_Statics; \
public: \
	DECLARE_CLASS(AFGCreatureSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCreatureSpawner) \
	virtual UObject* _getUObject() const override { return const_cast<AFGCreatureSpawner*>(this); }


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCreatureSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCreatureSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCreatureSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCreatureSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCreatureSpawner(AFGCreatureSpawner&&); \
	NO_API AFGCreatureSpawner(const AFGCreatureSpawner&); \
public:


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCreatureSpawner(AFGCreatureSpawner&&); \
	NO_API AFGCreatureSpawner(const AFGCreatureSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCreatureSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCreatureSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGCreatureSpawner)


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDebugComponent() { return STRUCT_OFFSET(AFGCreatureSpawner, mDebugComponent); } \
	FORCEINLINE static uint32 __PPO__mEditorSprite() { return STRUCT_OFFSET(AFGCreatureSpawner, mEditorSprite); } \
	FORCEINLINE static uint32 __PPO__mCapsuleComponent() { return STRUCT_OFFSET(AFGCreatureSpawner, mCapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__mCreatureClass() { return STRUCT_OFFSET(AFGCreatureSpawner, mCreatureClass); } \
	FORCEINLINE static uint32 __PPO__mNumberOfCreatures() { return STRUCT_OFFSET(AFGCreatureSpawner, mNumberOfCreatures); } \
	FORCEINLINE static uint32 __PPO__mSpawnRadius() { return STRUCT_OFFSET(AFGCreatureSpawner, mSpawnRadius); } \
	FORCEINLINE static uint32 __PPO__mSpawnHalfHeight() { return STRUCT_OFFSET(AFGCreatureSpawner, mSpawnHalfHeight); } \
	FORCEINLINE static uint32 __PPO__mIsActive() { return STRUCT_OFFSET(AFGCreatureSpawner, mIsActive); } \
	FORCEINLINE static uint32 __PPO__mSpawnData() { return STRUCT_OFFSET(AFGCreatureSpawner, mSpawnData); } \
	FORCEINLINE static uint32 __PPO__mSplines() { return STRUCT_OFFSET(AFGCreatureSpawner, mSplines); } \
	FORCEINLINE static uint32 __PPO__mRandomSeed() { return STRUCT_OFFSET(AFGCreatureSpawner, mRandomSeed); }


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_43_PROLOG \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_INCLASS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Creature_FGCreatureSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
