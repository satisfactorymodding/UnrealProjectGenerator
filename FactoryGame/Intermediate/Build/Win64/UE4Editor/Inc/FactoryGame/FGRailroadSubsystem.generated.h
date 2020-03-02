// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGTrainStationIdentifier;
class AFGTrain;
class UObject;
class AFGRailroadSubsystem;
#ifdef FACTORYGAME_FGRailroadSubsystem_generated_h
#error "FGRailroadSubsystem.generated.h already included, missing '#pragma once' in FGRailroadSubsystem.h"
#endif
#define FACTORYGAME_FGRailroadSubsystem_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackGraph_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FTrackGraph>();

#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllTrainStations) \
	{ \
		P_GET_TARRAY_REF(AFGTrainStationIdentifier*,Z_Param_Out_out_stations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllTrainStations(Z_Param_Out_out_stations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrainStations) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackID); \
		P_GET_TARRAY_REF(AFGTrainStationIdentifier*,Z_Param_Out_out_stations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTrainStations(Z_Param_trackID,Z_Param_Out_out_stations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrains) \
	{ \
		P_GET_TARRAY_REF(AFGTrain*,Z_Param_Out_out_trains); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllTrains(Z_Param_Out_out_trains); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrains) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackID); \
		P_GET_TARRAY_REF(AFGTrain*,Z_Param_Out_out_trains); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTrains(Z_Param_trackID,Z_Param_Out_out_trains); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGRailroadSubsystem**)Z_Param__Result=AFGRailroadSubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllTrainStations) \
	{ \
		P_GET_TARRAY_REF(AFGTrainStationIdentifier*,Z_Param_Out_out_stations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllTrainStations(Z_Param_Out_out_stations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrainStations) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackID); \
		P_GET_TARRAY_REF(AFGTrainStationIdentifier*,Z_Param_Out_out_stations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTrainStations(Z_Param_trackID,Z_Param_Out_out_stations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrains) \
	{ \
		P_GET_TARRAY_REF(AFGTrain*,Z_Param_Out_out_trains); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllTrains(Z_Param_Out_out_trains); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrains) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackID); \
		P_GET_TARRAY_REF(AFGTrain*,Z_Param_Out_out_trains); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTrains(Z_Param_trackID,Z_Param_Out_out_trains); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGRailroadSubsystem**)Z_Param__Result=AFGRailroadSubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGRailroadSubsystem, NO_API)


#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGRailroadSubsystem(); \
	friend struct Z_Construct_UClass_AFGRailroadSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGRailroadSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRailroadSubsystem) \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGRailroadSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_INCLASS \
private: \
	static void StaticRegisterNativesAFGRailroadSubsystem(); \
	friend struct Z_Construct_UClass_AFGRailroadSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGRailroadSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRailroadSubsystem) \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGRailroadSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGRailroadSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGRailroadSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRailroadSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRailroadSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRailroadSubsystem(AFGRailroadSubsystem&&); \
	NO_API AFGRailroadSubsystem(const AFGRailroadSubsystem&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRailroadSubsystem(AFGRailroadSubsystem&&); \
	NO_API AFGRailroadSubsystem(const AFGRailroadSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRailroadSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRailroadSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGRailroadSubsystem)


#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mStationNames() { return STRUCT_OFFSET(AFGRailroadSubsystem, mStationNames); } \
	FORCEINLINE static uint32 __PPO__mTrackGraphs() { return STRUCT_OFFSET(AFGRailroadSubsystem, mTrackGraphs); } \
	FORCEINLINE static uint32 __PPO__mTrainStationIdentifiers() { return STRUCT_OFFSET(AFGRailroadSubsystem, mTrainStationIdentifiers); } \
	FORCEINLINE static uint32 __PPO__mTrains() { return STRUCT_OFFSET(AFGRailroadSubsystem, mTrains); }


#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_56_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGRailroadSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGRailroadSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
