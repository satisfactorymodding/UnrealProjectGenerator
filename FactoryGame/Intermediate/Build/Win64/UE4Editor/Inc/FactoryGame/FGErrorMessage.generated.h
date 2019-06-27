// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGErrorMessage_generated_h
#error "FGErrorMessage.generated.h already included, missing '#pragma once' in FGErrorMessage.h"
#endif
#define FACTORYGAME_FGErrorMessage_generated_h

#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetErrorResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EErrorResponse>*)Z_Param__Result=P_THIS->GetErrorResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetErrorMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetErrorMessage(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetErrorResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EErrorResponse>*)Z_Param__Result=P_THIS->GetErrorResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetErrorMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetErrorMessage(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGErrorMessage(); \
	friend struct Z_Construct_UClass_UFGErrorMessage_Statics; \
public: \
	DECLARE_CLASS(UFGErrorMessage, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGErrorMessage)


#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFGErrorMessage(); \
	friend struct Z_Construct_UClass_UFGErrorMessage_Statics; \
public: \
	DECLARE_CLASS(UFGErrorMessage, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGErrorMessage)


#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGErrorMessage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGErrorMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGErrorMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGErrorMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGErrorMessage(UFGErrorMessage&&); \
	NO_API UFGErrorMessage(const UFGErrorMessage&); \
public:


#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGErrorMessage(UFGErrorMessage&&); \
	NO_API UFGErrorMessage(const UFGErrorMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGErrorMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGErrorMessage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGErrorMessage)


#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mErrorMessage() { return STRUCT_OFFSET(UFGErrorMessage, mErrorMessage); } \
	FORCEINLINE static uint32 __PPO__mErrorResponse() { return STRUCT_OFFSET(UFGErrorMessage, mErrorResponse); }


#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_19_PROLOG
#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGErrorMessage_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGErrorMessage_h


#define FOREACH_ENUM_EERRORRESPONSE(op) \
	op(ER_NonIntrusivePopup) \
	op(ER_SendToMainMenu) \
	op(ER_Quit) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
