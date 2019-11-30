// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGMinimapCaptureActor;
struct FVector;
struct FVector2D;
class UObject;
#ifdef FACTORYGAME_FGMapFunctionLibrary_generated_h
#error "FGMapFunctionLibrary.generated.h already included, missing '#pragma once' in FGMapFunctionLibrary.h"
#endif
#define FACTORYGAME_FGMapFunctionLibrary_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMapDistance) \
	{ \
		P_GET_OBJECT(AFGMinimapCaptureActor,Z_Param_minimapCaptureActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_worldDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mapResolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGMapFunctionLibrary::GetMapDistance(Z_Param_minimapCaptureActor,Z_Param_worldDistance,Z_Param_mapResolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedPosition) \
	{ \
		P_GET_OBJECT(AFGMinimapCaptureActor,Z_Param_minimapCaptureActor); \
		P_GET_STRUCT(FVector,Z_Param_worldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UFGMapFunctionLibrary::GetNormalizedPosition(Z_Param_minimapCaptureActor,Z_Param_worldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapPosition) \
	{ \
		P_GET_OBJECT(AFGMinimapCaptureActor,Z_Param_minimapCaptureActor); \
		P_GET_STRUCT(FVector,Z_Param_worldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mapResolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UFGMapFunctionLibrary::GetMapPosition(Z_Param_minimapCaptureActor,Z_Param_worldLocation,Z_Param_mapResolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinimapCaptureActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGMinimapCaptureActor**)Z_Param__Result=UFGMapFunctionLibrary::GetMinimapCaptureActor(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldBounds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_min); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGMapFunctionLibrary::GetWorldBounds(Z_Param_worldContext,Z_Param_Out_min,Z_Param_Out_max); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMapDistance) \
	{ \
		P_GET_OBJECT(AFGMinimapCaptureActor,Z_Param_minimapCaptureActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_worldDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mapResolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGMapFunctionLibrary::GetMapDistance(Z_Param_minimapCaptureActor,Z_Param_worldDistance,Z_Param_mapResolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedPosition) \
	{ \
		P_GET_OBJECT(AFGMinimapCaptureActor,Z_Param_minimapCaptureActor); \
		P_GET_STRUCT(FVector,Z_Param_worldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UFGMapFunctionLibrary::GetNormalizedPosition(Z_Param_minimapCaptureActor,Z_Param_worldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapPosition) \
	{ \
		P_GET_OBJECT(AFGMinimapCaptureActor,Z_Param_minimapCaptureActor); \
		P_GET_STRUCT(FVector,Z_Param_worldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mapResolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UFGMapFunctionLibrary::GetMapPosition(Z_Param_minimapCaptureActor,Z_Param_worldLocation,Z_Param_mapResolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinimapCaptureActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGMinimapCaptureActor**)Z_Param__Result=UFGMapFunctionLibrary::GetMinimapCaptureActor(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldBounds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_min); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGMapFunctionLibrary::GetWorldBounds(Z_Param_worldContext,Z_Param_Out_min,Z_Param_Out_max); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMapFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGMapFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGMapFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapFunctionLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGMapFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGMapFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGMapFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapFunctionLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapFunctionLibrary(UFGMapFunctionLibrary&&); \
	NO_API UFGMapFunctionLibrary(const UFGMapFunctionLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapFunctionLibrary(UFGMapFunctionLibrary&&); \
	NO_API UFGMapFunctionLibrary(const UFGMapFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapFunctionLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGMapFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGMapFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
