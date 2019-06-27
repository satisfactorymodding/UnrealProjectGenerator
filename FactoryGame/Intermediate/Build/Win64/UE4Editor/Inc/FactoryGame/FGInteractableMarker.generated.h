// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FACTORYGAME_FGInteractableMarker_generated_h
#error "FGInteractableMarker.generated.h already included, missing '#pragma once' in FGInteractableMarker.h"
#endif
#define FACTORYGAME_FGInteractableMarker_generated_h

#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTrackedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetTrackedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_trackedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackedActor(Z_Param_trackedActor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTrackedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetTrackedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_trackedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackedActor(Z_Param_trackedActor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGInteractableMarker(); \
	friend struct Z_Construct_UClass_AFGInteractableMarker_Statics; \
public: \
	DECLARE_CLASS(AFGInteractableMarker, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGInteractableMarker)


#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFGInteractableMarker(); \
	friend struct Z_Construct_UClass_AFGInteractableMarker_Statics; \
public: \
	DECLARE_CLASS(AFGInteractableMarker, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGInteractableMarker)


#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGInteractableMarker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGInteractableMarker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGInteractableMarker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGInteractableMarker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGInteractableMarker(AFGInteractableMarker&&); \
	NO_API AFGInteractableMarker(const AFGInteractableMarker&); \
public:


#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGInteractableMarker(AFGInteractableMarker&&); \
	NO_API AFGInteractableMarker(const AFGInteractableMarker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGInteractableMarker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGInteractableMarker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGInteractableMarker)


#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIconWidget() { return STRUCT_OFFSET(AFGInteractableMarker, mIconWidget); } \
	FORCEINLINE static uint32 __PPO__mSplineMesh() { return STRUCT_OFFSET(AFGInteractableMarker, mSplineMesh); } \
	FORCEINLINE static uint32 __PPO__mDesiredScreenRadius() { return STRUCT_OFFSET(AFGInteractableMarker, mDesiredScreenRadius); } \
	FORCEINLINE static uint32 __PPO__mTrackedActor() { return STRUCT_OFFSET(AFGInteractableMarker, mTrackedActor); } \
	FORCEINLINE static uint32 __PPO__mCachePlayerController() { return STRUCT_OFFSET(AFGInteractableMarker, mCachePlayerController); }


#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_9_PROLOG \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGInteractableMarker_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGInteractableMarker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
