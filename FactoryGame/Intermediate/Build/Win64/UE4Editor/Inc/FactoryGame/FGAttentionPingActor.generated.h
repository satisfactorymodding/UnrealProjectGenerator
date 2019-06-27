// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGAttentionPingActor_generated_h
#error "FGAttentionPingActor.generated.h already included, missing '#pragma once' in FGAttentionPingActor.h"
#endif
#define FACTORYGAME_FGAttentionPingActor_generated_h

#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PlayerSlotIdx) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlayerSlotIdx(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerSlotIdx) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPlayerSlotIdx(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PlayerSlotIdx) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlayerSlotIdx(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerSlotIdx) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPlayerSlotIdx(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGAttentionPingActor(); \
	friend struct Z_Construct_UClass_AFGAttentionPingActor_Statics; \
public: \
	DECLARE_CLASS(AFGAttentionPingActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGAttentionPingActor)


#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFGAttentionPingActor(); \
	friend struct Z_Construct_UClass_AFGAttentionPingActor_Statics; \
public: \
	DECLARE_CLASS(AFGAttentionPingActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGAttentionPingActor)


#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGAttentionPingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGAttentionPingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGAttentionPingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGAttentionPingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGAttentionPingActor(AFGAttentionPingActor&&); \
	NO_API AFGAttentionPingActor(const AFGAttentionPingActor&); \
public:


#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGAttentionPingActor(AFGAttentionPingActor&&); \
	NO_API AFGAttentionPingActor(const AFGAttentionPingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGAttentionPingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGAttentionPingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGAttentionPingActor)


#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPlayerSlotIdx() { return STRUCT_OFFSET(AFGAttentionPingActor, mPlayerSlotIdx); }


#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_9_PROLOG \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGAttentionPingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGAttentionPingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
