// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGWheeledVehicleMovementComponent6W.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWheeledVehicleMovementComponent6W() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EWheelOrder6W();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleTransmissionData6W();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleGearData6W();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleEngineData6W();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleDifferential6WData();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDifferentialSetup6W();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue();
// End Cross Module References
	static UEnum* EWheelOrder6W_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EWheelOrder6W, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EWheelOrder6W"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWheelOrder6W(EWheelOrder6W_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EWheelOrder6W"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EWheelOrder6W_CRC() { return 3349448607U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EWheelOrder6W()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWheelOrder6W"), 0, Get_Z_Construct_UEnum_FactoryGame_EWheelOrder6W_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eFRONT_LEFT", (int64)eFRONT_LEFT },
				{ "eFRONT_RIGHT", (int64)eFRONT_RIGHT },
				{ "eMID_LEFT", (int64)eMID_LEFT },
				{ "eMID_RIGHT", (int64)eMID_RIGHT },
				{ "eREAR_LEFT", (int64)eREAR_LEFT },
				{ "eREAR_RIGHT", (int64)eREAR_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWheelOrder6W",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EWheelOrder6W",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVehicleTransmissionData6W::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FVehicleTransmissionData6W_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleTransmissionData6W, Z_Construct_UPackage__Script_FactoryGame(), TEXT("VehicleTransmissionData6W"), sizeof(FVehicleTransmissionData6W), Get_Z_Construct_UScriptStruct_FVehicleTransmissionData6W_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleTransmissionData6W(FVehicleTransmissionData6W::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("VehicleTransmissionData6W"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleTransmissionData6W
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleTransmissionData6W()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleTransmissionData6W")),new UScriptStruct::TCppStructOps<FVehicleTransmissionData6W>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFVehicleTransmissionData6W;
	struct Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClutchStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClutchStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeutralGearUpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeutralGearUpRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseGearRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverseGearRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardGears_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForwardGears;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardGears_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinalRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearAutoBoxLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearAutoBoxLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearSwitchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearSwitchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGearAutoBox_MetaData[];
#endif
		static void NewProp_bUseGearAutoBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGearAutoBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleTransmissionData6W>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ClutchStrength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Strength of clutch (Kgm^2/s)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ClutchStrength = { UE4CodeGen_Private::EPropertyClass::Float, "ClutchStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FVehicleTransmissionData6W, ClutchStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ClutchStrength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ClutchStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_NeutralGearUpRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Value of engineRevs/maxEngineRevs that is high enough to increment gear" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_NeutralGearUpRatio = { UE4CodeGen_Private::EPropertyClass::Float, "NeutralGearUpRatio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FVehicleTransmissionData6W, NeutralGearUpRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_NeutralGearUpRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_NeutralGearUpRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ReverseGearRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Reverse gear ratio" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ReverseGearRatio = { UE4CodeGen_Private::EPropertyClass::Float, "ReverseGearRatio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FVehicleTransmissionData6W, ReverseGearRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ReverseGearRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ReverseGearRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ForwardGears_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Forward gear ratios (up to 30)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ForwardGears = { UE4CodeGen_Private::EPropertyClass::Array, "ForwardGears", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FVehicleTransmissionData6W, ForwardGears), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ForwardGears_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ForwardGears_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ForwardGears_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ForwardGears", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVehicleGearData6W, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_FinalRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "The final gear ratio multiplies the transmission gear ratios." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_FinalRatio = { UE4CodeGen_Private::EPropertyClass::Float, "FinalRatio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FVehicleTransmissionData6W, FinalRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_FinalRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_FinalRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearAutoBoxLatency_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bUseGearAutoBox" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Minimum time it takes the automatic transmission to initiate a gear change (seconds)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearAutoBoxLatency = { UE4CodeGen_Private::EPropertyClass::Float, "GearAutoBoxLatency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVehicleTransmissionData6W, GearAutoBoxLatency), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearAutoBoxLatency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearAutoBoxLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearSwitchTime_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Time it takes to switch gears (seconds)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearSwitchTime = { UE4CodeGen_Private::EPropertyClass::Float, "GearSwitchTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVehicleTransmissionData6W, GearSwitchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearSwitchTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearSwitchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_bUseGearAutoBox_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "DisplayName", "Automatic Transmission" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Whether to use automatic transmission" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_bUseGearAutoBox_SetBit(void* Obj)
	{
		((FVehicleTransmissionData6W*)Obj)->bUseGearAutoBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_bUseGearAutoBox = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGearAutoBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FVehicleTransmissionData6W), &Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_bUseGearAutoBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_bUseGearAutoBox_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_bUseGearAutoBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ClutchStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_NeutralGearUpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ReverseGearRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ForwardGears,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_ForwardGears_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_FinalRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearAutoBoxLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_GearSwitchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::NewProp_bUseGearAutoBox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"VehicleTransmissionData6W",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FVehicleTransmissionData6W),
		alignof(FVehicleTransmissionData6W),
		Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleTransmissionData6W()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleTransmissionData6W_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleTransmissionData6W"), sizeof(FVehicleTransmissionData6W), Get_Z_Construct_UScriptStruct_FVehicleTransmissionData6W_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleTransmissionData6W_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleTransmissionData6W_CRC() { return 852082265U; }
class UScriptStruct* FVehicleGearData6W::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FVehicleGearData6W_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleGearData6W, Z_Construct_UPackage__Script_FactoryGame(), TEXT("VehicleGearData6W"), sizeof(FVehicleGearData6W), Get_Z_Construct_UScriptStruct_FVehicleGearData6W_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleGearData6W(FVehicleGearData6W::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("VehicleGearData6W"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleGearData6W
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleGearData6W()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleGearData6W")),new UScriptStruct::TCppStructOps<FVehicleGearData6W>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFVehicleGearData6W;
	struct Z_Construct_UScriptStruct_FVehicleGearData6W_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleGearData6W>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_UpRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Value of engineRevs/maxEngineRevs that is high enough to gear up" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_UpRatio = { UE4CodeGen_Private::EPropertyClass::Float, "UpRatio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVehicleGearData6W, UpRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_UpRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_UpRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_DownRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Value of engineRevs/maxEngineRevs that is low enough to gear down" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_DownRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DownRatio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVehicleGearData6W, DownRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_DownRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_DownRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Determines the amount of torque multiplication" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_Ratio = { UE4CodeGen_Private::EPropertyClass::Float, "Ratio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVehicleGearData6W, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_Ratio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_Ratio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_UpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_DownRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::NewProp_Ratio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"VehicleGearData6W",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FVehicleGearData6W),
		alignof(FVehicleGearData6W),
		Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleGearData6W()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleGearData6W_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleGearData6W"), sizeof(FVehicleGearData6W), Get_Z_Construct_UScriptStruct_FVehicleGearData6W_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleGearData6W_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleGearData6W_CRC() { return 3881481469U; }
class UScriptStruct* FVehicleEngineData6W::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FVehicleEngineData6W_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleEngineData6W, Z_Construct_UPackage__Script_FactoryGame(), TEXT("VehicleEngineData6W"), sizeof(FVehicleEngineData6W), Get_Z_Construct_UScriptStruct_FVehicleEngineData6W_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleEngineData6W(FVehicleEngineData6W::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("VehicleEngineData6W"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleEngineData6W
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleEngineData6W()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleEngineData6W")),new UScriptStruct::TCppStructOps<FVehicleEngineData6W>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFVehicleEngineData6W;
	struct Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateZeroThrottleClutchDisengaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateZeroThrottleClutchEngaged_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateZeroThrottleClutchEngaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateFullThrottle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateFullThrottle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MOI_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MOI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorqueCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TorqueCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleEngineData6W>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Damping rate of engine in at zero throttle when the clutch is disengaged (in neutral gear) (Kgm^2/s)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged = { UE4CodeGen_Private::EPropertyClass::Float, "DampingRateZeroThrottleClutchDisengaged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FVehicleEngineData6W, DampingRateZeroThrottleClutchDisengaged), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchEngaged_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Damping rate of engine in at zero throttle when the clutch is engaged (Kgm^2/s)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchEngaged = { UE4CodeGen_Private::EPropertyClass::Float, "DampingRateZeroThrottleClutchEngaged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FVehicleEngineData6W, DampingRateZeroThrottleClutchEngaged), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchEngaged_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchEngaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateFullThrottle_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Damping rate of engine when full throttle is applied (Kgm^2/s)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateFullThrottle = { UE4CodeGen_Private::EPropertyClass::Float, "DampingRateFullThrottle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FVehicleEngineData6W, DampingRateFullThrottle), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateFullThrottle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateFullThrottle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MOI_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Moment of inertia of the engine around the axis of rotation (Kgm^2)." },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MOI = { UE4CodeGen_Private::EPropertyClass::Float, "MOI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVehicleEngineData6W, MOI), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MOI_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MOI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MaxRPM_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Maximum revolutions per minute of the engine" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MaxRPM = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRPM", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVehicleEngineData6W, MaxRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MaxRPM_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MaxRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_TorqueCurve_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Torque (Nm) at a given RPM" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_TorqueCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "TorqueCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVehicleEngineData6W, TorqueCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_TorqueCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_TorqueCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateZeroThrottleClutchEngaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_DampingRateFullThrottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MOI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_MaxRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::NewProp_TorqueCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"VehicleEngineData6W",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FVehicleEngineData6W),
		alignof(FVehicleEngineData6W),
		Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleEngineData6W()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleEngineData6W_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleEngineData6W"), sizeof(FVehicleEngineData6W), Get_Z_Construct_UScriptStruct_FVehicleEngineData6W_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleEngineData6W_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleEngineData6W_CRC() { return 199092690U; }
class UScriptStruct* FVehicleDifferential6WData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FVehicleDifferential6WData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleDifferential6WData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("VehicleDifferential6WData"), sizeof(FVehicleDifferential6WData), Get_Z_Construct_UScriptStruct_FVehicleDifferential6WData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleDifferential6WData(FVehicleDifferential6WData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("VehicleDifferential6WData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleDifferential6WData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleDifferential6WData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleDifferential6WData")),new UScriptStruct::TCppStructOps<FVehicleDifferential6WData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFVehicleDifferential6WData;
	struct Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferentialConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifferentialConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleDifferential6WData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::NewProp_DifferentialConfig_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Type of differential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::NewProp_DifferentialConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "DifferentialConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVehicleDifferential6WData, DifferentialConfig), Z_Construct_UScriptStruct_FDifferentialSetup6W, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::NewProp_DifferentialConfig_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::NewProp_DifferentialConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::NewProp_DifferentialConfig,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"VehicleDifferential6WData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FVehicleDifferential6WData),
		alignof(FVehicleDifferential6WData),
		Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleDifferential6WData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleDifferential6WData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleDifferential6WData"), sizeof(FVehicleDifferential6WData), Get_Z_Construct_UScriptStruct_FVehicleDifferential6WData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleDifferential6WData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleDifferential6WData_CRC() { return 2815184850U; }
class UScriptStruct* FDifferentialSetup6W::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FDifferentialSetup6W_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDifferentialSetup6W, Z_Construct_UPackage__Script_FactoryGame(), TEXT("DifferentialSetup6W"), sizeof(FDifferentialSetup6W), Get_Z_Construct_UScriptStruct_FDifferentialSetup6W_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDifferentialSetup6W(FDifferentialSetup6W::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("DifferentialSetup6W"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFDifferentialSetup6W
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFDifferentialSetup6W()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DifferentialSetup6W")),new UScriptStruct::TCppStructOps<FDifferentialSetup6W>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFDifferentialSetup6W;
	struct Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rear_MetaData[];
#endif
		static void NewProp_Rear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Rear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mid_MetaData[];
#endif
		static void NewProp_Mid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Mid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[];
#endif
		static void NewProp_Front_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Front;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Described which axles are powered by the engine. True == Powered." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDifferentialSetup6W>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Rear_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Rear_SetBit(void* Obj)
	{
		((FDifferentialSetup6W*)Obj)->Rear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Rear = { UE4CodeGen_Private::EPropertyClass::Bool, "Rear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDifferentialSetup6W), &Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Rear_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Rear_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Rear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Mid_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Mid_SetBit(void* Obj)
	{
		((FDifferentialSetup6W*)Obj)->Mid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Mid = { UE4CodeGen_Private::EPropertyClass::Bool, "Mid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDifferentialSetup6W), &Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Mid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Mid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Mid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Front_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Front_SetBit(void* Obj)
	{
		((FDifferentialSetup6W*)Obj)->Front = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Front = { UE4CodeGen_Private::EPropertyClass::Bool, "Front", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDifferentialSetup6W), &Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Front_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Front_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Front_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Rear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Mid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::NewProp_Front,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"DifferentialSetup6W",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDifferentialSetup6W),
		alignof(FDifferentialSetup6W),
		Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDifferentialSetup6W()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDifferentialSetup6W_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DifferentialSetup6W"), sizeof(FDifferentialSetup6W), Get_Z_Construct_UScriptStruct_FDifferentialSetup6W_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDifferentialSetup6W_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDifferentialSetup6W_CRC() { return 450530258U; }
	void UFGWheeledVehicleMovementComponent6W::StaticRegisterNativesUFGWheeledVehicleMovementComponent6W()
	{
		UClass* Class = UFGWheeledVehicleMovementComponent6W::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLargestLateralSlip", &UFGWheeledVehicleMovementComponent6W::execGetLargestLateralSlip },
			{ "GetLargestLongitudinalSlip", &UFGWheeledVehicleMovementComponent6W::execGetLargestLongitudinalSlip },
			{ "GetLargestTireLoadValue", &UFGWheeledVehicleMovementComponent6W::execGetLargestTireLoadValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics
	{
		struct FGWheeledVehicleMovementComponent6W_eventGetLargestLateralSlip_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWheeledVehicleMovementComponent6W_eventGetLargestLateralSlip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "returns the current largest lat slip of the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W, "GetLargestLateralSlip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14080401, sizeof(FGWheeledVehicleMovementComponent6W_eventGetLargestLateralSlip_Parms), Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics
	{
		struct FGWheeledVehicleMovementComponent6W_eventGetLargestLongitudinalSlip_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWheeledVehicleMovementComponent6W_eventGetLargestLongitudinalSlip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "returns the current largest long slip of the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W, "GetLargestLongitudinalSlip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14080401, sizeof(FGWheeledVehicleMovementComponent6W_eventGetLargestLongitudinalSlip_Parms), Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics
	{
		struct FGWheeledVehicleMovementComponent6W_eventGetLargestTireLoadValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWheeledVehicleMovementComponent6W_eventGetLargestTireLoadValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "returns the current largest tire load of the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W, "GetLargestTireLoadValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14080401, sizeof(FGWheeledVehicleMovementComponent6W_eventGetLargestTireLoadValue_Parms), Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_NoRegister()
	{
		return UFGWheeledVehicleMovementComponent6W::StaticClass();
	}
	struct Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AckermannAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AckermannAccuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteeringCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDownShiftLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDownShiftLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmissionSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransmissionSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSlopeShiftRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSlopeShiftRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDSOLMaxSlopeAngleLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDSOLMaxSlopeAngleLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseDSOLGearbox_MetaData[];
#endif
		static void NewProp_mUseDSOLGearbox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseDSOLGearbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferentialSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifferentialSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EngineSetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWheeledVehicleMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLateralSlip, "GetLargestLateralSlip" }, // 2367089678
		{ &Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestLongitudinalSlip, "GetLargestLongitudinalSlip" }, // 3704160269
		{ &Z_Construct_UFunction_UFGWheeledVehicleMovementComponent6W_GetLargestTireLoadValue, "GetLargestTireLoadValue" }, // 1270528967
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation" },
		{ "IncludePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_AckermannAccuracy_MetaData[] = {
		{ "Category", "SteeringSetup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Accuracy of Ackermann steer calculation (range: 0..1)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_AckermannAccuracy = { UE4CodeGen_Private::EPropertyClass::Float, "AckermannAccuracy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040040000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, AckermannAccuracy), METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_AckermannAccuracy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_AckermannAccuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_SteeringCurve_MetaData[] = {
		{ "Category", "SteeringSetup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Maximum steering versus forward speed (km/h)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_SteeringCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "SteeringCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, SteeringCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_SteeringCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_SteeringCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDownShiftLatency_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Multiplier for down shifting latency. Eg. it may be better to have a faster latency when downshifting" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDownShiftLatency = { UE4CodeGen_Private::EPropertyClass::Float, "mDownShiftLatency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, mDownShiftLatency), METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDownShiftLatency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDownShiftLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_TransmissionSetup_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Transmission data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_TransmissionSetup = { UE4CodeGen_Private::EPropertyClass::Struct, "TransmissionSetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, TransmissionSetup), Z_Construct_UScriptStruct_FVehicleTransmissionData6W, METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_TransmissionSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_TransmissionSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mSlopeShiftRatio_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Amount of ADDITIONAL required gear ratio in order to shift up or down, given a slope. The result is that on steep slopes, the vehicle will shift up at a higher ratio and shift down at a higher ratio." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mSlopeShiftRatio = { UE4CodeGen_Private::EPropertyClass::Float, "mSlopeShiftRatio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, mSlopeShiftRatio), METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mSlopeShiftRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mSlopeShiftRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDSOLMaxSlopeAngleLimit_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Max slope Angle Limit (in degrees) in order to use all of SlopeShiftRatio" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDSOLMaxSlopeAngleLimit = { UE4CodeGen_Private::EPropertyClass::Float, "mDSOLMaxSlopeAngleLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, mDSOLMaxSlopeAngleLimit), METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDSOLMaxSlopeAngleLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDSOLMaxSlopeAngleLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mUseDSOLGearbox_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "DisplayName", "Use Jace's special gearbox" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Use Jace's super awesome custom gearbox or not" },
	};
#endif
	void Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mUseDSOLGearbox_SetBit(void* Obj)
	{
		((UFGWheeledVehicleMovementComponent6W*)Obj)->mUseDSOLGearbox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mUseDSOLGearbox = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseDSOLGearbox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGWheeledVehicleMovementComponent6W), &Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mUseDSOLGearbox_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mUseDSOLGearbox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mUseDSOLGearbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_DifferentialSetup_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Differential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_DifferentialSetup = { UE4CodeGen_Private::EPropertyClass::Struct, "DifferentialSetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, DifferentialSetup), Z_Construct_UScriptStruct_FVehicleDifferential6WData, METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_DifferentialSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_DifferentialSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_EngineSetup_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent6W.h" },
		{ "ToolTip", "Engine" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_EngineSetup = { UE4CodeGen_Private::EPropertyClass::Struct, "EngineSetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent6W, EngineSetup), Z_Construct_UScriptStruct_FVehicleEngineData6W, METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_EngineSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_EngineSetup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_AckermannAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_SteeringCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDownShiftLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_TransmissionSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mSlopeShiftRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mDSOLMaxSlopeAngleLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_mUseDSOLGearbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_DifferentialSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::NewProp_EngineSetup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGWheeledVehicleMovementComponent6W>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::ClassParams = {
		&UFGWheeledVehicleMovementComponent6W::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWheeledVehicleMovementComponent6W, 853356683);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWheeledVehicleMovementComponent6W(Z_Construct_UClass_UFGWheeledVehicleMovementComponent6W, &UFGWheeledVehicleMovementComponent6W::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWheeledVehicleMovementComponent6W"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWheeledVehicleMovementComponent6W);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFGWheeledVehicleMovementComponent6W)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
