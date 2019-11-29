// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRailroadTimeTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadTimeTable() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTimeTableStop();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadTimeTable_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadTimeTable();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_AddStop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetStop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetStops();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_IncrementCurrentStop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_SetStops();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FTimeTableStop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FTimeTableStop_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeTableStop, Z_Construct_UPackage__Script_FactoryGame(), TEXT("TimeTableStop"), sizeof(FTimeTableStop), Get_Z_Construct_UScriptStruct_FTimeTableStop_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FTimeTableStop>()
{
	return FTimeTableStop::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeTableStop(FTimeTableStop::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("TimeTableStop"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFTimeTableStop
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFTimeTableStop()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimeTableStop")),new UScriptStruct::TCppStructOps<FTimeTableStop>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFTimeTableStop;
	struct Z_Construct_UScriptStruct_FTimeTableStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Station_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Station;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeTableStop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "A stop entry in the time table." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeTableStop>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "TimeTableStop" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Time to stay." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000001000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeTableStop, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Station_MetaData[] = {
		{ "Category", "TimeTableStop" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Where to stop." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Station = { "Station", nullptr, (EPropertyFlags)0x0010000001000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeTableStop, Station), Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Station_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Station_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeTableStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeTableStop_Statics::NewProp_Station,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeTableStop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"TimeTableStop",
		sizeof(FTimeTableStop),
		alignof(FTimeTableStop),
		Z_Construct_UScriptStruct_FTimeTableStop_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeTableStop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeTableStop_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeTableStop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeTableStop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeTableStop_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimeTableStop"), sizeof(FTimeTableStop), Get_Z_Construct_UScriptStruct_FTimeTableStop_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimeTableStop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeTableStop_Hash() { return 3883532207U; }
	void AFGRailroadTimeTable::StaticRegisterNativesAFGRailroadTimeTable()
	{
		UClass* Class = AFGRailroadTimeTable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStop", &AFGRailroadTimeTable::execAddStop },
			{ "GetCurrentStop", &AFGRailroadTimeTable::execGetCurrentStop },
			{ "GetMaxNumStops", &AFGRailroadTimeTable::execGetMaxNumStops },
			{ "GetNumStops", &AFGRailroadTimeTable::execGetNumStops },
			{ "GetStop", &AFGRailroadTimeTable::execGetStop },
			{ "GetStops", &AFGRailroadTimeTable::execGetStops },
			{ "IncrementCurrentStop", &AFGRailroadTimeTable::execIncrementCurrentStop },
			{ "IsValidStop", &AFGRailroadTimeTable::execIsValidStop },
			{ "RemoveStop", &AFGRailroadTimeTable::execRemoveStop },
			{ "SetCurrentStop", &AFGRailroadTimeTable::execSetCurrentStop },
			{ "SetStops", &AFGRailroadTimeTable::execSetStops },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics
	{
		struct FGRailroadTimeTable_eventAddStop_Parms
		{
			int32 index;
			FTimeTableStop stop;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stop;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRailroadTimeTable_eventAddStop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGRailroadTimeTable_eventAddStop_Parms), &Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_stop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_stop = { "stop", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventAddStop_Parms, stop), Z_Construct_UScriptStruct_FTimeTableStop, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_stop_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_stop_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventAddStop_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_stop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Add a stop to the time table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "AddStop", sizeof(FGRailroadTimeTable_eventAddStop_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_AddStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_AddStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics
	{
		struct FGRailroadTimeTable_eventGetCurrentStop_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventGetCurrentStop_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "@return Current stop the train is at or heading to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "GetCurrentStop", sizeof(FGRailroadTimeTable_eventGetCurrentStop_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics
	{
		struct FGRailroadTimeTable_eventGetMaxNumStops_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventGetMaxNumStops_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Get the number of stops." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "GetMaxNumStops", sizeof(FGRailroadTimeTable_eventGetMaxNumStops_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics
	{
		struct FGRailroadTimeTable_eventGetNumStops_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventGetNumStops_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Get the number of stops." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "GetNumStops", sizeof(FGRailroadTimeTable_eventGetNumStops_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics
	{
		struct FGRailroadTimeTable_eventGetStop_Parms
		{
			int32 index;
			FTimeTableStop ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventGetStop_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimeTableStop, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventGetStop_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Get the given stop.\n@return The stop at index, valid or invalid. If the index is invalid it returns an empty stop." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "GetStop", sizeof(FGRailroadTimeTable_eventGetStop_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_GetStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics
	{
		struct FGRailroadTimeTable_eventGetStops_Parms
		{
			TArray<FTimeTableStop> out_stops;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_stops;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_stops_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::NewProp_out_stops = { "out_stops", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventGetStops_Parms, out_stops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::NewProp_out_stops_Inner = { "out_stops", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimeTableStop, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::NewProp_out_stops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::NewProp_out_stops_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Get all stops in the time table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "GetStops", sizeof(FGRailroadTimeTable_eventGetStops_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_GetStops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_GetStops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_IncrementCurrentStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_IncrementCurrentStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Increment the current stop to the next one in order." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_IncrementCurrentStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "IncrementCurrentStop", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_IncrementCurrentStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_IncrementCurrentStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_IncrementCurrentStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_IncrementCurrentStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics
	{
		struct FGRailroadTimeTable_eventIsValidStop_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRailroadTimeTable_eventIsValidStop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGRailroadTimeTable_eventIsValidStop_Parms), &Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventIsValidStop_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Is the index a valid stop.\nChecks if the index is valid and the 'Stop' actor is valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "IsValidStop", sizeof(FGRailroadTimeTable_eventIsValidStop_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics
	{
		struct FGRailroadTimeTable_eventRemoveStop_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventRemoveStop_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Remove a stop from the time table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "RemoveStop", sizeof(FGRailroadTimeTable_eventRemoveStop_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics
	{
		struct FGRailroadTimeTable_eventSetCurrentStop_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventSetCurrentStop_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "@param index Set the stop the train is heading to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "SetCurrentStop", sizeof(FGRailroadTimeTable_eventSetCurrentStop_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics
	{
		struct FGRailroadTimeTable_eventSetStops_Parms
		{
			TArray<FTimeTableStop> stops;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stops_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_stops;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stops_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRailroadTimeTable_eventSetStops_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGRailroadTimeTable_eventSetStops_Parms), &Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_stops_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_stops = { "stops", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTimeTable_eventSetStops_Parms, stops), METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_stops_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_stops_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_stops_Inner = { "stops", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimeTableStop, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_stops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::NewProp_stops_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TimeTable" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Set all stops in the time table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadTimeTable, nullptr, "SetStops", sizeof(FGRailroadTimeTable_eventSetStops_Parms), Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadTimeTable_SetStops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadTimeTable_SetStops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGRailroadTimeTable_NoRegister()
	{
		return AFGRailroadTimeTable::StaticClass();
	}
	struct Z_Construct_UClass_AFGRailroadTimeTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCurrentStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStops_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mStops;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mStops_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRailroadTimeTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGRailroadTimeTable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_AddStop, "AddStop" }, // 1917268644
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_GetCurrentStop, "GetCurrentStop" }, // 2977872662
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_GetMaxNumStops, "GetMaxNumStops" }, // 3364846942
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_GetNumStops, "GetNumStops" }, // 1189269645
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_GetStop, "GetStop" }, // 2595382539
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_GetStops, "GetStops" }, // 204661082
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_IncrementCurrentStop, "IncrementCurrentStop" }, // 1160218327
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_IsValidStop, "IsValidStop" }, // 1813659637
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_RemoveStop, "RemoveStop" }, // 2483392454
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_SetCurrentStop, "SetCurrentStop" }, // 3605664190
		{ &Z_Construct_UFunction_AFGRailroadTimeTable_SetStops, "SetStops" }, // 1092327405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTimeTable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGRailroadTimeTable.h" },
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Object containing a trains time table and where it is right now." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mCurrentStop_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Current stop the train is at or heading to." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mCurrentStop = { "mCurrentStop", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadTimeTable, mCurrentStop), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mCurrentStop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mCurrentStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mStops_MetaData[] = {
		{ "ModuleRelativePath", "FGRailroadTimeTable.h" },
		{ "ToolTip", "Array of destinations this train will visit." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mStops = { "mStops", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadTimeTable, mStops), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mStops_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mStops_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mStops_Inner = { "mStops", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimeTableStop, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRailroadTimeTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mCurrentStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mStops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTimeTable_Statics::NewProp_mStops_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGRailroadTimeTable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGRailroadTimeTable, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRailroadTimeTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRailroadTimeTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRailroadTimeTable_Statics::ClassParams = {
		&AFGRailroadTimeTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGRailroadTimeTable_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTimeTable_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTimeTable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTimeTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRailroadTimeTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRailroadTimeTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRailroadTimeTable, 3586095883);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRailroadTimeTable>()
	{
		return AFGRailroadTimeTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRailroadTimeTable(Z_Construct_UClass_AFGRailroadTimeTable, &AFGRailroadTimeTable::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRailroadTimeTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRailroadTimeTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
