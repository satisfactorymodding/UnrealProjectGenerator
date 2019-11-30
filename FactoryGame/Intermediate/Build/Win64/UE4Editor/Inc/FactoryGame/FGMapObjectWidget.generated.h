// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERepresentationType : uint8;
struct FVector2D;
#ifdef FACTORYGAME_FGMapObjectWidget_generated_h
#error "FGMapObjectWidget.generated.h already included, missing '#pragma once' in FGMapObjectWidget.h"
#endif
#define FACTORYGAME_FGMapObjectWidget_generated_h

#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorRepresentationFiltered) \
	{ \
		P_GET_ENUM(ERepresentationType,Z_Param_representationType); \
		P_GET_UBOOL(Z_Param_visible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationFiltered(ERepresentationType(Z_Param_representationType),Z_Param_visible); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorRepresentationFiltered) \
	{ \
		P_GET_ENUM(ERepresentationType,Z_Param_representationType); \
		P_GET_UBOOL(Z_Param_visible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationFiltered(ERepresentationType(Z_Param_representationType),Z_Param_visible); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_EVENT_PARMS \
	struct FGMapObjectWidget_eventOnObjectFiltered_Parms \
	{ \
		bool visible; \
	}; \
	struct FGMapObjectWidget_eventOnObjectMoved_Parms \
	{ \
		FVector2D normalizedLocation; \
	};


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMapObjectWidget(); \
	friend struct Z_Construct_UClass_UFGMapObjectWidget_Statics; \
public: \
	DECLARE_CLASS(UFGMapObjectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapObjectWidget)


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGMapObjectWidget(); \
	friend struct Z_Construct_UClass_UFGMapObjectWidget_Statics; \
public: \
	DECLARE_CLASS(UFGMapObjectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapObjectWidget)


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapObjectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapObjectWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapObjectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapObjectWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapObjectWidget(UFGMapObjectWidget&&); \
	NO_API UFGMapObjectWidget(const UFGMapObjectWidget&); \
public:


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapObjectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapObjectWidget(UFGMapObjectWidget&&); \
	NO_API UFGMapObjectWidget(const UFGMapObjectWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapObjectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapObjectWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapObjectWidget)


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mActorRepresentation() { return STRUCT_OFFSET(UFGMapObjectWidget, mActorRepresentation); } \
	FORCEINLINE static uint32 __PPO__mMapWidget() { return STRUCT_OFFSET(UFGMapObjectWidget, mMapWidget); } \
	FORCEINLINE static uint32 __PPO__mFilteredVisibility() { return STRUCT_OFFSET(UFGMapObjectWidget, mFilteredVisibility); } \
	FORCEINLINE static uint32 __PPO__mMinimapCaptureActor() { return STRUCT_OFFSET(UFGMapObjectWidget, mMinimapCaptureActor); }


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGMapObjectWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_UI_FGMapObjectWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
