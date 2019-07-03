// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGVehicleDescriptor;
class AFGVehicle;
#ifdef FACTORYGAME_FGVehicleDescriptor_generated_h
#error "FGVehicleDescriptor.generated.h already included, missing '#pragma once' in FGVehicleDescriptor.h"
#endif
#define FACTORYGAME_FGVehicleDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVehicleClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AFGVehicle> *)Z_Param__Result=UFGVehicleDescriptor::GetVehicleClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVehicleClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AFGVehicle> *)Z_Param__Result=UFGVehicleDescriptor::GetVehicleClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGVehicleDescriptor(); \
	friend struct Z_Construct_UClass_UFGVehicleDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGVehicleDescriptor, UFGBuildDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGVehicleDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGVehicleDescriptor(); \
	friend struct Z_Construct_UClass_UFGVehicleDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGVehicleDescriptor, UFGBuildDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGVehicleDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGVehicleDescriptor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGVehicleDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVehicleDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVehicleDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVehicleDescriptor(UFGVehicleDescriptor&&); \
	NO_API UFGVehicleDescriptor(const UFGVehicleDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVehicleDescriptor(UFGVehicleDescriptor&&); \
	NO_API UFGVehicleDescriptor(const UFGVehicleDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVehicleDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVehicleDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGVehicleDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Resources_FGVehicleDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
