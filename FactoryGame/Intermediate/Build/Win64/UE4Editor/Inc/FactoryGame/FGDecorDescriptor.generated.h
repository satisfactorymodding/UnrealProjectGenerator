// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGDecorDescriptor;
class UStaticMesh;
#ifdef FACTORYGAME_FGDecorDescriptor_generated_h
#error "FGDecorDescriptor.generated.h already included, missing '#pragma once' in FGDecorDescriptor.h"
#endif
#define FACTORYGAME_FGDecorDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDecorMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGDecorDescriptor::GetDecorMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDecorMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGDecorDescriptor::GetDecorMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGDecorDescriptor(); \
	friend struct Z_Construct_UClass_UFGDecorDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGDecorDescriptor, UFGBuildingDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDecorDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFGDecorDescriptor(); \
	friend struct Z_Construct_UClass_UFGDecorDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGDecorDescriptor, UFGBuildingDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDecorDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDecorDescriptor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDecorDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDecorDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDecorDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDecorDescriptor(UFGDecorDescriptor&&); \
	NO_API UFGDecorDescriptor(const UFGDecorDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDecorDescriptor(UFGDecorDescriptor&&); \
	NO_API UFGDecorDescriptor(const UFGDecorDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDecorDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDecorDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGDecorDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDecorMesh() { return STRUCT_OFFSET(UFGDecorDescriptor, mDecorMesh); }


#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_12_PROLOG
#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGDecorDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Resources_FGDecorDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
