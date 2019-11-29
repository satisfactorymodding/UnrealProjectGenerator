// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGTrainStationIdentifier;
#ifdef FACTORYGAME_FGBuildableRailroadStation_generated_h
#error "FGBuildableRailroadStation.generated.h already included, missing '#pragma once' in FGBuildableRailroadStation.h"
#endif
#define FACTORYGAME_FGBuildableRailroadStation_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStationIdentifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTrainStationIdentifier**)Z_Param__Result=P_THIS->GetStationIdentifier(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStationIdentifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTrainStationIdentifier**)Z_Param__Result=P_THIS->GetStationIdentifier(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadStation(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadStation_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadStation, AFGBuildableTrainPlatform, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadStation)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadStation(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadStation_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadStation, AFGBuildableTrainPlatform, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadStation)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableRailroadStation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableRailroadStation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadStation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadStation(AFGBuildableRailroadStation&&); \
	NO_API AFGBuildableRailroadStation(const AFGBuildableRailroadStation&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadStation(AFGBuildableRailroadStation&&); \
	NO_API AFGBuildableRailroadStation(const AFGBuildableRailroadStation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadStation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableRailroadStation)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDockedPlatformList() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mDockedPlatformList); } \
	FORCEINLINE static uint32 __PPO__mDockingLocomotive() { return STRUCT_OFFSET(AFGBuildableRailroadStation, mDockingLocomotive); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_21_PROLOG \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableRailroadStation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadStation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
