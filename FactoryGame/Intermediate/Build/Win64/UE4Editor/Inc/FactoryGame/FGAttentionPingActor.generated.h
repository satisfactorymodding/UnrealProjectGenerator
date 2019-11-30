// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGPlayerState;
#ifdef FACTORYGAME_FGAttentionPingActor_generated_h
#error "FGAttentionPingActor.generated.h already included, missing '#pragma once' in FGAttentionPingActor.h"
#endif
#define FACTORYGAME_FGAttentionPingActor_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_OwningPlayerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OwningPlayerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGPlayerState**)Z_Param__Result=P_THIS->GetOwningPlayerState(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_OwningPlayerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OwningPlayerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGPlayerState**)Z_Param__Result=P_THIS->GetOwningPlayerState(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGAttentionPingActor(); \
	friend struct Z_Construct_UClass_AFGAttentionPingActor_Statics; \
public: \
	DECLARE_CLASS(AFGAttentionPingActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGAttentionPingActor)


#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGAttentionPingActor(); \
	friend struct Z_Construct_UClass_AFGAttentionPingActor_Statics; \
public: \
	DECLARE_CLASS(AFGAttentionPingActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGAttentionPingActor)


#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGAttentionPingActor(AFGAttentionPingActor&&); \
	NO_API AFGAttentionPingActor(const AFGAttentionPingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGAttentionPingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGAttentionPingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGAttentionPingActor)


#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOwningPlayerState() { return STRUCT_OFFSET(AFGAttentionPingActor, mOwningPlayerState); }


#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGAttentionPingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
