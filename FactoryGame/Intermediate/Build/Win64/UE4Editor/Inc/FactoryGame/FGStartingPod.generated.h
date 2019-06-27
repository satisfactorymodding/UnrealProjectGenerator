// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGStartingPod_generated_h
#error "FGStartingPod.generated.h already included, missing '#pragma once' in FGStartingPod.h"
#endif
#define FACTORYGAME_FGStartingPod_generated_h

#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCachedPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetCachedPlayer(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCachedPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetCachedPlayer(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGStartingPod(); \
	friend struct Z_Construct_UClass_AFGStartingPod_Statics; \
public: \
	DECLARE_CLASS(AFGStartingPod, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGStartingPod) \
	virtual UObject* _getUObject() const override { return const_cast<AFGStartingPod*>(this); }


#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFGStartingPod(); \
	friend struct Z_Construct_UClass_AFGStartingPod_Statics; \
public: \
	DECLARE_CLASS(AFGStartingPod, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGStartingPod) \
	virtual UObject* _getUObject() const override { return const_cast<AFGStartingPod*>(this); }


#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGStartingPod(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGStartingPod) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGStartingPod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGStartingPod); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGStartingPod(AFGStartingPod&&); \
	NO_API AFGStartingPod(const AFGStartingPod&); \
public:


#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGStartingPod(AFGStartingPod&&); \
	NO_API AFGStartingPod(const AFGStartingPod&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGStartingPod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGStartingPod); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGStartingPod)


#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDismantleStacks() { return STRUCT_OFFSET(AFGStartingPod, mDismantleStacks); } \
	FORCEINLINE static uint32 __PPO__mDropPodMesh() { return STRUCT_OFFSET(AFGStartingPod, mDropPodMesh); }


#define FactoryGame_Source_FactoryGame_FGStartingPod_h_10_PROLOG \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGStartingPod_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGStartingPod_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGStartingPod_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
