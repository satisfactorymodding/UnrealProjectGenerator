// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFGConstructDisqualifier;
#ifdef FACTORYGAME_FGHologram_generated_h
#error "FGHologram.generated.h already included, missing '#pragma once' in FGHologram.h"
#endif
#define FACTORYGAME_FGHologram_generated_h

#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_RPC_WRAPPERS \
	virtual void Client_PlaySnapSound_Implementation(); \
	virtual bool Server_SetSnapToGuideLines_Validate(bool ); \
	virtual void Server_SetSnapToGuideLines_Implementation(bool isEnabled); \
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
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_PlaySnapSound_Implementation(); \
	virtual bool Server_SetSnapToGuideLines_Validate(bool ); \
	virtual void Server_SetSnapToGuideLines_Implementation(bool isEnabled); \
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
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_EVENT_PARMS \
	struct FGHologram_eventServer_SetSnapToGuideLines_Parms \
	{ \
		bool isEnabled; \
	};


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGHologram(); \
	friend struct Z_Construct_UClass_AFGHologram_Statics; \
public: \
	DECLARE_CLASS(AFGHologram, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAFGHologram(); \
	friend struct Z_Construct_UClass_AFGHologram_Statics; \
public: \
	DECLARE_CLASS(AFGHologram, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHologram(AFGHologram&&); \
	NO_API AFGHologram(const AFGHologram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHologram); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mValidHitClasses() { return STRUCT_OFFSET(AFGHologram, mValidHitClasses); } \
	FORCEINLINE static uint32 __PPO__mRecipe() { return STRUCT_OFFSET(AFGHologram, mRecipe); } \
	FORCEINLINE static uint32 __PPO__mLoopSound() { return STRUCT_OFFSET(AFGHologram, mLoopSound); } \
	FORCEINLINE static uint32 __PPO__mClearanceDetector() { return STRUCT_OFFSET(AFGHologram, mClearanceDetector); } \
	FORCEINLINE static uint32 __PPO__mPlacementMaterial() { return STRUCT_OFFSET(AFGHologram, mPlacementMaterial); } \
	FORCEINLINE static uint32 __PPO__mValidPlacementMaterial() { return STRUCT_OFFSET(AFGHologram, mValidPlacementMaterial); } \
	FORCEINLINE static uint32 __PPO__mInvalidPlacementMaterial() { return STRUCT_OFFSET(AFGHologram, mInvalidPlacementMaterial); } \
	FORCEINLINE static uint32 __PPO__mChildren() { return STRUCT_OFFSET(AFGHologram, mChildren); } \
	FORCEINLINE static uint32 __PPO__mConstructionInstigator() { return STRUCT_OFFSET(AFGHologram, mConstructionInstigator); } \
	FORCEINLINE static uint32 __PPO__mIsDisabled() { return STRUCT_OFFSET(AFGHologram, mIsDisabled); } \
	FORCEINLINE static uint32 __PPO__mIsChanged() { return STRUCT_OFFSET(AFGHologram, mIsChanged); } \
	FORCEINLINE static uint32 __PPO__mInitialScrollModeValue() { return STRUCT_OFFSET(AFGHologram, mInitialScrollModeValue); }


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_30_PROLOG \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_INCLASS \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGHologram_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Hologram_FGHologram_h


#define FOREACH_ENUM_EHOLOGRAMSCROLLMODE(op) \
	op(EHologramScrollMode::HSM_NONE) \
	op(EHologramScrollMode::HSM_ROTATE) \
	op(EHologramScrollMode::HSM_RAISE_LOWER) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
