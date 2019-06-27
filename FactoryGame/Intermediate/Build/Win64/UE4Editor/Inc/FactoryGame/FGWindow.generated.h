// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef FACTORYGAME_FGWindow_generated_h
#error "FGWindow.generated.h already included, missing '#pragma once' in FGWindow.h"
#endif
#define FACTORYGAME_FGWindow_generated_h

#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_EVENT_PARMS \
	struct FGWindow_eventGetCloseButton_Parms \
	{ \
		UUserWidget* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGWindow_eventGetCloseButton_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGWindow(); \
	friend struct Z_Construct_UClass_UFGWindow_Statics; \
public: \
	DECLARE_CLASS(UFGWindow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWindow)


#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFGWindow(); \
	friend struct Z_Construct_UClass_UFGWindow_Statics; \
public: \
	DECLARE_CLASS(UFGWindow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWindow)


#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWindow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWindow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWindow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWindow(UFGWindow&&); \
	NO_API UFGWindow(const UFGWindow&); \
public:


#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWindow(UFGWindow&&); \
	NO_API UFGWindow(const UFGWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWindow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWindow)


#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_12_PROLOG \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGWindow_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_FGWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
