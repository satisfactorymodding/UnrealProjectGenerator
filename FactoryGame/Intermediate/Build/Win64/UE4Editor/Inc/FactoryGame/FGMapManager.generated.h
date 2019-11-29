// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGActorRepresentation;
class UTexture2D;
class UObject;
class AFGMapManager;
#ifdef FACTORYGAME_FGMapManager_generated_h
#error "FGMapManager.generated.h already included, missing '#pragma once' in FGMapManager.h"
#endif
#define FACTORYGAME_FGMapManager_generated_h

#define FactoryGame_Source_FactoryGame_FGMapManager_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FFogOfWarQueuePair>();

#define FactoryGame_Source_FactoryGame_FGMapManager_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorRepresentationRemoved) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationRemoved(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorRepresentationUpdated) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationUpdated(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorRepresentationAdded) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationAdded(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetFogOfWarTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGMapManager**)Z_Param__Result=AFGMapManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGMapManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorRepresentationRemoved) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationRemoved(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorRepresentationUpdated) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationUpdated(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorRepresentationAdded) \
	{ \
		P_GET_OBJECT(UFGActorRepresentation,Z_Param_actorRepresentation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorRepresentationAdded(Z_Param_actorRepresentation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetFogOfWarTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGMapManager**)Z_Param__Result=AFGMapManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGMapManager_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGMapManager(); \
	friend struct Z_Construct_UClass_AFGMapManager_Statics; \
public: \
	DECLARE_CLASS(AFGMapManager, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGMapManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGMapManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGMapManager_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAFGMapManager(); \
	friend struct Z_Construct_UClass_AFGMapManager_Statics; \
public: \
	DECLARE_CLASS(AFGMapManager, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGMapManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGMapManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGMapManager_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGMapManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGMapManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGMapManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGMapManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGMapManager(AFGMapManager&&); \
	NO_API AFGMapManager(const AFGMapManager&); \
public:


#define FactoryGame_Source_FactoryGame_FGMapManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGMapManager(AFGMapManager&&); \
	NO_API AFGMapManager(const AFGMapManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGMapManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGMapManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGMapManager)


#define FactoryGame_Source_FactoryGame_FGMapManager_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFogOfWarRawData() { return STRUCT_OFFSET(AFGMapManager, mFogOfWarRawData); } \
	FORCEINLINE static uint32 __PPO__mFogOfWarTexture() { return STRUCT_OFFSET(AFGMapManager, mFogOfWarTexture); } \
	FORCEINLINE static uint32 __PPO__mCachedMinimapCaptureActor() { return STRUCT_OFFSET(AFGMapManager, mCachedMinimapCaptureActor); } \
	FORCEINLINE static uint32 __PPO__mFogOfWarTransferQueue() { return STRUCT_OFFSET(AFGMapManager, mFogOfWarTransferQueue); } \
	FORCEINLINE static uint32 __PPO__mActorRepresentationManager() { return STRUCT_OFFSET(AFGMapManager, mActorRepresentationManager); } \
	FORCEINLINE static uint32 __PPO__mDynamicFogOfWarRevealActors() { return STRUCT_OFFSET(AFGMapManager, mDynamicFogOfWarRevealActors); }


#define FactoryGame_Source_FactoryGame_FGMapManager_h_37_PROLOG
#define FactoryGame_Source_FactoryGame_FGMapManager_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGMapManager_h_40_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGMapManager_h_40_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGMapManager_h_40_INCLASS \
	FactoryGame_Source_FactoryGame_FGMapManager_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGMapManager_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGMapManager_h_40_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGMapManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGMapManager_h_40_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGMapManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGMapManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGMapManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
