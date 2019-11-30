// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#ifdef FACTORYGAME_FGLadderComponent_generated_h
#error "FGLadderComponent.generated.h already included, missing '#pragma once' in FGLadderComponent.h"
#endif
#define FACTORYGAME_FGLadderComponent_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPotentialClimberOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPotentialClimberOverlap(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginPotentialClimberOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_isFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPotentialClimberOverlap(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_isFromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPotentialClimberOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPotentialClimberOverlap(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginPotentialClimberOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_isFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPotentialClimberOverlap(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_isFromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGLadderComponent(); \
	friend struct Z_Construct_UClass_UFGLadderComponent_Statics; \
public: \
	DECLARE_CLASS(UFGLadderComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGLadderComponent)


#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFGLadderComponent(); \
	friend struct Z_Construct_UClass_UFGLadderComponent_Statics; \
public: \
	DECLARE_CLASS(UFGLadderComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGLadderComponent)


#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGLadderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGLadderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGLadderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGLadderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGLadderComponent(UFGLadderComponent&&); \
	NO_API UFGLadderComponent(const UFGLadderComponent&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGLadderComponent(UFGLadderComponent&&); \
	NO_API UFGLadderComponent(const UFGLadderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGLadderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGLadderComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGLadderComponent)


#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPotentialClimbers() { return STRUCT_OFFSET(UFGLadderComponent, mPotentialClimbers); }


#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_12_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGLadderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGLadderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
