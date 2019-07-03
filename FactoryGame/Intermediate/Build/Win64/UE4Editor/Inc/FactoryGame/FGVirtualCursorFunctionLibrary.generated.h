// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef FACTORYGAME_FGVirtualCursorFunctionLibrary_generated_h
#error "FGVirtualCursorFunctionLibrary.generated.h already included, missing '#pragma once' in FGVirtualCursorFunctionLibrary.h"
#endif
#define FACTORYGAME_FGVirtualCursorFunctionLibrary_generated_h

#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGVirtualCursorFunctionLibrary::DisableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGVirtualCursorFunctionLibrary::EnableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGVirtualCursorFunctionLibrary::DisableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGVirtualCursorFunctionLibrary::EnableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGVirtualCursorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGVirtualCursorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGVirtualCursorFunctionLibrary)


#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGVirtualCursorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGVirtualCursorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGVirtualCursorFunctionLibrary)


#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGVirtualCursorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGVirtualCursorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVirtualCursorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVirtualCursorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVirtualCursorFunctionLibrary(UFGVirtualCursorFunctionLibrary&&); \
	NO_API UFGVirtualCursorFunctionLibrary(const UFGVirtualCursorFunctionLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGVirtualCursorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVirtualCursorFunctionLibrary(UFGVirtualCursorFunctionLibrary&&); \
	NO_API UFGVirtualCursorFunctionLibrary(const UFGVirtualCursorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVirtualCursorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVirtualCursorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGVirtualCursorFunctionLibrary)


#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_FGVirtualCursorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
