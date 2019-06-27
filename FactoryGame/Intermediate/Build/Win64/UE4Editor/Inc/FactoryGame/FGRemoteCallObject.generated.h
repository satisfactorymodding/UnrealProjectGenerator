// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGGameState;
#ifdef FACTORYGAME_FGRemoteCallObject_generated_h
#error "FGRemoteCallObject.generated.h already included, missing '#pragma once' in FGRemoteCallObject.h"
#endif
#define FACTORYGAME_FGRemoteCallObject_generated_h

#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGGameState**)Z_Param__Result=P_THIS->GetGameState(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGGameState**)Z_Param__Result=P_THIS->GetGameState(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGRemoteCallObject(); \
	friend struct Z_Construct_UClass_UFGRemoteCallObject_Statics; \
public: \
	DECLARE_CLASS(UFGRemoteCallObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRemoteCallObject)


#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFGRemoteCallObject(); \
	friend struct Z_Construct_UClass_UFGRemoteCallObject_Statics; \
public: \
	DECLARE_CLASS(UFGRemoteCallObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRemoteCallObject)


#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRemoteCallObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRemoteCallObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRemoteCallObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRemoteCallObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRemoteCallObject(UFGRemoteCallObject&&); \
	NO_API UFGRemoteCallObject(const UFGRemoteCallObject&); \
public:


#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRemoteCallObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRemoteCallObject(UFGRemoteCallObject&&); \
	NO_API UFGRemoteCallObject(const UFGRemoteCallObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRemoteCallObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRemoteCallObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRemoteCallObject)


#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_11_PROLOG
#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRemoteCallObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRemoteCallObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
