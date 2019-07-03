// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGCircuit;
class UObject;
class AFGCircuitSubsystem;
#ifdef FACTORYGAME_FGCircuitSubsystem_generated_h
#error "FGCircuitSubsystem.generated.h already included, missing '#pragma once' in FGCircuitSubsystem.h"
#endif
#define FACTORYGAME_FGCircuitSubsystem_generated_h

#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedCircuits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedCircuits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindCircuit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_circuitID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCircuit**)Z_Param__Result=P_THIS->FindCircuit(Z_Param_circuitID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCircuitSubsystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCircuitSubsystem**)Z_Param__Result=AFGCircuitSubsystem::GetCircuitSubsystem(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedCircuits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedCircuits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindCircuit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_circuitID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCircuit**)Z_Param__Result=P_THIS->FindCircuit(Z_Param_circuitID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCircuitSubsystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCircuitSubsystem**)Z_Param__Result=AFGCircuitSubsystem::GetCircuitSubsystem(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGCircuitSubsystem, NO_API)


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCircuitSubsystem(); \
	friend struct Z_Construct_UClass_AFGCircuitSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGCircuitSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCircuitSubsystem) \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGCircuitSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFGCircuitSubsystem(); \
	friend struct Z_Construct_UClass_AFGCircuitSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGCircuitSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCircuitSubsystem) \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGCircuitSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCircuitSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCircuitSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCircuitSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCircuitSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCircuitSubsystem(AFGCircuitSubsystem&&); \
	NO_API AFGCircuitSubsystem(const AFGCircuitSubsystem&); \
public:


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCircuitSubsystem(AFGCircuitSubsystem&&); \
	NO_API AFGCircuitSubsystem(const AFGCircuitSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCircuitSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCircuitSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGCircuitSubsystem)


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCircuits() { return STRUCT_OFFSET(AFGCircuitSubsystem, mCircuits); } \
	FORCEINLINE static uint32 __PPO__mReplicatedCircuits() { return STRUCT_OFFSET(AFGCircuitSubsystem, mReplicatedCircuits); }


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_19_PROLOG \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGCircuitSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
