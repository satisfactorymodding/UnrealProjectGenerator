// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPendingInvite;
struct FUniqueNetIdRepl;
struct FUpdatedFriends;
enum class EEosAccountConnectionResult : int32;
enum class ECreateSessionState : uint8;
struct FBlueprintSessionResult;
struct FFGOnlineFriend;
#ifdef FACTORYGAME_FGLocalPlayer_generated_h
#error "FGLocalPlayer.generated.h already included, missing '#pragma once' in FGLocalPlayer.h"
#endif
#define FACTORYGAME_FGLocalPlayer_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdatedFriends_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FUpdatedFriends>();

#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFGOnlineFriend_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FFGOnlineFriend>();

#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_214_DELEGATE \
struct _Script_FactoryGame_eventOnLoginStateChanged_Parms \
{ \
	TEnumAsByte<ELoginState> oldState; \
	TEnumAsByte<ELoginState> newState; \
}; \
static inline void FOnLoginStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLoginStateChanged, ELoginState oldState, ELoginState newState) \
{ \
	_Script_FactoryGame_eventOnLoginStateChanged_Parms Parms; \
	Parms.oldState=oldState; \
	Parms.newState=newState; \
	OnLoginStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_212_DELEGATE \
struct _Script_FactoryGame_eventOnGameInviteReceived_Parms \
{ \
	FPendingInvite receivedInvite; \
}; \
static inline void FOnGameInviteReceived_DelegateWrapper(const FMulticastScriptDelegate& OnGameInviteReceived, FPendingInvite const& receivedInvite) \
{ \
	_Script_FactoryGame_eventOnGameInviteReceived_Parms Parms; \
	Parms.receivedInvite=receivedInvite; \
	OnGameInviteReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_210_DELEGATE \
struct _Script_FactoryGame_eventOnFriendPresenceUpdated_Parms \
{ \
	FUniqueNetIdRepl updatedId; \
}; \
static inline void FOnFriendPresenceUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFriendPresenceUpdated, FUniqueNetIdRepl const& updatedId) \
{ \
	_Script_FactoryGame_eventOnFriendPresenceUpdated_Parms Parms; \
	Parms.updatedId=updatedId; \
	OnFriendPresenceUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_208_DELEGATE \
struct _Script_FactoryGame_eventOnFriendsListUpdated_Parms \
{ \
	FUpdatedFriends updatedFriends; \
}; \
static inline void FOnFriendsListUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFriendsListUpdated, FUpdatedFriends updatedFriends) \
{ \
	_Script_FactoryGame_eventOnFriendsListUpdated_Parms Parms; \
	Parms.updatedFriends=updatedFriends; \
	OnFriendsListUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_205_DELEGATE \
static inline void FOnFriendsListQueried_DelegateWrapper(const FMulticastScriptDelegate& OnFriendsListQueried) \
{ \
	OnFriendsListQueried.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_134_DELEGATE \
struct _Script_FactoryGame_eventOnAccountConnectionComplete_Parms \
{ \
	FName currentPlatform; \
	EEosAccountConnectionResult result; \
}; \
static inline void FOnAccountConnectionComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAccountConnectionComplete, const FName currentPlatform, EEosAccountConnectionResult result) \
{ \
	_Script_FactoryGame_eventOnAccountConnectionComplete_Parms Parms; \
	Parms.currentPlatform=currentPlatform; \
	Parms.result=result; \
	OnAccountConnectionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_133_DELEGATE \
struct _Script_FactoryGame_eventOnCreateSessionStateChanged_Parms \
{ \
	ECreateSessionState newState; \
}; \
static inline void FOnCreateSessionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCreateSessionStateChanged, ECreateSessionState newState) \
{ \
	_Script_FactoryGame_eventOnCreateSessionStateChanged_Parms Parms; \
	Parms.newState=newState; \
	OnCreateSessionStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGEM_LoggedOutFromOnlineService(); \
	friend struct Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics; \
public: \
	DECLARE_CLASS(UFGEM_LoggedOutFromOnlineService, UFGErrorMessage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGEM_LoggedOutFromOnlineService)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUFGEM_LoggedOutFromOnlineService(); \
	friend struct Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics; \
public: \
	DECLARE_CLASS(UFGEM_LoggedOutFromOnlineService, UFGErrorMessage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGEM_LoggedOutFromOnlineService)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGEM_LoggedOutFromOnlineService(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGEM_LoggedOutFromOnlineService) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGEM_LoggedOutFromOnlineService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGEM_LoggedOutFromOnlineService); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGEM_LoggedOutFromOnlineService(UFGEM_LoggedOutFromOnlineService&&); \
	NO_API UFGEM_LoggedOutFromOnlineService(const UFGEM_LoggedOutFromOnlineService&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGEM_LoggedOutFromOnlineService(UFGEM_LoggedOutFromOnlineService&&); \
	NO_API UFGEM_LoggedOutFromOnlineService(const UFGEM_LoggedOutFromOnlineService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGEM_LoggedOutFromOnlineService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGEM_LoggedOutFromOnlineService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGEM_LoggedOutFromOnlineService)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_25_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGEM_LoggedOutFromOnlineService>();

#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGEM_LostConnectionWithOnlineService(); \
	friend struct Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics; \
public: \
	DECLARE_CLASS(UFGEM_LostConnectionWithOnlineService, UFGErrorMessage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGEM_LostConnectionWithOnlineService)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUFGEM_LostConnectionWithOnlineService(); \
	friend struct Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics; \
public: \
	DECLARE_CLASS(UFGEM_LostConnectionWithOnlineService, UFGErrorMessage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGEM_LostConnectionWithOnlineService)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGEM_LostConnectionWithOnlineService(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGEM_LostConnectionWithOnlineService) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGEM_LostConnectionWithOnlineService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGEM_LostConnectionWithOnlineService); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGEM_LostConnectionWithOnlineService(UFGEM_LostConnectionWithOnlineService&&); \
	NO_API UFGEM_LostConnectionWithOnlineService(const UFGEM_LostConnectionWithOnlineService&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGEM_LostConnectionWithOnlineService(UFGEM_LostConnectionWithOnlineService&&); \
	NO_API UFGEM_LostConnectionWithOnlineService(const UFGEM_LostConnectionWithOnlineService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGEM_LostConnectionWithOnlineService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGEM_LostConnectionWithOnlineService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGEM_LostConnectionWithOnlineService)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_36_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGEM_LostConnectionWithOnlineService>();

#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGEM_FailedToLoginToOnlineService(); \
	friend struct Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics; \
public: \
	DECLARE_CLASS(UFGEM_FailedToLoginToOnlineService, UFGErrorMessage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGEM_FailedToLoginToOnlineService)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUFGEM_FailedToLoginToOnlineService(); \
	friend struct Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics; \
public: \
	DECLARE_CLASS(UFGEM_FailedToLoginToOnlineService, UFGErrorMessage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGEM_FailedToLoginToOnlineService)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGEM_FailedToLoginToOnlineService(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGEM_FailedToLoginToOnlineService) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGEM_FailedToLoginToOnlineService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGEM_FailedToLoginToOnlineService); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGEM_FailedToLoginToOnlineService(UFGEM_FailedToLoginToOnlineService&&); \
	NO_API UFGEM_FailedToLoginToOnlineService(const UFGEM_FailedToLoginToOnlineService&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGEM_FailedToLoginToOnlineService(UFGEM_FailedToLoginToOnlineService&&); \
	NO_API UFGEM_FailedToLoginToOnlineService(const UFGEM_FailedToLoginToOnlineService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGEM_FailedToLoginToOnlineService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGEM_FailedToLoginToOnlineService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGEM_FailedToLoginToOnlineService)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_47_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGEM_FailedToLoginToOnlineService>();

#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComandlineInviteSearchComplete) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComandlineInviteSearchComplete(Z_Param_result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCreateSessionState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECreateSessionState*)Z_Param__Result=P_THIS->GetCurrentCreateSessionState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenMap_WaitForProductUserId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenMap_WaitForProductUserId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenMap_WaitForPresence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenMap_WaitForPresence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateOfflineSession_SetupServer) \
	{ \
		P_GET_UBOOL(Z_Param_startOffline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateOfflineSession_SetupServer(Z_Param_startOffline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPresenceFailedToUpdate_OpenMap) \
	{ \
		P_GET_UBOOL(Z_Param_confirmClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPresenceFailedToUpdate_OpenMap(Z_Param_confirmClicked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoginFailed_OpenMap) \
	{ \
		P_GET_UBOOL(Z_Param_confirmClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoginFailed_OpenMap(Z_Param_confirmClicked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogoutEpicAccountPortal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LogoutEpicAccountPortal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoginEpicAccountPortal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoginEpicAccountPortal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextUpdatePresenceTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeTillNextUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNextUpdatePresenceTime(Z_Param_timeTillNextUpdate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePresence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePresence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoLogin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutoLogin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendList) \
	{ \
		P_GET_TARRAY_REF(FFGOnlineFriend,Z_Param_Out_out_friends); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFriendList(Z_Param_Out_out_friends); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsernameSteam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUsernameSteam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsernameEpic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUsernameEpic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsername) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUsername(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginStateSteam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ELoginState>*)Z_Param__Result=P_THIS->GetLoginStateSteam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginStateEpic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ELoginState>*)Z_Param__Result=P_THIS->GetLoginStateEpic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ELoginState>*)Z_Param__Result=P_THIS->GetLoginState(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComandlineInviteSearchComplete) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComandlineInviteSearchComplete(Z_Param_result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCreateSessionState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECreateSessionState*)Z_Param__Result=P_THIS->GetCurrentCreateSessionState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenMap_WaitForProductUserId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenMap_WaitForProductUserId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenMap_WaitForPresence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenMap_WaitForPresence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateOfflineSession_SetupServer) \
	{ \
		P_GET_UBOOL(Z_Param_startOffline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateOfflineSession_SetupServer(Z_Param_startOffline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPresenceFailedToUpdate_OpenMap) \
	{ \
		P_GET_UBOOL(Z_Param_confirmClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPresenceFailedToUpdate_OpenMap(Z_Param_confirmClicked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoginFailed_OpenMap) \
	{ \
		P_GET_UBOOL(Z_Param_confirmClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoginFailed_OpenMap(Z_Param_confirmClicked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogoutEpicAccountPortal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LogoutEpicAccountPortal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoginEpicAccountPortal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoginEpicAccountPortal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextUpdatePresenceTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeTillNextUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNextUpdatePresenceTime(Z_Param_timeTillNextUpdate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePresence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePresence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoLogin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutoLogin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendList) \
	{ \
		P_GET_TARRAY_REF(FFGOnlineFriend,Z_Param_Out_out_friends); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFriendList(Z_Param_Out_out_friends); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsernameSteam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUsernameSteam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsernameEpic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUsernameEpic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsername) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUsername(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginStateSteam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ELoginState>*)Z_Param__Result=P_THIS->GetLoginStateSteam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginStateEpic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ELoginState>*)Z_Param__Result=P_THIS->GetLoginStateEpic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ELoginState>*)Z_Param__Result=P_THIS->GetLoginState(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGLocalPlayer(); \
	friend struct Z_Construct_UClass_UFGLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UFGLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGLocalPlayer)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_INCLASS \
private: \
	static void StaticRegisterNativesUFGLocalPlayer(); \
	friend struct Z_Construct_UClass_UFGLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UFGLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGLocalPlayer)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGLocalPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGLocalPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGLocalPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGLocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGLocalPlayer(UFGLocalPlayer&&); \
	NO_API UFGLocalPlayer(const UFGLocalPlayer&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGLocalPlayer(UFGLocalPlayer&&); \
	NO_API UFGLocalPlayer(const UFGLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGLocalPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGLocalPlayer)


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOnLoginStateChanged() { return STRUCT_OFFSET(UFGLocalPlayer, mOnLoginStateChanged); } \
	FORCEINLINE static uint32 __PPO__mOnFriendsListUpdated() { return STRUCT_OFFSET(UFGLocalPlayer, mOnFriendsListUpdated); } \
	FORCEINLINE static uint32 __PPO__mOnCreateSessionStateChanged() { return STRUCT_OFFSET(UFGLocalPlayer, mOnCreateSessionStateChanged); } \
	FORCEINLINE static uint32 __PPO__mOnFriendsPresenceUpdated() { return STRUCT_OFFSET(UFGLocalPlayer, mOnFriendsPresenceUpdated); } \
	FORCEINLINE static uint32 __PPO__mOnInviteReceived() { return STRUCT_OFFSET(UFGLocalPlayer, mOnInviteReceived); }


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_238_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h_241_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGLocalPlayer_h


#define FOREACH_ENUM_ECREATESESSIONSTATE(op) \
	op(ECreateSessionState::CSS_NotCreateingSession) \
	op(ECreateSessionState::CSS_CreatingSession) \
	op(ECreateSessionState::CSS_DestroyingOldSession) \
	op(ECreateSessionState::CSS_UpdatingPresence) \
	op(ECreateSessionState::CSS_WaitingForPresenceToUpdate) \
	op(ECreateSessionState::CSS_WaitingForLogin) 

enum class ECreateSessionState : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ECreateSessionState>();

#define FOREACH_ENUM_ELOGINSTATE(op) \
	op(LS_NotLoggedIn) \
	op(LS_FailedToLogin) \
	op(LS_LoggingIn) \
	op(LS_LoggedIn) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
