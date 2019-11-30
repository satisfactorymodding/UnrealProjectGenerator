// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGMapAreaZoneDescriptor_generated_h
#error "FGMapAreaZoneDescriptor.generated.h already included, missing '#pragma once' in FGMapAreaZoneDescriptor.h"
#endif
#define FACTORYGAME_FGMapAreaZoneDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetZoneType) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_out_zoneType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetZoneType(Z_Param_Out_out_zoneType); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetZoneType) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_out_zoneType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetZoneType(Z_Param_Out_out_zoneType); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMapAreaZoneDescriptor(); \
	friend struct Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGMapAreaZoneDescriptor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapAreaZoneDescriptor)


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGMapAreaZoneDescriptor(); \
	friend struct Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGMapAreaZoneDescriptor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapAreaZoneDescriptor)


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapAreaZoneDescriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapAreaZoneDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapAreaZoneDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapAreaZoneDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapAreaZoneDescriptor(UFGMapAreaZoneDescriptor&&); \
	NO_API UFGMapAreaZoneDescriptor(const UFGMapAreaZoneDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapAreaZoneDescriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapAreaZoneDescriptor(UFGMapAreaZoneDescriptor&&); \
	NO_API UFGMapAreaZoneDescriptor(const UFGMapAreaZoneDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapAreaZoneDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapAreaZoneDescriptor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapAreaZoneDescriptor)


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mZoneType() { return STRUCT_OFFSET(UFGMapAreaZoneDescriptor, mZoneType); }


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGMapAreaZoneDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGMapAreaZoneDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
