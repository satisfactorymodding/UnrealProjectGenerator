// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGRailroadVehicleSoundComponent_generated_h
#error "FGRailroadVehicleSoundComponent.generated.h already included, missing '#pragma once' in FGRailroadVehicleSoundComponent.h"
#endif
#define FACTORYGAME_FGRailroadVehicleSoundComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_RPC_WRAPPERS \
	virtual void RestartSounds_Implementation(); \
 \
	DECLARE_FUNCTION(execRestartSounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartSounds_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RestartSounds_Implementation(); \
 \
	DECLARE_FUNCTION(execRestartSounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartSounds_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGRailroadVehicleSoundComponent(); \
	friend struct Z_Construct_UClass_UFGRailroadVehicleSoundComponent_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadVehicleSoundComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadVehicleSoundComponent)


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFGRailroadVehicleSoundComponent(); \
	friend struct Z_Construct_UClass_UFGRailroadVehicleSoundComponent_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadVehicleSoundComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadVehicleSoundComponent)


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRailroadVehicleSoundComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRailroadVehicleSoundComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadVehicleSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadVehicleSoundComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadVehicleSoundComponent(UFGRailroadVehicleSoundComponent&&); \
	NO_API UFGRailroadVehicleSoundComponent(const UFGRailroadVehicleSoundComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadVehicleSoundComponent(UFGRailroadVehicleSoundComponent&&); \
	NO_API UFGRailroadVehicleSoundComponent(const UFGRailroadVehicleSoundComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadVehicleSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadVehicleSoundComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGRailroadVehicleSoundComponent)


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mVehicleMovementComponent() { return STRUCT_OFFSET(UFGRailroadVehicleSoundComponent, mVehicleMovementComponent); } \
	FORCEINLINE static uint32 __PPO__mLocomotiveMovementComponent() { return STRUCT_OFFSET(UFGRailroadVehicleSoundComponent, mLocomotiveMovementComponent); } \
	FORCEINLINE static uint32 __PPO__mTrainOwner() { return STRUCT_OFFSET(UFGRailroadVehicleSoundComponent, mTrainOwner); } \
	FORCEINLINE static uint32 __PPO__mWheelsetsAkComponent() { return STRUCT_OFFSET(UFGRailroadVehicleSoundComponent, mWheelsetsAkComponent); } \
	FORCEINLINE static uint32 __PPO__mEnginesAkComponent() { return STRUCT_OFFSET(UFGRailroadVehicleSoundComponent, mEnginesAkComponent); } \
	FORCEINLINE static uint32 __PPO__mAllVehicleCentersAkComponent() { return STRUCT_OFFSET(UFGRailroadVehicleSoundComponent, mAllVehicleCentersAkComponent); }


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGRailroadVehicleSoundComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRailroadVehicleSoundComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
