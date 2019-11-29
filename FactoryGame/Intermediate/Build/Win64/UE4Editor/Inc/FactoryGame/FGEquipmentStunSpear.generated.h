// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGEquipmentStunSpear_generated_h
#error "FGEquipmentStunSpear.generated.h already included, missing '#pragma once' in FGEquipmentStunSpear.h"
#endif
#define FACTORYGAME_FGEquipmentStunSpear_generated_h

#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_RPC_WRAPPERS \
	virtual bool Server_ShockEnemy_Validate(); \
	virtual void Server_ShockEnemy_Implementation(); \
	virtual void OnHitTarget_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_ShockEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ShockEnemy_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ShockEnemy_Validate")); \
			return; \
		} \
		P_THIS->Server_ShockEnemy_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHitTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHitTarget_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldPlaySecondSwing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShouldPlaySecondSwing(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_ShockEnemy_Validate(); \
	virtual void Server_ShockEnemy_Implementation(); \
	virtual void OnHitTarget_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_ShockEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ShockEnemy_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ShockEnemy_Validate")); \
			return; \
		} \
		P_THIS->Server_ShockEnemy_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHitTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHitTarget_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldPlaySecondSwing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShouldPlaySecondSwing(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGEquipmentStunSpear(); \
	friend struct Z_Construct_UClass_AFGEquipmentStunSpear_Statics; \
public: \
	DECLARE_CLASS(AFGEquipmentStunSpear, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEquipmentStunSpear)


#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGEquipmentStunSpear(); \
	friend struct Z_Construct_UClass_AFGEquipmentStunSpear_Statics; \
public: \
	DECLARE_CLASS(AFGEquipmentStunSpear, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEquipmentStunSpear)


#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGEquipmentStunSpear(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGEquipmentStunSpear) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEquipmentStunSpear); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEquipmentStunSpear); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEquipmentStunSpear(AFGEquipmentStunSpear&&); \
	NO_API AFGEquipmentStunSpear(const AFGEquipmentStunSpear&); \
public:


#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEquipmentStunSpear(AFGEquipmentStunSpear&&); \
	NO_API AFGEquipmentStunSpear(const AFGEquipmentStunSpear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEquipmentStunSpear); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEquipmentStunSpear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGEquipmentStunSpear)


#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCollisionComp() { return STRUCT_OFFSET(AFGEquipmentStunSpear, mCollisionComp); } \
	FORCEINLINE static uint32 __PPO__mDamageTypeClass() { return STRUCT_OFFSET(AFGEquipmentStunSpear, mDamageTypeClass); }


#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_14_PROLOG \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGEquipmentStunSpear>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Equipment_FGEquipmentStunSpear_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
