// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGRemoteCallObject;
class APlayerState;
#ifdef FACTORYGAME_FGGameMode_generated_h
#error "FGGameMode.generated.h already included, missing '#pragma once' in FGGameMode.h"
#endif
#define FACTORYGAME_FGGameMode_generated_h

#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerBundledWorldSave) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveGameName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerBundledWorldSave(Z_Param_saveGameName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerWorldSave) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveGameName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerWorldSave(Z_Param_saveGameName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterRemoteCallObjectClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegisterRemoteCallObjectClass(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMainMenuGameMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMainMenuGameMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickPlayer) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_ps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KickPlayer(Z_Param_ps); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerBundledWorldSave) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveGameName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerBundledWorldSave(Z_Param_saveGameName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerWorldSave) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveGameName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerWorldSave(Z_Param_saveGameName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterRemoteCallObjectClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegisterRemoteCallObjectClass(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMainMenuGameMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMainMenuGameMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickPlayer) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_ps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KickPlayer(Z_Param_ps); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGGameMode, FACTORYGAME_API)


#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGGameMode(); \
	friend struct Z_Construct_UClass_AFGGameMode_Statics; \
public: \
	DECLARE_CLASS(AFGGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), FACTORYGAME_API) \
	DECLARE_SERIALIZER(AFGGameMode) \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGGameMode*>(this); }


#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFGGameMode(); \
	friend struct Z_Construct_UClass_AFGGameMode_Statics; \
public: \
	DECLARE_CLASS(AFGGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), FACTORYGAME_API) \
	DECLARE_SERIALIZER(AFGGameMode) \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGGameMode*>(this); }


#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FACTORYGAME_API AFGGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FACTORYGAME_API, AFGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FACTORYGAME_API AFGGameMode(AFGGameMode&&); \
	FACTORYGAME_API AFGGameMode(const AFGGameMode&); \
public:


#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FACTORYGAME_API AFGGameMode(AFGGameMode&&); \
	FACTORYGAME_API AFGGameMode(const AFGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FACTORYGAME_API, AFGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGGameMode)


#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSaveSession() { return STRUCT_OFFSET(AFGGameMode, mSaveSession); } \
	FORCEINLINE static uint32 __PPO__mLastAutosaveId() { return STRUCT_OFFSET(AFGGameMode, mLastAutosaveId); } \
	FORCEINLINE static uint32 __PPO__mSessionId_DEPRECATED() { return STRUCT_OFFSET(AFGGameMode, mSessionId_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__mSessionIDString_DEPRECATED() { return STRUCT_OFFSET(AFGGameMode, mSessionIDString_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__mSaveSessionName() { return STRUCT_OFFSET(AFGGameMode, mSaveSessionName); } \
	FORCEINLINE static uint32 __PPO__mStartingPointTagName() { return STRUCT_OFFSET(AFGGameMode, mStartingPointTagName); } \
	FORCEINLINE static uint32 __PPO__mDebugStartingPointTagName() { return STRUCT_OFFSET(AFGGameMode, mDebugStartingPointTagName); } \
	FORCEINLINE static uint32 __PPO__mIsMainMenu() { return STRUCT_OFFSET(AFGGameMode, mIsMainMenu); } \
	FORCEINLINE static uint32 __PPO__mDefaultRemoteCallObjectsClassNames() { return STRUCT_OFFSET(AFGGameMode, mDefaultRemoteCallObjectsClassNames); }


#define FactoryGame_Source_FactoryGame_FGGameMode_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGGameMode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
