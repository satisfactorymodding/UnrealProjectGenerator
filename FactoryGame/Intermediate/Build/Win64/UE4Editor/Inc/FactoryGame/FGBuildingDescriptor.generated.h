// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGBuildingDescriptor;
class AFGBuildable;
#ifdef FACTORYGAME_FGBuildingDescriptor_generated_h
#error "FGBuildingDescriptor.generated.h already included, missing '#pragma once' in FGBuildingDescriptor.h"
#endif
#define FACTORYGAME_FGBuildingDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPowerProduction) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBuildingDescriptor::GetPowerProduction(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerConsumption) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBuildingDescriptor::GetPowerConsumption(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildableClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AFGBuildable> *)Z_Param__Result=UFGBuildingDescriptor::GetBuildableClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPowerProduction) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBuildingDescriptor::GetPowerProduction(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerConsumption) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBuildingDescriptor::GetPowerConsumption(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildableClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AFGBuildable> *)Z_Param__Result=UFGBuildingDescriptor::GetBuildableClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGBuildingDescriptor(); \
	friend struct Z_Construct_UClass_UFGBuildingDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGBuildingDescriptor, UFGBuildDescriptor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildingDescriptor)


#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGBuildingDescriptor(); \
	friend struct Z_Construct_UClass_UFGBuildingDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGBuildingDescriptor, UFGBuildDescriptor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildingDescriptor)


#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildingDescriptor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBuildingDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildingDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildingDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildingDescriptor(UFGBuildingDescriptor&&); \
	NO_API UFGBuildingDescriptor(const UFGBuildingDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildingDescriptor(UFGBuildingDescriptor&&); \
	NO_API UFGBuildingDescriptor(const UFGBuildingDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildingDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildingDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGBuildingDescriptor)


#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mBuildableClass() { return STRUCT_OFFSET(UFGBuildingDescriptor, mBuildableClass); }


#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGBuildingDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Resources_FGBuildingDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
