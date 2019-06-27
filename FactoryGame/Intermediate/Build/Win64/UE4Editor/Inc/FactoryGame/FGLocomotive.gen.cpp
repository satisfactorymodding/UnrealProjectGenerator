// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGLocomotive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGLocomotive() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESelfDrivingLocomotiveError();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGLocomotive_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGLocomotive();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_ClearPath();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_ClearSelfDrivingError();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EMultipleUnitControl();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_GetPath();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadPathPoint();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_GetPowerInfo();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerInfoComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_GetTargetPoints();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_HasPath();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_SetPath();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadPathFindingResult();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	static UEnum* ESelfDrivingLocomotiveError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ESelfDrivingLocomotiveError, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ESelfDrivingLocomotiveError"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelfDrivingLocomotiveError(ESelfDrivingLocomotiveError_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ESelfDrivingLocomotiveError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ESelfDrivingLocomotiveError_CRC() { return 1980653916U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ESelfDrivingLocomotiveError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelfDrivingLocomotiveError"), 0, Get_Z_Construct_UEnum_FactoryGame_ESelfDrivingLocomotiveError_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelfDrivingLocomotiveError::SDLE_NoError", (int64)ESelfDrivingLocomotiveError::SDLE_NoError },
				{ "ESelfDrivingLocomotiveError::SDLE_NoPower", (int64)ESelfDrivingLocomotiveError::SDLE_NoPower },
				{ "ESelfDrivingLocomotiveError::SDLE_NoTimeTable", (int64)ESelfDrivingLocomotiveError::SDLE_NoTimeTable },
				{ "ESelfDrivingLocomotiveError::SDLE_InvalidNextStop", (int64)ESelfDrivingLocomotiveError::SDLE_InvalidNextStop },
				{ "ESelfDrivingLocomotiveError::SDLE_InvalidLocomotivePlacement", (int64)ESelfDrivingLocomotiveError::SDLE_InvalidLocomotivePlacement },
				{ "ESelfDrivingLocomotiveError::SDLE_NoPath", (int64)ESelfDrivingLocomotiveError::SDLE_NoPath },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FGLocomotive.h" },
				{ "SDLE_InvalidLocomotivePlacement.DisplayName", "Invalid Locomotive Placement" },
				{ "SDLE_InvalidNextStop.DisplayName", "Invalid Next Stop" },
				{ "SDLE_NoError.DisplayName", "No Error" },
				{ "SDLE_NoPath.DisplayName", "No Path" },
				{ "SDLE_NoPower.DisplayName", "No Power" },
				{ "SDLE_NoTimeTable.DisplayName", "No Time Table" },
				{ "ToolTip", "Error codes for the self driving locomotives." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESelfDrivingLocomotiveError",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESelfDrivingLocomotiveError",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AFGLocomotive::StaticRegisterNativesAFGLocomotive()
	{
		UClass* Class = AFGLocomotive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSetTrainMultipleUnitMaster", &AFGLocomotive::execCanSetTrainMultipleUnitMaster },
			{ "ClearMultipleUnitControlMaster", &AFGLocomotive::execClearMultipleUnitControlMaster },
			{ "ClearPath", &AFGLocomotive::execClearPath },
			{ "ClearSelfDrivingError", &AFGLocomotive::execClearSelfDrivingError },
			{ "GetLocomotiveMovementComponent", &AFGLocomotive::execGetLocomotiveMovementComponent },
			{ "GetMultipleUnitRole", &AFGLocomotive::execGetMultipleUnitRole },
			{ "GetPath", &AFGLocomotive::execGetPath },
			{ "GetPowerInfo", &AFGLocomotive::execGetPowerInfo },
			{ "GetSelfDrivingError", &AFGLocomotive::execGetSelfDrivingError },
			{ "GetTargetPoints", &AFGLocomotive::execGetTargetPoints },
			{ "HasPath", &AFGLocomotive::execHasPath },
			{ "IsSelfDrivingEnabled", &AFGLocomotive::execIsSelfDrivingEnabled },
			{ "OnRep_ReplicatedMovementTransform", &AFGLocomotive::execOnRep_ReplicatedMovementTransform },
			{ "ReportSelfDrivingError", &AFGLocomotive::execReportSelfDrivingError },
			{ "SetMultipleUnitControlMaster", &AFGLocomotive::execSetMultipleUnitControlMaster },
			{ "SetPath", &AFGLocomotive::execSetPath },
			{ "SetSelfDrivingEnabled", &AFGLocomotive::execSetSelfDrivingEnabled },
			{ "UpdatePathSegment", &AFGLocomotive::execUpdatePathSegment },
			{ "UpdateTargetPoints", &AFGLocomotive::execUpdateTargetPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics
	{
		struct FGLocomotive_eventCanSetTrainMultipleUnitMaster_Parms
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
	void Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGLocomotive_eventCanSetTrainMultipleUnitMaster_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocomotive_eventCanSetTrainMultipleUnitMaster_Parms), &Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "@return true if we can set the multiple unit master on locomotive without forcing; false if we cannot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "CanSetTrainMultipleUnitMaster", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020405, sizeof(FGLocomotive_eventCanSetTrainMultipleUnitMaster_Parms), Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Clears this vehicle as the MU master.\nReturns the train to MU disabled until another one is set as master." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "ClearMultipleUnitControlMaster", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_ClearPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_ClearPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Clears the locomotives path." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_ClearPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "ClearPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_ClearPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_ClearPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_ClearPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_ClearPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_ClearSelfDrivingError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_ClearSelfDrivingError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Railroad|SelfDriving" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Clear all errors for the self driving locomotive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_ClearSelfDrivingError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "ClearSelfDrivingError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_ClearSelfDrivingError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_ClearSelfDrivingError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_ClearSelfDrivingError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_ClearSelfDrivingError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics
	{
		struct FGLocomotive_eventGetLocomotiveMovementComponent_Parms
		{
			UFGLocomotiveMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGLocomotive_eventGetLocomotiveMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "GetLocomotiveMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotive_eventGetLocomotiveMovementComponent_Parms), Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics
	{
		struct FGLocomotive_eventGetMultipleUnitRole_Parms
		{
			EMultipleUnitControl ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocomotive_eventGetMultipleUnitRole_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EMultipleUnitControl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Get the role for this locomotive when MUing.\n@see EMultipleUnitControl." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "GetMultipleUnitRole", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotive_eventGetMultipleUnitRole_Parms), Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_GetPath_Statics
	{
		struct FGLocomotive_eventGetPath_Parms
		{
			TArray<FRailroadPathPoint> out_points;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::NewProp_out_points = { UE4CodeGen_Private::EPropertyClass::Array, "out_points", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGLocomotive_eventGetPath_Parms, out_points), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::NewProp_out_points_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_points", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRailroadPathPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::NewProp_out_points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::NewProp_out_points_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Get the path ahead of this train.\n@param out_points Connections to follow, including switches, distance is the distance to the destination." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "GetPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGLocomotive_eventGetPath_Parms), Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_GetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_GetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics
	{
		struct FGLocomotive_eventGetPowerInfo_Parms
		{
			UFGPowerInfoComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGLocomotive_eventGetPowerInfo_Parms, ReturnValue), Z_Construct_UClass_UFGPowerInfoComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Railroad|Power" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Get the power info about this train. If it runs on electricity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "GetPowerInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotive_eventGetPowerInfo_Parms), Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_GetPowerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics
	{
		struct FGLocomotive_eventGetSelfDrivingError_Parms
		{
			ESelfDrivingLocomotiveError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGLocomotive_eventGetSelfDrivingError_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ESelfDrivingLocomotiveError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Railroad|SelfDriving" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Get the self driving error for this locomotive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "GetSelfDrivingError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotive_eventGetSelfDrivingError_Parms), Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics
	{
		struct FGLocomotive_eventGetTargetPoints_Parms
		{
			TArray<FRailroadPathPoint> out_points;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::NewProp_out_points = { UE4CodeGen_Private::EPropertyClass::Array, "out_points", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGLocomotive_eventGetTargetPoints_Parms, out_points), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::NewProp_out_points_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_points", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRailroadPathPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::NewProp_out_points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::NewProp_out_points_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Get the target points ahead of this train.\n@param out_points Target points along the track ahead: connections, switches, signals, stops etc.\n                  Distance is the distance from the locomotive to the target point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "GetTargetPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGLocomotive_eventGetTargetPoints_Parms), Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_GetTargetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_GetTargetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_HasPath_Statics
	{
		struct FGLocomotive_eventHasPath_Parms
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
	void Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGLocomotive_eventHasPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocomotive_eventHasPath_Parms), &Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "If this locomotive has a path, only checks if it has a path and not if the path still leads to the goal.\n@return true if path is set; false if path is not set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "HasPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotive_eventHasPath_Parms), Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_HasPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_HasPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics
	{
		struct FGLocomotive_eventIsSelfDrivingEnabled_Parms
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
	void Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGLocomotive_eventIsSelfDrivingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocomotive_eventIsSelfDrivingEnabled_Parms), &Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Enable self driving on the train." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "IsSelfDrivingEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGLocomotive_eventIsSelfDrivingEnabled_Parms), Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGLocomotive.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "OnRep_ReplicatedMovementTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics
	{
		struct FGLocomotive_eventReportSelfDrivingError_Parms
		{
			ESelfDrivingLocomotiveError error;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_error;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_error_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::NewProp_error = { UE4CodeGen_Private::EPropertyClass::Enum, "error", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotive_eventReportSelfDrivingError_Parms, error), Z_Construct_UEnum_FactoryGame_ESelfDrivingLocomotiveError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::NewProp_error_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::NewProp_error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::NewProp_error_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Railroad|SelfDriving" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Report an error to be displayed for the self driving locomotive. This also applies the emergency brakes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "ReportSelfDrivingError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(FGLocomotive_eventReportSelfDrivingError_Parms), Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics
	{
		struct FGLocomotive_eventSetMultipleUnitControlMaster_Parms
		{
			bool force;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGLocomotive_eventSetMultipleUnitControlMaster_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocomotive_eventSetMultipleUnitControlMaster_Parms), &Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_force_SetBit(void* Obj)
	{
		((FGLocomotive_eventSetMultipleUnitControlMaster_Parms*)Obj)->force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_force = { UE4CodeGen_Private::EPropertyClass::Bool, "force", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocomotive_eventSetMultipleUnitControlMaster_Parms), &Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_force_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_force,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Set this vehicle as the MU master.\nThis updates all other vehicles in the train accordingly.\n@param force Force this to be the master, sets any current master to slave.\n@return true on success; false if there is another master and this was not forced." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "SetMultipleUnitControlMaster", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(FGLocomotive_eventSetMultipleUnitControlMaster_Parms), Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_SetPath_Statics
	{
		struct FGLocomotive_eventSetPath_Parms
		{
			FRailroadPathFindingResult result;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGLocomotive_eventSetPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocomotive_eventSetPath_Parms), &Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::NewProp_result = { UE4CodeGen_Private::EPropertyClass::Struct, "result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGLocomotive_eventSetPath_Parms, result), Z_Construct_UScriptStruct_FRailroadPathFindingResult, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::NewProp_result_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Clears the old path and sets a new one path from a pathfinding result.\n@param The path finding result to set the path from. If result is invalid, old path is cleared but no new path is set.\n@return true if the new path is valid; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "SetPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGLocomotive_eventSetPath_Parms), Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_SetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_SetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics
	{
		struct FGLocomotive_eventSetSelfDrivingEnabled_Parms
		{
			bool isEnabled;
		};
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((FGLocomotive_eventSetSelfDrivingEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::NewProp_isEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "isEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocomotive_eventSetSelfDrivingEnabled_Parms), &Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Enable self driving on the train." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "SetSelfDrivingEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(FGLocomotive_eventSetSelfDrivingEnabled_Parms), Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics
	{
		struct FGLocomotive_eventUpdatePathSegment_Parms
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
	void Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGLocomotive_eventUpdatePathSegment_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGLocomotive_eventUpdatePathSegment_Parms), &Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Check and update where along the path we are." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "UpdatePathSegment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGLocomotive_eventUpdatePathSegment_Parms), Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics
	{
		struct FGLocomotive_eventUpdateTargetPoints_Parms
		{
			float maxDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::NewProp_maxDistance = { UE4CodeGen_Private::EPropertyClass::Float, "maxDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGLocomotive_eventUpdateTargetPoints_Parms, maxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::NewProp_maxDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Update our awareness of connections, switches, signals ahead." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "UpdateTargetPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGLocomotive_eventUpdateTargetPoints_Parms), Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGLocomotive_NoRegister()
	{
		return AFGLocomotive::StaticClass();
	}
	struct Z_Construct_UClass_AFGLocomotive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSelfDrivingError_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mSelfDrivingError;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mSelfDrivingError_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVehicleMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mVehicleMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicatedMovementTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mReplicatedMovementTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPowerInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPowerConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerConsumption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPowerConsumption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGLocomotive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGRailroadVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGLocomotive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster, "CanSetTrainMultipleUnitMaster" }, // 1477796008
		{ &Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster, "ClearMultipleUnitControlMaster" }, // 2542878782
		{ &Z_Construct_UFunction_AFGLocomotive_ClearPath, "ClearPath" }, // 1863505595
		{ &Z_Construct_UFunction_AFGLocomotive_ClearSelfDrivingError, "ClearSelfDrivingError" }, // 1032346682
		{ &Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent, "GetLocomotiveMovementComponent" }, // 12018535
		{ &Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole, "GetMultipleUnitRole" }, // 550401420
		{ &Z_Construct_UFunction_AFGLocomotive_GetPath, "GetPath" }, // 1637437519
		{ &Z_Construct_UFunction_AFGLocomotive_GetPowerInfo, "GetPowerInfo" }, // 883122041
		{ &Z_Construct_UFunction_AFGLocomotive_GetSelfDrivingError, "GetSelfDrivingError" }, // 4049811193
		{ &Z_Construct_UFunction_AFGLocomotive_GetTargetPoints, "GetTargetPoints" }, // 2427824164
		{ &Z_Construct_UFunction_AFGLocomotive_HasPath, "HasPath" }, // 1281758091
		{ &Z_Construct_UFunction_AFGLocomotive_IsSelfDrivingEnabled, "IsSelfDrivingEnabled" }, // 262582081
		{ &Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform, "OnRep_ReplicatedMovementTransform" }, // 139640573
		{ &Z_Construct_UFunction_AFGLocomotive_ReportSelfDrivingError, "ReportSelfDrivingError" }, // 1468083220
		{ &Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster, "SetMultipleUnitControlMaster" }, // 3900232696
		{ &Z_Construct_UFunction_AFGLocomotive_SetPath, "SetPath" }, // 1117230046
		{ &Z_Construct_UFunction_AFGLocomotive_SetSelfDrivingEnabled, "SetSelfDrivingEnabled" }, // 1338305143
		{ &Z_Construct_UFunction_AFGLocomotive_UpdatePathSegment, "UpdatePathSegment" }, // 3019552061
		{ &Z_Construct_UFunction_AFGLocomotive_UpdateTargetPoints, "UpdateTargetPoints" }, // 1060672693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGLocomotive.h" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Base class for locomotives, choo choo!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSelfDrivingError_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Error reported by the AI." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSelfDrivingError = { UE4CodeGen_Private::EPropertyClass::Enum, "mSelfDrivingError", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AFGLocomotive, mSelfDrivingError), Z_Construct_UEnum_FactoryGame_ESelfDrivingLocomotiveError, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSelfDrivingError_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSelfDrivingError_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSelfDrivingError_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "vehicle simulation component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement = { UE4CodeGen_Private::EPropertyClass::Object, "mVehicleMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AFGLocomotive, mVehicleMovement), Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "@todo Replace when proper physics simulations are done." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "mReplicatedMovementTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ReplicatedMovementTransform", STRUCT_OFFSET(AFGLocomotive, mReplicatedMovementTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "The power info for this train, draw power from the circuit." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo = { UE4CodeGen_Private::EPropertyClass::Object, "mPowerInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080028, 1, nullptr, STRUCT_OFFSET(AFGLocomotive, mPowerInfo), Z_Construct_UClass_UFGPowerInfoComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConnection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "The \"sliding shoe\" of the train." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConnection = { UE4CodeGen_Private::EPropertyClass::Object, "mPowerConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGLocomotive, mPowerConnection), Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption_MetaData[] = {
		{ "Category", "Power" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "The power consumption of this electric locomotive, min is idle power consumption and max is power consumption at maximum torque." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption = { UE4CodeGen_Private::EPropertyClass::Struct, "mPowerConsumption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGLocomotive, mPowerConsumption), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGLocomotive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSelfDrivingError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSelfDrivingError_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGLocomotive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGLocomotive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGLocomotive_Statics::ClassParams = {
		&AFGLocomotive::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGLocomotive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGLocomotive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGLocomotive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGLocomotive, 3772756922);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGLocomotive(Z_Construct_UClass_AFGLocomotive, &AFGLocomotive::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGLocomotive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGLocomotive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
