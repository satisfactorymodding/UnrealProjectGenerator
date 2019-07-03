// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class AFGTrainStationIdentifier;
#ifdef FACTORYGAME_FGBuildableRailroadStation_generated_h
#error "FGBuildableRailroadStation.generated.h already included, missing '#pragma once' in FGBuildableRailroadStation.h"
#endif
#define FACTORYGAME_FGBuildableRailroadStation_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_RPC_WRAPPERS \
	virtual void OnLocomotiveDocked_Implementation(); \
 \
	DECLARE_FUNCTION(execPerformIsDockedCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformIsDockedCheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDockingColliderEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDockingColliderEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDockingColliderBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDockingColliderBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocomotiveDocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocomotiveDocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStationIdentifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTrainStationIdentifier**)Z_Param__Result=P_THIS->GetStationIdentifier(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnLocomotiveDocked_Implementation(); \
 \
	DECLARE_FUNCTION(execPerformIsDockedCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformIsDockedCheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDockingColliderEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDockingColliderEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDockingColliderBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDockingColliderBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocomotiveDocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocomotiveDocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStationIdentifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTrainStationIdentifier**)Z_Param__Result=P_THIS->GetStationIdentifier(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadStation(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadStation_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadStation, AFGBuildableTrainPlatform, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadStation) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableRailroadStation*>(this); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadStation(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadStation_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadStation, AFGBuildableTrainPlatform, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadStation) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableRailroadStation*>(this); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableRailroadStation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableRailroadStation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadStation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadStation(AFGBuildableRailroadStation&&); \
	NO_API AFGBuildableRailroadStation(const AFGBuildableRailroadStation&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadStation(AFGBuildableRailroadStation&&); \
	NO_API AFGBuildableRailroadStation(const AFGBuildableRailroadStation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadStation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableRailroadStation)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mStationDockingStatus() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mStationDockingStatus); } \
	FORCEINLINE static uint32 __PPO__mDockedPlatformList() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mDockedPlatformList); } \
	FORCEINLINE static uint32 __PPO__mRelevantDockedVehicles() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mRelevantDockedVehicles); } \
	FORCEINLINE static uint32 __PPO__mStationDockCollider() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mStationDockCollider); } \
	FORCEINLINE static uint32 __PPO__mUpdateDockingStatusTimer() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mUpdateDockingStatusTimer); } \
	FORCEINLINE static uint32 __PPO__mDockingLocomotive() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mDockingLocomotive); } \
	FORCEINLINE static uint32 __PPO__mMaxDockSpeed() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mMaxDockSpeed); } \
	FORCEINLINE static uint32 __PPO__mMaxDockDistanceFromCenter() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mMaxDockDistanceFromCenter); } \
	FORCEINLINE static uint32 __PPO__mTrackPosition() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mTrackPosition); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_26_PROLOG \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h


#define FOREACH_ENUM_ESTATIONDOCKINGSTATUS(op) \
	op(EStationDockingStatus::ESDS_NotDocked) \
	op(EStationDockingStatus::ESDS_DockInProcess) \
	op(EStationDockingStatus::ESDS_DockComplete) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
