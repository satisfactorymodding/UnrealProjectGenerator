// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRailroadTrackPosition;
enum class ERailroadVehicleCoupler : uint8;
class AFGRailroadVehicle;
class AFGTrain;
class UFGRailroadVehicleMovementComponent;
#ifdef FACTORYGAME_FGRailroadVehicle_generated_h
#error "FGRailroadVehicle.generated.h already included, missing '#pragma once' in FGRailroadVehicle.h"
#endif
#define FACTORYGAME_FGRailroadVehicle_generated_h

#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTrackGraphID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTrackGraphID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRailroadTrackPosition*)Z_Param__Result=P_THIS->GetTrackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoupledVehicleAt) \
	{ \
		P_GET_ENUM(ERailroadVehicleCoupler,Z_Param_coupler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGRailroadVehicle**)Z_Param__Result=P_THIS->GetCoupledVehicleAt(ERailroadVehicleCoupler(Z_Param_coupler)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCoupledAt) \
	{ \
		P_GET_ENUM(ERailroadVehicleCoupler,Z_Param_coupler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCoupledAt(ERailroadVehicleCoupler(Z_Param_coupler)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOrientationReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOrientationReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTrain**)Z_Param__Result=P_THIS->GetTrain(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRailroadVehicleMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRailroadVehicleMovementComponent**)Z_Param__Result=P_THIS->GetRailroadVehicleMovementComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTrackGraphID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTrackGraphID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRailroadTrackPosition*)Z_Param__Result=P_THIS->GetTrackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoupledVehicleAt) \
	{ \
		P_GET_ENUM(ERailroadVehicleCoupler,Z_Param_coupler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGRailroadVehicle**)Z_Param__Result=P_THIS->GetCoupledVehicleAt(ERailroadVehicleCoupler(Z_Param_coupler)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCoupledAt) \
	{ \
		P_GET_ENUM(ERailroadVehicleCoupler,Z_Param_coupler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCoupledAt(ERailroadVehicleCoupler(Z_Param_coupler)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOrientationReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOrientationReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTrain**)Z_Param__Result=P_THIS->GetTrain(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRailroadVehicleMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRailroadVehicleMovementComponent**)Z_Param__Result=P_THIS->GetRailroadVehicleMovementComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGRailroadVehicle, NO_API)


#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGRailroadVehicle(); \
	friend struct Z_Construct_UClass_AFGRailroadVehicle_Statics; \
public: \
	DECLARE_CLASS(AFGRailroadVehicle, AFGVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRailroadVehicle) \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAFGRailroadVehicle(); \
	friend struct Z_Construct_UClass_AFGRailroadVehicle_Statics; \
public: \
	DECLARE_CLASS(AFGRailroadVehicle, AFGVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRailroadVehicle) \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGRailroadVehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGRailroadVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRailroadVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRailroadVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRailroadVehicle(AFGRailroadVehicle&&); \
	NO_API AFGRailroadVehicle(const AFGRailroadVehicle&); \
public:


#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRailroadVehicle(AFGRailroadVehicle&&); \
	NO_API AFGRailroadVehicle(const AFGRailroadVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRailroadVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRailroadVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGRailroadVehicle)


#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTrain() { return STRUCT_OFFSET(AFGRailroadVehicle, mTrain); } \
	FORCEINLINE static uint32 __PPO__mLength() { return STRUCT_OFFSET(AFGRailroadVehicle, mLength); } \
	FORCEINLINE static uint32 __PPO__mDockedAtPlatform() { return STRUCT_OFFSET(AFGRailroadVehicle, mDockedAtPlatform); } \
	FORCEINLINE static uint32 __PPO__mCoupledVehicles() { return STRUCT_OFFSET(AFGRailroadVehicle, mCoupledVehicles); } \
	FORCEINLINE static uint32 __PPO__mIsOrientationReversed() { return STRUCT_OFFSET(AFGRailroadVehicle, mIsOrientationReversed); } \
	FORCEINLINE static uint32 __PPO__mTrackPosition() { return STRUCT_OFFSET(AFGRailroadVehicle, mTrackPosition); }


#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_26_PROLOG
#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_INCLASS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicle_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRailroadVehicle_h


#define FOREACH_ENUM_ERAILROADVEHICLECOUPLER(op) \
	op(ERailroadVehicleCoupler::RVC_FRONT) \
	op(ERailroadVehicleCoupler::RVC_BACK) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
