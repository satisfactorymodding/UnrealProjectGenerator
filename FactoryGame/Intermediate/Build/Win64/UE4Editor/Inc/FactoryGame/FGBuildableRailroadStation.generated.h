// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGBuildableRailroadStation_generated_h
#error "FGBuildableRailroadStation.generated.h already included, missing '#pragma once' in FGBuildableRailroadStation.h"
#endif
#define FACTORYGAME_FGBuildableRailroadStation_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Name) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Name(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetName(Z_Param_Out_name); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Name) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Name(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetName(Z_Param_Out_name); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadStation(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadStation_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadStation, AFGBuildableFactory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadStation) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableRailroadStation*>(this); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadStation(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadStation_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadStation, AFGBuildableFactory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadStation) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableRailroadStation*>(this); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableRailroadStation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableRailroadStation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadStation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadStation(AFGBuildableRailroadStation&&); \
	NO_API AFGBuildableRailroadStation(const AFGBuildableRailroadStation&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableRailroadStation() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadStation(AFGBuildableRailroadStation&&); \
	NO_API AFGBuildableRailroadStation(const AFGBuildableRailroadStation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadStation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableRailroadStation)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
