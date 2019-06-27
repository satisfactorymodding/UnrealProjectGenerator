// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGBuildableConveyorBase_generated_h
#error "FGBuildableConveyorBase.generated.h already included, missing '#pragma once' in FGBuildableConveyorBase.h"
#endif
#define FACTORYGAME_FGBuildableConveyorBase_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConveyorBeltItems_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__IDCounter() { return STRUCT_OFFSET(FConveyorBeltItems, IDCounter); } \
	FORCEINLINE static uint32 __PPO__ItemMap() { return STRUCT_OFFSET(FConveyorBeltItems, ItemMap); } \
	FORCEINLINE static uint32 __PPO__Items() { return STRUCT_OFFSET(FConveyorBeltItems, Items); } \
	FORCEINLINE static uint32 __PPO__ArrayReplicationKey() { return STRUCT_OFFSET(FConveyorBeltItems, ArrayReplicationKey); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConveyorBeltItem_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ReplicationID() { return STRUCT_OFFSET(FConveyorBeltItem, ReplicationID); } \
	FORCEINLINE static uint32 __PPO__ReplicationKey() { return STRUCT_OFFSET(FConveyorBeltItem, ReplicationKey); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGBuildableConveyorBase, NO_API)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableConveyorBase(); \
	friend struct Z_Construct_UClass_AFGBuildableConveyorBase_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableConveyorBase, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableConveyorBase) \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableConveyorBase(); \
	friend struct Z_Construct_UClass_AFGBuildableConveyorBase_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableConveyorBase, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableConveyorBase) \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableConveyorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableConveyorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableConveyorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableConveyorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableConveyorBase(AFGBuildableConveyorBase&&); \
	NO_API AFGBuildableConveyorBase(const AFGBuildableConveyorBase&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableConveyorBase(AFGBuildableConveyorBase&&); \
	NO_API AFGBuildableConveyorBase(const AFGBuildableConveyorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableConveyorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableConveyorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableConveyorBase)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSpeed() { return STRUCT_OFFSET(AFGBuildableConveyorBase, mSpeed); } \
	FORCEINLINE static uint32 __PPO__mItems() { return STRUCT_OFFSET(AFGBuildableConveyorBase, mItems); } \
	FORCEINLINE static uint32 __PPO__mConnection0() { return STRUCT_OFFSET(AFGBuildableConveyorBase, mConnection0); } \
	FORCEINLINE static uint32 __PPO__mConnection1() { return STRUCT_OFFSET(AFGBuildableConveyorBase, mConnection1); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_192_PROLOG
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h_195_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableConveyorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
