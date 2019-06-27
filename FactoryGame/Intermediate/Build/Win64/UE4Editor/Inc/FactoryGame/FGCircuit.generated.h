// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGCircuit_generated_h
#error "FGCircuit.generated.h already included, missing '#pragma once' in FGCircuit.h"
#endif
#define FACTORYGAME_FGCircuit_generated_h

#define FactoryGame_Source_FactoryGame_FGCircuit_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCircuitID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCircuitID(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCircuit_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCircuitID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCircuitID(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCircuit_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCircuit(); \
	friend struct Z_Construct_UClass_UFGCircuit_Statics; \
public: \
	DECLARE_CLASS(UFGCircuit, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCircuit) \
	virtual UObject* _getUObject() const override { return const_cast<UFGCircuit*>(this); }


#define FactoryGame_Source_FactoryGame_FGCircuit_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFGCircuit(); \
	friend struct Z_Construct_UClass_UFGCircuit_Statics; \
public: \
	DECLARE_CLASS(UFGCircuit, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCircuit) \
	virtual UObject* _getUObject() const override { return const_cast<UFGCircuit*>(this); }


#define FactoryGame_Source_FactoryGame_FGCircuit_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCircuit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCircuit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCircuit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCircuit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCircuit(UFGCircuit&&); \
	NO_API UFGCircuit(const UFGCircuit&); \
public:


#define FactoryGame_Source_FactoryGame_FGCircuit_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCircuit(UFGCircuit&&); \
	NO_API UFGCircuit(const UFGCircuit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCircuit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCircuit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCircuit)


#define FactoryGame_Source_FactoryGame_FGCircuit_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCircuitID() { return STRUCT_OFFSET(UFGCircuit, mCircuitID); } \
	FORCEINLINE static uint32 __PPO__mComponents() { return STRUCT_OFFSET(UFGCircuit, mComponents); } \
	FORCEINLINE static uint32 __PPO__mInteractingPlayers() { return STRUCT_OFFSET(UFGCircuit, mInteractingPlayers); }


#define FactoryGame_Source_FactoryGame_FGCircuit_h_20_PROLOG
#define FactoryGame_Source_FactoryGame_FGCircuit_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCircuit_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCircuit_h_23_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCircuit_h_23_INCLASS \
	FactoryGame_Source_FactoryGame_FGCircuit_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCircuit_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCircuit_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCircuit_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCircuit_h_23_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCircuit_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGCircuit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
