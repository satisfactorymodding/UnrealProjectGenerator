// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConnectionAlwaysRelevant_NodePair"), sizeof(FConnectionAlwaysRelevant_NodePair), Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_CRC());
	}
	return Singleton;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Object, "Node", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConnectionAlwaysRelevant_NodePair, Node), Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection = { UE4CodeGen_Private::EPropertyClass::Object, "NetConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConnectionAlwaysRelevant_NodePair, NetConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::NewProp_NetConnection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConnectionAlwaysRelevant_NodePair",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FConnectionAlwaysRelevant_NodePair),
		alignof(FConnectionAlwaysRelevant_NodePair),
		Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConnectionAlwaysRelevant_NodePair"), sizeof(FConnectionAlwaysRelevant_NodePair), Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair_CRC() { return 135713138U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPersistentEquipmentClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_mPersistentEquipmentClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mPersistentEquipmentClasses_ElementProp;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection = { UE4CodeGen_Private::EPropertyClass::Array, "mActorsWithoutNetConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGReplicationGraph, mActorsWithoutNetConnection), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mActorsWithoutNetConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentEquipmentClasses_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
		{ "ToolTip", "Class types of equipment who's dependency to the pawn shouldn't be removed if they're unequipped." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentEquipmentClasses = { UE4CodeGen_Private::EPropertyClass::Set, "mPersistentEquipmentClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGReplicationGraph, mPersistentEquipmentClasses), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentEquipmentClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentEquipmentClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentEquipmentClasses_ElementProp = { UE4CodeGen_Private::EPropertyClass::Class, "mPersistentEquipmentClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList = { UE4CodeGen_Private::EPropertyClass::Array, "mAlwaysRelevantForConnectionList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGReplicationGraph, mAlwaysRelevantForConnectionList), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mAlwaysRelevantForConnectionList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FConnectionAlwaysRelevant_NodePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
		{ "ToolTip", "Node that holds a list of actors that are always Net Relevant." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode = { UE4CodeGen_Private::EPropertyClass::Object, "mAlwaysRelevantNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGReplicationGraph, mAlwaysRelevantNode), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mGridNode_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
		{ "ToolTip", "Grid Node that divides the map into grids and determines if an actor should send network updates to a connection depending on the different pre-defined grids." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mGridNode = { UE4CodeGen_Private::EPropertyClass::Object, "mGridNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGReplicationGraph, mGridNode), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mGridNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mGridNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mAlwaysRelevantClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGReplicationGraph, mAlwaysRelevantClasses), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mAlwaysRelevantClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mNonSpatializedClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGReplicationGraph, mNonSpatializedClasses), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mNonSpatializedClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mNonSpatializedClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Replication/FGReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mSpatializedClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGReplicationGraph, mSpatializedClasses), METADATA_PARAMS(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mSpatializedClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mSpatializedClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGReplicationGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mActorsWithoutNetConnection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentEquipmentClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mPersistentEquipmentClasses_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantForConnectionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGReplicationGraph_Statics::NewProp_mAlwaysRelevantNode,
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000ACu,
		nullptr, 0,
		Z_Construct_UClass_UFGReplicationGraph_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGReplicationGraph_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGReplicationGraph, 2697667705);
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGReplicationGraphNode_AlwaysRelevant_ForConnection, 2039876621);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection(Z_Construct_UClass_UFGReplicationGraphNode_AlwaysRelevant_ForConnection, &UFGReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGReplicationGraphNode_AlwaysRelevant_ForConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGReplicationGraphNode_AlwaysRelevant_ForConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
