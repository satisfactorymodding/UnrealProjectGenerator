// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AFGRadioactivitySubsystem;
class AActor;
#ifdef FACTORYGAME_FGRadioactivitySubsystem_generated_h
#error "FGRadioactivitySubsystem.generated.h already included, missing '#pragma once' in FGRadioactivitySubsystem.h"
#endif
#define FACTORYGAME_FGRadioactivitySubsystem_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSetEmitterID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSetEmitterID>();

#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoveEmitterID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FRemoveEmitterID>();

#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRadioactiveSource_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FRadioactiveSource>();

#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGRadioactivitySubsystem**)Z_Param__Result=AFGRadioactivitySubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorDestroyed(Z_Param_destroyedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorSpawned) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_spawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorSpawned(Z_Param_spawnedActor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGRadioactivitySubsystem**)Z_Param__Result=AFGRadioactivitySubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorDestroyed(Z_Param_destroyedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorSpawned) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_spawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorSpawned(Z_Param_spawnedActor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGRadioactivitySubsystem(); \
	friend struct Z_Construct_UClass_AFGRadioactivitySubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGRadioactivitySubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRadioactivitySubsystem)


#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_INCLASS \
private: \
	static void StaticRegisterNativesAFGRadioactivitySubsystem(); \
	friend struct Z_Construct_UClass_AFGRadioactivitySubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGRadioactivitySubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRadioactivitySubsystem)


#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGRadioactivitySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGRadioactivitySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRadioactivitySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRadioactivitySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRadioactivitySubsystem(AFGRadioactivitySubsystem&&); \
	NO_API AFGRadioactivitySubsystem(const AFGRadioactivitySubsystem&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRadioactivitySubsystem(AFGRadioactivitySubsystem&&); \
	NO_API AFGRadioactivitySubsystem(const AFGRadioactivitySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRadioactivitySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRadioactivitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGRadioactivitySubsystem)


#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSources() { return STRUCT_OFFSET(AFGRadioactivitySubsystem, mSources); } \
	FORCEINLINE static uint32 __PPO__mAffectedActors() { return STRUCT_OFFSET(AFGRadioactivitySubsystem, mAffectedActors); }


#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_122_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGRadioactivitySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGRadioactivitySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
