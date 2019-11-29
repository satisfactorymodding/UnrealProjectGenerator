// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FACTORYGAME_FGRailroadVehicleMovementComponent_generated_h
#error "FGRailroadVehicleMovementComponent.generated.h already included, missing '#pragma once' in FGRailroadVehicleMovementComponent.h"
#endif
#define FACTORYGAME_FGRailroadVehicleMovementComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCouplerSetup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FCouplerSetup>();

#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWheelsetSetup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FWheelsetSetup>();

#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCouplerRotationAndExtention) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_extention); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCouplerRotationAndExtention(Z_Param_index,Z_Param_Out_out_extention); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelsetOffset) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWheelsetOffset(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWheelRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelsetRotation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWheelsetRotation(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumWheelsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumWheelsets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelsetAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWheelsetAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackCurvature) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTrackCurvature(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackGrade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTrackGrade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAirBrakingEffort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxAirBrakingEffort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxDynamicBrakingEffort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxDynamicBrakingEffort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxTractiveEffort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxTractiveEffort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicBrakingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDynamicBrakingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirBrakingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAirBrakingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBrakingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBrakingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTractiveForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTractiveForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelativeForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelativeForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPayloadMass) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPayloadMass(Z_Param_payload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPayloadMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPayloadMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTareMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTareMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMass(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCouplerRotationAndExtention) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_extention); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCouplerRotationAndExtention(Z_Param_index,Z_Param_Out_out_extention); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelsetOffset) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWheelsetOffset(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWheelRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelsetRotation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWheelsetRotation(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumWheelsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumWheelsets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelsetAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWheelsetAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackCurvature) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTrackCurvature(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackGrade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTrackGrade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAirBrakingEffort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxAirBrakingEffort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxDynamicBrakingEffort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxDynamicBrakingEffort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxTractiveEffort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxTractiveEffort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicBrakingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDynamicBrakingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirBrakingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAirBrakingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBrakingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBrakingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTractiveForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTractiveForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelativeForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRelativeForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPayloadMass) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPayloadMass(Z_Param_payload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPayloadMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPayloadMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTareMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTareMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMass(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGRailroadVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadVehicleMovementComponent)


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_INCLASS \
private: \
	static void StaticRegisterNativesUFGRailroadVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadVehicleMovementComponent)


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRailroadVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRailroadVehicleMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadVehicleMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadVehicleMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadVehicleMovementComponent(UFGRailroadVehicleMovementComponent&&); \
	NO_API UFGRailroadVehicleMovementComponent(const UFGRailroadVehicleMovementComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadVehicleMovementComponent(UFGRailroadVehicleMovementComponent&&); \
	NO_API UFGRailroadVehicleMovementComponent(const UFGRailroadVehicleMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadVehicleMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadVehicleMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRailroadVehicleMovementComponent)


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mWheelsetSetups() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mWheelsetSetups); } \
	FORCEINLINE static uint32 __PPO__mWheelRadius() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mWheelRadius); } \
	FORCEINLINE static uint32 __PPO__mCouplerSetups() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mCouplerSetups); } \
	FORCEINLINE static uint32 __PPO__mMass() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mMass); } \
	FORCEINLINE static uint32 __PPO__mMaxVelocity() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mMaxVelocity); } \
	FORCEINLINE static uint32 __PPO__mPayloadMass() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mPayloadMass); } \
	FORCEINLINE static uint32 __PPO__mDragCoefficient() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mDragCoefficient); } \
	FORCEINLINE static uint32 __PPO__mChassisWidth() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mChassisWidth); } \
	FORCEINLINE static uint32 __PPO__mChassisHeight() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mChassisHeight); } \
	FORCEINLINE static uint32 __PPO__mRollingResistanceCoefficient() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mRollingResistanceCoefficient); } \
	FORCEINLINE static uint32 __PPO__mCurvatureResistanceCoefficient() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mCurvatureResistanceCoefficient); } \
	FORCEINLINE static uint32 __PPO__mMaxAirBrakingEffort() { return STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mMaxAirBrakingEffort); }


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_90_PROLOG
#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_INCLASS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGRailroadVehicleMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRailroadVehicleMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
