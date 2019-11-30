// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGBuildableTradingPost_generated_h
#error "FGBuildableTradingPost.generated.h already included, missing '#pragma once' in FGBuildableTradingPost.h"
#endif
#define FACTORYGAME_FGBuildableTradingPost_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_RPC_WRAPPERS \
	virtual void OnTradingPostUpgraded_Implementation(int32 level, bool suppressBuildEffects); \
 \
	DECLARE_FUNCTION(execOnRep_NeedPlayingBuildEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NeedPlayingBuildEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreChildBuildingsLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreChildBuildingsLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTradingPostLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTradingPostLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStorageInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetStorageInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMAMVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMAMVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateStorageVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateStorageVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGeneratorVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGeneratorVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTradingPostUpgraded) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_level); \
		P_GET_UBOOL(Z_Param_suppressBuildEffects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTradingPostUpgraded_Implementation(Z_Param_level,Z_Param_suppressBuildEffects); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnTradingPostUpgraded_Implementation(int32 level, bool suppressBuildEffects); \
 \
	DECLARE_FUNCTION(execOnRep_NeedPlayingBuildEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NeedPlayingBuildEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreChildBuildingsLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreChildBuildingsLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTradingPostLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTradingPostLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStorageInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetStorageInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMAMVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMAMVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateStorageVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateStorageVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGeneratorVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGeneratorVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTradingPostUpgraded) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_level); \
		P_GET_UBOOL(Z_Param_suppressBuildEffects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTradingPostUpgraded_Implementation(Z_Param_level,Z_Param_suppressBuildEffects); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_EVENT_PARMS \
	struct FGBuildableTradingPost_eventOnTradingPostUpgraded_Parms \
	{ \
		int32 level; \
		bool suppressBuildEffects; \
	};


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableTradingPost(); \
	friend struct Z_Construct_UClass_AFGBuildableTradingPost_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableTradingPost, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableTradingPost)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableTradingPost(); \
	friend struct Z_Construct_UClass_AFGBuildableTradingPost_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableTradingPost, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableTradingPost)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableTradingPost(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableTradingPost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableTradingPost); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableTradingPost); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableTradingPost(AFGBuildableTradingPost&&); \
	NO_API AFGBuildableTradingPost(const AFGBuildableTradingPost&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableTradingPost(AFGBuildableTradingPost&&); \
	NO_API AFGBuildableTradingPost(const AFGBuildableTradingPost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableTradingPost); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableTradingPost); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableTradingPost)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mInputInventory() { return STRUCT_OFFSET(AFGBuildableTradingPost, mInputInventory); } \
	FORCEINLINE static uint32 __PPO__mSpawningGroundZOffset() { return STRUCT_OFFSET(AFGBuildableTradingPost, mSpawningGroundZOffset); } \
	FORCEINLINE static uint32 __PPO__mGroundSearchZDistance() { return STRUCT_OFFSET(AFGBuildableTradingPost, mGroundSearchZDistance); } \
	FORCEINLINE static uint32 __PPO__mSchematicManager() { return STRUCT_OFFSET(AFGBuildableTradingPost, mSchematicManager); } \
	FORCEINLINE static uint32 __PPO__mStorageInventory() { return STRUCT_OFFSET(AFGBuildableTradingPost, mStorageInventory); } \
	FORCEINLINE static uint32 __PPO__mDefaultResources() { return STRUCT_OFFSET(AFGBuildableTradingPost, mDefaultResources); } \
	FORCEINLINE static uint32 __PPO__mGenerator1Location() { return STRUCT_OFFSET(AFGBuildableTradingPost, mGenerator1Location); } \
	FORCEINLINE static uint32 __PPO__mGenerator2Location() { return STRUCT_OFFSET(AFGBuildableTradingPost, mGenerator2Location); } \
	FORCEINLINE static uint32 __PPO__mStorageLocation() { return STRUCT_OFFSET(AFGBuildableTradingPost, mStorageLocation); } \
	FORCEINLINE static uint32 __PPO__mMAMLocation() { return STRUCT_OFFSET(AFGBuildableTradingPost, mMAMLocation); } \
	FORCEINLINE static uint32 __PPO__mHubTerminalLocation() { return STRUCT_OFFSET(AFGBuildableTradingPost, mHubTerminalLocation); } \
	FORCEINLINE static uint32 __PPO__mWorkBenchLocation() { return STRUCT_OFFSET(AFGBuildableTradingPost, mWorkBenchLocation); } \
	FORCEINLINE static uint32 __PPO__mNeedPlayingBuildEffectNotification() { return STRUCT_OFFSET(AFGBuildableTradingPost, mNeedPlayingBuildEffectNotification); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_16_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableTradingPost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
