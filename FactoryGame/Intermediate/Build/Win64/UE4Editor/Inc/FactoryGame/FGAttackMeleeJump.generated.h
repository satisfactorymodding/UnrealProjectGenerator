// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGAttack;
class UAnimMontage;
class UFGAttackMeleeJump;
struct FVector;
#ifdef FACTORYGAME_FGAttackMeleeJump_generated_h
#error "FGAttackMeleeJump.generated.h already included, missing '#pragma once' in FGAttackMeleeJump.h"
#endif
#define FACTORYGAME_FGAttackMeleeJump_generated_h

#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPreJumpMontage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=UFGAttackMeleeJump::GetPreJumpMontage(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJumpVelocity) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFGAttackMeleeJump::GetJumpVelocity(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJumpRange) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGAttackMeleeJump::GetJumpRange(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPreJumpMontage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=UFGAttackMeleeJump::GetPreJumpMontage(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJumpVelocity) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFGAttackMeleeJump::GetJumpVelocity(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJumpRange) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGAttackMeleeJump::GetJumpRange(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGAttackMeleeJump(); \
	friend struct Z_Construct_UClass_UFGAttackMeleeJump_Statics; \
public: \
	DECLARE_CLASS(UFGAttackMeleeJump, UFGAttackMelee, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAttackMeleeJump)


#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGAttackMeleeJump(); \
	friend struct Z_Construct_UClass_UFGAttackMeleeJump_Statics; \
public: \
	DECLARE_CLASS(UFGAttackMeleeJump, UFGAttackMelee, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAttackMeleeJump)


#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAttackMeleeJump(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAttackMeleeJump) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAttackMeleeJump); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAttackMeleeJump); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAttackMeleeJump(UFGAttackMeleeJump&&); \
	NO_API UFGAttackMeleeJump(const UFGAttackMeleeJump&); \
public:


#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAttackMeleeJump(UFGAttackMeleeJump&&); \
	NO_API UFGAttackMeleeJump(const UFGAttackMeleeJump&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAttackMeleeJump); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAttackMeleeJump); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGAttackMeleeJump)


#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mJumpRange() { return STRUCT_OFFSET(UFGAttackMeleeJump, mJumpRange); } \
	FORCEINLINE static uint32 __PPO__mJumpVelocity() { return STRUCT_OFFSET(UFGAttackMeleeJump, mJumpVelocity); } \
	FORCEINLINE static uint32 __PPO__mPreJumpMontage() { return STRUCT_OFFSET(UFGAttackMeleeJump, mPreJumpMontage); }


#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGAttackMeleeJump>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_AI_FGAttackMeleeJump_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
