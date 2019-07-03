// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGAttack;
class UAnimMontage;
class UDamageType;
#ifdef FACTORYGAME_FGAttack_generated_h
#error "FGAttack.generated.h already included, missing '#pragma once' in FGAttack.h"
#endif
#define FACTORYGAME_FGAttack_generated_h

#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttackMontage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=UFGAttack::GetAttackMontage(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStopsMovement) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGAttack::GetStopsMovement(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageType) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UDamageType> *)Z_Param__Result=UFGAttack::GetDamageType(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackAngle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGAttack::GetAttackAngle(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGAttack::GetDamage(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackActivationDistance) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGAttack::GetAttackActivationDistance(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackRange) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGAttack::GetAttackRange(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttackMontage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=UFGAttack::GetAttackMontage(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStopsMovement) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGAttack::GetStopsMovement(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageType) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UDamageType> *)Z_Param__Result=UFGAttack::GetDamageType(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackAngle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGAttack::GetAttackAngle(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGAttack::GetDamage(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackActivationDistance) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGAttack::GetAttackActivationDistance(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackRange) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGAttack::GetAttackRange(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGAttack(); \
	friend struct Z_Construct_UClass_UFGAttack_Statics; \
public: \
	DECLARE_CLASS(UFGAttack, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAttack)


#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUFGAttack(); \
	friend struct Z_Construct_UClass_UFGAttack_Statics; \
public: \
	DECLARE_CLASS(UFGAttack, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAttack)


#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAttack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAttack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAttack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAttack(UFGAttack&&); \
	NO_API UFGAttack(const UFGAttack&); \
public:


#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAttack(UFGAttack&&); \
	NO_API UFGAttack(const UFGAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGAttack)


#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAttackMontage() { return STRUCT_OFFSET(UFGAttack, mAttackMontage); } \
	FORCEINLINE static uint32 __PPO__mStopsMovement() { return STRUCT_OFFSET(UFGAttack, mStopsMovement); } \
	FORCEINLINE static uint32 __PPO__mAttackRange() { return STRUCT_OFFSET(UFGAttack, mAttackRange); } \
	FORCEINLINE static uint32 __PPO__mAttackActivationDistance() { return STRUCT_OFFSET(UFGAttack, mAttackActivationDistance); } \
	FORCEINLINE static uint32 __PPO__mDamage() { return STRUCT_OFFSET(UFGAttack, mDamage); } \
	FORCEINLINE static uint32 __PPO__mDamageType() { return STRUCT_OFFSET(UFGAttack, mDamageType); } \
	FORCEINLINE static uint32 __PPO__mAttackAngle() { return STRUCT_OFFSET(UFGAttack, mAttackAngle); }


#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_9_PROLOG
#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_AI_FGAttack_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_AI_FGAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
