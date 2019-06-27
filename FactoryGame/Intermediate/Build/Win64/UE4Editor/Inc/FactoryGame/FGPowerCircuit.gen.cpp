// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPowerCircuitStats_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerCircuitStats, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PowerCircuitStats"), sizeof(FPowerCircuitStats), Get_Z_Construct_UScriptStruct_FPowerCircuitStats_CRC());
	}
	return Singleton;
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
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_FirstIndex = { UE4CodeGen_Private::EPropertyClass::Int8, "FirstIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPowerCircuitStats, FirstIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_FirstIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_FirstIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "All the points on the graph." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPowerCircuitStats, Items), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPowerGraphPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerConsumed_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "How much power is consumed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerConsumed = { UE4CodeGen_Private::EPropertyClass::Float, "PowerConsumed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080000014, 1, nullptr, STRUCT_OFFSET(FPowerCircuitStats, PowerConsumed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerConsumed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerConsumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProduced_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "How much power is produced." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProduced = { UE4CodeGen_Private::EPropertyClass::Float, "PowerProduced", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080000014, 1, nullptr, STRUCT_OFFSET(FPowerCircuitStats, PowerProduced), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProduced_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProduced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProductionCapacity_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "How much power can be produced." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProductionCapacity = { UE4CodeGen_Private::EPropertyClass::Float, "PowerProductionCapacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080000014, 1, nullptr, STRUCT_OFFSET(FPowerCircuitStats, PowerProductionCapacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProductionCapacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_PowerProductionCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatHistoryTime_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "For how long do we keep the stats." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatHistoryTime = { UE4CodeGen_Private::EPropertyClass::Float, "StatHistoryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080000014, 1, nullptr, STRUCT_OFFSET(FPowerCircuitStats, StatHistoryTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatHistoryTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatHistoryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatIntervalTime_MetaData[] = {
		{ "Category", "PowerCircuitStats" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "The duration between each stat." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatIntervalTime = { UE4CodeGen_Private::EPropertyClass::Float, "StatIntervalTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080000014, 1, nullptr, STRUCT_OFFSET(FPowerCircuitStats, StatIntervalTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatIntervalTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::NewProp_StatIntervalTime_MetaData)) };
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
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPowerCircuitStats),
		alignof(FPowerCircuitStats),
		Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerCircuitStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerCircuitStats_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerCircuitStats"), sizeof(FPowerCircuitStats), Get_Z_Construct_UScriptStruct_FPowerCircuitStats_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerCircuitStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerCircuitStats_CRC() { return 1308467691U; }
class UScriptStruct* FPowerGraphPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPowerGraphPoint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerGraphPoint, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PowerGraphPoint"), sizeof(FPowerGraphPoint), Get_Z_Construct_UScriptStruct_FPowerGraphPoint_CRC());
	}
	return Singleton;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_ProductionCapacity = { UE4CodeGen_Private::EPropertyClass::Float, "ProductionCapacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FPowerGraphPoint, ProductionCapacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_ProductionCapacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_ProductionCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Produced_MetaData[] = {
		{ "Category", "PowerGraphPoint" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Produced = { UE4CodeGen_Private::EPropertyClass::Float, "Produced", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FPowerGraphPoint, Produced), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Produced_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Produced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Consumed_MetaData[] = {
		{ "Category", "PowerGraphPoint" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Data for this point." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Consumed = { UE4CodeGen_Private::EPropertyClass::Float, "Consumed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FPowerGraphPoint, Consumed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Consumed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::NewProp_Consumed_MetaData)) };
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
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPowerGraphPoint),
		alignof(FPowerGraphPoint),
		Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerGraphPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerGraphPoint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerGraphPoint"), sizeof(FPowerGraphPoint), Get_Z_Construct_UScriptStruct_FPowerGraphPoint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerGraphPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerGraphPoint_CRC() { return 1174854456U; }
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPowerCircuit_eventGetGraphPointAtIndex_Parms), &Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_out_item = { UE4CodeGen_Private::EPropertyClass::Struct, "out_item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGPowerCircuit_eventGetGraphPointAtIndex_Parms, out_item), Z_Construct_UScriptStruct_FPowerGraphPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPowerCircuit_eventGetGraphPointAtIndex_Parms, idx), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats = { UE4CodeGen_Private::EPropertyClass::Struct, "stats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGPowerCircuit_eventGetGraphPointAtIndex_Parms, stats), Z_Construct_UScriptStruct_FPowerCircuitStats, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_out_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::NewProp_stats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Get the graph point from the index in our stats,  @return false if the index is invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, "GetGraphPointAtIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGPowerCircuit_eventGetGraphPointAtIndex_Parms), Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPowerCircuit_eventGetNumGraphPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats = { UE4CodeGen_Private::EPropertyClass::Struct, "stats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGPowerCircuit_eventGetNumGraphPoint_Parms, stats), Z_Construct_UScriptStruct_FPowerCircuitStats, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::NewProp_stats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Get how many graph points there is in our stats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, "GetNumGraphPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGPowerCircuit_eventGetNumGraphPoint_Parms), Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::NewProp_out_stats = { UE4CodeGen_Private::EPropertyClass::Struct, "out_stats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGPowerCircuit_eventGetStats_Parms, out_stats), Z_Construct_UScriptStruct_FPowerCircuitStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::NewProp_out_stats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Get the stats for this circuit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, "GetStats", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGPowerCircuit_eventGetStats_Parms), Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_GetStats_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPowerCircuit_eventIsFuseTriggered_Parms), &Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "@return true if the fuse is triggered; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, "IsFuseTriggered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPowerCircuit_eventIsFuseTriggered_Parms), Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered_Statics::Function_MetaDataParams)) };
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
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Resets the fuse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuit_ResetFuse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuit, "ResetFuse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuit_ResetFuse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuit_ResetFuse_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UFGPowerCircuit_GetGraphPointAtIndex, "GetGraphPointAtIndex" }, // 1452015226
		{ &Z_Construct_UFunction_UFGPowerCircuit_GetNumGraphPoint, "GetNumGraphPoint" }, // 1703347313
		{ &Z_Construct_UFunction_UFGPowerCircuit_GetStats, "GetStats" }, // 1186427117
		{ &Z_Construct_UFunction_UFGPowerCircuit_IsFuseTriggered, "IsFuseTriggered" }, // 387674587
		{ &Z_Construct_UFunction_UFGPowerCircuit_ResetFuse, "ResetFuse" }, // 1816386140
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerStats = { UE4CodeGen_Private::EPropertyClass::Struct, "mPowerStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGPowerCircuit, mPowerStats), Z_Construct_UScriptStruct_FPowerCircuitStats, METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerStats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerStats_MetaData)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsFuseTriggered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGPowerCircuit), &Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mIsFuseTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerConsumed_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Total amount of energy consumed in the circuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerConsumed = { UE4CodeGen_Private::EPropertyClass::Float, "mPowerConsumed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGPowerCircuit, mPowerConsumed), METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerConsumed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerConsumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProduced_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Total amount of energy produced in the circuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProduced = { UE4CodeGen_Private::EPropertyClass::Float, "mPowerProduced", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGPowerCircuit, mPowerProduced), METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProduced_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProduced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProductionCapacity_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuit.h" },
		{ "ToolTip", "Total amount of energy that can be produced in the circuit. Used for stats." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProductionCapacity = { UE4CodeGen_Private::EPropertyClass::Float, "mPowerProductionCapacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGPowerCircuit, mPowerProductionCapacity), METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProductionCapacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::NewProp_mPowerProductionCapacity_MetaData)) };
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGPowerCircuit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuit_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGPowerCircuit, 152928643);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGPowerCircuit(Z_Construct_UClass_UFGPowerCircuit, &UFGPowerCircuit::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGPowerCircuit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGPowerCircuit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
