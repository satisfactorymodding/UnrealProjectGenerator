// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGLocalPlayer() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ELoginState();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPendingInvite();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FUpdatedFriends();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EEosAccountConnectionResult();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ECreateSessionState();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGOnlineFriend();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGErrorMessage();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLocalPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_AutoLogin();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetFriendList();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetLoginState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetUsername();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_LoginEpicAccountPortal();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_LogoutEpicAccountPortal();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForPresence();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForProductUserId();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnLoginStateChanged_Parms
		{
			TEnumAsByte<ELoginState> oldState;
			TEnumAsByte<ELoginState> newState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnLoginStateChanged_Parms, newState), Z_Construct_UEnum_FactoryGame_ELoginState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::NewProp_oldState = { "oldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnLoginStateChanged_Parms, oldState), Z_Construct_UEnum_FactoryGame_ELoginState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::NewProp_oldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnLoginStateChanged__DelegateSignature", sizeof(_Script_FactoryGame_eventOnLoginStateChanged_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnGameInviteReceived_Parms
		{
			FPendingInvite receivedInvite;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_receivedInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_receivedInvite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::NewProp_receivedInvite_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::NewProp_receivedInvite = { "receivedInvite", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnGameInviteReceived_Parms, receivedInvite), Z_Construct_UScriptStruct_FPendingInvite, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::NewProp_receivedInvite_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::NewProp_receivedInvite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::NewProp_receivedInvite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnGameInviteReceived__DelegateSignature", sizeof(_Script_FactoryGame_eventOnGameInviteReceived_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnFriendPresenceUpdated_Parms
		{
			FUniqueNetIdRepl updatedId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_updatedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_updatedId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::NewProp_updatedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::NewProp_updatedId = { "updatedId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnFriendPresenceUpdated_Parms, updatedId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::NewProp_updatedId_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::NewProp_updatedId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::NewProp_updatedId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnFriendPresenceUpdated__DelegateSignature", sizeof(_Script_FactoryGame_eventOnFriendPresenceUpdated_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnFriendsListUpdated_Parms
		{
			FUpdatedFriends updatedFriends;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_updatedFriends;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::NewProp_updatedFriends = { "updatedFriends", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnFriendsListUpdated_Parms, updatedFriends), Z_Construct_UScriptStruct_FUpdatedFriends, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::NewProp_updatedFriends,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFriendsListUpdated);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnFriendsListUpdated__DelegateSignature", sizeof(_Script_FactoryGame_eventOnFriendsListUpdated_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called when the friends list is done with it's initial query" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnFriendsListQueried__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnAccountConnectionComplete_Parms
		{
			FName currentPlatform;
			EEosAccountConnectionResult result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_currentPlatform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnAccountConnectionComplete_Parms, result), Z_Construct_UEnum_FactoryGame_EEosAccountConnectionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::NewProp_currentPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::NewProp_currentPlatform = { "currentPlatform", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnAccountConnectionComplete_Parms, currentPlatform), METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::NewProp_currentPlatform_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::NewProp_currentPlatform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::NewProp_currentPlatform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnAccountConnectionComplete__DelegateSignature", sizeof(_Script_FactoryGame_eventOnAccountConnectionComplete_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnAccountConnectionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnCreateSessionStateChanged_Parms
		{
			ECreateSessionState newState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnCreateSessionStateChanged_Parms, newState), Z_Construct_UEnum_FactoryGame_ECreateSessionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::NewProp_newState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnCreateSessionStateChanged__DelegateSignature", sizeof(_Script_FactoryGame_eventOnCreateSessionStateChanged_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ECreateSessionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ECreateSessionState, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ECreateSessionState"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ECreateSessionState>()
	{
		return ECreateSessionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECreateSessionState(ECreateSessionState_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ECreateSessionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ECreateSessionState_Hash() { return 3438477287U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ECreateSessionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECreateSessionState"), 0, Get_Z_Construct_UEnum_FactoryGame_ECreateSessionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECreateSessionState::CSS_NotCreateingSession", (int64)ECreateSessionState::CSS_NotCreateingSession },
				{ "ECreateSessionState::CSS_CreatingSession", (int64)ECreateSessionState::CSS_CreatingSession },
				{ "ECreateSessionState::CSS_DestroyingOldSession", (int64)ECreateSessionState::CSS_DestroyingOldSession },
				{ "ECreateSessionState::CSS_UpdatingPresence", (int64)ECreateSessionState::CSS_UpdatingPresence },
				{ "ECreateSessionState::CSS_WaitingForPresenceToUpdate", (int64)ECreateSessionState::CSS_WaitingForPresenceToUpdate },
				{ "ECreateSessionState::CSS_WaitingForLogin", (int64)ECreateSessionState::CSS_WaitingForLogin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ECreateSessionState",
				"ECreateSessionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELoginState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ELoginState, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ELoginState"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ELoginState>()
	{
		return ELoginState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoginState(ELoginState_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ELoginState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ELoginState_Hash() { return 3397720734U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ELoginState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoginState"), 0, Get_Z_Construct_UEnum_FactoryGame_ELoginState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LS_NotLoggedIn", (int64)LS_NotLoggedIn },
				{ "LS_FailedToLogin", (int64)LS_FailedToLogin },
				{ "LS_LoggingIn", (int64)LS_LoggingIn },
				{ "LS_LoggedIn", (int64)LS_LoggedIn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LS_FailedToLogin.DisplayName", "FailedToLogin" },
				{ "LS_LoggedIn.DisplayName", "LoggedIn" },
				{ "LS_LoggingIn.DisplayName", "LoggingIn" },
				{ "LS_NotLoggedIn.DisplayName", "NotLoggedIn" },
				{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ELoginState",
				"ELoginState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEosAccountConnectionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EEosAccountConnectionResult, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EEosAccountConnectionResult"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EEosAccountConnectionResult>()
	{
		return EEosAccountConnectionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEosAccountConnectionResult(EEosAccountConnectionResult_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EEosAccountConnectionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EEosAccountConnectionResult_Hash() { return 2355025897U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EEosAccountConnectionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEosAccountConnectionResult"), 0, Get_Z_Construct_UEnum_FactoryGame_EEosAccountConnectionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEosAccountConnectionResult::SOMETHING", (int64)EEosAccountConnectionResult::SOMETHING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
				{ "ToolTip", "MODDING EDIT: dummy classes from the Epic Online missing headers" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EEosAccountConnectionResult",
				"EEosAccountConnectionResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FUpdatedFriends::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FUpdatedFriends_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdatedFriends, Z_Construct_UPackage__Script_FactoryGame(), TEXT("UpdatedFriends"), sizeof(FUpdatedFriends), Get_Z_Construct_UScriptStruct_FUpdatedFriends_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FUpdatedFriends>()
{
	return FUpdatedFriends::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpdatedFriends(FUpdatedFriends::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("UpdatedFriends"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFUpdatedFriends
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFUpdatedFriends()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UpdatedFriends")),new UScriptStruct::TCppStructOps<FUpdatedFriends>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFUpdatedFriends;
	struct Z_Construct_UScriptStruct_FUpdatedFriends_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Friends;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Friends_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdatedFriends_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Workaround as it seems like you can't have a TArray<FFGOnlineFriends> exposed to a Dynamic multicast delegate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdatedFriends>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends_MetaData[] = {
		{ "Category", "UpdatedFriends" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends = { "Friends", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdatedFriends, Friends), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends_Inner = { "Friends", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFGOnlineFriend, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdatedFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdatedFriends_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"UpdatedFriends",
		sizeof(FUpdatedFriends),
		alignof(FUpdatedFriends),
		Z_Construct_UScriptStruct_FUpdatedFriends_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdatedFriends()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpdatedFriends_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpdatedFriends"), sizeof(FUpdatedFriends), Get_Z_Construct_UScriptStruct_FUpdatedFriends_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpdatedFriends_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpdatedFriends_Hash() { return 1712781222U; }
class UScriptStruct* FFGOnlineFriend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFGOnlineFriend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGOnlineFriend, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FGOnlineFriend"), sizeof(FFGOnlineFriend), Get_Z_Construct_UScriptStruct_FFGOnlineFriend_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFGOnlineFriend>()
{
	return FFGOnlineFriend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGOnlineFriend(FFGOnlineFriend::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FGOnlineFriend"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFGOnlineFriend
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFGOnlineFriend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGOnlineFriend")),new UScriptStruct::TCppStructOps<FFGOnlineFriend>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFGOnlineFriend;
	struct Z_Construct_UScriptStruct_FFGOnlineFriend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineFriend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGOnlineFriend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGOnlineFriend>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGOnlineFriend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FGOnlineFriend",
		sizeof(FFGOnlineFriend),
		alignof(FFGOnlineFriend),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineFriend_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineFriend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGOnlineFriend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGOnlineFriend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGOnlineFriend"), sizeof(FFGOnlineFriend), Get_Z_Construct_UScriptStruct_FFGOnlineFriend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGOnlineFriend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGOnlineFriend_Hash() { return 2587161863U; }
	void UFGEM_LoggedOutFromOnlineService::StaticRegisterNativesUFGEM_LoggedOutFromOnlineService()
	{
	}
	UClass* Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_NoRegister()
	{
		return UFGEM_LoggedOutFromOnlineService::StaticClass();
	}
	struct Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGErrorMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "why..." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGEM_LoggedOutFromOnlineService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics::ClassParams = {
		&UFGEM_LoggedOutFromOnlineService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGEM_LoggedOutFromOnlineService, 1508834311);
	template<> FACTORYGAME_API UClass* StaticClass<UFGEM_LoggedOutFromOnlineService>()
	{
		return UFGEM_LoggedOutFromOnlineService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGEM_LoggedOutFromOnlineService(Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService, &UFGEM_LoggedOutFromOnlineService::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGEM_LoggedOutFromOnlineService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGEM_LoggedOutFromOnlineService);
	void UFGEM_LostConnectionWithOnlineService::StaticRegisterNativesUFGEM_LostConnectionWithOnlineService()
	{
	}
	UClass* Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_NoRegister()
	{
		return UFGEM_LostConnectionWithOnlineService::StaticClass();
	}
	struct Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGErrorMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGEM_LostConnectionWithOnlineService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics::ClassParams = {
		&UFGEM_LostConnectionWithOnlineService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGEM_LostConnectionWithOnlineService, 3835248436);
	template<> FACTORYGAME_API UClass* StaticClass<UFGEM_LostConnectionWithOnlineService>()
	{
		return UFGEM_LostConnectionWithOnlineService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGEM_LostConnectionWithOnlineService(Z_Construct_UClass_UFGEM_LostConnectionWithOnlineService, &UFGEM_LostConnectionWithOnlineService::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGEM_LostConnectionWithOnlineService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGEM_LostConnectionWithOnlineService);
	void UFGEM_FailedToLoginToOnlineService::StaticRegisterNativesUFGEM_FailedToLoginToOnlineService()
	{
	}
	UClass* Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_NoRegister()
	{
		return UFGEM_FailedToLoginToOnlineService::StaticClass();
	}
	struct Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGErrorMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGEM_FailedToLoginToOnlineService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics::ClassParams = {
		&UFGEM_FailedToLoginToOnlineService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGEM_FailedToLoginToOnlineService, 2859778466);
	template<> FACTORYGAME_API UClass* StaticClass<UFGEM_FailedToLoginToOnlineService>()
	{
		return UFGEM_FailedToLoginToOnlineService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGEM_FailedToLoginToOnlineService(Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService, &UFGEM_FailedToLoginToOnlineService::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGEM_FailedToLoginToOnlineService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGEM_FailedToLoginToOnlineService);
	void UFGLocalPlayer::StaticRegisterNativesUFGLocalPlayer()
	{
		UClass* Class = UFGLocalPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoLogin", &UFGLocalPlayer::execAutoLogin },
			{ "CreateOfflineSession_SetupServer", &UFGLocalPlayer::execCreateOfflineSession_SetupServer },
			{ "GetCurrentCreateSessionState", &UFGLocalPlayer::execGetCurrentCreateSessionState },
			{ "GetFriendList", &UFGLocalPlayer::execGetFriendList },
			{ "GetLoginState", &UFGLocalPlayer::execGetLoginState },
			{ "GetLoginStateEpic", &UFGLocalPlayer::execGetLoginStateEpic },
			{ "GetLoginStateSteam", &UFGLocalPlayer::execGetLoginStateSteam },
			{ "GetUsername", &UFGLocalPlayer::execGetUsername },
			{ "GetUsernameEpic", &UFGLocalPlayer::execGetUsernameEpic },
			{ "GetUsernameSteam", &UFGLocalPlayer::execGetUsernameSteam },
			{ "LoginEpicAccountPortal", &UFGLocalPlayer::execLoginEpicAccountPortal },
			{ "LogoutEpicAccountPortal", &UFGLocalPlayer::execLogoutEpicAccountPortal },
			{ "OnLoginFailed_OpenMap", &UFGLocalPlayer::execOnLoginFailed_OpenMap },
			{ "OnPresenceFailedToUpdate_OpenMap", &UFGLocalPlayer::execOnPresenceFailedToUpdate_OpenMap },
			{ "OpenMap_WaitForPresence", &UFGLocalPlayer::execOpenMap_WaitForPresence },
			{ "OpenMap_WaitForProductUserId", &UFGLocalPlayer::execOpenMap_WaitForProductUserId },
			{ "SetNextUpdatePresenceTime", &UFGLocalPlayer::execSetNextUpdatePresenceTime },
			{ "UpdatePresence", &UFGLocalPlayer::execUpdatePresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_AutoLogin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_AutoLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Try to autologin to online service, don't try again if we have failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_AutoLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "AutoLogin", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_AutoLogin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_AutoLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_AutoLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_AutoLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics
	{
		struct FGLocalPlayer_eventCreateOfflineSession_SetupServer_Parms
		{
			bool startOffline;
		};
		static void NewProp_startOffline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_startOffline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::NewProp_startOffline_SetBit(void* Obj)
	{
		((FGLocalPlayer_eventCreateOfflineSession_SetupServer_Parms*)Obj)->startOffline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::NewProp_startOffline = { "startOffline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLocalPlayer_eventCreateOfflineSession_SetupServer_Parms), &Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::NewProp_startOffline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::NewProp_startOffline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Create a offline session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "CreateOfflineSession_SetupServer", sizeof(FGLocalPlayer_eventCreateOfflineSession_SetupServer_Parms), Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics
	{
		struct FGLocalPlayer_eventGetCurrentCreateSessionState_Parms
		{
			ECreateSessionState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocalPlayer_eventGetCurrentCreateSessionState_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ECreateSessionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Session" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Pulls the current state of creating a session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "GetCurrentCreateSessionState", sizeof(FGLocalPlayer_eventGetCurrentCreateSessionState_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics
	{
		struct FGLocalPlayer_eventGetFriendList_Parms
		{
			TArray<FFGOnlineFriend> out_friends;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_friends;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_friends_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGLocalPlayer_eventGetFriendList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLocalPlayer_eventGetFriendList_Parms), &Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_out_friends = { "out_friends", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocalPlayer_eventGetFriendList_Parms, out_friends), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_out_friends_Inner = { "out_friends", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFGOnlineFriend, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_out_friends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_out_friends_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Get the list of friends of the current user\n@param out_friends - the list of the friends if this returns true\n@return true if we have access to the list of friends, if false, then the list will be empty, then wait for mOnFriendListQueried to trigger and it will be populated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "GetFriendList", sizeof(FGLocalPlayer_eventGetFriendList_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetFriendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics
	{
		struct FGLocalPlayer_eventGetLoginState_Parms
		{
			TEnumAsByte<ELoginState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocalPlayer_eventGetLoginState_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ELoginState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Get in what state our login is" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "GetLoginState", sizeof(FGLocalPlayer_eventGetLoginState_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetLoginState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics
	{
		struct FGLocalPlayer_eventGetLoginStateEpic_Parms
		{
			TEnumAsByte<ELoginState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocalPlayer_eventGetLoginStateEpic_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ELoginState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Get in what state our epic login is" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "GetLoginStateEpic", sizeof(FGLocalPlayer_eventGetLoginStateEpic_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics
	{
		struct FGLocalPlayer_eventGetLoginStateSteam_Parms
		{
			TEnumAsByte<ELoginState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocalPlayer_eventGetLoginStateSteam_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ELoginState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Get in what state our Steam login is" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "GetLoginStateSteam", sizeof(FGLocalPlayer_eventGetLoginStateSteam_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics
	{
		struct FGLocalPlayer_eventGetUsername_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocalPlayer_eventGetUsername_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Get the username of the current user (from the first logged in platform)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "GetUsername", sizeof(FGLocalPlayer_eventGetUsername_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetUsername()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics
	{
		struct FGLocalPlayer_eventGetUsernameEpic_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocalPlayer_eventGetUsernameEpic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Get the username of the current user for the specified platform (empty string if not logged in)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "GetUsernameEpic", sizeof(FGLocalPlayer_eventGetUsernameEpic_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics
	{
		struct FGLocalPlayer_eventGetUsernameSteam_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocalPlayer_eventGetUsernameSteam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Get the username of the current user for the specified platform (empty string if not logged in)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "GetUsernameSteam", sizeof(FGLocalPlayer_eventGetUsernameSteam_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_LoginEpicAccountPortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_LoginEpicAccountPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_LoginEpicAccountPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "LoginEpicAccountPortal", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_LoginEpicAccountPortal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_LoginEpicAccountPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_LoginEpicAccountPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_LoginEpicAccountPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_LogoutEpicAccountPortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_LogoutEpicAccountPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_LogoutEpicAccountPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "LogoutEpicAccountPortal", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_LogoutEpicAccountPortal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_LogoutEpicAccountPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_LogoutEpicAccountPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_LogoutEpicAccountPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics
	{
		struct FGLocalPlayer_eventOnLoginFailed_OpenMap_Parms
		{
			bool confirmClicked;
		};
		static void NewProp_confirmClicked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_confirmClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::NewProp_confirmClicked_SetBit(void* Obj)
	{
		((FGLocalPlayer_eventOnLoginFailed_OpenMap_Parms*)Obj)->confirmClicked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::NewProp_confirmClicked = { "confirmClicked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLocalPlayer_eventOnLoginFailed_OpenMap_Parms), &Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::NewProp_confirmClicked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::NewProp_confirmClicked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "OnLoginFailed_OpenMap", sizeof(FGLocalPlayer_eventOnLoginFailed_OpenMap_Parms), Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics
	{
		struct FGLocalPlayer_eventOnPresenceFailedToUpdate_OpenMap_Parms
		{
			bool confirmClicked;
		};
		static void NewProp_confirmClicked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_confirmClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::NewProp_confirmClicked_SetBit(void* Obj)
	{
		((FGLocalPlayer_eventOnPresenceFailedToUpdate_OpenMap_Parms*)Obj)->confirmClicked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::NewProp_confirmClicked = { "confirmClicked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLocalPlayer_eventOnPresenceFailedToUpdate_OpenMap_Parms), &Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::NewProp_confirmClicked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::NewProp_confirmClicked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "OnPresenceFailedToUpdate_OpenMap", sizeof(FGLocalPlayer_eventOnPresenceFailedToUpdate_OpenMap_Parms), Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForPresence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called on end of SetupServer-chain, waiting for presence to be properly updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "OpenMap_WaitForPresence", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForPresence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForProductUserId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForProductUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called on end of SetupServer-chain, waiting for presence to be properly updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForProductUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "OpenMap_WaitForProductUserId", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForProductUserId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForProductUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForProductUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForProductUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics
	{
		struct FGLocalPlayer_eventSetNextUpdatePresenceTime_Parms
		{
			float timeTillNextUpdate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeTillNextUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::NewProp_timeTillNextUpdate = { "timeTillNextUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocalPlayer_eventSetNextUpdatePresenceTime_Parms, timeTillNextUpdate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::NewProp_timeTillNextUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called regularly to update the users presence, can also be called to force update presence and delays the next presence update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "SetNextUpdatePresenceTime", sizeof(FGLocalPlayer_eventSetNextUpdatePresenceTime_Parms), Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called regularly to update the users presence, can also be called to force update presence and delays the next presence update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, nullptr, "UpdatePresence", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGLocalPlayer_NoRegister()
	{
		return UFGLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UFGLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnInviteReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnInviteReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnFriendsPresenceUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnFriendsPresenceUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnCreateSessionStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnCreateSessionStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnFriendsListUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnFriendsListUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnLoginStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnLoginStateChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGLocalPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGLocalPlayer_AutoLogin, "AutoLogin" }, // 3296627244
		{ &Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer, "CreateOfflineSession_SetupServer" }, // 1405817842
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetCurrentCreateSessionState, "GetCurrentCreateSessionState" }, // 1559905831
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetFriendList, "GetFriendList" }, // 2369849139
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetLoginState, "GetLoginState" }, // 2308886935
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateEpic, "GetLoginStateEpic" }, // 3857194901
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetLoginStateSteam, "GetLoginStateSteam" }, // 1415041442
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetUsername, "GetUsername" }, // 530048759
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetUsernameEpic, "GetUsernameEpic" }, // 3621555184
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetUsernameSteam, "GetUsernameSteam" }, // 1606879277
		{ &Z_Construct_UFunction_UFGLocalPlayer_LoginEpicAccountPortal, "LoginEpicAccountPortal" }, // 3505397761
		{ &Z_Construct_UFunction_UFGLocalPlayer_LogoutEpicAccountPortal, "LogoutEpicAccountPortal" }, // 3492992341
		{ &Z_Construct_UFunction_UFGLocalPlayer_OnLoginFailed_OpenMap, "OnLoginFailed_OpenMap" }, // 3154866856
		{ &Z_Construct_UFunction_UFGLocalPlayer_OnPresenceFailedToUpdate_OpenMap, "OnPresenceFailedToUpdate_OpenMap" }, // 7998150
		{ &Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForPresence, "OpenMap_WaitForPresence" }, // 3221449271
		{ &Z_Construct_UFunction_UFGLocalPlayer_OpenMap_WaitForProductUserId, "OpenMap_WaitForProductUserId" }, // 1052588647
		{ &Z_Construct_UFunction_UFGLocalPlayer_SetNextUpdatePresenceTime, "SetNextUpdatePresenceTime" }, // 3991038038
		{ &Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence, "UpdatePresence" }, // 2479033202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "@OSS: Responsibility:\n- Login to OSS\nEpicGameLauncher passes a access token, artifact started and a few other parameters required to be able to login. AutoLogin checks if these a valid and\nlogs in to EGS automatically when main menu starts. Note that this isn't blocking. So the user might try to start a game before he has managed\nto properly login.\n- UserInterface\nThis is fetching information from the backend about a online user\n- Presence\nUpdating our presence based on what we are doing. A timer is called regurlarly, where we can update our current \"PresenceString\" (See UFGLocalPlayer::UpdatePresence)\n@todo: We should most likely update this in the chain where we are trying to setup a game\n- Copy host presence to clients\nWhenever a client receives a presence update, it will check if it's the host of the current game, if yes, then it will copy information about that\ngame to it's own presence\n- Friends\n- MapTravel and Sessions:\n(SetupServerAndTravelToMap) Tears down current session and ensures that we are in a good state for map travel. Also ensures that we are properly logged in and that all data is\nproperly propagated to the backend servers.\n@IMPORTANT that loading games should always be done through AFGAdminInterface::LoadGame, as that handles travel on dedicated servers." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived_MetaData[] = {
		{ "Category", "FactoryGame|Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called a friends presence is updated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived = { "mOnInviteReceived", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocalPlayer, mOnInviteReceived), Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated_MetaData[] = {
		{ "Category", "FactoryGame|Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called a friends presence is updated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated = { "mOnFriendsPresenceUpdated", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocalPlayer, mOnFriendsPresenceUpdated), Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnCreateSessionStateChanged_MetaData[] = {
		{ "Category", "FactoryGame|Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called when the session state has changed when creating a online game" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnCreateSessionStateChanged = { "mOnCreateSessionStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocalPlayer, mOnCreateSessionStateChanged), Z_Construct_UDelegateFunction_FactoryGame_OnCreateSessionStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnCreateSessionStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnCreateSessionStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated_MetaData[] = {
		{ "Category", "FactoryGame|Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called when the friendslist has been updated (that is, a user is has added/removed you as a friend)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated = { "mOnFriendsListUpdated", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocalPlayer, mOnFriendsListUpdated), Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged_MetaData[] = {
		{ "Category", "FactoryGame|Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged = { "mOnLoginStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocalPlayer, mOnLoginStateChanged), Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnCreateSessionStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGLocalPlayer_Statics::ClassParams = {
		&UFGLocalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGLocalPlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGLocalPlayer, 3231885574);
	template<> FACTORYGAME_API UClass* StaticClass<UFGLocalPlayer>()
	{
		return UFGLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGLocalPlayer(Z_Construct_UClass_UFGLocalPlayer, &UFGLocalPlayer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
