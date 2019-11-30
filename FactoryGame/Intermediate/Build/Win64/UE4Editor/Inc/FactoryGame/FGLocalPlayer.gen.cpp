// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetFriendList();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetLoginState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetUsername();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocalPlayer_OpenMap_SetupServer();
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::NewProp_newState = { UE4CodeGen_Private::EPropertyClass::Byte, "newState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnLoginStateChanged_Parms, newState), Z_Construct_UEnum_FactoryGame_ELoginState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::NewProp_oldState = { UE4CodeGen_Private::EPropertyClass::Byte, "oldState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnLoginStateChanged_Parms, oldState), Z_Construct_UEnum_FactoryGame_ELoginState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::NewProp_oldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnLoginStateChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnLoginStateChanged_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::NewProp_receivedInvite = { UE4CodeGen_Private::EPropertyClass::Struct, "receivedInvite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnGameInviteReceived_Parms, receivedInvite), Z_Construct_UScriptStruct_FPendingInvite, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::NewProp_receivedInvite_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::NewProp_receivedInvite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::NewProp_receivedInvite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnGameInviteReceived__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnGameInviteReceived_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::NewProp_updatedId = { UE4CodeGen_Private::EPropertyClass::Struct, "updatedId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnFriendPresenceUpdated_Parms, updatedId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::NewProp_updatedId_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::NewProp_updatedId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::NewProp_updatedId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnFriendPresenceUpdated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnFriendPresenceUpdated_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::NewProp_updatedFriends = { UE4CodeGen_Private::EPropertyClass::Struct, "updatedFriends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnFriendsListUpdated_Parms, updatedFriends), Z_Construct_UScriptStruct_FUpdatedFriends, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::NewProp_updatedFriends,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFriendsListUpdated);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnFriendsListUpdated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnFriendsListUpdated_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnFriendsListQueried__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListQueried__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoginState(ELoginState_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ELoginState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ELoginState_CRC() { return 1507553798U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ELoginState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoginState"), 0, Get_Z_Construct_UEnum_FactoryGame_ELoginState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LS_NotLoggedIn", (int64)LS_NotLoggedIn },
				{ "LS_LoggingIn", (int64)LS_LoggingIn },
				{ "LS_LoggedIn", (int64)LS_LoggedIn },
				{ "LS_FailedToLogin", (int64)LS_FailedToLogin },
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
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELoginState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELoginState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FUpdatedFriends_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdatedFriends, Z_Construct_UPackage__Script_FactoryGame(), TEXT("UpdatedFriends"), sizeof(FUpdatedFriends), Get_Z_Construct_UScriptStruct_FUpdatedFriends_CRC());
	}
	return Singleton;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends = { UE4CodeGen_Private::EPropertyClass::Array, "Friends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FUpdatedFriends, Friends), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Friends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFGOnlineFriend, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdatedFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdatedFriends_Statics::NewProp_Friends_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdatedFriends_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"UpdatedFriends",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FUpdatedFriends),
		alignof(FUpdatedFriends),
		Z_Construct_UScriptStruct_FUpdatedFriends_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdatedFriends_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdatedFriends()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpdatedFriends_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpdatedFriends"), sizeof(FUpdatedFriends), Get_Z_Construct_UScriptStruct_FUpdatedFriends_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpdatedFriends_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpdatedFriends_CRC() { return 2131781945U; }
class UScriptStruct* FFGOnlineFriend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFGOnlineFriend_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGOnlineFriend, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FGOnlineFriend"), sizeof(FFGOnlineFriend), Get_Z_Construct_UScriptStruct_FFGOnlineFriend_CRC());
	}
	return Singleton;
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
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FFGOnlineFriend),
		alignof(FFGOnlineFriend),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineFriend_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineFriend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGOnlineFriend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGOnlineFriend_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGOnlineFriend"), sizeof(FFGOnlineFriend), Get_Z_Construct_UScriptStruct_FFGOnlineFriend_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGOnlineFriend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGOnlineFriend_CRC() { return 1338769123U; }
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
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGEM_LoggedOutFromOnlineService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGEM_LoggedOutFromOnlineService_Statics::ClassParams = {
		&UFGEM_LoggedOutFromOnlineService::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGEM_LoggedOutFromOnlineService, 467623015);
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGEM_LostConnectionWithOnlineService, 3667092005);
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGEM_FailedToLoginToOnlineService, 2238435770);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGEM_FailedToLoginToOnlineService(Z_Construct_UClass_UFGEM_FailedToLoginToOnlineService, &UFGEM_FailedToLoginToOnlineService::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGEM_FailedToLoginToOnlineService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGEM_FailedToLoginToOnlineService);
	void UFGLocalPlayer::StaticRegisterNativesUFGLocalPlayer()
	{
		UClass* Class = UFGLocalPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoLogin", &UFGLocalPlayer::execAutoLogin },
			{ "CreateOfflineSession_SetupServer", &UFGLocalPlayer::execCreateOfflineSession_SetupServer },
			{ "GetFriendList", &UFGLocalPlayer::execGetFriendList },
			{ "GetLoginState", &UFGLocalPlayer::execGetLoginState },
			{ "GetUsername", &UFGLocalPlayer::execGetUsername },
			{ "OpenMap_SetupServer", &UFGLocalPlayer::execOpenMap_SetupServer },
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_AutoLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, "AutoLogin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_AutoLogin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_AutoLogin_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::NewProp_startOffline = { UE4CodeGen_Private::EPropertyClass::Bool, "startOffline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocalPlayer_eventCreateOfflineSession_SetupServer_Parms), &Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::NewProp_startOffline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::NewProp_startOffline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Create a offline session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, "CreateOfflineSession_SetupServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGLocalPlayer_eventCreateOfflineSession_SetupServer_Parms), Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocalPlayer_eventGetFriendList_Parms), &Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_out_friends = { UE4CodeGen_Private::EPropertyClass::Array, "out_friends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGLocalPlayer_eventGetFriendList_Parms, out_friends), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::NewProp_out_friends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_friends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFGOnlineFriend, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, "GetFriendList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGLocalPlayer_eventGetFriendList_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetFriendList_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocalPlayer_eventGetLoginState_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ELoginState, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, "GetLoginState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocalPlayer_eventGetLoginState_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetLoginState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetLoginState_Statics::FuncParams);
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocalPlayer_eventGetUsername_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Get in what state our login is" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, "GetUsername", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocalPlayer_eventGetUsername_Parms), Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_GetUsername()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_GetUsername_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocalPlayer_OpenMap_SetupServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocalPlayer_OpenMap_SetupServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called on end of SetupServer-chain, opening the map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_OpenMap_SetupServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, "OpenMap_SetupServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_OpenMap_SetupServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_OpenMap_SetupServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocalPlayer_OpenMap_SetupServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocalPlayer_OpenMap_SetupServer_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocalPlayer, "UpdatePresence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UFGLocalPlayer_AutoLogin, "AutoLogin" }, // 3395614052
		{ &Z_Construct_UFunction_UFGLocalPlayer_CreateOfflineSession_SetupServer, "CreateOfflineSession_SetupServer" }, // 2637653291
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetFriendList, "GetFriendList" }, // 1155896409
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetLoginState, "GetLoginState" }, // 1302698910
		{ &Z_Construct_UFunction_UFGLocalPlayer_GetUsername, "GetUsername" }, // 3894796330
		{ &Z_Construct_UFunction_UFGLocalPlayer_OpenMap_SetupServer, "OpenMap_SetupServer" }, // 3274234299
		{ &Z_Construct_UFunction_UFGLocalPlayer_UpdatePresence, "UpdatePresence" }, // 3337781083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called a friends presence is updated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnInviteReceived", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UFGLocalPlayer, mOnInviteReceived), Z_Construct_UDelegateFunction_FactoryGame_OnGameInviteReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called a friends presence is updated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnFriendsPresenceUpdated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UFGLocalPlayer, mOnFriendsPresenceUpdated), Z_Construct_UDelegateFunction_FactoryGame_OnFriendPresenceUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
		{ "ToolTip", "Called when the friendslist has been updated (that is, a user is has added/removed you as a friend)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnFriendsListUpdated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UFGLocalPlayer, mOnFriendsListUpdated), Z_Construct_UDelegateFunction_FactoryGame_OnFriendsListUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/FGLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnLoginStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UFGLocalPlayer, mOnLoginStateChanged), Z_Construct_UDelegateFunction_FactoryGame_OnLoginStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnInviteReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsPresenceUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnFriendsListUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocalPlayer_Statics::NewProp_mOnLoginStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGLocalPlayer_Statics::ClassParams = {
		&UFGLocalPlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGLocalPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGLocalPlayer_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGLocalPlayer, 1727534191);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGLocalPlayer(Z_Construct_UClass_UFGLocalPlayer, &UFGLocalPlayer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
