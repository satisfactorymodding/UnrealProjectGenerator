// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGLocomotiveMovementComponent_generated_h
#error "FGLocomotiveMovementComponent.generated.h already included, missing '#pragma once' in FGLocomotiveMovementComponent.h"
#endif
#define FACTORYGAME_FGLocomotiveMovementComponent_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FRailroadVehicleInputRate>();

#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FReplicatedRailroadVehicleState>();

#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(int32 , float , float , float , float ); \
	virtual void ServerUpdateState_Implementation(int32 inReverserInput, float inSteeringInput, float inThrottleInput, float inDynamicBrakeInput, float inAirBrakeInput); \
 \
	DECLARE_FUNCTION(execUseReplicatedState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseReplicatedState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inReverserInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inSteeringInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inThrottleInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inDynamicBrakeInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inAirBrakeInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateState_Validate(Z_Param_inReverserInput,Z_Param_inSteeringInput,Z_Param_inThrottleInput,Z_Param_inDynamicBrakeInput,Z_Param_inAirBrakeInput)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateState_Implementation(Z_Param_inReverserInput,Z_Param_inSteeringInput,Z_Param_inThrottleInput,Z_Param_inDynamicBrakeInput,Z_Param_inAirBrakeInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDynamicBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAirBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThrottle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetThrottle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReverser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetReverser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmergencyBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmergencyBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAirBrakeInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_brake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAirBrakeInput(Z_Param_brake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSteeringInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_steering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSteeringInput(Z_Param_steering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottleInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrottleInput(Z_Param_throttle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReverserInput) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_reverser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReverserInput(Z_Param_reverser); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateState_Validate(int32 , float , float , float , float ); \
	virtual void ServerUpdateState_Implementation(int32 inReverserInput, float inSteeringInput, float inThrottleInput, float inDynamicBrakeInput, float inAirBrakeInput); \
 \
	DECLARE_FUNCTION(execUseReplicatedState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseReplicatedState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inReverserInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inSteeringInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inThrottleInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inDynamicBrakeInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inAirBrakeInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateState_Validate(Z_Param_inReverserInput,Z_Param_inSteeringInput,Z_Param_inThrottleInput,Z_Param_inDynamicBrakeInput,Z_Param_inAirBrakeInput)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateState_Implementation(Z_Param_inReverserInput,Z_Param_inSteeringInput,Z_Param_inThrottleInput,Z_Param_inDynamicBrakeInput,Z_Param_inAirBrakeInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDynamicBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAirBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThrottle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetThrottle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReverser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetReverser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmergencyBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmergencyBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAirBrakeInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_brake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAirBrakeInput(Z_Param_brake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSteeringInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_steering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSteeringInput(Z_Param_steering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottleInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrottleInput(Z_Param_throttle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReverserInput) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_reverser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReverserInput(Z_Param_reverser); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_EVENT_PARMS \
	struct FGLocomotiveMovementComponent_eventServerUpdateState_Parms \
	{ \
		int32 inReverserInput; \
		float inSteeringInput; \
		float inThrottleInput; \
		float inDynamicBrakeInput; \
		float inAirBrakeInput; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGLocomotiveMovementComponent(); \
	friend struct Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFGLocomotiveMovementComponent, UFGRailroadVehicleMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGLocomotiveMovementComponent)


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUFGLocomotiveMovementComponent(); \
	friend struct Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFGLocomotiveMovementComponent, UFGRailroadVehicleMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGLocomotiveMovementComponent)


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGLocomotiveMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGLocomotiveMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGLocomotiveMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGLocomotiveMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGLocomotiveMovementComponent(UFGLocomotiveMovementComponent&&); \
	NO_API UFGLocomotiveMovementComponent(const UFGLocomotiveMovementComponent&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGLocomotiveMovementComponent(UFGLocomotiveMovementComponent&&); \
	NO_API UFGLocomotiveMovementComponent(const UFGLocomotiveMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGLocomotiveMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGLocomotiveMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGLocomotiveMovementComponent)


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mReplicatedState() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mReplicatedState); } \
	FORCEINLINE static uint32 __PPO__mRawReverserInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawReverserInput); } \
	FORCEINLINE static uint32 __PPO__mRawSteeringInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawSteeringInput); } \
	FORCEINLINE static uint32 __PPO__mRawThrottleInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawThrottleInput); } \
	FORCEINLINE static uint32 __PPO__mRawDynamicBrakeInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawDynamicBrakeInput); } \
	FORCEINLINE static uint32 __PPO__mRawAirBrakeInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawAirBrakeInput); } \
	FORCEINLINE static uint32 __PPO__mThrottleInputRate() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mThrottleInputRate); } \
	FORCEINLINE static uint32 __PPO__mDynamicBrakeInputRate() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakeInputRate); } \
	FORCEINLINE static uint32 __PPO__mDynamicBrakeVelocityThreshold() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakeVelocityThreshold); } \
	FORCEINLINE static uint32 __PPO__mAirBrakeInputRate() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mAirBrakeInputRate); } \
	FORCEINLINE static uint32 __PPO__mReverserInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mReverserInput); } \
	FORCEINLINE static uint32 __PPO__mSteeringInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mSteeringInput); } \
	FORCEINLINE static uint32 __PPO__mThrottleInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mThrottleInput); } \
	FORCEINLINE static uint32 __PPO__mAirBrakeInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mAirBrakeInput); } \
	FORCEINLINE static uint32 __PPO__mDynamicBrakeInput() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakeInput); } \
	FORCEINLINE static uint32 __PPO__mTractiveEffortCurve() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mTractiveEffortCurve); } \
	FORCEINLINE static uint32 __PPO__mDynamicBrakingEffortCurve() { return STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakingEffortCurve); }


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_97_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGLocomotiveMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGLocomotiveMovementComponent_h


#define FOREACH_ENUM_EMULTIPLEUNITCONTROL(op) \
	op(EMultipleUnitControl::MUC_Disabled) \
	op(EMultipleUnitControl::MUC_Master) \
	op(EMultipleUnitControl::MUC_Slave) 

enum class EMultipleUnitControl : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EMultipleUnitControl>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
