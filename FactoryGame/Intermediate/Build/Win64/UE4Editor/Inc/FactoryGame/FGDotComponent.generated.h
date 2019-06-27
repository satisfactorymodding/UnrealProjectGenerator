// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FACTORYGAME_FGDotComponent_generated_h
#error "FGDotComponent.generated.h already included, missing '#pragma once' in FGDotComponent.h"
#endif
#define FACTORYGAME_FGDotComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGDotComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageContainingActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageContainingActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentExited) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentExited(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentEntered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentEntered(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDotComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageContainingActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageContainingActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentExited) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentExited(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentEntered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentEntered(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDotComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGDotComponent(); \
	friend struct Z_Construct_UClass_UFGDotComponent_Statics; \
public: \
	DECLARE_CLASS(UFGDotComponent, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDotComponent)


#define FactoryGame_Source_FactoryGame_FGDotComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGDotComponent(); \
	friend struct Z_Construct_UClass_UFGDotComponent_Statics; \
public: \
	DECLARE_CLASS(UFGDotComponent, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDotComponent)


#define FactoryGame_Source_FactoryGame_FGDotComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDotComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDotComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDotComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDotComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDotComponent(UFGDotComponent&&); \
	NO_API UFGDotComponent(const UFGDotComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGDotComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDotComponent(UFGDotComponent&&); \
	NO_API UFGDotComponent(const UFGDotComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDotComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDotComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGDotComponent)


#define FactoryGame_Source_FactoryGame_FGDotComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDotClass() { return STRUCT_OFFSET(UFGDotComponent, mDotClass); } \
	FORCEINLINE static uint32 __PPO__mActorsToDamage() { return STRUCT_OFFSET(UFGDotComponent, mActorsToDamage); }


#define FactoryGame_Source_FactoryGame_FGDotComponent_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_FGDotComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDotComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDotComponent_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDotComponent_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_FGDotComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDotComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDotComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDotComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDotComponent_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDotComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGDotComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
