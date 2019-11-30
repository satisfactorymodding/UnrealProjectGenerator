// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGMessageSender;
class UObject;
#ifdef FACTORYGAME_FGMessageSender_generated_h
#error "FGMessageSender.generated.h already included, missing '#pragma once' in FGMessageSender.h"
#endif
#define FACTORYGAME_FGMessageSender_generated_h

#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSenderDefaultObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFGMessageSender::GetSenderDefaultObject(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSenderDefaultObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFGMessageSender::GetSenderDefaultObject(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMessageSender(); \
	friend struct Z_Construct_UClass_UFGMessageSender_Statics; \
public: \
	DECLARE_CLASS(UFGMessageSender, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMessageSender)


#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGMessageSender(); \
	friend struct Z_Construct_UClass_UFGMessageSender_Statics; \
public: \
	DECLARE_CLASS(UFGMessageSender, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMessageSender)


#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMessageSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMessageSender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMessageSender); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMessageSender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMessageSender(UFGMessageSender&&); \
	NO_API UFGMessageSender(const UFGMessageSender&); \
public:


#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMessageSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMessageSender(UFGMessageSender&&); \
	NO_API UFGMessageSender(const UFGMessageSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMessageSender); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMessageSender); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMessageSender)


#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_UI_Message_FGMessageSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
