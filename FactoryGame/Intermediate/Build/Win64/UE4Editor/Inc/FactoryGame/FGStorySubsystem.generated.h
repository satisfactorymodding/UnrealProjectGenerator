// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGMapArea;
class UFGResearchTree;
class UFGSchematic;
class UFGItemDescriptor;
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGStorySubsystem_generated_h
#error "FGStorySubsystem.generated.h already included, missing '#pragma once' in FGStorySubsystem.h"
#endif
#define FACTORYGAME_FGStorySubsystem_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResearchTreeMessageData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ResearchTree() { return STRUCT_OFFSET(FResearchTreeMessageData, ResearchTree); }


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FResearchTreeMessageData>();

#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSchematicMessagePair_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SchematicUnlocked() { return STRUCT_OFFSET(FSchematicMessagePair, SchematicUnlocked); }


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSchematicMessagePair>();

#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemFoundData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SchematicClass() { return STRUCT_OFFSET(FItemFoundData, SchematicClass); } \
	FORCEINLINE static uint32 __PPO__ItemClass() { return STRUCT_OFFSET(FItemFoundData, ItemClass); }


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FItemFoundData>();

#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapAreaVisitedData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SchematicClass() { return STRUCT_OFFSET(FMapAreaVisitedData, SchematicClass); }


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FMapAreaVisitedData>();

#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupDelegates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupDelegates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMapAreaVisited) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_mapArea); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMapAreaVisited(Z_Param_mapArea); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResearchTreeUnlocked) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchTree); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchTreeUnlocked(Z_Param_researchTree); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResearchRecipeTimerComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchRecipeTimerComplete(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayerAddedItemToInventory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerAddedItemToInventory(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPlayer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_inPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPlayer(Z_Param_inPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSchematicPurchased) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSchematicPurchased(Z_Param_newSchematic); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupDelegates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupDelegates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMapAreaVisited) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_mapArea); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMapAreaVisited(Z_Param_mapArea); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResearchTreeUnlocked) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchTree); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchTreeUnlocked(Z_Param_researchTree); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResearchRecipeTimerComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchRecipeTimerComplete(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayerAddedItemToInventory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerAddedItemToInventory(Z_Param_itemClass,Z_Param_numAdded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPlayer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_inPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPlayer(Z_Param_inPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSchematicPurchased) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSchematicPurchased(Z_Param_newSchematic); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGStorySubsystem(); \
	friend struct Z_Construct_UClass_AFGStorySubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGStorySubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGStorySubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<AFGStorySubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_INCLASS \
private: \
	static void StaticRegisterNativesAFGStorySubsystem(); \
	friend struct Z_Construct_UClass_AFGStorySubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGStorySubsystem, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGStorySubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<AFGStorySubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGStorySubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGStorySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGStorySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGStorySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGStorySubsystem(AFGStorySubsystem&&); \
	NO_API AFGStorySubsystem(const AFGStorySubsystem&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGStorySubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGStorySubsystem(AFGStorySubsystem&&); \
	NO_API AFGStorySubsystem(const AFGStorySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGStorySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGStorySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGStorySubsystem)


#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSchematicMessageData() { return STRUCT_OFFSET(AFGStorySubsystem, mSchematicMessageData); } \
	FORCEINLINE static uint32 __PPO__mItemFoundData() { return STRUCT_OFFSET(AFGStorySubsystem, mItemFoundData); } \
	FORCEINLINE static uint32 __PPO__mResearchTreeMessageData() { return STRUCT_OFFSET(AFGStorySubsystem, mResearchTreeMessageData); } \
	FORCEINLINE static uint32 __PPO__mResearchTimerCompleteMessage() { return STRUCT_OFFSET(AFGStorySubsystem, mResearchTimerCompleteMessage); }


#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_156_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGStorySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGStorySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
