// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRailroadSubsystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadSubsystem() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTrackGraph();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTrain();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadTimeTable_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGLocomotive_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicle_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTrainData();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadPathFindingResult();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadVehicleSoundComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadSwitchControl_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FTrackGraph::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FTrackGraph_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackGraph, Z_Construct_UPackage__Script_FactoryGame(), TEXT("TrackGraph"), sizeof(FTrackGraph), Get_Z_Construct_UScriptStruct_FTrackGraph_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackGraph(FTrackGraph::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("TrackGraph"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFTrackGraph
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFTrackGraph()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackGraph")),new UScriptStruct::TCppStructOps<FTrackGraph>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFTrackGraph;
	struct Z_Construct_UScriptStruct_FTrackGraph_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasChanged_MetaData[];
#endif
		static void NewProp_HasChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedFullRebuild_MetaData[];
#endif
		static void NewProp_NeedFullRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedFullRebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tracks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackGraph_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Struct representing a set of interconnected tracks." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackGraph>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_HasChanged_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Has this track graph changed, tracks connected, rolling stock added or removed." },
	};
#endif
	void Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_HasChanged_SetBit(void* Obj)
	{
		((FTrackGraph*)Obj)->HasChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_HasChanged = { UE4CodeGen_Private::EPropertyClass::Bool, "HasChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTrackGraph), &Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_HasChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_HasChanged_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_HasChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_NeedFullRebuild_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Do this track graph need to be rebuilt, e.g. tracks have been removed." },
	};
#endif
	void Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_NeedFullRebuild_SetBit(void* Obj)
	{
		((FTrackGraph*)Obj)->NeedFullRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_NeedFullRebuild = { UE4CodeGen_Private::EPropertyClass::Bool, "NeedFullRebuild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTrackGraph), &Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_NeedFullRebuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_NeedFullRebuild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_NeedFullRebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "All the tracks that are connected (nodes in the graph)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks = { UE4CodeGen_Private::EPropertyClass::Array, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTrackGraph, Tracks), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_HasChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_NeedFullRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"TrackGraph",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTrackGraph),
		alignof(FTrackGraph),
		Z_Construct_UScriptStruct_FTrackGraph_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackGraph_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackGraph_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackGraph()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackGraph_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackGraph"), sizeof(FTrackGraph), Get_Z_Construct_UScriptStruct_FTrackGraph_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackGraph_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackGraph_CRC() { return 1835671446U; }
class UScriptStruct* FTrain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FTrain_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrain, Z_Construct_UPackage__Script_FactoryGame(), TEXT("Train"), sizeof(FTrain), Get_Z_Construct_UScriptStruct_FTrain_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrain(FTrain::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("Train"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFTrain
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFTrain()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Train")),new UScriptStruct::TCppStructOps<FTrain>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFTrain;
	struct Z_Construct_UScriptStruct_FTrain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleUnitMaster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MultipleUnitMaster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastVehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastVehicle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstVehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstVehicle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrainID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrainID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrain_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Struct representing a train." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrain>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TimeTable_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "This trains time table." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TimeTable = { UE4CodeGen_Private::EPropertyClass::Object, "TimeTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTrain, TimeTable), Z_Construct_UClass_UFGRailroadTimeTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TimeTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TimeTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrain_Statics::NewProp_MultipleUnitMaster_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "This is the master locomotives that sends its input (throttle/brake/etc) to all other locomotives in the train." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrain_Statics::NewProp_MultipleUnitMaster = { UE4CodeGen_Private::EPropertyClass::Object, "MultipleUnitMaster", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTrain, MultipleUnitMaster), Z_Construct_UClass_AFGLocomotive_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_MultipleUnitMaster_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_MultipleUnitMaster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrain_Statics::NewProp_LastVehicle_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrain_Statics::NewProp_LastVehicle = { UE4CodeGen_Private::EPropertyClass::Object, "LastVehicle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTrain, LastVehicle), Z_Construct_UClass_AFGRailroadVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_LastVehicle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_LastVehicle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrain_Statics::NewProp_FirstVehicle_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Train are a doubly linked list, use TTrainIterator to iterate over a train." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrain_Statics::NewProp_FirstVehicle = { UE4CodeGen_Private::EPropertyClass::Object, "FirstVehicle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTrain, FirstVehicle), Z_Construct_UClass_AFGRailroadVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_FirstVehicle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_FirstVehicle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TrainID_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "The id used to identify this train." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TrainID = { UE4CodeGen_Private::EPropertyClass::Int, "TrainID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTrain, TrainID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TrainID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TrainID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TimeTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrain_Statics::NewProp_MultipleUnitMaster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrain_Statics::NewProp_LastVehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrain_Statics::NewProp_FirstVehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrain_Statics::NewProp_TrainID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"Train",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTrain),
		alignof(FTrain),
		Z_Construct_UScriptStruct_FTrain_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrain_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrain_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrain_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Train"), sizeof(FTrain), Get_Z_Construct_UScriptStruct_FTrain_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrain_CRC() { return 1849375987U; }
class UScriptStruct* FTrainData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FTrainData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrainData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("TrainData"), sizeof(FTrainData), Get_Z_Construct_UScriptStruct_FTrainData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrainData(FTrainData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("TrainData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFTrainData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFTrainData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrainData")),new UScriptStruct::TCppStructOps<FTrainData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFTrainData;
	struct Z_Construct_UScriptStruct_FTrainData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Constant data about the train.\nChanges only when a trains composition is changed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrainData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrainData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_BrakeDeceleration_MetaData[] = {
		{ "Category", "TrainData" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "How much the brakes decelerate the train. [cm/s^2]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_BrakeDeceleration = { UE4CodeGen_Private::EPropertyClass::Float, "BrakeDeceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FTrainData, BrakeDeceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_BrakeDeceleration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_BrakeDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "TrainData" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Length of the train between the first and last buffer. [cm]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FTrainData, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Length_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "TrainData" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Mass off the train including payload. [kg]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Mass = { UE4CodeGen_Private::EPropertyClass::Float, "Mass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FTrainData, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Mass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Mass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrainData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_BrakeDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainData_Statics::NewProp_Mass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrainData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"TrainData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTrainData),
		alignof(FTrainData),
		Z_Construct_UScriptStruct_FTrainData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrainData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrainData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrainData"), sizeof(FTrainData), Get_Z_Construct_UScriptStruct_FTrainData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrainData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrainData_CRC() { return 3306046434U; }
	void AFGRailroadSubsystem::StaticRegisterNativesAFGRailroadSubsystem()
	{
		UClass* Class = AFGRailroadSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindOrAddTimeTable", &AFGRailroadSubsystem::execFindOrAddTimeTable },
			{ "FindPathSync", &AFGRailroadSubsystem::execFindPathSync },
			{ "FindTimeTable", &AFGRailroadSubsystem::execFindTimeTable },
			{ "Get", &AFGRailroadSubsystem::execGet },
			{ "GetTrainData", &AFGRailroadSubsystem::execGetTrainData },
			{ "GetTrainOrder", &AFGRailroadSubsystem::execGetTrainOrder },
			{ "GetTrainStops", &AFGRailroadSubsystem::execGetTrainStops },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics
	{
		struct FGRailroadSubsystem_eventFindOrAddTimeTable_Parms
		{
			int32 trainID;
			UFGRailroadTimeTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_trainID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventFindOrAddTimeTable_Parms, ReturnValue), Z_Construct_UClass_UFGRailroadTimeTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::NewProp_trainID = { UE4CodeGen_Private::EPropertyClass::Int, "trainID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventFindOrAddTimeTable_Parms, trainID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::NewProp_trainID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Adds a time table to the train if it does not exist already." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, "FindOrAddTimeTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGRailroadSubsystem_eventFindOrAddTimeTable_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics
	{
		struct FGRailroadSubsystem_eventFindPathSync_Parms
		{
			AFGLocomotive* locomotive;
			AFGBuildableRailroadStation* stop;
			FRailroadPathFindingResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_locomotive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventFindPathSync_Parms, ReturnValue), Z_Construct_UScriptStruct_FRailroadPathFindingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::NewProp_stop = { UE4CodeGen_Private::EPropertyClass::Object, "stop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventFindPathSync_Parms, stop), Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::NewProp_locomotive = { UE4CodeGen_Private::EPropertyClass::Object, "locomotive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventFindPathSync_Parms, locomotive), Z_Construct_UClass_AFGLocomotive_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::NewProp_stop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::NewProp_locomotive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Finds a path for the given locomotive to the given stop.\n\n@param locomotive The locomotive to find a path for, note that a locomotive can not reverse.\n@param stop The stop the train should find a path to.\n\n@return Result of the pathfinding; Status code indicate if a path was found or not or if an error occured, e.g. bad params." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, "FindPathSync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGRailroadSubsystem_eventFindPathSync_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics
	{
		struct FGRailroadSubsystem_eventFindTimeTable_Parms
		{
			int32 trainID;
			UFGRailroadTimeTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_trainID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventFindTimeTable_Parms, ReturnValue), Z_Construct_UClass_UFGRailroadTimeTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::NewProp_trainID = { UE4CodeGen_Private::EPropertyClass::Int, "trainID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventFindTimeTable_Parms, trainID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::NewProp_trainID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Find the train table for the given train." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, "FindTimeTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44020401, sizeof(FGRailroadSubsystem_eventFindTimeTable_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics
	{
		struct FGRailroadSubsystem_eventGet_Parms
		{
			UObject* worldContext;
			AFGRailroadSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGRailroadSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetRailroadSubsystem" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Get the railroad subsystem from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, "Get", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGRailroadSubsystem_eventGet_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics
	{
		struct FGRailroadSubsystem_eventGetTrainData_Parms
		{
			int32 trainID;
			FTrainData out_trainData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_trainData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_trainID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRailroadSubsystem_eventGetTrainData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGRailroadSubsystem_eventGetTrainData_Parms), &Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::NewProp_out_trainData = { UE4CodeGen_Private::EPropertyClass::Struct, "out_trainData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrainData_Parms, out_trainData), Z_Construct_UScriptStruct_FTrainData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::NewProp_trainID = { UE4CodeGen_Private::EPropertyClass::Int, "trainID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrainData_Parms, trainID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::NewProp_out_trainData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::NewProp_trainID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Get the train data for the given train ID.\n@return true on success; false if train does not exists." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, "GetTrainData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGRailroadSubsystem_eventGetTrainData_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics
	{
		struct FGRailroadSubsystem_eventGetTrainOrder_Parms
		{
			int32 trainID;
			AFGRailroadVehicle* out_firstVehicle;
			AFGRailroadVehicle* out_lastVehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_lastVehicle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_firstVehicle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_trainID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::NewProp_out_lastVehicle = { UE4CodeGen_Private::EPropertyClass::Object, "out_lastVehicle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrainOrder_Parms, out_lastVehicle), Z_Construct_UClass_AFGRailroadVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::NewProp_out_firstVehicle = { UE4CodeGen_Private::EPropertyClass::Object, "out_firstVehicle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrainOrder_Parms, out_firstVehicle), Z_Construct_UClass_AFGRailroadVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::NewProp_trainID = { UE4CodeGen_Private::EPropertyClass::Int, "trainID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrainOrder_Parms, trainID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::NewProp_out_lastVehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::NewProp_out_firstVehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::NewProp_trainID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Get the vehicle order for the given train, first and last.\n@param index         The trains ID, if invalid then the out pointers will be null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, "GetTrainOrder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGRailroadSubsystem_eventGetTrainOrder_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics
	{
		struct FGRailroadSubsystem_eventGetTrainStops_Parms
		{
			TArray<AFGBuildableRailroadStation*> out_stops;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_stops;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_stops_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::NewProp_out_stops = { UE4CodeGen_Private::EPropertyClass::Array, "out_stops", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrainStops_Parms, out_stops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::NewProp_out_stops_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "out_stops", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::NewProp_out_stops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::NewProp_out_stops_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Get all available train stops for use in a time table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, "GetTrainStops", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44420401, sizeof(FGRailroadSubsystem_eventGetTrainStops_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGRailroadSubsystem_NoRegister()
	{
		return AFGRailroadSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGRailroadSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrackGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mTrackGraphs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mTrackGraphs_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTrackGraphs_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStationNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mStationNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mStationNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrainStops_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTrainStops;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTrainStops_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrains_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mTrains;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mTrains_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTrains_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVehicleSoundComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mVehicleSoundComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSwitchControlClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSwitchControlClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mConnectDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRailroadSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGRailroadSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_FindOrAddTimeTable, "FindOrAddTimeTable" }, // 1681366960
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_FindPathSync, "FindPathSync" }, // 1472212355
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_FindTimeTable, "FindTimeTable" }, // 3216976361
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_Get, "Get" }, // 2326442450
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainData, "GetTrainData" }, // 1804347958
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainOrder, "GetTrainOrder" }, // 46240984
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStops, "GetTrainStops" }, // 632415861
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGRailroadSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor for handling the railroad network and the trains on it." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "All the train tracks in the world, separated by connectivity." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs = { UE4CodeGen_Private::EPropertyClass::Map, "mTrackGraphs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGRailroadSubsystem, mTrackGraphs), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "mTrackGraphs_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "mTrackGraphs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FTrackGraph, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "A random name is picked from here when placing a stop." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames = { UE4CodeGen_Private::EPropertyClass::Array, "mStationNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGRailroadSubsystem, mStationNames), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "mStationNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStops_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "All the train stops in the game." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStops = { UE4CodeGen_Private::EPropertyClass::Array, "mTrainStops", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AFGRailroadSubsystem, mTrainStops), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStops_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStops_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStops_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mTrainStops", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "All the trains in the world!" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains = { UE4CodeGen_Private::EPropertyClass::Map, "mTrains", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGRailroadSubsystem, mTrains), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "mTrains_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "mTrains", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FTrain, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mVehicleSoundComponentClass_MetaData[] = {
		{ "Category", "FGRailroadSubsystem" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "This is sound component used to play sounds on trains." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mVehicleSoundComponentClass = { UE4CodeGen_Private::EPropertyClass::Class, "mVehicleSoundComponentClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFGRailroadSubsystem, mVehicleSoundComponentClass), Z_Construct_UClass_UFGRailroadVehicleSoundComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mVehicleSoundComponentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mVehicleSoundComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mSwitchControlClass_MetaData[] = {
		{ "Category", "FGRailroadSubsystem" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "Default switch control to place when building switches." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mSwitchControlClass = { UE4CodeGen_Private::EPropertyClass::Class, "mSwitchControlClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFGRailroadSubsystem, mSwitchControlClass), Z_Construct_UClass_AFGBuildableRailroadSwitchControl_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mSwitchControlClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mSwitchControlClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mConnectDistance_MetaData[] = {
		{ "Category", "FGRailroadSubsystem" },
		{ "ModuleRelativePath", "FGRailroadSubsystem.h" },
		{ "ToolTip", "How far apart can trains connect to each other.\nCan be used as the actor distance or track distance.\n(note that the track distance will be slightly longer than the actor distance in curved sections)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mConnectDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mConnectDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGRailroadSubsystem, mConnectDistance), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mConnectDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mConnectDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRailroadSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStops_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mVehicleSoundComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mSwitchControlClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mConnectDistance,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGRailroadSubsystem, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRailroadSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRailroadSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::ClassParams = {
		&AFGRailroadSubsystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGRailroadSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRailroadSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRailroadSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRailroadSubsystem, 3186801441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRailroadSubsystem(Z_Construct_UClass_AFGRailroadSubsystem, &AFGRailroadSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRailroadSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRailroadSubsystem);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGRailroadSubsystem)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
