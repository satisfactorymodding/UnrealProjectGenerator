// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGMultiplayerVerticalBox_generated_h
#error "FGMultiplayerVerticalBox.generated.h already included, missing '#pragma once' in FGMultiplayerVerticalBox.h"
#endif
#define FACTORYGAME_FGMultiplayerVerticalBox_generated_h

#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sort(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sort(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMultiplayerVerticalBox(); \
	friend struct Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics; \
public: \
	DECLARE_CLASS(UFGMultiplayerVerticalBox, UVerticalBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMultiplayerVerticalBox)


#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUFGMultiplayerVerticalBox(); \
	friend struct Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics; \
public: \
	DECLARE_CLASS(UFGMultiplayerVerticalBox, UVerticalBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMultiplayerVerticalBox)


#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMultiplayerVerticalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMultiplayerVerticalBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMultiplayerVerticalBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMultiplayerVerticalBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMultiplayerVerticalBox(UFGMultiplayerVerticalBox&&); \
	NO_API UFGMultiplayerVerticalBox(const UFGMultiplayerVerticalBox&); \
public:


#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMultiplayerVerticalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMultiplayerVerticalBox(UFGMultiplayerVerticalBox&&); \
	NO_API UFGMultiplayerVerticalBox(const UFGMultiplayerVerticalBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMultiplayerVerticalBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMultiplayerVerticalBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMultiplayerVerticalBox)


#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_6_PROLOG
#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_INCLASS \
	FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_FGMultiplayerVerticalBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
