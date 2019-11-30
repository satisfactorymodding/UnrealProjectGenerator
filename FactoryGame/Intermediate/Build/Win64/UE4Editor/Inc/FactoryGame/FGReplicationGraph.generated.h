// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGReplicationGraph_generated_h
#error "FGReplicationGraph.generated.h already included, missing '#pragma once' in FGReplicationGraph.h"
#endif
#define FACTORYGAME_FGReplicationGraph_generated_h

#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FConnectionAlwaysRelevant_NodePair>();

#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGReplicationGraph(); \
	friend struct Z_Construct_UClass_UFGReplicationGraph_Statics; \
public: \
	DECLARE_CLASS(UFGReplicationGraph, UReplicationGraph, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGReplicationGraph)


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUFGReplicationGraph(); \
	friend struct Z_Construct_UClass_UFGReplicationGraph_Statics; \
public: \
	DECLARE_CLASS(UFGReplicationGraph, UReplicationGraph, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGReplicationGraph)


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGReplicationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGReplicationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGReplicationGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGReplicationGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGReplicationGraph(UFGReplicationGraph&&); \
	NO_API UFGReplicationGraph(const UFGReplicationGraph&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGReplicationGraph() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGReplicationGraph(UFGReplicationGraph&&); \
	NO_API UFGReplicationGraph(const UFGReplicationGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGReplicationGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGReplicationGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGReplicationGraph)


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPersistentDependencyClasses() { return STRUCT_OFFSET(UFGReplicationGraph, mPersistentDependencyClasses); } \
	FORCEINLINE static uint32 __PPO__mActorsWithoutNetConnection() { return STRUCT_OFFSET(UFGReplicationGraph, mActorsWithoutNetConnection); }


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_47_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_51_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGReplicationGraph>();

#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGReplicationGraphNode_AlwaysRelevant_ForConnection(); \
	friend struct Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics; \
public: \
	DECLARE_CLASS(UFGReplicationGraphNode_AlwaysRelevant_ForConnection, UReplicationGraphNode_AlwaysRelevant_ForConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGReplicationGraphNode_AlwaysRelevant_ForConnection)


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_INCLASS \
private: \
	static void StaticRegisterNativesUFGReplicationGraphNode_AlwaysRelevant_ForConnection(); \
	friend struct Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics; \
public: \
	DECLARE_CLASS(UFGReplicationGraphNode_AlwaysRelevant_ForConnection, UReplicationGraphNode_AlwaysRelevant_ForConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGReplicationGraphNode_AlwaysRelevant_ForConnection)


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGReplicationGraphNode_AlwaysRelevant_ForConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGReplicationGraphNode_AlwaysRelevant_ForConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGReplicationGraphNode_AlwaysRelevant_ForConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGReplicationGraphNode_AlwaysRelevant_ForConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGReplicationGraphNode_AlwaysRelevant_ForConnection(UFGReplicationGraphNode_AlwaysRelevant_ForConnection&&); \
	NO_API UFGReplicationGraphNode_AlwaysRelevant_ForConnection(const UFGReplicationGraphNode_AlwaysRelevant_ForConnection&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGReplicationGraphNode_AlwaysRelevant_ForConnection() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGReplicationGraphNode_AlwaysRelevant_ForConnection(UFGReplicationGraphNode_AlwaysRelevant_ForConnection&&); \
	NO_API UFGReplicationGraphNode_AlwaysRelevant_ForConnection(const UFGReplicationGraphNode_AlwaysRelevant_ForConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGReplicationGraphNode_AlwaysRelevant_ForConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGReplicationGraphNode_AlwaysRelevant_ForConnection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGReplicationGraphNode_AlwaysRelevant_ForConnection)


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_159_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h_163_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGReplicationGraphNode_AlwaysRelevant_ForConnection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Replication_FGReplicationGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
