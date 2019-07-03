// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChatMessageStruct;
struct FLinearColor;
class UObject;
class AFGChatManager;
#ifdef FACTORYGAME_FGChatManager_generated_h
#error "FGChatManager.generated.h already included, missing '#pragma once' in FGChatManager.h"
#endif
#define FACTORYGAME_FGChatManager_generated_h

#define FactoryGame_Source_FactoryGame_FGChatManager_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChatMessageStruct_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGChatManager_h_13_DELEGATE \
static inline void FChatMessageAdded_DelegateWrapper(const FMulticastScriptDelegate& ChatMessageAdded) \
{ \
	ChatMessageAdded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_RPC_WRAPPERS \
	virtual void Multicast_BroadcastChatMessage_Implementation(FChatMessageStruct const& newMessage); \
 \
	DECLARE_FUNCTION(execGetMessageVisibleDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMessageVisibleDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumMessagesInHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumMessagesInHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReceivedChatMessages) \
	{ \
		P_GET_TARRAY_REF(FChatMessageStruct,Z_Param_Out_out_messages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetReceivedChatMessages(Z_Param_Out_out_messages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticast_BroadcastChatMessage) \
	{ \
		P_GET_STRUCT(FChatMessageStruct,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_BroadcastChatMessage_Implementation(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChatMessageColor) \
	{ \
		P_GET_STRUCT_REF(FChatMessageStruct,Z_Param_Out_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=AFGChatManager::GetChatMessageColor(Z_Param_Out_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChatMessageName) \
	{ \
		P_GET_STRUCT_REF(FChatMessageStruct,Z_Param_Out_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=AFGChatManager::GetChatMessageName(Z_Param_Out_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGChatManager**)Z_Param__Result=AFGChatManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_BroadcastChatMessage_Implementation(FChatMessageStruct const& newMessage); \
 \
	DECLARE_FUNCTION(execGetMessageVisibleDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMessageVisibleDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumMessagesInHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumMessagesInHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReceivedChatMessages) \
	{ \
		P_GET_TARRAY_REF(FChatMessageStruct,Z_Param_Out_out_messages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetReceivedChatMessages(Z_Param_Out_out_messages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticast_BroadcastChatMessage) \
	{ \
		P_GET_STRUCT(FChatMessageStruct,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_BroadcastChatMessage_Implementation(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChatMessageColor) \
	{ \
		P_GET_STRUCT_REF(FChatMessageStruct,Z_Param_Out_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=AFGChatManager::GetChatMessageColor(Z_Param_Out_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChatMessageName) \
	{ \
		P_GET_STRUCT_REF(FChatMessageStruct,Z_Param_Out_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=AFGChatManager::GetChatMessageName(Z_Param_Out_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGChatManager**)Z_Param__Result=AFGChatManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_EVENT_PARMS \
	struct FGChatManager_eventMulticast_BroadcastChatMessage_Parms \
	{ \
		FChatMessageStruct newMessage; \
	};


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGChatManager(); \
	friend struct Z_Construct_UClass_AFGChatManager_Statics; \
public: \
	DECLARE_CLASS(AFGChatManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGChatManager)


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_INCLASS \
private: \
	static void StaticRegisterNativesAFGChatManager(); \
	friend struct Z_Construct_UClass_AFGChatManager_Statics; \
public: \
	DECLARE_CLASS(AFGChatManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGChatManager)


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGChatManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGChatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGChatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGChatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGChatManager(AFGChatManager&&); \
	NO_API AFGChatManager(const AFGChatManager&); \
public:


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGChatManager(AFGChatManager&&); \
	NO_API AFGChatManager(const AFGChatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGChatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGChatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGChatManager)


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMaxNumMessagesInHistory() { return STRUCT_OFFSET(AFGChatManager, mMaxNumMessagesInHistory); } \
	FORCEINLINE static uint32 __PPO__mMessageVisibleDuration() { return STRUCT_OFFSET(AFGChatManager, mMessageVisibleDuration); } \
	FORCEINLINE static uint32 __PPO__mReceivedMessages() { return STRUCT_OFFSET(AFGChatManager, mReceivedMessages); }


#define FactoryGame_Source_FactoryGame_FGChatManager_h_63_PROLOG \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_INCLASS \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGChatManager_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGChatManager_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGChatManager_h


#define FOREACH_ENUM_EFGCHATMESSAGETYPE(op) \
	op(EFGChatMessageType::CMT_PlayerMessage) \
	op(EFGChatMessageType::CMT_SystemMessage) \
	op(EFGChatMessageType::CMT_AdaMessage) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
