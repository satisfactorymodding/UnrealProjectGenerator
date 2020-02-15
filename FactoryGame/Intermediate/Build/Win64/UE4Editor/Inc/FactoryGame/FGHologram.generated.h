// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFGConstructDisqualifier;
class AFGHologram;
enum class EHologramSplinePathMode : uint8;
class UFGRecipe;
struct FVector;
class APawn;
#ifdef FACTORYGAME_FGHologram_generated_h
#error "FGHologram.generated.h already included, missing '#pragma once' in FGHologram.h"
#endif
#define FACTORYGAME_FGHologram_generated_h

#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_RPC_WRAPPERS \
	virtual void Client_PlaySnapSound_Implementation(); \
	virtual void OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram); \
	virtual bool Server_SetSnapToGuideLines_Validate(bool ); \
	virtual void Server_SetSnapToGuideLines_Implementation(bool isEnabled); \
	virtual void GetSupportedSplineModes_Implementation(TArray<EHologramSplinePathMode>& out_splineModes) const; \
 \
	DECLARE_FUNCTION(execOnRep_InitialScrollModeValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InitialScrollModeValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_PlaySnapSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_PlaySnapSound_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddValidHitClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_hitClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddValidHitClass(Z_Param_hitClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlacementMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlacementMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConstructDisqualifiers) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGConstructDisqualifier> ,Z_Param_Out_out_constructResults); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetConstructDisqualifiers(Z_Param_Out_out_constructResults); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPendingConstructionHologramCreated) \
	{ \
		P_GET_OBJECT(AFGHologram,Z_Param_fromHologram); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPendingConstructionHologramCreated_Implementation(Z_Param_fromHologram); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanConstruct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanConstruct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNoSnapMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetNoSnapMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetSnapToGuideLines) \
	{ \
		P_GET_UBOOL(Z_Param_isEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetSnapToGuideLines_Validate(Z_Param_isEnabled)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetSnapToGuideLines_Validate")); \
			return; \
		} \
		P_THIS->Server_SetSnapToGuideLines_Implementation(Z_Param_isEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineMode) \
	{ \
		P_GET_ENUM(EHologramSplinePathMode,Z_Param_mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplineMode(EHologramSplinePathMode(Z_Param_mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EHologramSplinePathMode*)Z_Param__Result=P_THIS->GetSplineMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedSplineModes) \
	{ \
		P_GET_TARRAY_REF(EHologramSplinePathMode,Z_Param_Out_out_splineModes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSupportedSplineModes_Implementation(Z_Param_Out_out_splineModes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnChildHologramFromRecipe) \
	{ \
		P_GET_OBJECT(AFGHologram,Z_Param_parent); \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_GET_OBJECT(AActor,Z_Param_hologramOwner); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_OBJECT(APawn,Z_Param_hologramInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGHologram**)Z_Param__Result=AFGHologram::SpawnChildHologramFromRecipe(Z_Param_parent,Z_Param_recipe,Z_Param_hologramOwner,Z_Param_spawnLocation,Z_Param_hologramInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHologramFromRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inRecipe); \
		P_GET_OBJECT(AActor,Z_Param_hologramOwner); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_OBJECT(APawn,Z_Param_hologramInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGHologram**)Z_Param__Result=AFGHologram::SpawnHologramFromRecipe(Z_Param_inRecipe,Z_Param_hologramOwner,Z_Param_spawnLocation,Z_Param_hologramInstigator); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_PlaySnapSound_Implementation(); \
	virtual void OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram); \
	virtual bool Server_SetSnapToGuideLines_Validate(bool ); \
	virtual void Server_SetSnapToGuideLines_Implementation(bool isEnabled); \
	virtual void GetSupportedSplineModes_Implementation(TArray<EHologramSplinePathMode>& out_splineModes) const; \
 \
	DECLARE_FUNCTION(execOnRep_InitialScrollModeValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InitialScrollModeValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_PlaySnapSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_PlaySnapSound_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddValidHitClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_hitClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddValidHitClass(Z_Param_hitClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlacementMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlacementMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConstructDisqualifiers) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGConstructDisqualifier> ,Z_Param_Out_out_constructResults); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetConstructDisqualifiers(Z_Param_Out_out_constructResults); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPendingConstructionHologramCreated) \
	{ \
		P_GET_OBJECT(AFGHologram,Z_Param_fromHologram); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPendingConstructionHologramCreated_Implementation(Z_Param_fromHologram); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanConstruct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanConstruct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNoSnapMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetNoSnapMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetSnapToGuideLines) \
	{ \
		P_GET_UBOOL(Z_Param_isEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetSnapToGuideLines_Validate(Z_Param_isEnabled)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetSnapToGuideLines_Validate")); \
			return; \
		} \
		P_THIS->Server_SetSnapToGuideLines_Implementation(Z_Param_isEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineMode) \
	{ \
		P_GET_ENUM(EHologramSplinePathMode,Z_Param_mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplineMode(EHologramSplinePathMode(Z_Param_mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EHologramSplinePathMode*)Z_Param__Result=P_THIS->GetSplineMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedSplineModes) \
	{ \
		P_GET_TARRAY_REF(EHologramSplinePathMode,Z_Param_Out_out_splineModes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSupportedSplineModes_Implementation(Z_Param_Out_out_splineModes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnChildHologramFromRecipe) \
	{ \
		P_GET_OBJECT(AFGHologram,Z_Param_parent); \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_GET_OBJECT(AActor,Z_Param_hologramOwner); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_OBJECT(APawn,Z_Param_hologramInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGHologram**)Z_Param__Result=AFGHologram::SpawnChildHologramFromRecipe(Z_Param_parent,Z_Param_recipe,Z_Param_hologramOwner,Z_Param_spawnLocation,Z_Param_hologramInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHologramFromRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inRecipe); \
		P_GET_OBJECT(AActor,Z_Param_hologramOwner); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_OBJECT(APawn,Z_Param_hologramInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGHologram**)Z_Param__Result=AFGHologram::SpawnHologramFromRecipe(Z_Param_inRecipe,Z_Param_hologramOwner,Z_Param_spawnLocation,Z_Param_hologramInstigator); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_EVENT_PARMS \
	struct FGHologram_eventGetSupportedSplineModes_Parms \
	{ \
		TArray<EHologramSplinePathMode> out_splineModes; \
	}; \
	struct FGHologram_eventOnPendingConstructionHologramCreated_Parms \
	{ \
		AFGHologram* fromHologram; \
	}; \
	struct FGHologram_eventServer_SetSnapToGuideLines_Parms \
	{ \
		bool isEnabled; \
	};


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGHologram(); \
	friend struct Z_Construct_UClass_AFGHologram_Statics; \
public: \
	DECLARE_CLASS(AFGHologram, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHologram) \
	virtual UObject* _getUObject() const override { return const_cast<AFGHologram*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_INCLASS \
private: \
	static void StaticRegisterNativesAFGHologram(); \
	friend struct Z_Construct_UClass_AFGHologram_Statics; \
public: \
	DECLARE_CLASS(AFGHologram, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHologram) \
	virtual UObject* _getUObject() const override { return const_cast<AFGHologram*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGHologram(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGHologram) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHologram); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHologram(AFGHologram&&); \
	NO_API AFGHologram(const AFGHologram&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHologram(AFGHologram&&); \
	NO_API AFGHologram(const AFGHologram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHologram); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mValidHitClasses() { return STRUCT_OFFSET(AFGHologram, mValidHitClasses); } \
	FORCEINLINE static uint32 __PPO__mRecipe() { return STRUCT_OFFSET(AFGHologram, mRecipe); } \
	FORCEINLINE static uint32 __PPO__mLoopSound() { return STRUCT_OFFSET(AFGHologram, mLoopSound); } \
	FORCEINLINE static uint32 __PPO__mClearanceDetector() { return STRUCT_OFFSET(AFGHologram, mClearanceDetector); } \
	FORCEINLINE static uint32 __PPO__mPlacementMaterial() { return STRUCT_OFFSET(AFGHologram, mPlacementMaterial); } \
	FORCEINLINE static uint32 __PPO__mValidPlacementMaterial() { return STRUCT_OFFSET(AFGHologram, mValidPlacementMaterial); } \
	FORCEINLINE static uint32 __PPO__mInvalidPlacementMaterial() { return STRUCT_OFFSET(AFGHologram, mInvalidPlacementMaterial); } \
	FORCEINLINE static uint32 __PPO__mChildren() { return STRUCT_OFFSET(AFGHologram, mChildren); } \
	FORCEINLINE static uint32 __PPO__mBuildClass() { return STRUCT_OFFSET(AFGHologram, mBuildClass); } \
	FORCEINLINE static uint32 __PPO__mUseBuildClearanceOverlapSnapp() { return STRUCT_OFFSET(AFGHologram, mUseBuildClearanceOverlapSnapp); } \
	FORCEINLINE static uint32 __PPO__mConstructionInstigator() { return STRUCT_OFFSET(AFGHologram, mConstructionInstigator); } \
	FORCEINLINE static uint32 __PPO__mIsDisabled() { return STRUCT_OFFSET(AFGHologram, mIsDisabled); } \
	FORCEINLINE static uint32 __PPO__mIsChanged() { return STRUCT_OFFSET(AFGHologram, mIsChanged); } \
	FORCEINLINE static uint32 __PPO__mInitialScrollModeValue() { return STRUCT_OFFSET(AFGHologram, mInitialScrollModeValue); } \
	FORCEINLINE static uint32 __PPO__mConstructionPosition() { return STRUCT_OFFSET(AFGHologram, mConstructionPosition); } \
	FORCEINLINE static uint32 __PPO__mConstructionRotation() { return STRUCT_OFFSET(AFGHologram, mConstructionRotation); }


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_43_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGHologram>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Hologram_FGHologram_h


#define FOREACH_ENUM_EHOLOGRAMSCROLLMODE(op) \
	op(EHologramScrollMode::HSM_NONE) \
	op(EHologramScrollMode::HSM_ROTATE) \
	op(EHologramScrollMode::HSM_RAISE_LOWER) \
	op(EHologramScrollMode::HSM_SPLINE_PATH_MODE) 

enum class EHologramScrollMode : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EHologramScrollMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
