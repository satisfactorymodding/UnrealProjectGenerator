// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGMessageBase;
class UObject;
#ifdef FACTORYGAME_FGMessageBase_generated_h
#error "FGMessageBase.generated.h already included, missing '#pragma once' in FGMessageBase.h"
#endif
#define FACTORYGAME_FGMessageBase_generated_h

#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMessageDefaultObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFGMessageBase::GetMessageDefaultObject(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMessageDefaultObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFGMessageBase::GetMessageDefaultObject(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMessageBase(); \
	friend struct Z_Construct_UClass_UFGMessageBase_Statics; \
public: \
	DECLARE_CLASS(UFGMessageBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMessageBase)


#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUFGMessageBase(); \
	friend struct Z_Construct_UClass_UFGMessageBase_Statics; \
public: \
	DECLARE_CLASS(UFGMessageBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMessageBase)


#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMessageBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMessageBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMessageBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMessageBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMessageBase(UFGMessageBase&&); \
	NO_API UFGMessageBase(const UFGMessageBase&); \
public:


#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMessageBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMessageBase(UFGMessageBase&&); \
	NO_API UFGMessageBase(const UFGMessageBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMessageBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMessageBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMessageBase)


#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_25_PROLOG
#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_INCLASS \
	FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_Message_FGMessageBase_h


#define FOREACH_ENUM_EMESSAGETYPE(op) \
	op(EMessageType::MT_PIMARY) \
	op(EMessageType::MT_TUTORIAL) \
	op(EMessageType::MT_SPAM) \
	op(EMessageType::MT_UNDEFINED) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
