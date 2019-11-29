// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class USphereComponent;
struct FHitResult;
#ifdef FACTORYGAME_FGProjectile_generated_h
#error "FGProjectile.generated.h already included, missing '#pragma once' in FGProjectile.h"
#endif
#define FACTORYGAME_FGProjectile_generated_h

#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_InitialVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InitialVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Exploded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Exploded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInitialVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_inVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInitialVelocity(Z_Param_inVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionSphere) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USphereComponent**)Z_Param__Result=P_THIS->GetCollisionSphere(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_targetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetLocation(Z_Param_targetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectileTargetLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetProjectileTargetLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBounce) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hitResult); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_hitVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBounce(Z_Param_Out_hitResult,Z_Param_Out_hitVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnImpact) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnImpact(Z_Param_Out_hitResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_InitialVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InitialVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Exploded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Exploded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInitialVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_inVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInitialVelocity(Z_Param_inVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionSphere) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USphereComponent**)Z_Param__Result=P_THIS->GetCollisionSphere(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_targetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetLocation(Z_Param_targetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectileTargetLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetProjectileTargetLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBounce) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hitResult); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_hitVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBounce(Z_Param_Out_hitResult,Z_Param_Out_hitVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnImpact) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnImpact(Z_Param_Out_hitResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGProjectile(); \
	friend struct Z_Construct_UClass_AFGProjectile_Statics; \
public: \
	DECLARE_CLASS(AFGProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AFGProjectile*>(this); }


#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFGProjectile(); \
	friend struct Z_Construct_UClass_AFGProjectile_Statics; \
public: \
	DECLARE_CLASS(AFGProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AFGProjectile*>(this); }


#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGProjectile(AFGProjectile&&); \
	NO_API AFGProjectile(const AFGProjectile&); \
public:


#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGProjectile(AFGProjectile&&); \
	NO_API AFGProjectile(const AFGProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGProjectile)


#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mProjectileData() { return STRUCT_OFFSET(AFGProjectile, mProjectileData); } \
	FORCEINLINE static uint32 __PPO__mHasExploded() { return STRUCT_OFFSET(AFGProjectile, mHasExploded); } \
	FORCEINLINE static uint32 __PPO__mInitialVelocity() { return STRUCT_OFFSET(AFGProjectile, mInitialVelocity); } \
	FORCEINLINE static uint32 __PPO__mCollisionComp() { return STRUCT_OFFSET(AFGProjectile, mCollisionComp); } \
	FORCEINLINE static uint32 __PPO__mProjectileMovement() { return STRUCT_OFFSET(AFGProjectile, mProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__mTargetLocation() { return STRUCT_OFFSET(AFGProjectile, mTargetLocation); } \
	FORCEINLINE static uint32 __PPO__mCanTriggerExplodeBySameClass() { return STRUCT_OFFSET(AFGProjectile, mCanTriggerExplodeBySameClass); } \
	FORCEINLINE static uint32 __PPO__mExplodeAtEndOfLife() { return STRUCT_OFFSET(AFGProjectile, mExplodeAtEndOfLife); } \
	FORCEINLINE static uint32 __PPO__mCachedPC() { return STRUCT_OFFSET(AFGProjectile, mCachedPC); }


#define FactoryGame_Source_FactoryGame_FGProjectile_h_9_PROLOG \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
