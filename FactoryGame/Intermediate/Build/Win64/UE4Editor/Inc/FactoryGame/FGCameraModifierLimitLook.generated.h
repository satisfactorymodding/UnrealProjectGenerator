// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef FACTORYGAME_FGCameraModifierLimitLook_generated_h
#error "FGCameraModifierLimitLook.generated.h already included, missing '#pragma once' in FGCameraModifierLimitLook.h"
#endif
#define FACTORYGAME_FGCameraModifierLimitLook_generated_h

#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDefaultLookRotator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDefaultLookRotator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultLookRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_inRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultLookRotator(Z_Param_inRotator); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDefaultLookRotator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDefaultLookRotator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultLookRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_inRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultLookRotator(Z_Param_inRotator); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCameraModifierLimitLook(); \
	friend struct Z_Construct_UClass_UFGCameraModifierLimitLook_Statics; \
public: \
	DECLARE_CLASS(UFGCameraModifierLimitLook, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCameraModifierLimitLook)


#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGCameraModifierLimitLook(); \
	friend struct Z_Construct_UClass_UFGCameraModifierLimitLook_Statics; \
public: \
	DECLARE_CLASS(UFGCameraModifierLimitLook, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCameraModifierLimitLook)


#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCameraModifierLimitLook(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCameraModifierLimitLook) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCameraModifierLimitLook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCameraModifierLimitLook); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCameraModifierLimitLook(UFGCameraModifierLimitLook&&); \
	NO_API UFGCameraModifierLimitLook(const UFGCameraModifierLimitLook&); \
public:


#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCameraModifierLimitLook(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCameraModifierLimitLook(UFGCameraModifierLimitLook&&); \
	NO_API UFGCameraModifierLimitLook(const UFGCameraModifierLimitLook&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCameraModifierLimitLook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCameraModifierLimitLook); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCameraModifierLimitLook)


#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCameraModifierLimitLook>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGCameraModifierLimitLook_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
