// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class ERepresentationType : uint8;
class UCanvasPanelSlot;
class UFGActorRepresentation;
#ifdef FACTORYGAME_FGCompassObjectWidget_generated_h
#error "FGCompassObjectWidget.generated.h already included, missing '#pragma once' in FGCompassObjectWidget.h"
#endif
#define FACTORYGAME_FGCompassObjectWidget_generated_h

#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_RPC_WRAPPERS \
	virtual void OnCompassObjectUpdated_Implementation(); \
	virtual void OnCompassObjectAddedToPanel_Implementation(UCanvasPanelSlot* parentSlot); \
 \
	DECLARE_FUNCTION(execGetAngleFromDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAngleFromDirection(Z_Param_direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionFromLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionFromLocation(Z_Param_location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERepresentationType*)Z_Param__Result=P_THIS->GetRepresentationType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlockingAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBlockingAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlphaAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAlphaAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCompassObjectUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompassObjectUpdated_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCompassObjectAddedToPanel) \
	{ \
		P_GET_OBJECT(UCanvasPanelSlot,Z_Param_parentSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompassObjectAddedToPanel_Implementation(Z_Param_parentSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGActorRepresentation**)Z_Param__Result=P_THIS->GetActorRepresentation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRepresentation) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorRepresentation(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAsStaticDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAsStaticDirection(Z_Param_direction); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCompassObjectUpdated_Implementation(); \
	virtual void OnCompassObjectAddedToPanel_Implementation(UCanvasPanelSlot* parentSlot); \
 \
	DECLARE_FUNCTION(execGetAngleFromDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAngleFromDirection(Z_Param_direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionFromLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionFromLocation(Z_Param_location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERepresentationType*)Z_Param__Result=P_THIS->GetRepresentationType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlockingAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBlockingAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlphaAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAlphaAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCompassObjectUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompassObjectUpdated_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCompassObjectAddedToPanel) \
	{ \
		P_GET_OBJECT(UCanvasPanelSlot,Z_Param_parentSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompassObjectAddedToPanel_Implementation(Z_Param_parentSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGActorRepresentation**)Z_Param__Result=P_THIS->GetActorRepresentation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRepresentation) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorRepresentation(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAsStaticDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAsStaticDirection(Z_Param_direction); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_EVENT_PARMS \
	struct FGCompassObjectWidget_eventOnCompassObjectAddedToPanel_Parms \
	{ \
		UCanvasPanelSlot* parentSlot; \
	}; \
	struct FGCompassObjectWidget_eventOnObjectCentered_Parms \
	{ \
		bool centered; \
	};


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCompassObjectWidget(); \
	friend struct Z_Construct_UClass_UFGCompassObjectWidget_Statics; \
public: \
	DECLARE_CLASS(UFGCompassObjectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCompassObjectWidget)


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGCompassObjectWidget(); \
	friend struct Z_Construct_UClass_UFGCompassObjectWidget_Statics; \
public: \
	DECLARE_CLASS(UFGCompassObjectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCompassObjectWidget)


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCompassObjectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCompassObjectWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCompassObjectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCompassObjectWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCompassObjectWidget(UFGCompassObjectWidget&&); \
	NO_API UFGCompassObjectWidget(const UFGCompassObjectWidget&); \
public:


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCompassObjectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCompassObjectWidget(UFGCompassObjectWidget&&); \
	NO_API UFGCompassObjectWidget(const UFGCompassObjectWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCompassObjectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCompassObjectWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCompassObjectWidget)


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mClampPosition() { return STRUCT_OFFSET(UFGCompassObjectWidget, mClampPosition); } \
	FORCEINLINE static uint32 __PPO__mShouldFadeInEdges() { return STRUCT_OFFSET(UFGCompassObjectWidget, mShouldFadeInEdges); } \
	FORCEINLINE static uint32 __PPO__mImage() { return STRUCT_OFFSET(UFGCompassObjectWidget, mImage); } \
	FORCEINLINE static uint32 __PPO__mCheckForBlockingInCompass() { return STRUCT_OFFSET(UFGCompassObjectWidget, mCheckForBlockingInCompass); } \
	FORCEINLINE static uint32 __PPO__mActorRepresentation() { return STRUCT_OFFSET(UFGCompassObjectWidget, mActorRepresentation); } \
	FORCEINLINE static uint32 __PPO__mStaticDirection() { return STRUCT_OFFSET(UFGCompassObjectWidget, mStaticDirection); } \
	FORCEINLINE static uint32 __PPO__mIsBlocking() { return STRUCT_OFFSET(UFGCompassObjectWidget, mIsBlocking); }


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_FGCompassObjectWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
