// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Replication/FGReplicationGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGReplicationGraph() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGReplicationGraph_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection();
// End Cross Module References
class UScriptStruct* FConnectionAlwaysRelevant_NodePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConnectionAlwaysRelevant_NodePair"), sizeof(FConnectionAlwaysRelevant_NodePair), Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FConnectionAlwaysRelevant_NodePair>()
{
	return FConnectionAlwaysRelevant_NodePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConnectionAlwaysRelevant_NodePair(FConnectionAlwaysRelevant_NodePair::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ConnectionAlwaysRelevant_NodePair"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFConnectionAlwaysRelevant_NodePair
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFConnectionAlwaysRelevant_NodePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConnectionAlwaysRelevant_NodePair")),new UScriptStruct::TCppStructOps<FConnectionAlwaysRelevant_NodePair>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFConnectionAlwaysRelevant_NodePair;
	struct Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetConnection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectionAlwaysRelevant_NodePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConnectionAlwaysRelevant_NodePair, Node), Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection = { "NetConnection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConnectionAlwaysRelevant_NodePair, NetConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConnectionAlwaysRelevant_NodePair",
		sizeof(FConnectionAlwaysRelevant_NodePair),
		alignof(FConnectionAlwaysRelevant_NodePair),
		Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConnectionAlwaysRelevant_NodePair"), sizeof(FConnectionAlwaysRelevant_NodePair), Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Hash() { return 754002720U; }
	void UFGReplicationGraph::StaticRegisterNativesUFGReplicationGraph()
	{
	}
	UClass* Z_Construct_UClass_UFGReplicationGraph_NoRegister()
	{
		return UFGReplicationGraph::StaticClass();
	}
	struct Z_Construct_UClass_UFGReplicationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorsWithoutNetConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mActorsWithoutNetConnection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActorsWithoutNetConnection_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPersistentDependencyClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_mPersistentDependencyClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mPersistentDependencyClasses_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAlwaysRelevantForConnectionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAlwaysRelevantForConnectionList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mAlwaysRelevantForConnectionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAlwaysRelevantNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAlwaysRelevantNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPrioritizedGridNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPrioritizedGridNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGridNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mGridNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAlwaysRelevantClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAlwaysRelevantClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAlwaysRelevantClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNonSpatializedClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mNonSpatializedClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mNonSpatializedClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpatializedClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSpatializedClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSpatializedClasses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGReplicationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Replication/FGReplicationGraph.h" },
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
		{ "ToolTip", "Actors that are only supposed to replicate to their owning connection, but that did not have a connection on spawn" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection = { "mActorsWithoutNetConnection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGReplicationGraph, mActorsWithoutNetConnection), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection_Inner = { "mActorsWithoutNetConnection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentDependencyClasses_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
		{ "ToolTip", "Class types of equipment who's dependency to the pawn shouldn't be removed if they're unequipped." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentDependencyClasses = { "mPersistentDependencyClasses", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGReplicationGraph, mPersistentDependencyClasses), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentDependencyClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentDependencyClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentDependencyClasses_ElementProp = { "mPersistentDependencyClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList = { "mAlwaysRelevantForConnectionList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGReplicationGraph, mAlwaysRelevantForConnectionList), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_Inner = { "mAlwaysRelevantForConnectionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
		{ "ToolTip", "Node that holds a list of actors that are always Net Relevant." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode = { "mAlwaysRelevantNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGReplicationGraph, mAlwaysRelevantNode), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPrioritizedGridNode_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
		{ "ToolTip", "Grid Node that is dedicated for more frequently updated actors. Does not divide cells into buckets." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPrioritizedGridNode = { "mPrioritizedGridNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGReplicationGraph, mPrioritizedGridNode), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPrioritizedGridNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPrioritizedGridNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mGridNode_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
		{ "ToolTip", "Grid Node that divides the map into grids and determines if an actor should send network updates to a connection depending on the different pre-defined grids." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mGridNode = { "mGridNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGReplicationGraph, mGridNode), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mGridNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mGridNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses = { "mAlwaysRelevantClasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGReplicationGraph, mAlwaysRelevantClasses), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses_Inner = { "mAlwaysRelevantClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses = { "mNonSpatializedClasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGReplicationGraph, mNonSpatializedClasses), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses_Inner = { "mNonSpatializedClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses = { "mSpatializedClasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGReplicationGraph, mSpatializedClasses), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses_Inner = { "mSpatializedClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGReplicationGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentDependencyClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentDependencyClasses_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPrioritizedGridNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mGridNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGReplicationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGReplicationGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGReplicationGraph_Statics::ClassParams = {
		&UFGReplicationGraph::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGReplicationGraph_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGReplicationGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGReplicationGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGReplicationGraph, 2723823752);
	template<> FACTORYGAME_API UClass* StaticClass<UFGReplicationGraph>()
	{
		return UFGReplicationGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGReplicationGraph(Z_Construct_UClass_UFGReplicationGraph, &UFGReplicationGraph::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGReplicationGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGReplicationGraph);
	void UFGReplicationGraphNode_AlwaysRelevant_ForConnection::StaticRegisterNativesUFGReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
	}
	UClass* Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister()
	{
		return UFGReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	struct Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Replication/FGReplicationGraph.h" },
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGReplicationGraphNode_AlwaysRelevant_ForConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams = {
		&UFGReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGReplicationGraphNode_AlwaysRelevant_ForConnection, 1911557321);
	template<> FACTORYGAME_API UClass* StaticClass<UFGReplicationGraphNode_AlwaysRelevant_ForConnection>()
	{
		return UFGReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection(Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection, &UFGReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGReplicationGraphNode_AlwaysRelevant_ForConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGReplicationGraphNode_AlwaysRelevant_ForConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
