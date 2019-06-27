// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRailroadTrackPosition;
struct FVector;
class AFGBuildableRailroadTrack;
struct FColor;
struct FRailroadPathFindingResult;
#ifdef FACTORYGAME_FGRailroadFunctionLibrary_generated_h
#error "FGRailroadFunctionLibrary.generated.h already included, missing '#pragma once' in FGRailroadFunctionLibrary.h"
#endif
#define FACTORYGAME_FGRailroadFunctionLibrary_generated_h

#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWorldLocationAndDirection) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_location); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGRailroadFunctionLibrary::GetWorldLocationAndDirection(Z_Param_Out_position,Z_Param_Out_out_location,Z_Param_Out_out_direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrack) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildableRailroadTrack**)Z_Param__Result=UFGRailroadFunctionLibrary::GetTrack(Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGRailroadFunctionLibrary::IsValid(Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugTrackPosition) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_color); \
		P_GET_UBOOL(Z_Param_isPersistentLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGRailroadFunctionLibrary::DrawDebugTrackPosition(Z_Param_Out_position,Z_Param_Out_color,Z_Param_isPersistentLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugRailroadPathResult) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_start); \
		P_GET_STRUCT_REF(FRailroadPathFindingResult,Z_Param_Out_result); \
		P_GET_UBOOL(Z_Param_isPersistentLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGRailroadFunctionLibrary::DrawDebugRailroadPathResult(Z_Param_Out_start,Z_Param_Out_result,Z_Param_isPersistentLines); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWorldLocationAndDirection) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_location); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGRailroadFunctionLibrary::GetWorldLocationAndDirection(Z_Param_Out_position,Z_Param_Out_out_location,Z_Param_Out_out_direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrack) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildableRailroadTrack**)Z_Param__Result=UFGRailroadFunctionLibrary::GetTrack(Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGRailroadFunctionLibrary::IsValid(Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugTrackPosition) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_color); \
		P_GET_UBOOL(Z_Param_isPersistentLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGRailroadFunctionLibrary::DrawDebugTrackPosition(Z_Param_Out_position,Z_Param_Out_color,Z_Param_isPersistentLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugRailroadPathResult) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_start); \
		P_GET_STRUCT_REF(FRailroadPathFindingResult,Z_Param_Out_result); \
		P_GET_UBOOL(Z_Param_isPersistentLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGRailroadFunctionLibrary::DrawDebugRailroadPathResult(Z_Param_Out_start,Z_Param_Out_result,Z_Param_isPersistentLines); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGRailroadFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGRailroadFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRailroadFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRailroadFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadFunctionLibrary(UFGRailroadFunctionLibrary&&); \
	NO_API UFGRailroadFunctionLibrary(const UFGRailroadFunctionLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRailroadFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadFunctionLibrary(UFGRailroadFunctionLibrary&&); \
	NO_API UFGRailroadFunctionLibrary(const UFGRailroadFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRailroadFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRailroadFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
