// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGDamageOverTime;
class AActor;
class UFGDamageType;
#ifdef FACTORYGAME_FGDamageOverTime_generated_h
#error "FGDamageOverTime.generated.h already included, missing '#pragma once' in FGDamageOverTime.h"
#endif
#define FACTORYGAME_FGDamageOverTime_generated_h

#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShouldBeAppliedToActor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_dotClass); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGDamageOverTime::ShouldBeAppliedToActor(Z_Param_dotClass,Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_dotClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGDamageType> *)Z_Param__Result=UFGDamageOverTime::GetDamageClass(Z_Param_dotClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageAmount) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_dotClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGDamageOverTime::GetDamageAmount(Z_Param_dotClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageInterval) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_dotClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGDamageOverTime::GetDamageInterval(Z_Param_dotClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShouldBeAppliedToActor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_dotClass); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGDamageOverTime::ShouldBeAppliedToActor(Z_Param_dotClass,Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_dotClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGDamageType> *)Z_Param__Result=UFGDamageOverTime::GetDamageClass(Z_Param_dotClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageAmount) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_dotClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGDamageOverTime::GetDamageAmount(Z_Param_dotClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageInterval) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_dotClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGDamageOverTime::GetDamageInterval(Z_Param_dotClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGDamageOverTime(); \
	friend struct Z_Construct_UClass_UFGDamageOverTime_Statics; \
public: \
	DECLARE_CLASS(UFGDamageOverTime, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDamageOverTime)


#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGDamageOverTime(); \
	friend struct Z_Construct_UClass_UFGDamageOverTime_Statics; \
public: \
	DECLARE_CLASS(UFGDamageOverTime, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDamageOverTime)


#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDamageOverTime(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDamageOverTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDamageOverTime); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDamageOverTime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDamageOverTime(UFGDamageOverTime&&); \
	NO_API UFGDamageOverTime(const UFGDamageOverTime&); \
public:


#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDamageOverTime(UFGDamageOverTime&&); \
	NO_API UFGDamageOverTime(const UFGDamageOverTime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDamageOverTime); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDamageOverTime); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGDamageOverTime)


#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDamageInterval() { return STRUCT_OFFSET(UFGDamageOverTime, mDamageInterval); } \
	FORCEINLINE static uint32 __PPO__mDamageAmount() { return STRUCT_OFFSET(UFGDamageOverTime, mDamageAmount); } \
	FORCEINLINE static uint32 __PPO__mDamageClass() { return STRUCT_OFFSET(UFGDamageOverTime, mDamageClass); } \
	FORCEINLINE static uint32 __PPO__mActorFilter() { return STRUCT_OFFSET(UFGDamageOverTime, mActorFilter); }


#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDamageOverTime_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGDamageOverTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGDamageOverTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
