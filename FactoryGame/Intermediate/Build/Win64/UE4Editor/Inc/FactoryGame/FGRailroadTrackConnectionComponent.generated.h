// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGRailroadTrackConnectionComponent;
#ifdef FACTORYGAME_FGRailroadTrackConnectionComponent_generated_h
#error "FGRailroadTrackConnectionComponent.generated.h already included, missing '#pragma once' in FGRailroadTrackConnectionComponent.h"
#endif
#define FACTORYGAME_FGRailroadTrackConnectionComponent_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_13_DELEGATE \
struct _Script_FactoryGame_eventOnRailRoadConnectionSwitched_Parms \
{ \
	int32 newSwitch; \
}; \
static inline void FOnRailRoadConnectionSwitched_DelegateWrapper(const FMulticastScriptDelegate& OnRailRoadConnectionSwitched, int32 newSwitch) \
{ \
	_Script_FactoryGame_eventOnRailRoadConnectionSwitched_Parms Parms; \
	Parms.newSwitch=newSwitch; \
	OnRailRoadConnectionSwitched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSwitchPosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSwitchPosition(Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSwitchPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSwitchPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSwitchPositions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSwitchPositions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRailroadTrackConnectionComponent**)Z_Param__Result=P_THIS->GetConnection(Z_Param_position); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSwitchPosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSwitchPosition(Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSwitchPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSwitchPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSwitchPositions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSwitchPositions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRailroadTrackConnectionComponent**)Z_Param__Result=P_THIS->GetConnection(Z_Param_position); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGRailroadTrackConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadTrackConnectionComponent, UFGConnectionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadTrackConnectionComponent)


#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFGRailroadTrackConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadTrackConnectionComponent, UFGConnectionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadTrackConnectionComponent)


#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRailroadTrackConnectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRailroadTrackConnectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadTrackConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadTrackConnectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadTrackConnectionComponent(UFGRailroadTrackConnectionComponent&&); \
	NO_API UFGRailroadTrackConnectionComponent(const UFGRailroadTrackConnectionComponent&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadTrackConnectionComponent(UFGRailroadTrackConnectionComponent&&); \
	NO_API UFGRailroadTrackConnectionComponent(const UFGRailroadTrackConnectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadTrackConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadTrackConnectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGRailroadTrackConnectionComponent)


#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mConnectedComponents() { return STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mConnectedComponents); } \
	FORCEINLINE static uint32 __PPO__mSwitchPosition() { return STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mSwitchPosition); } \
	FORCEINLINE static uint32 __PPO__mSwitchControl() { return STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mSwitchControl); } \
	FORCEINLINE static uint32 __PPO__mStation() { return STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mStation); } \
	FORCEINLINE static uint32 __PPO__mSignal() { return STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mSignal); }


#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_18_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGRailroadTrackConnectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGRailroadTrackConnectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
