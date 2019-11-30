// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGWheeledVehicleMovementComponent6W_generated_h
#error "FGWheeledVehicleMovementComponent6W.generated.h already included, missing '#pragma once' in FGWheeledVehicleMovementComponent6W.h"
#endif
#define FACTORYGAME_FGWheeledVehicleMovementComponent6W_generated_h

#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleGearData6W_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLargestLongitudinalSlip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestLongitudinalSlip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLargestLateralSlip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestLateralSlip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLargestTireLoadValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestTireLoadValue(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLargestLongitudinalSlip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestLongitudinalSlip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLargestLateralSlip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestLateralSlip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLargestTireLoadValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestTireLoadValue(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFGWheeledVehicleMovementComponent6W, NO_API)


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGWheeledVehicleMovementComponent6W(); \
	friend struct Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics; \
public: \
	DECLARE_CLASS(UFGWheeledVehicleMovementComponent6W, UWheeledVehicleMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWheeledVehicleMovementComponent6W) \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_INCLASS \
private: \
	static void StaticRegisterNativesUFGWheeledVehicleMovementComponent6W(); \
	friend struct Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics; \
public: \
	DECLARE_CLASS(UFGWheeledVehicleMovementComponent6W, UWheeledVehicleMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWheeledVehicleMovementComponent6W) \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGWheeledVehicleMovementComponent6W(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWheeledVehicleMovementComponent6W) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWheeledVehicleMovementComponent6W); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWheeledVehicleMovementComponent6W); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWheeledVehicleMovementComponent6W(UFGWheeledVehicleMovementComponent6W&&); \
	NO_API UFGWheeledVehicleMovementComponent6W(const UFGWheeledVehicleMovementComponent6W&); \
public:


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWheeledVehicleMovementComponent6W(UFGWheeledVehicleMovementComponent6W&&); \
	NO_API UFGWheeledVehicleMovementComponent6W(const UFGWheeledVehicleMovementComponent6W&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWheeledVehicleMovementComponent6W); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWheeledVehicleMovementComponent6W); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWheeledVehicleMovementComponent6W)


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EngineSetup() { return STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, EngineSetup); } \
	FORCEINLINE static uint32 __PPO__DifferentialSetup() { return STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, DifferentialSetup); } \
	FORCEINLINE static uint32 __PPO__mUseDSOLGearbox() { return STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, mUseDSOLGearbox); } \
	FORCEINLINE static uint32 __PPO__mDSOLMaxSlopeAngleLimit() { return STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, mDSOLMaxSlopeAngleLimit); } \
	FORCEINLINE static uint32 __PPO__mSlopeShiftRatio() { return STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, mSlopeShiftRatio); } \
	FORCEINLINE static uint32 __PPO__TransmissionSetup() { return STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, TransmissionSetup); } \
	FORCEINLINE static uint32 __PPO__mDownShiftLatency() { return STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, mDownShiftLatency); } \
	FORCEINLINE static uint32 __PPO__SteeringCurve() { return STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, SteeringCurve); } \
	FORCEINLINE static uint32 __PPO__AckermannAccuracy() { return STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, AckermannAccuracy); }


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_143_PROLOG
#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_INCLASS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent6W_h


#define FOREACH_ENUM_EWHEELORDER6W(op) \
	op(eFRONT_LEFT) \
	op(eFRONT_RIGHT) \
	op(eMID_LEFT) \
	op(eMID_RIGHT) \
	op(eREAR_LEFT) \
	op(eREAR_RIGHT) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
