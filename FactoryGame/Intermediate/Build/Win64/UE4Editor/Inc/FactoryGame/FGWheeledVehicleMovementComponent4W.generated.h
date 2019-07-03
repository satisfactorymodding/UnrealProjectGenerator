// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGWheeledVehicleMovementComponent4W_generated_h
#error "FGWheeledVehicleMovementComponent4W.generated.h already included, missing '#pragma once' in FGWheeledVehicleMovementComponent4W.h"
#endif
#define FACTORYGAME_FGWheeledVehicleMovementComponent4W_generated_h

#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLargestLongitudinalSlip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestLongitudinalSlip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLargestLateralSlip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestLateralSlip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLargestTireLoadValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestTireLoadValue(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLargestLongitudinalSlip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestLongitudinalSlip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLargestLateralSlip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestLateralSlip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLargestTireLoadValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLargestTireLoadValue(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGWheeledVehicleMovementComponent4W(); \
	friend struct Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics; \
public: \
	DECLARE_CLASS(UFGWheeledVehicleMovementComponent4W, UWheeledVehicleMovementComponent4W, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWheeledVehicleMovementComponent4W)


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFGWheeledVehicleMovementComponent4W(); \
	friend struct Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics; \
public: \
	DECLARE_CLASS(UFGWheeledVehicleMovementComponent4W, UWheeledVehicleMovementComponent4W, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWheeledVehicleMovementComponent4W)


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGWheeledVehicleMovementComponent4W(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWheeledVehicleMovementComponent4W) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWheeledVehicleMovementComponent4W); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWheeledVehicleMovementComponent4W); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWheeledVehicleMovementComponent4W(UFGWheeledVehicleMovementComponent4W&&); \
	NO_API UFGWheeledVehicleMovementComponent4W(const UFGWheeledVehicleMovementComponent4W&); \
public:


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWheeledVehicleMovementComponent4W(UFGWheeledVehicleMovementComponent4W&&); \
	NO_API UFGWheeledVehicleMovementComponent4W(const UFGWheeledVehicleMovementComponent4W&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWheeledVehicleMovementComponent4W); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWheeledVehicleMovementComponent4W); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWheeledVehicleMovementComponent4W)


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_11_PROLOG
#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGWheeledVehicleMovementComponent4W_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
