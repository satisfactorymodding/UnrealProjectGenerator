// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGCircuitConnectionComponent;
#ifdef FACTORYGAME_FGBuildableWire_generated_h
#error "FGBuildableWire.generated.h already included, missing '#pragma once' in FGBuildableWire.h"
#endif
#define FACTORYGAME_FGBuildableWire_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetConnection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCircuitConnectionComponent**)Z_Param__Result=P_THIS->GetConnection(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConnection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCircuitConnectionComponent**)Z_Param__Result=P_THIS->GetConnection(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGBuildableWire, NO_API)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableWire(); \
	friend struct Z_Construct_UClass_AFGBuildableWire_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableWire, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableWire) \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableWire(); \
	friend struct Z_Construct_UClass_AFGBuildableWire_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableWire, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableWire) \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableWire(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableWire) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableWire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableWire); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableWire(AFGBuildableWire&&); \
	NO_API AFGBuildableWire(const AFGBuildableWire&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableWire(AFGBuildableWire&&); \
	NO_API AFGBuildableWire(const AFGBuildableWire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableWire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableWire); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableWire)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mWireMesh() { return STRUCT_OFFSET(AFGBuildableWire, mWireMesh); } \
	FORCEINLINE static uint32 __PPO__mConnections() { return STRUCT_OFFSET(AFGBuildableWire, mConnections); } \
	FORCEINLINE static uint32 __PPO__mLocations() { return STRUCT_OFFSET(AFGBuildableWire, mLocations); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_16_PROLOG
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableWire>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableWire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
