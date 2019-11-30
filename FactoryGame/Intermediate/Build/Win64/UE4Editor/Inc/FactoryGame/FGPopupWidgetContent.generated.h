// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef FACTORYGAME_FGPopupWidgetContent_generated_h
#error "FGPopupWidgetContent.generated.h already included, missing '#pragma once' in FGPopupWidgetContent.h"
#endif
#define FACTORYGAME_FGPopupWidgetContent_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_EVENT_PARMS \
	struct FGPopupWidgetContent_eventGetShouldOkayBeEnabled_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGPopupWidgetContent_eventGetShouldOkayBeEnabled_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGPopupWidgetContent_eventSetInstigatorAndInitialize_Parms \
	{ \
		UObject* instigator; \
	}; \
	struct FGPopupWidgetContent_eventSetOptionalTextElements_Parms \
	{ \
		FText title; \
		FText desc; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGPopupWidgetContent(); \
	friend struct Z_Construct_UClass_UFGPopupWidgetContent_Statics; \
public: \
	DECLARE_CLASS(UFGPopupWidgetContent, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPopupWidgetContent)


#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFGPopupWidgetContent(); \
	friend struct Z_Construct_UClass_UFGPopupWidgetContent_Statics; \
public: \
	DECLARE_CLASS(UFGPopupWidgetContent, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPopupWidgetContent)


#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPopupWidgetContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPopupWidgetContent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPopupWidgetContent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPopupWidgetContent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPopupWidgetContent(UFGPopupWidgetContent&&); \
	NO_API UFGPopupWidgetContent(const UFGPopupWidgetContent&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPopupWidgetContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPopupWidgetContent(UFGPopupWidgetContent&&); \
	NO_API UFGPopupWidgetContent(const UFGPopupWidgetContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPopupWidgetContent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPopupWidgetContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPopupWidgetContent)


#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_15_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGPopupWidgetContent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGPopupWidgetContent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
