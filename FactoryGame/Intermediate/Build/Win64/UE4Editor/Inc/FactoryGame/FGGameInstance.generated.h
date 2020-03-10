// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECachedNATType : uint8;
enum class EJoinSessionState : uint8;
struct FFGGameNetworkErrorMsg;
class UObject;
class UFGErrorMessage;
#ifdef FACTORYGAME_FGGameInstance_generated_h
#error "FGGameInstance.generated.h already included, missing '#pragma once' in FGGameInstance.h"
#endif
#define FACTORYGAME_FGGameInstance_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FFGGameNetworkErrorMsg>();

#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFGModPackage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FFGModPackage>();

#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnJoinSessionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FOnJoinSessionData>();

#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_146_DELEGATE \
struct _Script_FactoryGame_eventOnNatTypeUpdated_Parms \
{ \
	ECachedNATType natType; \
}; \
static inline void FOnNatTypeUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnNatTypeUpdated, ECachedNATType natType) \
{ \
	_Script_FactoryGame_eventOnNatTypeUpdated_Parms Parms; \
	Parms.natType=natType; \
	OnNatTypeUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_143_DELEGATE \
struct _Script_FactoryGame_eventOnNetworkErrorRecieved_Parms \
{ \
	TEnumAsByte<ENetworkFailure::Type> errorType; \
	FString errorMsg; \
}; \
static inline void FOnNetworkErrorRecieved_DelegateWrapper(const FMulticastScriptDelegate& OnNetworkErrorRecieved, ENetworkFailure::Type errorType, const FString& errorMsg) \
{ \
	_Script_FactoryGame_eventOnNetworkErrorRecieved_Parms Parms; \
	Parms.errorType=errorType; \
	Parms.errorMsg=errorMsg; \
	OnNetworkErrorRecieved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_140_DELEGATE \
static inline void FOnNewError_DelegateWrapper(const FMulticastScriptDelegate& OnNewError) \
{ \
	OnNewError.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_42_DELEGATE \
struct _Script_FactoryGame_eventOnJoinSessionStateChanged_Parms \
{ \
	EJoinSessionState newState; \
}; \
static inline void FOnJoinSessionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnJoinSessionStateChanged, EJoinSessionState newState) \
{ \
	_Script_FactoryGame_eventOnJoinSessionStateChanged_Parms Parms; \
	Parms.newState=newState; \
	OnJoinSessionStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPollHostProductUserId_JoinSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PollHostProductUserId_JoinSession(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentJoinSessionState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EJoinSessionState*)Z_Param__Result=P_THIS->GetCurrentJoinSessionState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopLatestNetworkError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PopLatestNetworkError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLatestNetworkError) \
	{ \
		P_GET_STRUCT_REF(FFGGameNetworkErrorMsg,Z_Param_Out_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLatestNetworkError(Z_Param_Out_msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkipOnboarding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetSkipOnboarding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkipOnboarding) \
	{ \
		P_GET_UBOOL(Z_Param_doSkip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSkipOnboarding(Z_Param_doSkip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFGUGC) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_WeaponClass); \
		P_GET_OBJECT(UClass,Z_Param_EnemyClass); \
		P_GET_OBJECT(UClass,Z_Param_BossClass); \
		P_GET_OBJECT(UClass,Z_Param_PlayerPawnClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFGUGC(Z_Param_WeaponClass,Z_Param_EnemyClass,Z_Param_BossClass,Z_Param_PlayerPawnClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindModPackages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FindModPackages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPlayerSeenAlphaInfoScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPlayerSeenAlphaInfoScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasSeenAlphaInfoScreen) \
	{ \
		P_GET_UBOOL(Z_Param_hasSeen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasSeenAlphaInfoScreen(Z_Param_hasSeen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPeekNextError) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGErrorMessage**)Z_Param__Result=UFGGameInstance::PeekNextError(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextError) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGErrorMessage**)Z_Param__Result=UFGGameInstance::GetNextError(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushError) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_errorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGGameInstance::PushError(Z_Param_worldContext,Z_Param_errorMessage); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPollHostProductUserId_JoinSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PollHostProductUserId_JoinSession(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentJoinSessionState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EJoinSessionState*)Z_Param__Result=P_THIS->GetCurrentJoinSessionState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopLatestNetworkError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PopLatestNetworkError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLatestNetworkError) \
	{ \
		P_GET_STRUCT_REF(FFGGameNetworkErrorMsg,Z_Param_Out_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLatestNetworkError(Z_Param_Out_msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkipOnboarding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetSkipOnboarding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkipOnboarding) \
	{ \
		P_GET_UBOOL(Z_Param_doSkip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSkipOnboarding(Z_Param_doSkip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFGUGC) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_WeaponClass); \
		P_GET_OBJECT(UClass,Z_Param_EnemyClass); \
		P_GET_OBJECT(UClass,Z_Param_BossClass); \
		P_GET_OBJECT(UClass,Z_Param_PlayerPawnClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFGUGC(Z_Param_WeaponClass,Z_Param_EnemyClass,Z_Param_BossClass,Z_Param_PlayerPawnClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindModPackages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FindModPackages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPlayerSeenAlphaInfoScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPlayerSeenAlphaInfoScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasSeenAlphaInfoScreen) \
	{ \
		P_GET_UBOOL(Z_Param_hasSeen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasSeenAlphaInfoScreen(Z_Param_hasSeen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPeekNextError) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGErrorMessage**)Z_Param__Result=UFGGameInstance::PeekNextError(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextError) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGErrorMessage**)Z_Param__Result=UFGGameInstance::GetNextError(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushError) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_errorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGGameInstance::PushError(Z_Param_worldContext,Z_Param_errorMessage); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGGameInstance(); \
	friend struct Z_Construct_UClass_UFGGameInstance_Statics; \
public: \
	DECLARE_CLASS(UFGGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameInstance)


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_INCLASS \
private: \
	static void StaticRegisterNativesUFGGameInstance(); \
	friend struct Z_Construct_UClass_UFGGameInstance_Statics; \
public: \
	DECLARE_CLASS(UFGGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameInstance)


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameInstance(UFGGameInstance&&); \
	NO_API UFGGameInstance(const UFGGameInstance&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameInstance(UFGGameInstance&&); \
	NO_API UFGGameInstance(const UFGGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGGameInstance)


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSaveSystem() { return STRUCT_OFFSET(UFGGameInstance, mSaveSystem); } \
	FORCEINLINE static uint32 __PPO__mErrorList() { return STRUCT_OFFSET(UFGGameInstance, mErrorList); } \
	FORCEINLINE static uint32 __PPO__mJoinSessionData() { return STRUCT_OFFSET(UFGGameInstance, mJoinSessionData); } \
	FORCEINLINE static uint32 __PPO__mOnJoinSessionStateUpdated() { return STRUCT_OFFSET(UFGGameInstance, mOnJoinSessionStateUpdated); }


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_155_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGameInstance_h_158_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGGameInstance_h


#define FOREACH_ENUM_EJOINSESSIONSTATE(op) \
	op(EJoinSessionState::JSS_NotJoiningSession) \
	op(EJoinSessionState::JSS_WaitingForLoginToComplete) \
	op(EJoinSessionState::JSS_QueryingHostsId) \
	op(EJoinSessionState::JSS_DestroyingOldSession) \
	op(EJoinSessionState::JSS_ConnectingToHost) 

enum class EJoinSessionState : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EJoinSessionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
