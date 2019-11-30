// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UFGMusicManager;
class UWorld;
class AWorldSettings;
class UFGMapArea;
#ifdef FACTORYGAME_FGMusicManager_generated_h
#error "FGMusicManager.generated.h already included, missing '#pragma once' in FGMusicManager.h"
#endif
#define FACTORYGAME_FGMusicManager_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGMusicManager**)Z_Param__Result=UFGMusicManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGMusicManager**)Z_Param__Result=UFGMusicManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_EVENT_PARMS \
	struct FGMusicManager_eventNotifyPostLoadMap_Parms \
	{ \
		UWorld* loadedWorld; \
		AWorldSettings* worldSettings; \
	}; \
	struct FGMusicManager_eventOnPlayerEnteredArea_Parms \
	{ \
		TSubclassOf<UFGMapArea>  mapArea; \
	}; \
	struct FGMusicManager_eventOnPlayerNearBaseChanged_Parms \
	{ \
		bool isNear; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMusicManager(); \
	friend struct Z_Construct_UClass_UFGMusicManager_Statics; \
public: \
	DECLARE_CLASS(UFGMusicManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMusicManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUFGMusicManager(); \
	friend struct Z_Construct_UClass_UFGMusicManager_Statics; \
public: \
	DECLARE_CLASS(UFGMusicManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMusicManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMusicManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMusicManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMusicManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMusicManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMusicManager(UFGMusicManager&&); \
	NO_API UFGMusicManager(const UFGMusicManager&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMusicManager(UFGMusicManager&&); \
	NO_API UFGMusicManager(const UFGMusicManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMusicManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMusicManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGMusicManager)


#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mUpdateInterval() { return STRUCT_OFFSET(UFGMusicManager, mUpdateInterval); } \
	FORCEINLINE static uint32 __PPO__mFactoryCloseDistance() { return STRUCT_OFFSET(UFGMusicManager, mFactoryCloseDistance); } \
	FORCEINLINE static uint32 __PPO__mMusicManagerClassName() { return STRUCT_OFFSET(UFGMusicManager, mMusicManagerClassName); }


#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_9_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMusicManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGMusicManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGMusicManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
