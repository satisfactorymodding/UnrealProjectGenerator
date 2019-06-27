// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef FACTORYGAME_FGWeaponInstantFire_generated_h
#error "FGWeaponInstantFire.generated.h already included, missing '#pragma once' in FGWeaponInstantFire.h"
#endif
#define FACTORYGAME_FGWeaponInstantFire_generated_h

#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_RPC_WRAPPERS \
	virtual bool Server_NotifyMiss_Validate(); \
	virtual void Server_NotifyMiss_Implementation(); \
	virtual bool Server_NotifyHit_Validate(FHitResult const& ); \
	virtual void Server_NotifyHit_Implementation(FHitResult const& hitResult); \
 \
	DECLARE_FUNCTION(execServer_NotifyMiss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyMiss_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyMiss_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyMiss_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyHit) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_hitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyHit_Validate(Z_Param_hitResult)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyHit_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyHit_Implementation(Z_Param_hitResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_NotifyMiss_Validate(); \
	virtual void Server_NotifyMiss_Implementation(); \
	virtual bool Server_NotifyHit_Validate(FHitResult const& ); \
	virtual void Server_NotifyHit_Implementation(FHitResult const& hitResult); \
 \
	DECLARE_FUNCTION(execServer_NotifyMiss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyMiss_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyMiss_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyMiss_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyHit) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_hitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyHit_Validate(Z_Param_hitResult)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyHit_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyHit_Implementation(Z_Param_hitResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_EVENT_PARMS \
	struct FGWeaponInstantFire_eventServer_NotifyHit_Parms \
	{ \
		FHitResult hitResult; \
	};


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGWeaponInstantFire(); \
	friend struct Z_Construct_UClass_AFGWeaponInstantFire_Statics; \
public: \
	DECLARE_CLASS(AFGWeaponInstantFire, AFGWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWeaponInstantFire)


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAFGWeaponInstantFire(); \
	friend struct Z_Construct_UClass_AFGWeaponInstantFire_Statics; \
public: \
	DECLARE_CLASS(AFGWeaponInstantFire, AFGWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWeaponInstantFire)


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWeaponInstantFire(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGWeaponInstantFire) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWeaponInstantFire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWeaponInstantFire); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWeaponInstantFire(AFGWeaponInstantFire&&); \
	NO_API AFGWeaponInstantFire(const AFGWeaponInstantFire&); \
public:


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWeaponInstantFire(AFGWeaponInstantFire&&); \
	NO_API AFGWeaponInstantFire(const AFGWeaponInstantFire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWeaponInstantFire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWeaponInstantFire); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGWeaponInstantFire)


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_8_PROLOG \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_INCLASS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Equipment_FGWeaponInstantFire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
