// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGPowerInfoComponent;
enum class EMultipleUnitControl : uint8;
class UFGLocomotiveMovementComponent;
#ifdef FACTORYGAME_FGLocomotive_generated_h
#error "FGLocomotive.generated.h already included, missing '#pragma once' in FGLocomotive.h"
#endif
#define FACTORYGAME_FGLocomotive_generated_h

#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMovementTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMovementTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerInfoComponent**)Z_Param__Result=P_THIS->GetPowerInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMultipleUnitControlMaster) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMultipleUnitControlMaster(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMultipleUnitControlMaster) \
	{ \
		P_GET_UBOOL(Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetMultipleUnitControlMaster(Z_Param_force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSetTrainMultipleUnitMaster) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSetTrainMultipleUnitMaster(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMultipleUnitRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMultipleUnitControl*)Z_Param__Result=P_THIS->GetMultipleUnitRole(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocomotiveMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGLocomotiveMovementComponent**)Z_Param__Result=P_THIS->GetLocomotiveMovementComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMovementTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMovementTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerInfoComponent**)Z_Param__Result=P_THIS->GetPowerInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMultipleUnitControlMaster) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMultipleUnitControlMaster(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMultipleUnitControlMaster) \
	{ \
		P_GET_UBOOL(Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetMultipleUnitControlMaster(Z_Param_force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSetTrainMultipleUnitMaster) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSetTrainMultipleUnitMaster(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMultipleUnitRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMultipleUnitControl*)Z_Param__Result=P_THIS->GetMultipleUnitRole(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocomotiveMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGLocomotiveMovementComponent**)Z_Param__Result=P_THIS->GetLocomotiveMovementComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGLocomotive(); \
	friend struct Z_Construct_UClass_AFGLocomotive_Statics; \
public: \
	DECLARE_CLASS(AFGLocomotive, AFGRailroadVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGLocomotive)


#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFGLocomotive(); \
	friend struct Z_Construct_UClass_AFGLocomotive_Statics; \
public: \
	DECLARE_CLASS(AFGLocomotive, AFGRailroadVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGLocomotive)


#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGLocomotive(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGLocomotive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGLocomotive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGLocomotive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGLocomotive(AFGLocomotive&&); \
	NO_API AFGLocomotive(const AFGLocomotive&); \
public:


#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGLocomotive(AFGLocomotive&&); \
	NO_API AFGLocomotive(const AFGLocomotive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGLocomotive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGLocomotive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGLocomotive)


#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPowerConsumption() { return STRUCT_OFFSET(AFGLocomotive, mPowerConsumption); } \
	FORCEINLINE static uint32 __PPO__mSlidingShoe() { return STRUCT_OFFSET(AFGLocomotive, mSlidingShoe); } \
	FORCEINLINE static uint32 __PPO__mPowerInfo() { return STRUCT_OFFSET(AFGLocomotive, mPowerInfo); } \
	FORCEINLINE static uint32 __PPO__mReplicatedMovementTransform() { return STRUCT_OFFSET(AFGLocomotive, mReplicatedMovementTransform); } \
	FORCEINLINE static uint32 __PPO__mVehicleMovement() { return STRUCT_OFFSET(AFGLocomotive, mVehicleMovement); }


#define FactoryGame_Source_FactoryGame_FGLocomotive_h_19_PROLOG \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGLocomotive_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGLocomotive_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGLocomotive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
