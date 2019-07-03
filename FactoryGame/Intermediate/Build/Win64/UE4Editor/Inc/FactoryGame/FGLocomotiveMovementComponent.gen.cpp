// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGLocomotiveMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGLocomotiveMovementComponent() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EMultipleUnitControl();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadVehicleInputRate();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadVehicleMovementComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	static UEnum* EMultipleUnitControl_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EMultipleUnitControl, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EMultipleUnitControl"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMultipleUnitControl(EMultipleUnitControl_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EMultipleUnitControl"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EMultipleUnitControl_CRC() { return 1686592608U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EMultipleUnitControl()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMultipleUnitControl"), 0, Get_Z_Construct_UEnum_FactoryGame_EMultipleUnitControl_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMultipleUnitControl::MUC_Disabled", (int64)EMultipleUnitControl::MUC_Disabled },
				{ "EMultipleUnitControl::MUC_Master", (int64)EMultipleUnitControl::MUC_Master },
				{ "EMultipleUnitControl::MUC_Slave", (int64)EMultipleUnitControl::MUC_Slave },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
				{ "MUC_Disabled.DisplayName", "Disabled" },
				{ "MUC_Master.DisplayName", "Master" },
				{ "MUC_Slave.DisplayName", "Slave" },
				{ "ToolTip", "Enum to indicate which MU state a locomotive is in.\nDisabled: MU is disabled, train has no driver (nor AI).\nMaster: This unit controls all slave units in the train, this is where the driver sits (or AI).\nSlave: Cannot be controlled, even if occupied by a player, gets input from the master." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMultipleUnitControl",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMultipleUnitControl",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRailroadVehicleInputRate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRailroadVehicleInputRate, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RailroadVehicleInputRate"), sizeof(FRailroadVehicleInputRate), Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRailroadVehicleInputRate(FRailroadVehicleInputRate::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("RailroadVehicleInputRate"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadVehicleInputRate
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadVehicleInputRate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RailroadVehicleInputRate")),new UScriptStruct::TCppStructOps<FRailroadVehicleInputRate>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFRailroadVehicleInputRate;
	struct Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiseRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRailroadVehicleInputRate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which the input value falls" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate = { UE4CodeGen_Private::EPropertyClass::Float, "FallRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRailroadVehicleInputRate, FallRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which the input value rises" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate = { UE4CodeGen_Private::EPropertyClass::Float, "RiseRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRailroadVehicleInputRate, RiseRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"RailroadVehicleInputRate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRailroadVehicleInputRate),
		alignof(FRailroadVehicleInputRate),
		Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRailroadVehicleInputRate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RailroadVehicleInputRate"), sizeof(FRailroadVehicleInputRate), Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_CRC() { return 1213367442U; }
class UScriptStruct* FReplicatedRailroadVehicleState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ReplicatedRailroadVehicleState"), sizeof(FReplicatedRailroadVehicleState), Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicatedRailroadVehicleState(FReplicatedRailroadVehicleState::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ReplicatedRailroadVehicleState"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFReplicatedRailroadVehicleState
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFReplicatedRailroadVehicleState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicatedRailroadVehicleState")),new UScriptStruct::TCppStructOps<FReplicatedRailroadVehicleState>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFReplicatedRailroadVehicleState;
	struct Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrottleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverserInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReverserInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Some replicated state for this movement component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedRailroadVehicleState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: air brakes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput = { UE4CodeGen_Private::EPropertyClass::Float, "AirBrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FReplicatedRailroadVehicleState, AirBrakeInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: dynamic brakes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput = { UE4CodeGen_Private::EPropertyClass::Float, "DynamicBrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FReplicatedRailroadVehicleState, DynamicBrakeInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: throttle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput = { UE4CodeGen_Private::EPropertyClass::Float, "ThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FReplicatedRailroadVehicleState, ThrottleInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: steering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput = { UE4CodeGen_Private::EPropertyClass::Float, "SteeringInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FReplicatedRailroadVehicleState, SteeringInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: steering" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput = { UE4CodeGen_Private::EPropertyClass::Int, "ReverserInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FReplicatedRailroadVehicleState, ReverserInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ReplicatedRailroadVehicleState",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FReplicatedRailroadVehicleState),
		alignof(FReplicatedRailroadVehicleState),
		Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicatedRailroadVehicleState"), sizeof(FReplicatedRailroadVehicleState), Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_CRC() { return 2937336437U; }
	static FName NAME_UFGLocomotiveMovementComponent_ServerUpdateState = FName(TEXT("ServerUpdateState"));
	void UFGLocomotiveMovementComponent::ServerUpdateState(int32 inReverserInput, float inSteeringInput, float inThrottleInput, float inDynamicBrakeInput, float inAirBrakeInput)
	{
		FGLocomotiveMovementComponent_eventServerUpdateState_Parms Parms;
		Parms.inReverserInput=inReverserInput;
		Parms.inSteeringInput=inSteeringInput;
		Parms.inThrottleInput=inThrottleInput;
		Parms.inDynamicBrakeInput=inDynamicBrakeInput;
		Parms.inAirBrakeInput=inAirBrakeInput;
		ProcessEvent(FindFunctionChecked(NAME_UFGLocomotiveMovementComponent_ServerUpdateState),&Parms);
	}
	void UFGLocomotiveMovementComponent::StaticRegisterNativesUFGLocomotiveMovementComponent()
	{
		UClass* Class = UFGLocomotiveMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAirBrake", &UFGLocomotiveMovementComponent::execGetAirBrake },
			{ "GetDynamicBrake", &UFGLocomotiveMovementComponent::execGetDynamicBrake },
			{ "GetMaxDynamicBrakingEffort", &UFGLocomotiveMovementComponent::execGetMaxDynamicBrakingEffort },
			{ "GetMaxTractiveEffort", &UFGLocomotiveMovementComponent::execGetMaxTractiveEffort },
			{ "GetReverser", &UFGLocomotiveMovementComponent::execGetReverser },
			{ "GetThrottle", &UFGLocomotiveMovementComponent::execGetThrottle },
			{ "ServerUpdateState", &UFGLocomotiveMovementComponent::execServerUpdateState },
			{ "SetAirBrakeInput", &UFGLocomotiveMovementComponent::execSetAirBrakeInput },
			{ "SetEmergencyBrake", &UFGLocomotiveMovementComponent::execSetEmergencyBrake },
			{ "SetReverserInput", &UFGLocomotiveMovementComponent::execSetReverserInput },
			{ "SetSteeringInput", &UFGLocomotiveMovementComponent::execSetSteeringInput },
			{ "SetThrottleInput", &UFGLocomotiveMovementComponent::execSetThrottleInput },
			{ "UseReplicatedState", &UFGLocomotiveMovementComponent::execUseReplicatedState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetAirBrake_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetAirBrake_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Get the amount of pressure applied to the air brakes in range [0,1]. This is the trains version of hand brake." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "GetAirBrake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotiveMovementComponent_eventGetAirBrake_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetDynamicBrake_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetDynamicBrake_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Get the amount of dynamic braking in range [0,1]. This is the trains version of a cars engine brake.\nIt is applied when moving forward and applying reverse throttle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "GetDynamicBrake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotiveMovementComponent_eventGetDynamicBrake_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetMaxDynamicBrakingEffort_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetMaxDynamicBrakingEffort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Get max dynamic braking force. [N] [kg cm/s^2]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "GetMaxDynamicBrakingEffort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotiveMovementComponent_eventGetMaxDynamicBrakingEffort_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetMaxTractiveEffort_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetMaxTractiveEffort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Get maximum tractive force for this vehicle. [N] [kg cm/s^2]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "GetMaxTractiveEffort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotiveMovementComponent_eventGetMaxTractiveEffort_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetReverser_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetReverser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Returns the value of the reverser control. @see SetReverserInput" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "GetReverser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotiveMovementComponent_eventGetReverser_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetThrottle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetThrottle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Get the throttle value in range [0,1]. This is not the same as the raw data passed to SetThrottleInput" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "GetThrottle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotiveMovementComponent_eventGetThrottle_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inAirBrakeInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDynamicBrakeInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inThrottleInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inSteeringInput;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inReverserInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inAirBrakeInput = { UE4CodeGen_Private::EPropertyClass::Float, "inAirBrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inAirBrakeInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inDynamicBrakeInput = { UE4CodeGen_Private::EPropertyClass::Float, "inDynamicBrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inDynamicBrakeInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inThrottleInput = { UE4CodeGen_Private::EPropertyClass::Float, "inThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inThrottleInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inSteeringInput = { UE4CodeGen_Private::EPropertyClass::Float, "inSteeringInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inSteeringInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inReverserInput = { UE4CodeGen_Private::EPropertyClass::Int, "inReverserInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inReverserInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inAirBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inDynamicBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inSteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inReverserInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Pass current state to server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "ServerUpdateState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(FGLocomotiveMovementComponent_eventServerUpdateState_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics
	{
		struct FGLocomotiveMovementComponent_eventSetAirBrakeInput_Parms
		{
			float brake;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_brake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::NewProp_brake = { UE4CodeGen_Private::EPropertyClass::Float, "brake", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventSetAirBrakeInput_Parms, brake), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::NewProp_brake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Set the user input for air brakes (handbrake)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "SetAirBrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGLocomotiveMovementComponent_eventSetAirBrakeInput_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Sets all brakes to max and the throttle to zero." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "SetEmergencyBrake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics
	{
		struct FGLocomotiveMovementComponent_eventSetReverserInput_Parms
		{
			int32 reverser;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_reverser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::NewProp_reverser = { UE4CodeGen_Private::EPropertyClass::Int, "reverser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventSetReverserInput_Parms, reverser), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::NewProp_reverser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Set the value of the reverser control.\n 1: Forward, locomotive goes forwards.\n-1: Reverse, locomotive goes backwards.\n 0: Neutral, locomotive goes nowhere!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "SetReverserInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGLocomotiveMovementComponent_eventSetReverserInput_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics
	{
		struct FGLocomotiveMovementComponent_eventSetSteeringInput_Parms
		{
			float steering;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_steering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::NewProp_steering = { UE4CodeGen_Private::EPropertyClass::Float, "steering", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventSetSteeringInput_Parms, steering), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::NewProp_steering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle steering\nNegative: Flip turnout ahead to the right.\nPositive: Flip turnout ahead to the left.\nZero: Do nothing and go with the flow." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "SetSteeringInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGLocomotiveMovementComponent_eventSetSteeringInput_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics
	{
		struct FGLocomotiveMovementComponent_eventSetThrottleInput_Parms
		{
			float throttle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_throttle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::NewProp_throttle = { UE4CodeGen_Private::EPropertyClass::Float, "throttle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventSetThrottleInput_Parms, throttle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::NewProp_throttle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle throttle. Range [-1, 1].\nIf negative and the vehicle is moving forward this applies dynamic braking (not same as handbrake)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "SetThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGLocomotiveMovementComponent_eventSetThrottleInput_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Update the clients state from the replicated state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, "UseReplicatedState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister()
	{
		return UFGLocomotiveMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicBrakingEffortCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDynamicBrakingEffortCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTractiveEffortCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTractiveEffortCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDynamicBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAirBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAirBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mThrottleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSteeringInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSteeringInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReverserInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mReverserInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAirBrakeInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mAirBrakeInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicBrakeVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDynamicBrakeVelocityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicBrakeInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDynamicBrakeInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThrottleInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mThrottleInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawAirBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRawAirBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawDynamicBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRawDynamicBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRawThrottleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawSteeringInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRawSteeringInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawReverserInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mRawReverserInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicatedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mReplicatedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake, "GetAirBrake" }, // 3937007263
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake, "GetDynamicBrake" }, // 1657970821
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxDynamicBrakingEffort, "GetMaxDynamicBrakingEffort" }, // 1856155538
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetMaxTractiveEffort, "GetMaxTractiveEffort" }, // 3210395964
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser, "GetReverser" }, // 2443961387
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle, "GetThrottle" }, // 921103136
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState, "ServerUpdateState" }, // 3538797027
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput, "SetAirBrakeInput" }, // 1383913720
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake, "SetEmergencyBrake" }, // 800012726
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput, "SetReverserInput" }, // 467795164
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput, "SetSteeringInput" }, // 1058677005
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput, "SetThrottleInput" }, // 1237513765
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState, "UseReplicatedState" }, // 1957100617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGLocomotiveMovementComponent.h" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movement component for locomotives.\nThis is where input and controlling of the train is happening." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "The maximum dynamic braking force [kN] [kg m/s^2 * 1000] that can be delivered at a given speed [km/h]." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "mDynamicBrakingEffortCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakingEffortCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "The maximum tractive force [kN] [kg m/s^2 * 1000] that can be delivered at a given speed [km/h]." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "mTractiveEffortCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mTractiveEffortCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Dynamic brake output to physics system. Range 0...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput = { UE4CodeGen_Private::EPropertyClass::Float, "mDynamicBrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Air brake output to physics system. Range 0...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput = { UE4CodeGen_Private::EPropertyClass::Float, "mAirBrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mAirBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Accelerator output to physics system. Range 0...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput = { UE4CodeGen_Private::EPropertyClass::Float, "mThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mThrottleInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Steering output to physics system. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput = { UE4CodeGen_Private::EPropertyClass::Float, "mSteeringInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mSteeringInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Reversing control output to physics system. -1, 0, 1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput = { UE4CodeGen_Private::EPropertyClass::Int, "mReverserInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mReverserInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which input air brake can rise and fall." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate = { UE4CodeGen_Private::EPropertyClass::Struct, "mAirBrakeInputRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000001, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mAirBrakeInputRate), Z_Construct_UScriptStruct_FRailroadVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Velocity at which the dynamic brake can be engaged." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "mDynamicBrakeVelocityThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000001, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakeVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which input dynamic brake can rise and fall." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate = { UE4CodeGen_Private::EPropertyClass::Struct, "mDynamicBrakeInputRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000001, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakeInputRate), Z_Construct_UScriptStruct_FRailroadVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which input throttle can rise and fall." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate = { UE4CodeGen_Private::EPropertyClass::Struct, "mThrottleInputRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000001, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mThrottleInputRate), Z_Construct_UScriptStruct_FRailroadVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the air brake input is set to." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput = { UE4CodeGen_Private::EPropertyClass::Float, "mRawAirBrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawAirBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the dynamic brake input is set to." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput = { UE4CodeGen_Private::EPropertyClass::Float, "mRawDynamicBrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawDynamicBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the player has the accelerator set to. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput = { UE4CodeGen_Private::EPropertyClass::Float, "mRawThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawThrottleInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the player has the steering set to. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput = { UE4CodeGen_Private::EPropertyClass::Float, "mRawSteeringInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawSteeringInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the player has the reverser set to. Values -1, 0, 1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput = { UE4CodeGen_Private::EPropertyClass::Int, "mRawReverserInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawReverserInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "replicated state of vehicle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState = { UE4CodeGen_Private::EPropertyClass::Struct, "mReplicatedState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002020, 1, nullptr, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mReplicatedState), Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGLocomotiveMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::ClassParams = {
		&UFGLocomotiveMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGLocomotiveMovementComponent, 2368234508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGLocomotiveMovementComponent(Z_Construct_UClass_UFGLocomotiveMovementComponent, &UFGLocomotiveMovementComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGLocomotiveMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGLocomotiveMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
