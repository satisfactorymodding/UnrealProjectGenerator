// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioSubtitlePair;
#ifdef FACTORYGAME_FGAudioMessage_generated_h
#error "FGAudioMessage.generated.h already included, missing '#pragma once' in FGAudioMessage.h"
#endif
#define FACTORYGAME_FGAudioMessage_generated_h

#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FAudioSubtitlePair>();

#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_13_DELEGATE \
static inline void FAudioMessageConcludedDelegate_DelegateWrapper(const FScriptDelegate& AudioMessageConcludedDelegate) \
{ \
	AudioMessageConcludedDelegate.ProcessDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_RPC_WRAPPERS \
	virtual void PlayNextDialogue_Implementation(); \
 \
	DECLARE_FUNCTION(execAssignOnConcludedDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_concludedDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignOnConcludedDelegate(FAudioMessageConcludedDelegate(Z_Param_concludedDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayNextDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayNextDialogue_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAudioSubtitlePair*)Z_Param__Result=P_THIS->GetCurrentDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelPlayback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelPlayback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContinuePlayback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ContinuePlayback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartPlayback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartPlayback(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayNextDialogue_Implementation(); \
 \
	DECLARE_FUNCTION(execAssignOnConcludedDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_concludedDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignOnConcludedDelegate(FAudioMessageConcludedDelegate(Z_Param_concludedDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayNextDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayNextDialogue_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAudioSubtitlePair*)Z_Param__Result=P_THIS->GetCurrentDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelPlayback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelPlayback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContinuePlayback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ContinuePlayback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartPlayback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartPlayback(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGAudioMessage(); \
	friend struct Z_Construct_UClass_UFGAudioMessage_Statics; \
public: \
	DECLARE_CLASS(UFGAudioMessage, UFGMessageBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAudioMessage)


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUFGAudioMessage(); \
	friend struct Z_Construct_UClass_UFGAudioMessage_Statics; \
public: \
	DECLARE_CLASS(UFGAudioMessage, UFGMessageBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAudioMessage)


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAudioMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAudioMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAudioMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAudioMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAudioMessage(UFGAudioMessage&&); \
	NO_API UFGAudioMessage(const UFGAudioMessage&); \
public:


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAudioMessage(UFGAudioMessage&&); \
	NO_API UFGAudioMessage(const UFGAudioMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAudioMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAudioMessage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAudioMessage)


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAudioMessageConcluded() { return STRUCT_OFFSET(UFGAudioMessage, mAudioMessageConcluded); } \
	FORCEINLINE static uint32 __PPO__mAudioMessageInputComponent() { return STRUCT_OFFSET(UFGAudioMessage, mAudioMessageInputComponent); }


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_42_PROLOG \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_INCLASS \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGAudioMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_Message_FGAudioMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
