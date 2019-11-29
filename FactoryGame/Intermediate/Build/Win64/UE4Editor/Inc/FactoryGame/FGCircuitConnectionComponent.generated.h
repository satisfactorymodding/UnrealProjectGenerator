// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGCircuitConnectionComponent;
#ifdef FACTORYGAME_FGCircuitConnectionComponent_generated_h
#error "FGCircuitConnectionComponent.generated.h already included, missing '#pragma once' in FGCircuitConnectionComponent.h"
#endif
#define FACTORYGAME_FGCircuitConnectionComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCircuitID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCircuitID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->IsConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHidden) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHidden(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveHiddenConnection) \
	{ \
		P_GET_OBJECT(UFGCircuitConnectionComponent,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveHiddenConnection(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddHiddenConnection) \
	{ \
		P_GET_OBJECT(UFGCircuitConnectionComponent,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddHiddenConnection(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumFreeConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumFreeConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumHiddenConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumHiddenConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumConnections(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCircuitID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCircuitID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->IsConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHidden) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHidden(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveHiddenConnection) \
	{ \
		P_GET_OBJECT(UFGCircuitConnectionComponent,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveHiddenConnection(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddHiddenConnection) \
	{ \
		P_GET_OBJECT(UFGCircuitConnectionComponent,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddHiddenConnection(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumFreeConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumFreeConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumHiddenConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumHiddenConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumConnections(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCircuitConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGCircuitConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGCircuitConnectionComponent, UFGConnectionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCircuitConnectionComponent)


#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFGCircuitConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGCircuitConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGCircuitConnectionComponent, UFGConnectionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCircuitConnectionComponent)


#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCircuitConnectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCircuitConnectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCircuitConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCircuitConnectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCircuitConnectionComponent(UFGCircuitConnectionComponent&&); \
	NO_API UFGCircuitConnectionComponent(const UFGCircuitConnectionComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCircuitConnectionComponent(UFGCircuitConnectionComponent&&); \
	NO_API UFGCircuitConnectionComponent(const UFGCircuitConnectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCircuitConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCircuitConnectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCircuitConnectionComponent)


#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMaxNumConnectionLinks() { return STRUCT_OFFSET(UFGCircuitConnectionComponent, mMaxNumConnectionLinks); } \
	FORCEINLINE static uint32 __PPO__mIsHiddenConnection() { return STRUCT_OFFSET(UFGCircuitConnectionComponent, mIsHiddenConnection); } \
	FORCEINLINE static uint32 __PPO__mWires() { return STRUCT_OFFSET(UFGCircuitConnectionComponent, mWires); } \
	FORCEINLINE static uint32 __PPO__mNbWiresConnected() { return STRUCT_OFFSET(UFGCircuitConnectionComponent, mNbWiresConnected); } \
	FORCEINLINE static uint32 __PPO__mHiddenConnections() { return STRUCT_OFFSET(UFGCircuitConnectionComponent, mHiddenConnections); } \
	FORCEINLINE static uint32 __PPO__mCircuitID() { return STRUCT_OFFSET(UFGCircuitConnectionComponent, mCircuitID); }


#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_19_PROLOG \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCircuitConnectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGCircuitConnectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
