// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGSoundSplineComponent_generated_h
#error "FGSoundSplineComponent.generated.h already included, missing '#pragma once' in FGSoundSplineComponent.h"
#endif
#define FACTORYGAME_FGSoundSplineComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEmitterInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newEmitterInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEmitterInterval(Z_Param_newEmitterInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmitterInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newEmitterInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmitterInterval(Z_Param_newEmitterInterval); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEmitterInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newEmitterInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEmitterInterval(Z_Param_newEmitterInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmitterInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newEmitterInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmitterInterval(Z_Param_newEmitterInterval); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSoundSplineComponent(); \
	friend struct Z_Construct_UClass_UFGSoundSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UFGSoundSplineComponent, UAkComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSoundSplineComponent)


#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUFGSoundSplineComponent(); \
	friend struct Z_Construct_UClass_UFGSoundSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UFGSoundSplineComponent, UAkComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSoundSplineComponent)


#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSoundSplineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSoundSplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSoundSplineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSoundSplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSoundSplineComponent(UFGSoundSplineComponent&&); \
	NO_API UFGSoundSplineComponent(const UFGSoundSplineComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSoundSplineComponent(UFGSoundSplineComponent&&); \
	NO_API UFGSoundSplineComponent(const UFGSoundSplineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSoundSplineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSoundSplineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGSoundSplineComponent)


#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mEmitterInterval() { return STRUCT_OFFSET(UFGSoundSplineComponent, mEmitterInterval); }


#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_6_PROLOG
#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_INCLASS \
	FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGSoundSplineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
