// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGBuildableRailroadStation;
class AFGLocomotive;
struct FRailroadPathFindingResult;
class UFGRailroadTimeTable;
class AFGRailroadVehicle;
struct FTrainData;
class UObject;
class AFGRailroadSubsystem;
#ifdef FACTORYGAME_FGRailroadSubsystem_generated_h
#error "FGRailroadSubsystem.generated.h already included, missing '#pragma once' in FGRailroadSubsystem.h"
#endif
#define FACTORYGAME_FGRailroadSubsystem_generated_h

#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackGraph_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrain_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrainData_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTrainStops) \
	{ \
		P_GET_TARRAY_REF(AFGBuildableRailroadStation*,Z_Param_Out_out_stops); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTrainStops(Z_Param_Out_out_stops); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathSync) \
	{ \
		P_GET_OBJECT(AFGLocomotive,Z_Param_locomotive); \
		P_GET_OBJECT(AFGBuildableRailroadStation,Z_Param_stop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRailroadPathFindingResult*)Z_Param__Result=P_THIS->FindPathSync(Z_Param_locomotive,Z_Param_stop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindOrAddTimeTable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trainID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRailroadTimeTable**)Z_Param__Result=P_THIS->FindOrAddTimeTable(Z_Param_trainID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTimeTable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trainID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRailroadTimeTable**)Z_Param__Result=P_THIS->FindTimeTable(Z_Param_trainID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrainOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trainID); \
		P_GET_OBJECT_REF(AFGRailroadVehicle,Z_Param_Out_out_firstVehicle); \
		P_GET_OBJECT_REF(AFGRailroadVehicle,Z_Param_Out_out_lastVehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTrainOrder(Z_Param_trainID,Z_Param_Out_out_firstVehicle,Z_Param_Out_out_lastVehicle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrainData) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trainID); \
		P_GET_STRUCT_REF(FTrainData,Z_Param_Out_out_trainData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTrainData(Z_Param_trainID,Z_Param_Out_out_trainData); \
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


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTrainStops) \
	{ \
		P_GET_TARRAY_REF(AFGBuildableRailroadStation*,Z_Param_Out_out_stops); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTrainStops(Z_Param_Out_out_stops); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathSync) \
	{ \
		P_GET_OBJECT(AFGLocomotive,Z_Param_locomotive); \
		P_GET_OBJECT(AFGBuildableRailroadStation,Z_Param_stop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRailroadPathFindingResult*)Z_Param__Result=P_THIS->FindPathSync(Z_Param_locomotive,Z_Param_stop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindOrAddTimeTable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trainID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRailroadTimeTable**)Z_Param__Result=P_THIS->FindOrAddTimeTable(Z_Param_trainID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTimeTable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trainID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGRailroadTimeTable**)Z_Param__Result=P_THIS->FindTimeTable(Z_Param_trainID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrainOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trainID); \
		P_GET_OBJECT_REF(AFGRailroadVehicle,Z_Param_Out_out_firstVehicle); \
		P_GET_OBJECT_REF(AFGRailroadVehicle,Z_Param_Out_out_lastVehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTrainOrder(Z_Param_trainID,Z_Param_Out_out_firstVehicle,Z_Param_Out_out_lastVehicle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrainData) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trainID); \
		P_GET_STRUCT_REF(FTrainData,Z_Param_Out_out_trainData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTrainData(Z_Param_trainID,Z_Param_Out_out_trainData); \
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


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGRailroadSubsystem, NO_API)


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGRailroadSubsystem(); \
	friend struct Z_Construct_UClass_AFGRailroadSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGRailroadSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRailroadSubsystem) \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGRailroadSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_INCLASS \
private: \
	static void StaticRegisterNativesAFGRailroadSubsystem(); \
	friend struct Z_Construct_UClass_AFGRailroadSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGRailroadSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRailroadSubsystem) \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGRailroadSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRailroadSubsystem(AFGRailroadSubsystem&&); \
	NO_API AFGRailroadSubsystem(const AFGRailroadSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRailroadSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRailroadSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGRailroadSubsystem)


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTrains() { return STRUCT_OFFSET(AFGRailroadSubsystem, mTrains); } \
	FORCEINLINE static uint32 __PPO__mTrainStops() { return STRUCT_OFFSET(AFGRailroadSubsystem, mTrainStops); } \
	FORCEINLINE static uint32 __PPO__mStationNames() { return STRUCT_OFFSET(AFGRailroadSubsystem, mStationNames); } \
	FORCEINLINE static uint32 __PPO__mTrackGraphs() { return STRUCT_OFFSET(AFGRailroadSubsystem, mTrackGraphs); }


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_113_PROLOG
#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_INCLASS \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRailroadSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
