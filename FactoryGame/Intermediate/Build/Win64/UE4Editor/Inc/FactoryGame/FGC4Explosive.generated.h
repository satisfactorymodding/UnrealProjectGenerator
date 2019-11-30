// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGC4Explosive_generated_h
#error "FGC4Explosive.generated.h already included, missing '#pragma once' in FGC4Explosive.h"
#endif
#define FACTORYGAME_FGC4Explosive_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_RPC_WRAPPERS \
	virtual void PlayExplosionEffects_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsDetonated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsDetonated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayExplosionEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayExplosionEffects_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayExplosionEffects_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsDetonated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsDetonated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayExplosionEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayExplosionEffects_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGC4Explosive(); \
	friend struct Z_Construct_UClass_AFGC4Explosive_Statics; \
public: \
	DECLARE_CLASS(AFGC4Explosive, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGC4Explosive)


#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGC4Explosive(); \
	friend struct Z_Construct_UClass_AFGC4Explosive_Statics; \
public: \
	DECLARE_CLASS(AFGC4Explosive, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGC4Explosive)


#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGC4Explosive(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGC4Explosive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGC4Explosive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGC4Explosive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGC4Explosive(AFGC4Explosive&&); \
	NO_API AFGC4Explosive(const AFGC4Explosive&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGC4Explosive(AFGC4Explosive&&); \
	NO_API AFGC4Explosive(const AFGC4Explosive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGC4Explosive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGC4Explosive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGC4Explosive)


#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mBaseDamage() { return STRUCT_OFFSET(AFGC4Explosive, mBaseDamage); } \
	FORCEINLINE static uint32 __PPO__mDamageRadius() { return STRUCT_OFFSET(AFGC4Explosive, mDamageRadius); } \
	FORCEINLINE static uint32 __PPO__mDamageType() { return STRUCT_OFFSET(AFGC4Explosive, mDamageType); } \
	FORCEINLINE static uint32 __PPO__mIsDetonated() { return STRUCT_OFFSET(AFGC4Explosive, mIsDetonated); }


#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGC4Explosive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGC4Explosive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
