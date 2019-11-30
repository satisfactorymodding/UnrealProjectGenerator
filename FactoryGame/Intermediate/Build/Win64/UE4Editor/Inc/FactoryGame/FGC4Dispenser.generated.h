// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGC4Dispenser_generated_h
#error "FGC4Dispenser.generated.h already included, missing '#pragma once' in FGC4Dispenser.h"
#endif
#define FACTORYGAME_FGC4Dispenser_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_RPC_WRAPPERS \
	virtual bool Server_DetonatePressed_Validate(); \
	virtual void Server_DetonatePressed_Implementation(); \
	virtual bool Server_SpawnC4_Validate(int32 ); \
	virtual void Server_SpawnC4_Implementation(int32 throwForce); \
 \
	DECLARE_FUNCTION(execServer_DetonatePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_DetonatePressed_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_DetonatePressed_Validate")); \
			return; \
		} \
		P_THIS->Server_DetonatePressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SpawnC4) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_throwForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SpawnC4_Validate(Z_Param_throwForce)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SpawnC4_Validate")); \
			return; \
		} \
		P_THIS->Server_SpawnC4_Implementation(Z_Param_throwForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChargePct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetChargePct(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_DetonatePressed_Validate(); \
	virtual void Server_DetonatePressed_Implementation(); \
	virtual bool Server_SpawnC4_Validate(int32 ); \
	virtual void Server_SpawnC4_Implementation(int32 throwForce); \
 \
	DECLARE_FUNCTION(execServer_DetonatePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_DetonatePressed_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_DetonatePressed_Validate")); \
			return; \
		} \
		P_THIS->Server_DetonatePressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SpawnC4) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_throwForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SpawnC4_Validate(Z_Param_throwForce)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SpawnC4_Validate")); \
			return; \
		} \
		P_THIS->Server_SpawnC4_Implementation(Z_Param_throwForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChargePct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetChargePct(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_EVENT_PARMS \
	struct FGC4Dispenser_eventServer_SpawnC4_Parms \
	{ \
		int32 throwForce; \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGC4Dispenser(); \
	friend struct Z_Construct_UClass_AFGC4Dispenser_Statics; \
public: \
	DECLARE_CLASS(AFGC4Dispenser, AFGWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGC4Dispenser)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGC4Dispenser(); \
	friend struct Z_Construct_UClass_AFGC4Dispenser_Statics; \
public: \
	DECLARE_CLASS(AFGC4Dispenser, AFGWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGC4Dispenser)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGC4Dispenser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGC4Dispenser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGC4Dispenser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGC4Dispenser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGC4Dispenser(AFGC4Dispenser&&); \
	NO_API AFGC4Dispenser(const AFGC4Dispenser&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGC4Dispenser(AFGC4Dispenser&&); \
	NO_API AFGC4Dispenser(const AFGC4Dispenser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGC4Dispenser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGC4Dispenser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGC4Dispenser)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mC4ExplosiveClass() { return STRUCT_OFFSET(AFGC4Dispenser, mC4ExplosiveClass); } \
	FORCEINLINE static uint32 __PPO__mDispensedExplosives() { return STRUCT_OFFSET(AFGC4Dispenser, mDispensedExplosives); } \
	FORCEINLINE static uint32 __PPO__mMaxChargeTime() { return STRUCT_OFFSET(AFGC4Dispenser, mMaxChargeTime); } \
	FORCEINLINE static uint32 __PPO__mMaxThrowForce() { return STRUCT_OFFSET(AFGC4Dispenser, mMaxThrowForce); } \
	FORCEINLINE static uint32 __PPO__mDelayBetweenExplosions() { return STRUCT_OFFSET(AFGC4Dispenser, mDelayBetweenExplosions); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_14_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGC4Dispenser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
