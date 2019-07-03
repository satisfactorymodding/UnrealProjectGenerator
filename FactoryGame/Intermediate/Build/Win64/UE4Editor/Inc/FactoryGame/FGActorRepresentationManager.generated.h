// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGActorRepresentation;
class AActor;
struct FVector;
class UTexture2D;
struct FLinearColor;
enum class ERepresentationType : uint8;
class UObject;
class AFGActorRepresentationManager;
#ifdef FACTORYGAME_FGActorRepresentationManager_generated_h
#error "FGActorRepresentationManager.generated.h already included, missing '#pragma once' in FGActorRepresentationManager.h"
#endif
#define FACTORYGAME_FGActorRepresentationManager_generated_h

#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_18_DELEGATE \
struct _Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms \
{ \
	UFGActorRepresentation* updatedRepresentation; \
	bool newShouldShowOnMap; \
}; \
static inline void FOnActorRepresentationUpdatedMapShow_DelegateWrapper(const FMulticastScriptDelegate& OnActorRepresentationUpdatedMapShow, UFGActorRepresentation* updatedRepresentation, bool newShouldShowOnMap) \
{ \
	_Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms Parms; \
	Parms.updatedRepresentation=updatedRepresentation; \
	Parms.newShouldShowOnMap=newShouldShowOnMap ? true : false; \
	OnActorRepresentationUpdatedMapShow.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_17_DELEGATE \
struct _Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms \
{ \
	UFGActorRepresentation* updatedRepresentation; \
	bool newShouldShowInCompass; \
}; \
static inline void FOnActorRepresentationUpdatedCompassShow_DelegateWrapper(const FMulticastScriptDelegate& OnActorRepresentationUpdatedCompassShow, UFGActorRepresentation* updatedRepresentation, bool newShouldShowInCompass) \
{ \
	_Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms Parms; \
	Parms.updatedRepresentation=updatedRepresentation; \
	Parms.newShouldShowInCompass=newShouldShowInCompass ? true : false; \
	OnActorRepresentationUpdatedCompassShow.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_16_DELEGATE \
struct _Script_FactoryGame_eventOnActorRepresentationUpdated_Parms \
{ \
	UFGActorRepresentation* updatedRepresentation; \
}; \
static inline void FOnActorRepresentationUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnActorRepresentationUpdated, UFGActorRepresentation* updatedRepresentation) \
{ \
	_Script_FactoryGame_eventOnActorRepresentationUpdated_Parms Parms; \
	Parms.updatedRepresentation=updatedRepresentation; \
	OnActorRepresentationUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_15_DELEGATE \
struct _Script_FactoryGame_eventOnActorRepresentationRemoved_Parms \
{ \
	UFGActorRepresentation* removedRepresentation; \
}; \
static inline void FOnActorRepresentationRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnActorRepresentationRemoved, UFGActorRepresentation* removedRepresentation) \
{ \
	_Script_FactoryGame_eventOnActorRepresentationRemoved_Parms Parms; \
	Parms.removedRepresentation=removedRepresentation; \
	OnActorRepresentationRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_14_DELEGATE \
struct _Script_FactoryGame_eventOnActorRepresentationAdded_Parms \
{ \
	UFGActorRepresentation* newRepresentation; \
}; \
static inline void FOnActorRepresentationAdded_DelegateWrapper(const FMulticastScriptDelegate& OnActorRepresentationAdded, UFGActorRepresentation* newRepresentation) \
{ \
	_Script_FactoryGame_eventOnActorRepresentationAdded_Parms Parms; \
	Parms.newRepresentation=newRepresentation; \
	OnActorRepresentationAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedRepresentations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedRepresentations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorRepresentations) \
	{ \
		P_GET_TARRAY_REF(UFGActorRepresentation*,Z_Param_Out_out_AllRepresentations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllActorRepresentations(Z_Param_Out_out_AllRepresentations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveRepresentationOfActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_realActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveRepresentationOfActor(Z_Param_realActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndAddNewRepresentationNoActor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_GET_OBJECT(UTexture2D,Z_Param_compassTexture); \
		P_GET_STRUCT(FLinearColor,Z_Param_compassColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lifeTime); \
		P_GET_UBOOL(Z_Param_shouldShowInCompass); \
		P_GET_UBOOL(Z_Param_shouldShowOnMap); \
		P_GET_ENUM(ERepresentationType,Z_Param_representationType); \
		P_GET_UBOOL(Z_Param_isLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateAndAddNewRepresentationNoActor(Z_Param_location,Z_Param_compassTexture,Z_Param_compassColor,Z_Param_lifeTime,Z_Param_shouldShowInCompass,Z_Param_shouldShowOnMap,ERepresentationType(Z_Param_representationType),Z_Param_isLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRepresentation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_realActor); \
		P_GET_UBOOL(Z_Param_isLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateRepresentation(Z_Param_realActor,Z_Param_isLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndAddNewRepresentation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_realActor); \
		P_GET_UBOOL(Z_Param_isLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateAndAddNewRepresentation(Z_Param_realActor,Z_Param_isLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGActorRepresentationManager**)Z_Param__Result=AFGActorRepresentationManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedRepresentations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedRepresentations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorRepresentations) \
	{ \
		P_GET_TARRAY_REF(UFGActorRepresentation*,Z_Param_Out_out_AllRepresentations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllActorRepresentations(Z_Param_Out_out_AllRepresentations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveRepresentationOfActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_realActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveRepresentationOfActor(Z_Param_realActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndAddNewRepresentationNoActor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_GET_OBJECT(UTexture2D,Z_Param_compassTexture); \
		P_GET_STRUCT(FLinearColor,Z_Param_compassColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lifeTime); \
		P_GET_UBOOL(Z_Param_shouldShowInCompass); \
		P_GET_UBOOL(Z_Param_shouldShowOnMap); \
		P_GET_ENUM(ERepresentationType,Z_Param_representationType); \
		P_GET_UBOOL(Z_Param_isLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateAndAddNewRepresentationNoActor(Z_Param_location,Z_Param_compassTexture,Z_Param_compassColor,Z_Param_lifeTime,Z_Param_shouldShowInCompass,Z_Param_shouldShowOnMap,ERepresentationType(Z_Param_representationType),Z_Param_isLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRepresentation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_realActor); \
		P_GET_UBOOL(Z_Param_isLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateRepresentation(Z_Param_realActor,Z_Param_isLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndAddNewRepresentation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_realActor); \
		P_GET_UBOOL(Z_Param_isLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateAndAddNewRepresentation(Z_Param_realActor,Z_Param_isLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGActorRepresentationManager**)Z_Param__Result=AFGActorRepresentationManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGActorRepresentationManager(); \
	friend struct Z_Construct_UClass_AFGActorRepresentationManager_Statics; \
public: \
	DECLARE_CLASS(AFGActorRepresentationManager, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGActorRepresentationManager)


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAFGActorRepresentationManager(); \
	friend struct Z_Construct_UClass_AFGActorRepresentationManager_Statics; \
public: \
	DECLARE_CLASS(AFGActorRepresentationManager, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGActorRepresentationManager)


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGActorRepresentationManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGActorRepresentationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGActorRepresentationManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGActorRepresentationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGActorRepresentationManager(AFGActorRepresentationManager&&); \
	NO_API AFGActorRepresentationManager(const AFGActorRepresentationManager&); \
public:


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGActorRepresentationManager(AFGActorRepresentationManager&&); \
	NO_API AFGActorRepresentationManager(const AFGActorRepresentationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGActorRepresentationManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGActorRepresentationManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGActorRepresentationManager)


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mReplicatedRepresentations() { return STRUCT_OFFSET(AFGActorRepresentationManager, mReplicatedRepresentations); } \
	FORCEINLINE static uint32 __PPO__mClientReplicatedRepresentations() { return STRUCT_OFFSET(AFGActorRepresentationManager, mClientReplicatedRepresentations); } \
	FORCEINLINE static uint32 __PPO__mLocalRepresentations() { return STRUCT_OFFSET(AFGActorRepresentationManager, mLocalRepresentations); }


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_23_PROLOG
#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_INCLASS \
	FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGActorRepresentationManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
