// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimeTableStop;
#ifdef FACTORYGAME_FGRailroadTimeTable_generated_h
#error "FGRailroadTimeTable.generated.h already included, missing '#pragma once' in FGRailroadTimeTable.h"
#endif
#define FACTORYGAME_FGRailroadTimeTable_generated_h

#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeTableStop_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStopDuration) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStopDuration(Z_Param_index,Z_Param_duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentStop(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimeTableStop*)Z_Param__Result=P_THIS->GetStop(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidStop(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStops) \
	{ \
		P_GET_TARRAY_REF(FTimeTableStop,Z_Param_Out_out_stops); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStops(Z_Param_Out_out_stops); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumStops) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumStops(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveStop(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_STRUCT_REF(FTimeTableStop,Z_Param_Out_stop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStop(Z_Param_index,Z_Param_Out_stop); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStopDuration) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStopDuration(Z_Param_index,Z_Param_duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentStop(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimeTableStop*)Z_Param__Result=P_THIS->GetStop(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidStop(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStops) \
	{ \
		P_GET_TARRAY_REF(FTimeTableStop,Z_Param_Out_out_stops); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStops(Z_Param_Out_out_stops); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumStops) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumStops(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveStop(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_STRUCT_REF(FTimeTableStop,Z_Param_Out_stop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStop(Z_Param_index,Z_Param_Out_stop); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGRailroadTimeTable(); \
	friend struct Z_Construct_UClass_UFGRailroadTimeTable_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadTimeTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadTimeTable) \
	virtual UObject* _getUObject() const override { return const_cast<UFGRailroadTimeTable*>(this); }


#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUFGRailroadTimeTable(); \
	friend struct Z_Construct_UClass_UFGRailroadTimeTable_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadTimeTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadTimeTable) \
	virtual UObject* _getUObject() const override { return const_cast<UFGRailroadTimeTable*>(this); }


#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRailroadTimeTable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRailroadTimeTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadTimeTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadTimeTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadTimeTable(UFGRailroadTimeTable&&); \
	NO_API UFGRailroadTimeTable(const UFGRailroadTimeTable&); \
public:


#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadTimeTable(UFGRailroadTimeTable&&); \
	NO_API UFGRailroadTimeTable(const UFGRailroadTimeTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadTimeTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadTimeTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGRailroadTimeTable)


#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mStops() { return STRUCT_OFFSET(UFGRailroadTimeTable, mStops); } \
	FORCEINLINE static uint32 __PPO__mCurrentStop() { return STRUCT_OFFSET(UFGRailroadTimeTable, mCurrentStop); }


#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_32_PROLOG
#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_INCLASS \
	FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRailroadTimeTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
