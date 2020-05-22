// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGRailroadSubsystem.h"
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
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTrain_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations();
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FTrackGraph_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackGraph, Z_Construct_UPackage__Script_FactoryGame(), TEXT("TrackGraph"), sizeof(FTrackGraph), Get_Z_Construct_UScriptStruct_FTrackGraph_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FTrackGraph>()
{
	return FTrackGraph::StaticStruct();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdRail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdRail;
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
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "Struct representing a set of interconnected tracks." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackGraph>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_ThirdRail_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "This is the third rail the locomotives and stations connect to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_ThirdRail = { "ThirdRail", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackGraph, ThirdRail), Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_ThirdRail_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_ThirdRail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "All the tracks that are connected (nodes in the graph)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackGraph, Tracks), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_ThirdRail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackGraph_Statics::NewProp_Tracks_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"TrackGraph",
		sizeof(FTrackGraph),
		alignof(FTrackGraph),
		Z_Construct_UScriptStruct_FTrackGraph_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackGraph_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackGraph_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackGraph()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackGraph_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackGraph"), sizeof(FTrackGraph), Get_Z_Construct_UScriptStruct_FTrackGraph_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackGraph_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackGraph_Hash() { return 2945699254U; }
	void AFGRailroadSubsystem::StaticRegisterNativesAFGRailroadSubsystem()
	{
		UClass* Class = AFGRailroadSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &AFGRailroadSubsystem::execGet },
			{ "GetAllTrains", &AFGRailroadSubsystem::execGetAllTrains },
			{ "GetAllTrainStations", &AFGRailroadSubsystem::execGetAllTrainStations },
			{ "GetTrains", &AFGRailroadSubsystem::execGetTrains },
			{ "GetTrainStations", &AFGRailroadSubsystem::execGetTrainStations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGRailroadSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadSubsystem_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetRailroadSubsystem" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "Get the railroad subsystem from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, nullptr, "Get", sizeof(FGRailroadSubsystem_eventGet_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics
	{
		struct FGRailroadSubsystem_eventGetAllTrains_Parms
		{
			TArray<AFGTrain*> out_trains;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_trains;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_trains_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::NewProp_out_trains = { "out_trains", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadSubsystem_eventGetAllTrains_Parms, out_trains), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::NewProp_out_trains_Inner = { "out_trains", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGTrain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::NewProp_out_trains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::NewProp_out_trains_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "Get all trains." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, nullptr, "GetAllTrains", sizeof(FGRailroadSubsystem_eventGetAllTrains_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics
	{
		struct FGRailroadSubsystem_eventGetAllTrainStations_Parms
		{
			TArray<AFGTrainStationIdentifier*> out_stations;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_stations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_stations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::NewProp_out_stations = { "out_stations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadSubsystem_eventGetAllTrainStations_Parms, out_stations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::NewProp_out_stations_Inner = { "out_stations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::NewProp_out_stations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::NewProp_out_stations_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "Get all stations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, nullptr, "GetAllTrainStations", sizeof(FGRailroadSubsystem_eventGetAllTrainStations_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics
	{
		struct FGRailroadSubsystem_eventGetTrains_Parms
		{
			int32 trackID;
			TArray<AFGTrain*> out_trains;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_trains;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_trains_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_trackID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::NewProp_out_trains = { "out_trains", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrains_Parms, out_trains), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::NewProp_out_trains_Inner = { "out_trains", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGTrain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::NewProp_trackID = { "trackID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrains_Parms, trackID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::NewProp_out_trains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::NewProp_out_trains_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::NewProp_trackID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "Get all trains on the specified track." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, nullptr, "GetTrains", sizeof(FGRailroadSubsystem_eventGetTrains_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics
	{
		struct FGRailroadSubsystem_eventGetTrainStations_Parms
		{
			int32 trackID;
			TArray<AFGTrainStationIdentifier*> out_stations;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_stations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_stations_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_trackID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::NewProp_out_stations = { "out_stations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrainStations_Parms, out_stations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::NewProp_out_stations_Inner = { "out_stations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::NewProp_trackID = { "trackID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadSubsystem_eventGetTrainStations_Parms, trackID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::NewProp_out_stations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::NewProp_out_stations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::NewProp_trackID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "Get all stations for the specified track." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadSubsystem, nullptr, "GetTrainStations", sizeof(FGRailroadSubsystem_eventGetTrainStations_Parms), Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrains_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTrains;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTrains_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrainStationIdentifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTrainStationIdentifiers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTrainStationIdentifiers_Inner;
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
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_Get, "Get" }, // 276381212
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrains, "GetAllTrains" }, // 2806146996
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_GetAllTrainStations, "GetAllTrainStations" }, // 3978495660
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_GetTrains, "GetTrains" }, // 985963464
		{ &Z_Construct_UFunction_AFGRailroadSubsystem_GetTrainStations, "GetTrainStations" }, // 3287206928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGRailroadSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor for handling the railroad network and the trains on it." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "All the trains in the world." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains = { "mTrains", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadSubsystem, mTrains), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_Inner = { "mTrains", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGTrain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStationIdentifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "All station identifiers in the world." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStationIdentifiers = { "mTrainStationIdentifiers", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadSubsystem, mTrainStationIdentifiers), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStationIdentifiers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStationIdentifiers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStationIdentifiers_Inner = { "mTrainStationIdentifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "All the train tracks in the world, separated by connectivity." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs = { "mTrackGraphs", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadSubsystem, mTrackGraphs), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_Key_KeyProp = { "mTrackGraphs_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_ValueProp = { "mTrackGraphs", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTrackGraph, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "A random name is picked from here when placing a stop." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames = { "mStationNames", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadSubsystem, mStationNames), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_Inner = { "mStationNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mVehicleSoundComponentClass_MetaData[] = {
		{ "Category", "FGRailroadSubsystem" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "This is sound component used to play sounds on trains." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mVehicleSoundComponentClass = { "mVehicleSoundComponentClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadSubsystem, mVehicleSoundComponentClass), Z_Construct_UClass_UFGRailroadVehicleSoundComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mVehicleSoundComponentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mVehicleSoundComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mSwitchControlClass_MetaData[] = {
		{ "Category", "FGRailroadSubsystem" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "Default switch control to place when building switches." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mSwitchControlClass = { "mSwitchControlClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadSubsystem, mSwitchControlClass), Z_Construct_UClass_AFGBuildableRailroadSwitchControl_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mSwitchControlClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mSwitchControlClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mConnectDistance_MetaData[] = {
		{ "Category", "FGRailroadSubsystem" },
		{ "ModuleRelativePath", "Public/FGRailroadSubsystem.h" },
		{ "ToolTip", "How far apart can trains connect to each other.\nCan be used as the actor distance or track distance.\n(note that the track distance will be slightly longer than the actor distance in curved sections)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mConnectDistance = { "mConnectDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadSubsystem, mConnectDistance), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mConnectDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mConnectDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRailroadSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrains_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStationIdentifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrainStationIdentifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mTrackGraphs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadSubsystem_Statics::NewProp_mStationNames_Inner,
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGRailroadSubsystem_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGRailroadSubsystem_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
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
	IMPLEMENT_CLASS(AFGRailroadSubsystem, 4146154164);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRailroadSubsystem>()
	{
		return AFGRailroadSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRailroadSubsystem(Z_Construct_UClass_AFGRailroadSubsystem, &AFGRailroadSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRailroadSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRailroadSubsystem);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGRailroadSubsystem)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
