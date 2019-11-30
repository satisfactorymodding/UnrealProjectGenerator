// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGPowerCircuit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPowerCircuit() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerCircuitStats();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerGraphPoint();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerCircuit_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerCircuit();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuit();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerCircuit_GetStats();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerCircuit_ResetFuse();
// End Cross Module References
class UScriptStruct* FPowerCircuitStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPowerCircuitStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerCircuitStats, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PowerCircuitStats"), sizeof(FPowerCircuitStats), Get_Z_Construct_UScriptStruct_FPowerCircuitStats_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FPowerCircuitStats>()
{
	return FPowerCircuitStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerCircuitStats(FPowerCircuitStats::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PowerCircuitStats"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPowerCircuitStats
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPowerCircuitStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerCircuitStats")),new UScriptStruct::TCppStructOps<FPowerCircuitStats>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPowerCircuitStats;
	struct Z_Construct_UScriptStruct_FPowerCircuitStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_FirstIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerConsumed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerConsumed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerProduced_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerProduced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerProductionCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerProductionCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatHistoryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatHistoryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatIntervalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatIntervalTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Stats for a power circuit, refreshed once every second. Implemented as a ring buffer, so that we don't have to re-replicate all the time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerCircuitStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_FirstIndex_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "The index we count as the first index in our ring buffer" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_FirstIndex = { "FirstIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerCircuitStats, FirstIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_FirstIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_FirstIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "All the points on the graph." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerCircuitStats, Items), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerGraphPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerConsumed_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "How much power is consumed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerConsumed = { "PowerConsumed", nullptr, (EPropertyFlags)0x0010000080000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerCircuitStats, PowerConsumed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerConsumed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerConsumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProduced_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "How much power is produced." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProduced = { "PowerProduced", nullptr, (EPropertyFlags)0x0010000080000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerCircuitStats, PowerProduced), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProduced_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProduced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProductionCapacity_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "How much power can be produced." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProductionCapacity = { "PowerProductionCapacity", nullptr, (EPropertyFlags)0x0010000080000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerCircuitStats, PowerProductionCapacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProductionCapacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProductionCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatHistoryTime_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "For how long do we keep the stats." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatHistoryTime = { "StatHistoryTime", nullptr, (EPropertyFlags)0x0010000080000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerCircuitStats, StatHistoryTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatHistoryTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatHistoryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatIntervalTime_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "The duration between each stat." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatIntervalTime = { "StatIntervalTime", nullptr, (EPropertyFlags)0x0010000080000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerCircuitStats, StatIntervalTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatIntervalTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatIntervalTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_FirstIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerConsumed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProduced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProductionCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatHistoryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatIntervalTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PowerCircuitStats",
		sizeof(FPowerCircuitStats),
		alignof(FPowerCircuitStats),
		Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerCircuitStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerCircuitStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerCircuitStats"), sizeof(FPowerCircuitStats), Get_Z_Construct_UScriptStruct_FPowerCircuitStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerCircuitStats_Hash() { return 1149849438U; }
class UScriptStruct* FPowerGraphPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPowerGraphPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerGraphPoint, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PowerGraphPoint"), sizeof(FPowerGraphPoint), Get_Z_Construct_UScriptStruct_FPowerGraphPoint_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FPowerGraphPoint>()
{
	return FPowerGraphPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerGraphPoint(FPowerGraphPoint::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PowerGraphPoint"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPowerGraphPoint
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPowerGraphPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerGraphPoint")),new UScriptStruct::TCppStructOps<FPowerGraphPoint>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPowerGraphPoint;
	struct Z_Construct_UScriptStruct_FPowerGraphPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductionCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProductionCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Produced_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Produced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Consumed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Consumed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "A point on the power curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerGraphPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_ProductionCapacity_MetaData[] = {
		{ "Category", "PowerGraphPoint" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_ProductionCapacity = { "ProductionCapacity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerGraphPoint, ProductionCapacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_ProductionCapacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_ProductionCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Produced_MetaData[] = {
		{ "Category", "PowerGraphPoint" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Produced = { "Produced", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerGraphPoint, Produced), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Produced_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Produced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Consumed_MetaData[] = {
		{ "Category", "PowerGraphPoint" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Data for this point." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Consumed = { "Consumed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerGraphPoint, Consumed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Consumed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Consumed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_ProductionCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Produced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Consumed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PowerGraphPoint",
		sizeof(FPowerGraphPoint),
		alignof(FPowerGraphPoint),
		Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerGraphPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerGraphPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerGraphPoint"), sizeof(FPowerGraphPoint), Get_Z_Construct_UScriptStruct_FPowerGraphPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerGraphPoint_Hash() { return 13999269U; }
	void UFGPowerCircuit::StaticRegisterNativesUFGPowerCircuit()
	{
		UClass* Class = UFGPowerCircuit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGraphPointAtIndex", &UFGPowerCircuit::execGetGraphPointAtIndex },
			{ "GetNumGraphPoint", &UFGPowerCircuit::execGetNumGraphPoint },
			{ "GetStats", &UFGPowerCircuit::execGetStats },
			{ "IsFuseTriggered", &UFGPowerCircuit::execIsFuseTriggered },
			{ "ResetFuse", &UFGPowerCircuit::execResetFuse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics
	{
		struct FGPowerCircuit_eventGetGraphPointAtIndex_Parms
		{
			FPowerCircuitStats stats;
			int32 idx;
			FPowerGraphPoint out_item;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_item;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPowerCircuit_eventGetGraphPointAtIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPowerCircuit_eventGetGraphPointAtIndex_Parms), &Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_out_item = { "out_item", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPowerCircuit_eventGetGraphPointAtIndex_Parms, out_item), Z_Construct_UScriptStruct_FPowerGraphPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPowerCircuit_eventGetGraphPointAtIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPowerCircuit_eventGetGraphPointAtIndex_Parms, stats), Z_Construct_UScriptStruct_FPowerCircuitStats, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_out_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|PowerCircuit" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Get the graph point from the index in our stats,  @return false if the index is invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, nullptr, "GetGraphPointAtIndex", sizeof(FGPowerCircuit_eventGetGraphPointAtIndex_Parms), Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics
	{
		struct FGPowerCircuit_eventGetNumGraphPoint_Parms
		{
			FPowerCircuitStats stats;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPowerCircuit_eventGetNumGraphPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPowerCircuit_eventGetNumGraphPoint_Parms, stats), Z_Construct_UScriptStruct_FPowerCircuitStats, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|PowerCircuit" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Get how many graph points there is in our stats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, nullptr, "GetNumGraphPoint", sizeof(FGPowerCircuit_eventGetNumGraphPoint_Parms), Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics
	{
		struct FGPowerCircuit_eventGetStats_Parms
		{
			FPowerCircuitStats out_stats;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_stats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::NewProp_out_stats = { "out_stats", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPowerCircuit_eventGetStats_Parms, out_stats), Z_Construct_UScriptStruct_FPowerCircuitStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::NewProp_out_stats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|PowerCircuit" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Get the stats for this circuit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, nullptr, "GetStats", sizeof(FGPowerCircuit_eventGetStats_Parms), Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerCircuit_GetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics
	{
		struct FGPowerCircuit_eventIsFuseTriggered_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPowerCircuit_eventIsFuseTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPowerCircuit_eventIsFuseTriggered_Parms), &Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|PowerCircuit" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "@return true if the fuse is triggered; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, nullptr, "IsFuseTriggered", sizeof(FGPowerCircuit_eventIsFuseTriggered_Parms), Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerCircuit_ResetFuse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_ResetFuse_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|PowerCircuit" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Resets the fuse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_ResetFuse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, nullptr, "ResetFuse", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_ResetFuse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_ResetFuse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerCircuit_ResetFuse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerCircuit_ResetFuse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGPowerCircuit_NoRegister()
	{
		return UFGPowerCircuit::StaticClass();
	}
	struct Z_Construct_UClass_UFGPowerCircuit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPowerStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsFuseTriggered_MetaData[];
#endif
		static void NewProp_mIsFuseTriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsFuseTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerConsumed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPowerConsumed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerProduced_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPowerProduced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerProductionCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPowerProductionCapacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGPowerCircuit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGCircuit,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGPowerCircuit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex, "GetGraphPointAtIndex" }, // 533981443
		{ &Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint, "GetNumGraphPoint" }, // 3591420885
		{ &Z_Construct_UFunction_UFGPowerCircuit_GetStats, "GetStats" }, // 3719044561
		{ &Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered, "IsFuseTriggered" }, // 2856439553
		{ &Z_Construct_UFunction_UFGPowerCircuit_ResetFuse, "ResetFuse" }, // 4006600868
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGPowerCircuit.h" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Implementation of a power circuit." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerStats_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "The power consumption/production over time. Used for feedback." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerStats = { "mPowerStats", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGPowerCircuit, mPowerStats), Z_Construct_UScriptStruct_FPowerCircuitStats, METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerStats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "true if the fuse was triggered." },
	};
#endif
	void Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered_SetBit(void* Obj)
	{
		((UFGPowerCircuit*)Obj)->mIsFuseTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered = { "mIsFuseTriggered", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGPowerCircuit), &Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerConsumed_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Total amount of energy consumed in the circuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerConsumed = { "mPowerConsumed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGPowerCircuit, mPowerConsumed), METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerConsumed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerConsumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProduced_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Total amount of energy produced in the circuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProduced = { "mPowerProduced", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGPowerCircuit, mPowerProduced), METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProduced_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProduced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProductionCapacity_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Total amount of energy that can be produced in the circuit. Used for stats." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProductionCapacity = { "mPowerProductionCapacity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGPowerCircuit, mPowerProductionCapacity), METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProductionCapacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProductionCapacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGPowerCircuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerConsumed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProduced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProductionCapacity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGPowerCircuit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGPowerCircuit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGPowerCircuit_Statics::ClassParams = {
		&UFGPowerCircuit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGPowerCircuit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGPowerCircuit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGPowerCircuit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGPowerCircuit, 28306627);
	template<> FACTORYGAME_API UClass* StaticClass<UFGPowerCircuit>()
	{
		return UFGPowerCircuit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGPowerCircuit(Z_Construct_UClass_UFGPowerCircuit, &UFGPowerCircuit::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGPowerCircuit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGPowerCircuit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
