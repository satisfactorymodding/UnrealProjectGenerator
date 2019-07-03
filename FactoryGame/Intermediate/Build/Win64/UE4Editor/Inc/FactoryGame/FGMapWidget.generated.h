// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGActorRepresentation;
class UTexture2D;
struct FVector2D;
#ifdef FACTORYGAME_FGMapWidget_generated_h
#error "FGMapWidget.generated.h already included, missing '#pragma once' in FGMapWidget.h"
#endif
#define FACTORYGAME_FGMapWidget_generated_h

#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorRepresentationRemoved) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationRemoved(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorRepresentationUpdated) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationUpdated(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorRepresentationAdded) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationAdded(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetFogOfWarTexture(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorRepresentationRemoved) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationRemoved(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorRepresentationUpdated) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationUpdated(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorRepresentationAdded) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationAdded(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetFogOfWarTexture(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_EVENT_PARMS \
	struct FGMapWidget_eventOnMapCentered_Parms \
	{ \
		FVector2D normalizedWorldLocation; \
	}; \
	struct FGMapWidget_eventOnObjectAddedToMap_Parms \
	{ \
		UFGActorRepresentation* actorRepresentation; \
	}; \
	struct FGMapWidget_eventOnObjectRemovedFromMap_Parms \
	{ \
		UFGActorRepresentation* actorRepresentation; \
	}; \
	struct FGMapWidget_eventOnObjectUpdatedOnMap_Parms \
	{ \
		UFGActorRepresentation* actorRepresentation; \
	};


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMapWidget(); \
	friend struct Z_Construct_UClass_UFGMapWidget_Statics; \
public: \
	DECLARE_CLASS(UFGMapWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapWidget)


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGMapWidget(); \
	friend struct Z_Construct_UClass_UFGMapWidget_Statics; \
public: \
	DECLARE_CLASS(UFGMapWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapWidget)


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapWidget(UFGMapWidget&&); \
	NO_API UFGMapWidget(const UFGMapWidget&); \
public:


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapWidget(UFGMapWidget&&); \
	NO_API UFGMapWidget(const UFGMapWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapWidget)


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFogOfWarTexture() { return STRUCT_OFFSET(UFGMapWidget, mFogOfWarTexture); } \
	FORCEINLINE static uint32 __PPO__mMapActors() { return STRUCT_OFFSET(UFGMapWidget, mMapActors); } \
	FORCEINLINE static uint32 __PPO__mActorRepresentationManager() { return STRUCT_OFFSET(UFGMapWidget, mActorRepresentationManager); }


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_14_PROLOG \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGMapWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_FGMapWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
