// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOnlinePresence;
struct FBlueprintSessionResult;
class UObject;
struct FUniqueNetIdRepl;
struct FFGOnlineFriend;
class ULocalPlayer;
struct FFGOnlineSessionSettings;
struct FPendingInvite;
enum class ECachedNATType : uint8;
struct FUserFeedbackFrontEndData;
class APlayerController;
#ifdef FACTORYGAME_FGNetworkLibrary_generated_h
#error "FGNetworkLibrary.generated.h already included, missing '#pragma once' in FGNetworkLibrary.h"
#endif
#define FACTORYGAME_FGNetworkLibrary_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserFeedbackFrontEndData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FUserFeedbackFrontEndData>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlinePresence_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FOnlinePresence>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_RPC_WRAPPERS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGPresenceLibrary(); \
	friend struct Z_Construct_UClass_UFGPresenceLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGPresenceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPresenceLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUFGPresenceLibrary(); \
	friend struct Z_Construct_UClass_UFGPresenceLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGPresenceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPresenceLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_ENHANCED_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_77_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGPresenceLibrary>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_RPC_WRAPPERS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGFriendsLibrary(); \
	friend struct Z_Construct_UClass_UFGFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFriendsLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_INCLASS \
private: \
	static void StaticRegisterNativesUFGFriendsLibrary(); \
	friend struct Z_Construct_UClass_UFGFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFriendsLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_ENHANCED_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_118_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGFriendsLibrary>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_RPC_WRAPPERS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSessionLibrary(); \
	friend struct Z_Construct_UClass_UFGSessionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGSessionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSessionLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_INCLASS \
private: \
	static void StaticRegisterNativesUFGSessionLibrary(); \
	friend struct Z_Construct_UClass_UFGSessionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGSessionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSessionLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_ENHANCED_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_160_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSessionLibrary>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execGetInviteSenderUniqueNetId) \
	{ \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=UFGInviteLibrary::GetInviteSenderUniqueNetId(Z_Param_Out_invite); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execGetInviteSenderUniqueNetId) \
	{ \
		P_GET_STRUCT_REF(FPendingInvite,Z_Param_Out_invite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=UFGInviteLibrary::GetInviteSenderUniqueNetId(Z_Param_Out_invite); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGInviteLibrary(); \
	friend struct Z_Construct_UClass_UFGInviteLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGInviteLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInviteLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_INCLASS \
private: \
	static void StaticRegisterNativesUFGInviteLibrary(); \
	friend struct Z_Construct_UClass_UFGInviteLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGInviteLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInviteLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_ENHANCED_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_215_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_218_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGInviteLibrary>();

#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_RPC_WRAPPERS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGNetworkLibrary(); \
	friend struct Z_Construct_UClass_UFGNetworkLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGNetworkLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGNetworkLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_INCLASS \
private: \
	static void StaticRegisterNativesUFGNetworkLibrary(); \
	friend struct Z_Construct_UClass_UFGNetworkLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGNetworkLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGNetworkLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_ENHANCED_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_248_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNetworkLibrary_h_251_ENHANCED_CONSTRUCTORS \
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
