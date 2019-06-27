// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UFGSaveSession;
struct FSessionSaveStruct;
struct FSaveHeader;
struct FDateTime;
#ifdef FACTORYGAME_FGSaveSession_generated_h
#error "FGSaveSession.generated.h already included, missing '#pragma once' in FGSaveSession.h"
#endif
#define FACTORYGAME_FGSaveSession_generated_h

#define FactoryGame_Source_FactoryGame_FGSaveSession_h_12_DELEGATE \
struct _Script_FactoryGame_eventSaveWorldImplementationSignature_Parms \
{ \
	bool wasSuccessful; \
	FText errorMessage; \
}; \
static inline void FSaveWorldImplementationSignature_DelegateWrapper(const FMulticastScriptDelegate& SaveWorldImplementationSignature, bool wasSuccessful, const FText& errorMessage) \
{ \
	_Script_FactoryGame_eventSaveWorldImplementationSignature_Parms Parms; \
	Parms.wasSuccessful=wasSuccessful ? true : false; \
	Parms.errorMessage=errorMessage; \
	SaveWorldImplementationSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGSaveSession_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorDestroyed(Z_Param_destroyedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutosave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Autosave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadGame(Z_Param_saveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveGame(Z_Param_fileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGSaveSession**)Z_Param__Result=UFGSaveSession::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveSessionName) \
	{ \
		P_GET_STRUCT_REF(FSessionSaveStruct,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetSaveSessionName(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveSessionID) \
	{ \
		P_GET_STRUCT_REF(FSessionSaveStruct,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetSaveSessionID(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveSessionVisibility) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESessionVisibility>*)Z_Param__Result=UFGSaveSession::GetSaveSessionVisibility(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDateTime) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UFGSaveSession::GetSaveDateTime(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayDurationSeconds) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSaveSession::GetPlayDurationSeconds(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionName) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetSessionName(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionID) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetSessionID(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetName(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapOptions) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetMapOptions(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapName) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetMapName(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildVersion) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSaveSession::GetBuildVersion(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersion) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSaveSession::GetVersion(Z_Param_Out_header); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGSaveSession_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_destroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorDestroyed(Z_Param_destroyedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutosave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Autosave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadGame(Z_Param_saveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveGame(Z_Param_fileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGSaveSession**)Z_Param__Result=UFGSaveSession::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveSessionName) \
	{ \
		P_GET_STRUCT_REF(FSessionSaveStruct,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetSaveSessionName(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveSessionID) \
	{ \
		P_GET_STRUCT_REF(FSessionSaveStruct,Z_Param_Out_session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetSaveSessionID(Z_Param_Out_session); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveSessionVisibility) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESessionVisibility>*)Z_Param__Result=UFGSaveSession::GetSaveSessionVisibility(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDateTime) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UFGSaveSession::GetSaveDateTime(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayDurationSeconds) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSaveSession::GetPlayDurationSeconds(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionName) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetSessionName(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionID) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetSessionID(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetName(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapOptions) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetMapOptions(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapName) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGSaveSession::GetMapName(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildVersion) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSaveSession::GetBuildVersion(Z_Param_Out_header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersion) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSaveSession::GetVersion(Z_Param_Out_header); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGSaveSession_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSaveSession(); \
	friend struct Z_Construct_UClass_UFGSaveSession_Statics; \
public: \
	DECLARE_CLASS(UFGSaveSession, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSaveSession) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_FGSaveSession_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFGSaveSession(); \
	friend struct Z_Construct_UClass_UFGSaveSession_Statics; \
public: \
	DECLARE_CLASS(UFGSaveSession, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSaveSession) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_FGSaveSession_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSaveSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSaveSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSaveSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSaveSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSaveSession(UFGSaveSession&&); \
	NO_API UFGSaveSession(const UFGSaveSession&); \
public:


#define FactoryGame_Source_FactoryGame_FGSaveSession_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSaveSession(UFGSaveSession&&); \
	NO_API UFGSaveSession(const UFGSaveSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSaveSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSaveSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGSaveSession)


#define FactoryGame_Source_FactoryGame_FGSaveSession_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAutosaveInterval() { return STRUCT_OFFSET(UFGSaveSession, mAutosaveInterval); } \
	FORCEINLINE static uint32 __PPO__mNumRotatingAutosaves() { return STRUCT_OFFSET(UFGSaveSession, mNumRotatingAutosaves); }


#define FactoryGame_Source_FactoryGame_FGSaveSession_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_FGSaveSession_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSaveSession_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSaveSession_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGSaveSession_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_FGSaveSession_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGSaveSession_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSaveSession_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSaveSession_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSaveSession_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSaveSession_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGSaveSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
