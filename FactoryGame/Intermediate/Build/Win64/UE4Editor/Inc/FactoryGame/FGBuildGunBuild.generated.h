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
class UFGItemDescriptor;
class AFGHologram;
struct FItemAmount;
#ifdef FACTORYGAME_FGBuildGunBuild_generated_h
#error "FGBuildGunBuild.generated.h already included, missing '#pragma once' in FGBuildGunBuild.h"
#endif
#define FACTORYGAME_FGBuildGunBuild_generated_h

#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFactoryClearanceData_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectionRepresentation_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_RPC_WRAPPERS \
	virtual void Client_OnBuildableConstructed_Implementation(TSubclassOf<UFGItemDescriptor>  desc); \
	virtual void Client_OnResetHologram_Implementation(); \
 \
	DECLARE_FUNCTION(execEndClearanceOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndClearanceOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginClearanceOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginClearanceOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_OnBuildableConstructed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_desc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_OnBuildableConstructed_Implementation(Z_Param_desc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_OnResetHologram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_OnResetHologram_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHologram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHologram(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Hologram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Hologram(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHologram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGHologram**)Z_Param__Result=P_THIS->GetHologram(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHologramCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetHologramCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDescriptor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetDescriptor(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_OnBuildableConstructed_Implementation(TSubclassOf<UFGItemDescriptor>  desc); \
	virtual void Client_OnResetHologram_Implementation(); \
 \
	DECLARE_FUNCTION(execEndClearanceOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndClearanceOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginClearanceOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginClearanceOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_OnBuildableConstructed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_desc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_OnBuildableConstructed_Implementation(Z_Param_desc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_OnResetHologram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_OnResetHologram_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHologram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHologram(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Hologram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Hologram(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHologram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGHologram**)Z_Param__Result=P_THIS->GetHologram(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHologramCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetHologramCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDescriptor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetDescriptor(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_EVENT_PARMS \
	struct FGBuildGunStateBuild_eventClient_OnBuildableConstructed_Parms \
	{ \
		TSubclassOf<UFGItemDescriptor>  desc; \
	}; \
	struct FGBuildGunStateBuild_eventOnMultiStepPlacement_Parms \
	{ \
		bool isFinalStep; \
	};


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGBuildGunStateBuild(); \
	friend struct Z_Construct_UClass_UFGBuildGunStateBuild_Statics; \
public: \
	DECLARE_CLASS(UFGBuildGunStateBuild, UFGBuildGunState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildGunStateBuild)


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUFGBuildGunStateBuild(); \
	friend struct Z_Construct_UClass_UFGBuildGunStateBuild_Statics; \
public: \
	DECLARE_CLASS(UFGBuildGunStateBuild, UFGBuildGunState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildGunStateBuild)


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildGunStateBuild(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBuildGunStateBuild) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildGunStateBuild); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildGunStateBuild); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildGunStateBuild(UFGBuildGunStateBuild&&); \
	NO_API UFGBuildGunStateBuild(const UFGBuildGunStateBuild&); \
public:


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildGunStateBuild(UFGBuildGunStateBuild&&); \
	NO_API UFGBuildGunStateBuild(const UFGBuildGunStateBuild&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildGunStateBuild); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildGunStateBuild); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGBuildGunStateBuild)


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPendingRecipe() { return STRUCT_OFFSET(UFGBuildGunStateBuild, mPendingRecipe); } \
	FORCEINLINE static uint32 __PPO__mActiveRecipe() { return STRUCT_OFFSET(UFGBuildGunStateBuild, mActiveRecipe); } \
	FORCEINLINE static uint32 __PPO__mHologram() { return STRUCT_OFFSET(UFGBuildGunStateBuild, mHologram); } \
	FORCEINLINE static uint32 __PPO__mUpgradedActor() { return STRUCT_OFFSET(UFGBuildGunStateBuild, mUpgradedActor); } \
	FORCEINLINE static uint32 __PPO__mProximateClearances() { return STRUCT_OFFSET(UFGBuildGunStateBuild, mProximateClearances); } \
	FORCEINLINE static uint32 __PPO__mClearanceDetector() { return STRUCT_OFFSET(UFGBuildGunStateBuild, mClearanceDetector); }


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_63_PROLOG \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_INCLASS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Equipment_FGBuildGunBuild_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
