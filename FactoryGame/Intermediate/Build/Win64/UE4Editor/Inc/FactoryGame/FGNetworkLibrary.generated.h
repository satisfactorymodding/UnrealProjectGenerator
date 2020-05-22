// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
struct FOnlinePresence;
class UObject;
struct FUniqueNetIdRepl;
struct FFGOnlineFriend;
class ULocalPlayer;
struct FFGOnlineSessionSettings;
struct FPendingInvite;
class UFGLocalPlayer;
enum class ECachedNATType : uint8;
enum class ENetIdType : uint8;
struct FUserFeedbackFrontEndData;
class APlayerController;
#ifdef FACTORYGAME_FGNetworkLibrary_generated_h
#error "FGNetworkLibrary.generated.h already included, missing '#pragma once' in FGNetworkLibrary.h"
#endif
#define FACTORYGAME_FGNetworkLibrary_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserFeedbackFrontEndData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FUserFeedbackFrontEndData>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlinePresence_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FOnlinePresence>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_24_DELEGATE \
struct _Script_FactoryGame_eventChangeSessionIDDelegate_Parms \
{ \
	bool result; \
	FString newID; \
}; \
static inline void FChangeSessionIDDelegate_DelegateWrapper(const FScriptDelegate& ChangeSessionIDDelegate, bool result, const FString& newID) \
{ \
	_Script_FactoryGame_eventChangeSessionIDDelegate_Parms Parms; \
	Parms.result=result ? true : false; \
	Parms.newID=newID; \
	ChangeSessionIDDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_23_DELEGATE \
struct _Script_FactoryGame_eventSearchQueryCompleteDelegate_Parms \
{ \
	FBlueprintSessionResult result; \
}; \
static inline void FSearchQueryCompleteDelegate_DelegateWrapper(const FScriptDelegate& SearchQueryCompleteDelegate, FBlueprintSessionResult result) \
{ \
	_Script_FactoryGame_eventSearchQueryCompleteDelegate_Parms Parms; \
	Parms.result=result; \
	SearchQueryCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValid_OnlinePresence) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_a); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::IsValid_OnlinePresence(Z_Param_Out_a); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionFromPresence) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBlueprintSessionResult*)Z_Param__Result=UFGPresenceLibrary::GetSessionFromPresence(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingOtherGame) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::IsPlayingOtherGame(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingThisGame) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::IsPlayingThisGame(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionIDFromPresence) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGPresenceLibrary::GetSessionIDFromPresence(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPresenceString) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGPresenceLibrary::GetPresenceString(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNetIdHasValidPresence) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::NetIdHasValidPresence(Z_Param_worldContext,Z_Param_Out_netId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPresenceFromNetId) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOnlinePresence*)Z_Param__Result=UFGPresenceLibrary::GetPresenceFromNetId(Z_Param_worldContext,Z_Param_Out_netId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOnline) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::IsOnline(Z_Param_Out_presence); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValid_OnlinePresence) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_a); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::IsValid_OnlinePresence(Z_Param_Out_a); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionFromPresence) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBlueprintSessionResult*)Z_Param__Result=UFGPresenceLibrary::GetSessionFromPresence(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingOtherGame) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::IsPlayingOtherGame(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingThisGame) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::IsPlayingThisGame(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionIDFromPresence) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGPresenceLibrary::GetSessionIDFromPresence(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPresenceString) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGPresenceLibrary::GetPresenceString(Z_Param_Out_presence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNetIdHasValidPresence) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::NetIdHasValidPresence(Z_Param_worldContext,Z_Param_Out_netId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPresenceFromNetId) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOnlinePresence*)Z_Param__Result=UFGPresenceLibrary::GetPresenceFromNetId(Z_Param_worldContext,Z_Param_Out_netId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOnline) \
	{ \
		P_GET_STRUCT_REF(FOnlinePresence,Z_Param_Out_presence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGPresenceLibrary::IsOnline(Z_Param_Out_presence); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGPresenceLibrary(); \
	friend struct Z_Construct_UClass_UFGPresenceLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGPresenceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPresenceLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUFGPresenceLibrary(); \
	friend struct Z_Construct_UClass_UFGPresenceLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGPresenceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPresenceLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPresenceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPresenceLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPresenceLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPresenceLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPresenceLibrary(UFGPresenceLibrary&&); \
	NO_API UFGPresenceLibrary(const UFGPresenceLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPresenceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPresenceLibrary(UFGPresenceLibrary&&); \
	NO_API UFGPresenceLibrary(const UFGPresenceLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPresenceLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPresenceLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPresenceLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_90_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGPresenceLibrary>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValid_Friend) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_a); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGFriendsLibrary::IsValid_Friend(Z_Param_Out_a); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWaitingForData) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_friendOf); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_onlineFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGFriendsLibrary::IsWaitingForData(Z_Param_friendOf,Z_Param_Out_onlineFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendName) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_friendOf); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_onlineFriend); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_out_displayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGFriendsLibrary::GetFriendName(Z_Param_friendOf,Z_Param_Out_onlineFriend,Z_Param_Out_out_displayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFriendJoinable) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_friendOf); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_onlineFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECantJoinReason>*)Z_Param__Result=UFGFriendsLibrary::IsFriendJoinable(Z_Param_friendOf,Z_Param_Out_onlineFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendFromNetId) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_friendOf); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFGOnlineFriend*)Z_Param__Result=UFGFriendsLibrary::GetFriendFromNetId(Z_Param_friendOf,Z_Param_Out_netId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendUniqueNetId) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_onlineFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=UFGFriendsLibrary::GetFriendUniqueNetId(Z_Param_Out_onlineFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_FriendFriend) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGFriendsLibrary::EqualEqual_FriendFriend(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValid_Friend) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_a); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGFriendsLibrary::IsValid_Friend(Z_Param_Out_a); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWaitingForData) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_friendOf); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_onlineFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGFriendsLibrary::IsWaitingForData(Z_Param_friendOf,Z_Param_Out_onlineFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendName) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_friendOf); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_onlineFriend); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_out_displayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGFriendsLibrary::GetFriendName(Z_Param_friendOf,Z_Param_Out_onlineFriend,Z_Param_Out_out_displayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFriendJoinable) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_friendOf); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_onlineFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECantJoinReason>*)Z_Param__Result=UFGFriendsLibrary::IsFriendJoinable(Z_Param_friendOf,Z_Param_Out_onlineFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendFromNetId) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_friendOf); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFGOnlineFriend*)Z_Param__Result=UFGFriendsLibrary::GetFriendFromNetId(Z_Param_friendOf,Z_Param_Out_netId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendUniqueNetId) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_onlineFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=UFGFriendsLibrary::GetFriendUniqueNetId(Z_Param_Out_onlineFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_FriendFriend) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGFriendsLibrary::EqualEqual_FriendFriend(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGFriendsLibrary(); \
	friend struct Z_Construct_UClass_UFGFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFriendsLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_INCLASS \
private: \
	static void StaticRegisterNativesUFGFriendsLibrary(); \
	friend struct Z_Construct_UClass_UFGFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFriendsLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGFriendsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFriendsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFriendsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFriendsLibrary(UFGFriendsLibrary&&); \
	NO_API UFGFriendsLibrary(const UFGFriendsLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFriendsLibrary(UFGFriendsLibrary&&); \
	NO_API UFGFriendsLibrary(const UFGFriendsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFriendsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFriendsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGFriendsLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_135_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGFriendsLibrary>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckIsCompatibleVersion) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineSessionSettings,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::CheckIsCompatibleVersion(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSessionID) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_playerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_requestedID); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_onComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSessionLibrary::SetSessionID(Z_Param_worldContext,Z_Param_Out_playerId,Z_Param_requestedID,FChangeSessionIDDelegate(Z_Param_onComplete)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuerySessionByID) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_playerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_sessionOnlineID); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_onComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::QuerySessionByID(Z_Param_worldContext,Z_Param_Out_playerId,Z_Param_sessionOnlineID,FSearchQueryCompleteDelegate(Z_Param_onComplete)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuerySessionByFriend) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_playerId); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_targetFriend); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_onComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::QuerySessionByFriend(Z_Param_worldContext,Z_Param_Out_playerId,Z_Param_Out_targetFriend,FSearchQueryCompleteDelegate(Z_Param_onComplete)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumberOfPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSessionLibrary::GetMaxNumberOfPlayers(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSessionLibrary::JoinSession(Z_Param_worldContext,Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSessionJoinable) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECantJoinReason>*)Z_Param__Result=UFGSessionLibrary::IsSessionJoinable(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInOnlineSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_playerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::InOnlineSession(Z_Param_worldContext,Z_Param_Out_playerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSessionValid) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::IsSessionValid(Z_Param_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInGameSession) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_localPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::IsInGameSession(Z_Param_localPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayersInMySession) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_localPlayer); \
		P_GET_TARRAY_REF(FUniqueNetIdRepl,Z_Param_Out_out_playersInSession); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSessionLibrary::GetPlayersInMySession(Z_Param_localPlayer,Z_Param_Out_out_playersInSession); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMySession) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_localPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBlueprintSessionResult*)Z_Param__Result=UFGSessionLibrary::GetMySession(Z_Param_localPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSessionVisibility) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_PROPERTY(UByteProperty,Z_Param_visibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSessionLibrary::SetSessionVisibility(Z_Param_worldContext,ESessionVisibility(Z_Param_visibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionVisibility) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESessionVisibility>*)Z_Param__Result=UFGSessionLibrary::GetSessionVisibility(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionSettings) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFGOnlineSessionSettings*)Z_Param__Result=UFGSessionLibrary::GetSessionSettings(Z_Param_Out_session); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckIsCompatibleVersion) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineSessionSettings,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::CheckIsCompatibleVersion(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSessionID) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_playerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_requestedID); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_onComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSessionLibrary::SetSessionID(Z_Param_worldContext,Z_Param_Out_playerId,Z_Param_requestedID,FChangeSessionIDDelegate(Z_Param_onComplete)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuerySessionByID) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_playerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_sessionOnlineID); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_onComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::QuerySessionByID(Z_Param_worldContext,Z_Param_Out_playerId,Z_Param_sessionOnlineID,FSearchQueryCompleteDelegate(Z_Param_onComplete)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuerySessionByFriend) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_playerId); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_targetFriend); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_onComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::QuerySessionByFriend(Z_Param_worldContext,Z_Param_Out_playerId,Z_Param_Out_targetFriend,FSearchQueryCompleteDelegate(Z_Param_onComplete)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumberOfPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSessionLibrary::GetMaxNumberOfPlayers(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSessionLibrary::JoinSession(Z_Param_worldContext,Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSessionJoinable) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECantJoinReason>*)Z_Param__Result=UFGSessionLibrary::IsSessionJoinable(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInOnlineSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_playerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::InOnlineSession(Z_Param_worldContext,Z_Param_Out_playerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSessionValid) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::IsSessionValid(Z_Param_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInGameSession) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_localPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSessionLibrary::IsInGameSession(Z_Param_localPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayersInMySession) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_localPlayer); \
		P_GET_TARRAY_REF(FUniqueNetIdRepl,Z_Param_Out_out_playersInSession); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSessionLibrary::GetPlayersInMySession(Z_Param_localPlayer,Z_Param_Out_out_playersInSession); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMySession) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_localPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBlueprintSessionResult*)Z_Param__Result=UFGSessionLibrary::GetMySession(Z_Param_localPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSessionVisibility) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_PROPERTY(UByteProperty,Z_Param_visibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSessionLibrary::SetSessionVisibility(Z_Param_worldContext,ESessionVisibility(Z_Param_visibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionVisibility) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESessionVisibility>*)Z_Param__Result=UFGSessionLibrary::GetSessionVisibility(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionSettings) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFGOnlineSessionSettings*)Z_Param__Result=UFGSessionLibrary::GetSessionSettings(Z_Param_Out_session); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSessionLibrary(); \
	friend struct Z_Construct_UClass_UFGSessionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGSessionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSessionLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_INCLASS \
private: \
	static void StaticRegisterNativesUFGSessionLibrary(); \
	friend struct Z_Construct_UClass_UFGSessionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGSessionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSessionLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSessionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSessionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSessionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSessionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSessionLibrary(UFGSessionLibrary&&); \
	NO_API UFGSessionLibrary(const UFGSessionLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSessionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSessionLibrary(UFGSessionLibrary&&); \
	NO_API UFGSessionLibrary(const UFGSessionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSessionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSessionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSessionLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_180_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_183_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSessionLibrary>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDiscardInvite) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInviteLibrary::DiscardInvite(Z_Param_worldContext,Z_Param_Out_invite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinInvite) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInviteLibrary::JoinInvite(Z_Param_worldContext,Z_Param_Out_invite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendInviteToFriend) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_fromPlayer); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_toFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInviteLibrary::SendInviteToFriend(Z_Param_fromPlayer,Z_Param_Out_toFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInviteFromSender) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_sender); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPendingInvite*)Z_Param__Result=UFGInviteLibrary::GetInviteFromSender(Z_Param_worldContext,Z_Param_Out_sender); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingInvites) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_TARRAY_REF(FPendingInvite,Z_Param_Out_out_invites); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInviteLibrary::GetPendingInvites(Z_Param_worldContext,Z_Param_Out_out_invites); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionFromInvite) \
	{ \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBlueprintSessionResult*)Z_Param__Result=UFGInviteLibrary::GetSessionFromInvite(Z_Param_Out_invite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInviteSenderUniqueNetId) \
	{ \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=UFGInviteLibrary::GetInviteSenderUniqueNetId(Z_Param_Out_invite); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDiscardInvite) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInviteLibrary::DiscardInvite(Z_Param_worldContext,Z_Param_Out_invite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinInvite) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInviteLibrary::JoinInvite(Z_Param_worldContext,Z_Param_Out_invite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendInviteToFriend) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_fromPlayer); \
		P_GET_STRUCT_REF(FFGOnlineFriend,Z_Param_Out_toFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInviteLibrary::SendInviteToFriend(Z_Param_fromPlayer,Z_Param_Out_toFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInviteFromSender) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_sender); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPendingInvite*)Z_Param__Result=UFGInviteLibrary::GetInviteFromSender(Z_Param_worldContext,Z_Param_Out_sender); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingInvites) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_TARRAY_REF(FPendingInvite,Z_Param_Out_out_invites); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInviteLibrary::GetPendingInvites(Z_Param_worldContext,Z_Param_Out_out_invites); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionFromInvite) \
	{ \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBlueprintSessionResult*)Z_Param__Result=UFGInviteLibrary::GetSessionFromInvite(Z_Param_Out_invite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInviteSenderUniqueNetId) \
	{ \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=UFGInviteLibrary::GetInviteSenderUniqueNetId(Z_Param_Out_invite); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGInviteLibrary(); \
	friend struct Z_Construct_UClass_UFGInviteLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGInviteLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInviteLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_INCLASS \
private: \
	static void StaticRegisterNativesUFGInviteLibrary(); \
	friend struct Z_Construct_UClass_UFGInviteLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGInviteLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInviteLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInviteLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInviteLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInviteLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInviteLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInviteLibrary(UFGInviteLibrary&&); \
	NO_API UFGInviteLibrary(const UFGInviteLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInviteLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInviteLibrary(UFGInviteLibrary&&); \
	NO_API UFGInviteLibrary(const UFGInviteLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInviteLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInviteLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInviteLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_260_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGInviteLibrary>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUniqueID) \
	{ \
		P_GET_OBJECT(UFGLocalPlayer,Z_Param_localPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=UFGNetworkLibrary::GetUniqueID(Z_Param_localPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIsCompatibleVersion) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineSessionSettings,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::CheckIsCompatibleVersion(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalBuildVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGNetworkLibrary::GetLocalBuildVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNATTypeToText) \
	{ \
		P_GET_ENUM(ECachedNATType,Z_Param_NatType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGNetworkLibrary::NATTypeToText(ECachedNATType(Z_Param_NatType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedNATType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECachedNATType*)Z_Param__Result=UFGNetworkLibrary::GetCachedNATType(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQueryNATType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGNetworkLibrary::QueryNATType(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_UniqueNetId) \
	{ \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_a); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::IsValid_UniqueNetId(Z_Param_Out_a); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_NetIdNetId) \
	{ \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_a); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::EqualEqual_NetIdNetId(Z_Param_Out_a,Z_Param_Out_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueNetIdType) \
	{ \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ENetIdType*)Z_Param__Result=UFGNetworkLibrary::GetUniqueNetIdType(Z_Param_Out_netId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNameFromUniqueNetId) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_querier); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_out_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::GetNameFromUniqueNetId(Z_Param_querier,Z_Param_Out_netId,Z_Param_Out_out_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubmitFeedback) \
	{ \
		P_GET_STRUCT(FUserFeedbackFrontEndData,Z_Param_frontEndFeedbackData); \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::SubmitFeedback(Z_Param_frontEndFeedbackData,Z_Param_playerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenWebURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::OpenWebURL(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::IsServer(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUniqueID) \
	{ \
		P_GET_OBJECT(UFGLocalPlayer,Z_Param_localPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=UFGNetworkLibrary::GetUniqueID(Z_Param_localPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIsCompatibleVersion) \
	{ \
		P_GET_STRUCT_REF(FFGOnlineSessionSettings,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::CheckIsCompatibleVersion(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalBuildVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGNetworkLibrary::GetLocalBuildVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNATTypeToText) \
	{ \
		P_GET_ENUM(ECachedNATType,Z_Param_NatType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGNetworkLibrary::NATTypeToText(ECachedNATType(Z_Param_NatType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedNATType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECachedNATType*)Z_Param__Result=UFGNetworkLibrary::GetCachedNATType(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQueryNATType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGNetworkLibrary::QueryNATType(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_UniqueNetId) \
	{ \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_a); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::IsValid_UniqueNetId(Z_Param_Out_a); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_NetIdNetId) \
	{ \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_a); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::EqualEqual_NetIdNetId(Z_Param_Out_a,Z_Param_Out_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueNetIdType) \
	{ \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ENetIdType*)Z_Param__Result=UFGNetworkLibrary::GetUniqueNetIdType(Z_Param_Out_netId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNameFromUniqueNetId) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_querier); \
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_netId); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_out_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::GetNameFromUniqueNetId(Z_Param_querier,Z_Param_Out_netId,Z_Param_Out_out_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubmitFeedback) \
	{ \
		P_GET_STRUCT(FUserFeedbackFrontEndData,Z_Param_frontEndFeedbackData); \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::SubmitFeedback(Z_Param_frontEndFeedbackData,Z_Param_playerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenWebURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::OpenWebURL(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGNetworkLibrary::IsServer(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGNetworkLibrary(); \
	friend struct Z_Construct_UClass_UFGNetworkLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGNetworkLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGNetworkLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_INCLASS \
private: \
	static void StaticRegisterNativesUFGNetworkLibrary(); \
	friend struct Z_Construct_UClass_UFGNetworkLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGNetworkLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGNetworkLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGNetworkLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGNetworkLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGNetworkLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGNetworkLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGNetworkLibrary(UFGNetworkLibrary&&); \
	NO_API UFGNetworkLibrary(const UFGNetworkLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGNetworkLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGNetworkLibrary(UFGNetworkLibrary&&); \
	NO_API UFGNetworkLibrary(const UFGNetworkLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGNetworkLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGNetworkLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGNetworkLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_299_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_302_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGNetworkLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h


#define FOREACH_ENUM_ECANTJOINREASON(op) \
	op(CJR_InvalidGame) \
	op(CJR_NotInAGame) \
	op(CJR_PlayingOtherGame) \
	op(CJR_PrivateGame) \
	op(CJR_DifferentVersion) \
	op(CJR_FullGame) \
	op(CJR_Ok) 
#define FOREACH_ENUM_ENETIDTYPE(op) \
	op(ENetIdType::NIT_EPIC) \
	op(ENetIdType::NIT_STEAM) \
	op(ENetIdType::NIT_OTHER) 

enum class ENetIdType : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ENetIdType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
