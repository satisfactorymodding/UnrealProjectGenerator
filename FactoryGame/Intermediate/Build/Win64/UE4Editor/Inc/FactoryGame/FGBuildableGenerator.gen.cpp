// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableGenerator() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGenerator_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGenerator();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGenerator_Factory_StartPowerProduction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGenerator_Factory_StopPowerProduction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered();
// End Cross Module References
	static FName NAME_AFGBuildableGenerator_CanStartPowerProduction = FName(TEXT("CanStartPowerProduction"));
	bool AFGBuildableGenerator::CanStartPowerProduction() const
	{
		FGBuildableGenerator_eventCanStartPowerProduction_Parms Parms;
		const_cast<AFGBuildableGenerator*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFGBuildableGenerator_CanStartPowerProduction),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFGBuildableGenerator_Factory_StartPowerProduction = FName(TEXT("Factory_StartPowerProduction"));
	void AFGBuildableGenerator::Factory_StartPowerProduction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableGenerator_Factory_StartPowerProduction),NULL);
	}
	static FName NAME_AFGBuildableGenerator_Factory_StopPowerProduction = FName(TEXT("Factory_StopPowerProduction"));
	void AFGBuildableGenerator::Factory_StopPowerProduction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableGenerator_Factory_StopPowerProduction),NULL);
	}
	static FName NAME_AFGBuildableGenerator_Factory_TickPowerProduction = FName(TEXT("Factory_TickPowerProduction"));
	void AFGBuildableGenerator::Factory_TickPowerProduction(float dt)
	{
		FGBuildableGenerator_eventFactory_TickPowerProduction_Parms Parms;
		Parms.dt=dt;
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableGenerator_Factory_TickPowerProduction),&Parms);
	}
	void AFGBuildableGenerator::StaticRegisterNativesAFGBuildableGenerator()
	{
		UClass* Class = AFGBuildableGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcPowerProductionCapacityForPotential", &AFGBuildableGenerator::execCalcPowerProductionCapacityForPotential },
			{ "CanStartPowerProduction", &AFGBuildableGenerator::execCanStartPowerProduction },
			{ "Factory_StartPowerProduction", &AFGBuildableGenerator::execFactory_StartPowerProduction },
			{ "Factory_StopPowerProduction", &AFGBuildableGenerator::execFactory_StopPowerProduction },
			{ "Factory_TickPowerProduction", &AFGBuildableGenerator::execFactory_TickPowerProduction },
			{ "GetDefaultPowerProductionCapacity", &AFGBuildableGenerator::execGetDefaultPowerProductionCapacity },
			{ "GetLoadPercentage", &AFGBuildableGenerator::execGetLoadPercentage },
			{ "GetPowerProductionCapacity", &AFGBuildableGenerator::execGetPowerProductionCapacity },
			{ "IsFuseTriggered", &AFGBuildableGenerator::execIsFuseTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics
	{
		struct FGBuildableGenerator_eventCalcPowerProductionCapacityForPotential_Parms
		{
			float potential;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_potential;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGenerator_eventCalcPowerProductionCapacityForPotential_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::NewProp_potential = { "potential", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGenerator_eventCalcPowerProductionCapacityForPotential_Parms, potential), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::NewProp_potential,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Calculate the power this generator can produce with a given potential." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGenerator, nullptr, "CalcPowerProductionCapacityForPotential", sizeof(FGBuildableGenerator_eventCalcPowerProductionCapacityForPotential_Parms), Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableGenerator_eventCanStartPowerProduction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableGenerator_eventCanStartPowerProduction_Parms), &Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Called to check if power production can be started." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGenerator, nullptr, "CanStartPowerProduction", sizeof(FGBuildableGenerator_eventCanStartPowerProduction_Parms), Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGenerator_Factory_StartPowerProduction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGenerator_Factory_StartPowerProduction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Called when we start producing fuel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGenerator_Factory_StartPowerProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGenerator, nullptr, "Factory_StartPowerProduction", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGenerator_Factory_StartPowerProduction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_Factory_StartPowerProduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGenerator_Factory_StartPowerProduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGenerator_Factory_StartPowerProduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGenerator_Factory_StopPowerProduction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGenerator_Factory_StopPowerProduction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Called when we stop producing fuel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGenerator_Factory_StopPowerProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGenerator, nullptr, "Factory_StopPowerProduction", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGenerator_Factory_StopPowerProduction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_Factory_StopPowerProduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGenerator_Factory_StopPowerProduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGenerator_Factory_StopPowerProduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGenerator_eventFactory_TickPowerProduction_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Tick the power production, consume any fuel, update base and dynamic production.\n@param dt - Time since last tick." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGenerator, nullptr, "Factory_TickPowerProduction", sizeof(FGBuildableGenerator_eventFactory_TickPowerProduction_Parms), Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics
	{
		struct FGBuildableGenerator_eventGetDefaultPowerProductionCapacity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGenerator_eventGetDefaultPowerProductionCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "The default amount power this generator can produce." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGenerator, nullptr, "GetDefaultPowerProductionCapacity", sizeof(FGBuildableGenerator_eventGetDefaultPowerProductionCapacity_Parms), Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics
	{
		struct FGBuildableGenerator_eventGetLoadPercentage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGenerator_eventGetLoadPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Get the current load of this generator in the range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGenerator, nullptr, "GetLoadPercentage", sizeof(FGBuildableGenerator_eventGetLoadPercentage_Parms), Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics
	{
		struct FGBuildableGenerator_eventGetPowerProductionCapacity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGenerator_eventGetPowerProductionCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "The power this generator can produce." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGenerator, nullptr, "GetPowerProductionCapacity", sizeof(FGBuildableGenerator_eventGetPowerProductionCapacity_Parms), Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics
	{
		struct FGBuildableGenerator_eventIsFuseTriggered_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGenerator_eventIsFuseTriggered_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "@return true if the fuse is triggered." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGenerator, nullptr, "IsFuseTriggered", sizeof(FGBuildableGenerator_eventIsFuseTriggered_Parms), Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableGenerator_NoRegister()
	{
		return AFGBuildableGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsFuseTriggered_MetaData[];
#endif
		static void NewProp_mIsFuseTriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsFuseTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLoadPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLoadPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerProductionExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPowerProductionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerProduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPowerProduction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableGenerator_CalcPowerProductionCapacityForPotential, "CalcPowerProductionCapacityForPotential" }, // 865971264
		{ &Z_Construct_UFunction_AFGBuildableGenerator_CanStartPowerProduction, "CanStartPowerProduction" }, // 362945492
		{ &Z_Construct_UFunction_AFGBuildableGenerator_Factory_StartPowerProduction, "Factory_StartPowerProduction" }, // 1467526595
		{ &Z_Construct_UFunction_AFGBuildableGenerator_Factory_StopPowerProduction, "Factory_StopPowerProduction" }, // 4233060358
		{ &Z_Construct_UFunction_AFGBuildableGenerator_Factory_TickPowerProduction, "Factory_TickPowerProduction" }, // 483505934
		{ &Z_Construct_UFunction_AFGBuildableGenerator_GetDefaultPowerProductionCapacity, "GetDefaultPowerProductionCapacity" }, // 3305605484
		{ &Z_Construct_UFunction_AFGBuildableGenerator_GetLoadPercentage, "GetLoadPercentage" }, // 997526715
		{ &Z_Construct_UFunction_AFGBuildableGenerator_GetPowerProductionCapacity, "GetPowerProductionCapacity" }, // 1658974069
		{ &Z_Construct_UFunction_AFGBuildableGenerator_IsFuseTriggered, "IsFuseTriggered" }, // 3616654578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableGenerator.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Base for all generators, i.e. coal, fuel, nuclear etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mIsFuseTriggered_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Is the fuse triggered." },
	};
#endif
	void Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mIsFuseTriggered_SetBit(void* Obj)
	{
		((AFGBuildableGenerator*)Obj)->mIsFuseTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mIsFuseTriggered = { "mIsFuseTriggered", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableGenerator), &Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mIsFuseTriggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mIsFuseTriggered_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mIsFuseTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mLoadPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Current load of this generator in the range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mLoadPercentage = { "mLoadPercentage", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGenerator, mLoadPercentage), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mLoadPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mLoadPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProductionExponent_MetaData[] = {
		{ "Category", "Power" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Exponent used in power production calculations.\nTo calculate maximum production: max = overclock ^ ( 1 / exponent )\nExample: 2.5 ^ ( 1 / 1.6 ) = 1.77      An exponent of 1.6 gives a maximum production of 177% at 2.5x overclock.\nIf exponent is 1.0 the function becomes linear." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProductionExponent = { "mPowerProductionExponent", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGenerator, mPowerProductionExponent), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProductionExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProductionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProduction_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGenerator.h" },
		{ "ToolTip", "Amount of power this generator produces in MW." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProduction = { "mPowerProduction", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGenerator, mPowerProduction), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProduction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProduction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mIsFuseTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mLoadPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProductionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGenerator_Statics::NewProp_mPowerProduction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableGenerator_Statics::ClassParams = {
		&AFGBuildableGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableGenerator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGenerator_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGenerator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableGenerator, 1161751327);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableGenerator>()
	{
		return AFGBuildableGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableGenerator(Z_Construct_UClass_AFGBuildableGenerator, &AFGBuildableGenerator::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
