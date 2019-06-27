// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPowerCircuitStats;
struct FPowerGraphPoint;
#ifdef FACTORYGAME_FGPowerCircuit_generated_h
#error "FGPowerCircuit.generated.h already included, missing '#pragma once' in FGPowerCircuit.h"
#endif
#define FACTORYGAME_FGPowerCircuit_generated_h

#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPowerCircuitStats_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Items() { return STRUCT_OFFSET(FPowerCircuitStats, Items); } \
	FORCEINLINE static uint32 __PPO__FirstIndex() { return STRUCT_OFFSET(FPowerCircuitStats, FirstIndex); }


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPowerGraphPoint_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNumGraphPoint) \
	{ \
		P_GET_STRUCT_REF(FPowerCircuitStats,Z_Param_Out_stats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGPowerCircuit::GetNumGraphPoint(Z_Param_Out_stats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGraphPointAtIndex) \
	{ \
		P_GET_STRUCT_REF(FPowerCircuitStats,Z_Param_Out_stats); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_STRUCT_REF(FPowerGraphPoint,Z_Param_Out_out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPowerCircuit::GetGraphPointAtIndex(Z_Param_Out_stats,Z_Param_idx,Z_Param_Out_out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStats) \
	{ \
		P_GET_STRUCT_REF(FPowerCircuitStats,Z_Param_Out_out_stats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStats(Z_Param_Out_out_stats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFuseTriggered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFuseTriggered(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFuse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetFuse(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumGraphPoint) \
	{ \
		P_GET_STRUCT_REF(FPowerCircuitStats,Z_Param_Out_stats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGPowerCircuit::GetNumGraphPoint(Z_Param_Out_stats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGraphPointAtIndex) \
	{ \
		P_GET_STRUCT_REF(FPowerCircuitStats,Z_Param_Out_stats); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_GET_STRUCT_REF(FPowerGraphPoint,Z_Param_Out_out_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPowerCircuit::GetGraphPointAtIndex(Z_Param_Out_stats,Z_Param_idx,Z_Param_Out_out_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStats) \
	{ \
		P_GET_STRUCT_REF(FPowerCircuitStats,Z_Param_Out_out_stats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStats(Z_Param_Out_out_stats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFuseTriggered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFuseTriggered(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFuse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetFuse(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGPowerCircuit(); \
	friend struct Z_Construct_UClass_UFGPowerCircuit_Statics; \
public: \
	DECLARE_CLASS(UFGPowerCircuit, UFGCircuit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPowerCircuit)


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUFGPowerCircuit(); \
	friend struct Z_Construct_UClass_UFGPowerCircuit_Statics; \
public: \
	DECLARE_CLASS(UFGPowerCircuit, UFGCircuit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPowerCircuit)


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPowerCircuit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPowerCircuit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPowerCircuit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPowerCircuit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPowerCircuit(UFGPowerCircuit&&); \
	NO_API UFGPowerCircuit(const UFGPowerCircuit&); \
public:


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPowerCircuit(UFGPowerCircuit&&); \
	NO_API UFGPowerCircuit(const UFGPowerCircuit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPowerCircuit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPowerCircuit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGPowerCircuit)


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPowerProductionCapacity() { return STRUCT_OFFSET(UFGPowerCircuit, mPowerProductionCapacity); } \
	FORCEINLINE static uint32 __PPO__mPowerProduced() { return STRUCT_OFFSET(UFGPowerCircuit, mPowerProduced); } \
	FORCEINLINE static uint32 __PPO__mPowerConsumed() { return STRUCT_OFFSET(UFGPowerCircuit, mPowerConsumed); } \
	FORCEINLINE static uint32 __PPO__mIsFuseTriggered() { return STRUCT_OFFSET(UFGPowerCircuit, mIsFuseTriggered); } \
	FORCEINLINE static uint32 __PPO__mPowerStats() { return STRUCT_OFFSET(UFGPowerCircuit, mPowerStats); }


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_127_PROLOG
#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_INCLASS \
	FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPowerCircuit_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGPowerCircuit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
