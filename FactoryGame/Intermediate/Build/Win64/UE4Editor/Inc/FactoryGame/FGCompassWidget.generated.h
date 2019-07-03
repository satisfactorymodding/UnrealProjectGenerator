// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGActorRepresentation;
struct FVector2D;
class UFGCompassObjectWidget;
class UTexture2D;
class AFGActorRepresentationManager;
#ifdef FACTORYGAME_FGCompassWidget_generated_h
#error "FGCompassWidget.generated.h already included, missing '#pragma once' in FGCompassWidget.h"
#endif
#define FACTORYGAME_FGCompassWidget_generated_h

#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_RPC_WRAPPERS \
	virtual FVector2D GetCompassLineOffset_Implementation(); \
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
	DECLARE_FUNCTION(execOnActorRepresentationRemoved) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationRemoved(Z_Param_actorRepresentation); \
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
	DECLARE_FUNCTION(execGetCompassLineOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetCompassLineOffset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAllCardinalDirections) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_compassObjectTemplate); \
		P_GET_OBJECT(UTexture2D,Z_Param_northTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_eastTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_southTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_westTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_northWestTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_southEastTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_southWestText); \
		P_GET_OBJECT(UTexture2D,Z_Param_northEastTex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAllCardinalDirections(Z_Param_compassObjectTemplate,Z_Param_northTex,Z_Param_eastTex,Z_Param_southTex,Z_Param_westTex,Z_Param_northWestTex,Z_Param_southEastTex,Z_Param_southWestText,Z_Param_northEastTex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePrimitiveCompassObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_compassObjectTemplate); \
		P_GET_OBJECT(UTexture2D,Z_Param_texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCompassObjectWidget**)Z_Param__Result=P_THIS->CreatePrimitiveCompassObject(Z_Param_compassObjectTemplate,Z_Param_texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCompassObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_compassObjectTemplate); \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCompassObjectWidget**)Z_Param__Result=P_THIS->CreateCompassObject(Z_Param_compassObjectTemplate,Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllCompassRepresentations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllCompassRepresentations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAllCompassRepresentations) \
	{ \
		P_GET_OBJECT(AFGActorRepresentationManager,Z_Param_representationManager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAllCompassRepresentations(Z_Param_representationManager); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCompassObjectForRepresentation) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCompassObjectForRepresentation(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCompassObjectForRepresentation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_compassObjectTemplate); \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCompassObjectWidget**)Z_Param__Result=P_THIS->AddCompassObjectForRepresentation(Z_Param_compassObjectTemplate,Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindActorRepresentationManager) \
	{ \
		P_GET_OBJECT(AFGActorRepresentationManager,Z_Param_representationManager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindActorRepresentationManager(Z_Param_representationManager); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector2D GetCompassLineOffset_Implementation(); \
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
	DECLARE_FUNCTION(execOnActorRepresentationRemoved) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationRemoved(Z_Param_actorRepresentation); \
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
	DECLARE_FUNCTION(execGetCompassLineOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetCompassLineOffset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAllCardinalDirections) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_compassObjectTemplate); \
		P_GET_OBJECT(UTexture2D,Z_Param_northTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_eastTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_southTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_westTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_northWestTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_southEastTex); \
		P_GET_OBJECT(UTexture2D,Z_Param_southWestText); \
		P_GET_OBJECT(UTexture2D,Z_Param_northEastTex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAllCardinalDirections(Z_Param_compassObjectTemplate,Z_Param_northTex,Z_Param_eastTex,Z_Param_southTex,Z_Param_westTex,Z_Param_northWestTex,Z_Param_southEastTex,Z_Param_southWestText,Z_Param_northEastTex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePrimitiveCompassObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_compassObjectTemplate); \
		P_GET_OBJECT(UTexture2D,Z_Param_texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCompassObjectWidget**)Z_Param__Result=P_THIS->CreatePrimitiveCompassObject(Z_Param_compassObjectTemplate,Z_Param_texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCompassObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_compassObjectTemplate); \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCompassObjectWidget**)Z_Param__Result=P_THIS->CreateCompassObject(Z_Param_compassObjectTemplate,Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllCompassRepresentations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllCompassRepresentations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAllCompassRepresentations) \
	{ \
		P_GET_OBJECT(AFGActorRepresentationManager,Z_Param_representationManager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAllCompassRepresentations(Z_Param_representationManager); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCompassObjectForRepresentation) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCompassObjectForRepresentation(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCompassObjectForRepresentation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_compassObjectTemplate); \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGCompassObjectWidget**)Z_Param__Result=P_THIS->AddCompassObjectForRepresentation(Z_Param_compassObjectTemplate,Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindActorRepresentationManager) \
	{ \
		P_GET_OBJECT(AFGActorRepresentationManager,Z_Param_representationManager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindActorRepresentationManager(Z_Param_representationManager); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_EVENT_PARMS \
	struct FGCompassWidget_eventGetCompassLineOffset_Parms \
	{ \
		FVector2D ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGCompassWidget_eventGetCompassLineOffset_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGCompassWidget_eventGetCompassObjectWidgetClass_Parms \
	{ \
		UFGActorRepresentation* actorRepresentation; \
		TSubclassOf<UFGCompassObjectWidget>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGCompassWidget_eventGetCompassObjectWidgetClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCompassWidget(); \
	friend struct Z_Construct_UClass_UFGCompassWidget_Statics; \
public: \
	DECLARE_CLASS(UFGCompassWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCompassWidget)


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFGCompassWidget(); \
	friend struct Z_Construct_UClass_UFGCompassWidget_Statics; \
public: \
	DECLARE_CLASS(UFGCompassWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCompassWidget)


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCompassWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCompassWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCompassWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCompassWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCompassWidget(UFGCompassWidget&&); \
	NO_API UFGCompassWidget(const UFGCompassWidget&); \
public:


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCompassWidget(UFGCompassWidget&&); \
	NO_API UFGCompassWidget(const UFGCompassWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCompassWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCompassWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCompassWidget)


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCompassPanel() { return STRUCT_OFFSET(UFGCompassWidget, mCompassPanel); } \
	FORCEINLINE static uint32 __PPO__mContentPanel() { return STRUCT_OFFSET(UFGCompassWidget, mContentPanel); } \
	FORCEINLINE static uint32 __PPO__mCompassLine() { return STRUCT_OFFSET(UFGCompassWidget, mCompassLine); } \
	FORCEINLINE static uint32 __PPO__mCompassObjects() { return STRUCT_OFFSET(UFGCompassWidget, mCompassObjects); } \
	FORCEINLINE static uint32 __PPO__mCenterableCompassObjects() { return STRUCT_OFFSET(UFGCompassWidget, mCenterableCompassObjects); } \
	FORCEINLINE static uint32 __PPO__mCenterableResourceCompassObjects() { return STRUCT_OFFSET(UFGCompassWidget, mCenterableResourceCompassObjects); } \
	FORCEINLINE static uint32 __PPO__mActorRepresentationManager() { return STRUCT_OFFSET(UFGCompassWidget, mActorRepresentationManager); } \
	FORCEINLINE static uint32 __PPO__mCurrentCenteredResourceObjects() { return STRUCT_OFFSET(UFGCompassWidget, mCurrentCenteredResourceObjects); } \
	FORCEINLINE static uint32 __PPO__mCurrentCenteredObject() { return STRUCT_OFFSET(UFGCompassWidget, mCurrentCenteredObject); } \
	FORCEINLINE static uint32 __PPO__mThresholdForCenteredObjects() { return STRUCT_OFFSET(UFGCompassWidget, mThresholdForCenteredObjects); } \
	FORCEINLINE static uint32 __PPO__mThresholdForCenteredResourceObjects() { return STRUCT_OFFSET(UFGCompassWidget, mThresholdForCenteredResourceObjects); }


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_16_PROLOG \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_FGCompassWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
