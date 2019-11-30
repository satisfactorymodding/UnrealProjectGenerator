// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGBuildableRailroadSwitchControl_generated_h
#error "FGBuildableRailroadSwitchControl.generated.h already included, missing '#pragma once' in FGBuildableRailroadSwitchControl.h"
#endif
#define FACTORYGAME_FGBuildableRailroadSwitchControl_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSwitchPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSwitchPosition(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSwitchPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSwitchPosition(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadSwitchControl(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadSwitchControl, AFGBuildableFactory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadSwitchControl)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadSwitchControl(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadSwitchControl, AFGBuildableFactory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadSwitchControl)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableRailroadSwitchControl(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableRailroadSwitchControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadSwitchControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadSwitchControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadSwitchControl(AFGBuildableRailroadSwitchControl&&); \
	NO_API AFGBuildableRailroadSwitchControl(const AFGBuildableRailroadSwitchControl&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadSwitchControl(AFGBuildableRailroadSwitchControl&&); \
	NO_API AFGBuildableRailroadSwitchControl(const AFGBuildableRailroadSwitchControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadSwitchControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadSwitchControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableRailroadSwitchControl)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mControlledConnection() { return STRUCT_OFFSET(AFGBuildableRailroadSwitchControl, mControlledConnection); } \
	FORCEINLINE static uint32 __PPO__mSwitchPosition() { return STRUCT_OFFSET(AFGBuildableRailroadSwitchControl, mSwitchPosition); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadSwitchControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
