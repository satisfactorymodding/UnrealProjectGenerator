// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGPowerInfoComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPowerInfoComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerInfoComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerInfoComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerCircuit_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_HasPower();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	void UFGPowerInfoComponent::StaticRegisterNativesUFGPowerInfoComponent()
	{
		UClass* Class = UFGPowerInfoComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActualConsumption", &UFGPowerInfoComponent::execGetActualConsumption },
			{ "GetBaseProduction", &UFGPowerInfoComponent::execGetBaseProduction },
			{ "GetDynamicProductionCapacity", &UFGPowerInfoComponent::execGetDynamicProductionCapacity },
			{ "GetDynamicProductionDemandFactor", &UFGPowerInfoComponent::execGetDynamicProductionDemandFactor },
			{ "GetPowerCircuit", &UFGPowerInfoComponent::execGetPowerCircuit },
			{ "GetRegulatedDynamicProduction", &UFGPowerInfoComponent::execGetRegulatedDynamicProduction },
			{ "GetTargetConsumption", &UFGPowerInfoComponent::execGetTargetConsumption },
			{ "HasPower", &UFGPowerInfoComponent::execHasPower },
			{ "IsConnected", &UFGPowerInfoComponent::execIsConnected },
			{ "IsFuseTriggered", &UFGPowerInfoComponent::execIsFuseTriggered },
			{ "SetBaseProduction", &UFGPowerInfoComponent::execSetBaseProduction },
			{ "SetDynamicProductionCapacity", &UFGPowerInfoComponent::execSetDynamicProductionCapacity },
			{ "SetTargetConsumption", &UFGPowerInfoComponent::execSetTargetConsumption },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics
	{
		struct FGPowerInfoComponent_eventGetActualConsumption_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventGetActualConsumption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Get the power we actually got for this frame.\n@note This is updated once per frame when the power subsystem is ticked.\n@return The actual power consumed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "GetActualConsumption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventGetActualConsumption_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics
	{
		struct FGPowerInfoComponent_eventGetBaseProduction_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventGetBaseProduction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Get the base power production." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "GetBaseProduction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventGetBaseProduction_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics
	{
		struct FGPowerInfoComponent_eventGetDynamicProductionCapacity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventGetDynamicProductionCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Get the maximum dynamic power production." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "GetDynamicProductionCapacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventGetDynamicProductionCapacity_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics
	{
		struct FGPowerInfoComponent_eventGetDynamicProductionDemandFactor_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventGetDynamicProductionDemandFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Get how much of the max output a dynamic producer needs to produce.\nThis is in the range [0,1+] and if >1 the demand is greater than the available production, i.e. the circuit is overloaded.\n@return Dynamic demand factor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "GetDynamicProductionDemandFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventGetDynamicProductionDemandFactor_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics
	{
		struct FGPowerInfoComponent_eventGetPowerCircuit_Parms
		{
			UFGPowerCircuit* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventGetPowerCircuit_Parms, ReturnValue), Z_Construct_UClass_UFGPowerCircuit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "@return The power circuit this is connected to; nullptr if not connected.\n@note This can be changed/removed at any time so do not save copies to it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "GetPowerCircuit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventGetPowerCircuit_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics
	{
		struct FGPowerInfoComponent_eventGetRegulatedDynamicProduction_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventGetRegulatedDynamicProduction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Get the dynamic power production we provide to the circuit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "GetRegulatedDynamicProduction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventGetRegulatedDynamicProduction_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics
	{
		struct FGPowerInfoComponent_eventGetTargetConsumption_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventGetTargetConsumption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Get the target power consumption." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "GetTargetConsumption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventGetTargetConsumption_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics
	{
		struct FGPowerInfoComponent_eventHasPower_Parms
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
	void Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPowerInfoComponent_eventHasPower_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPowerInfoComponent_eventHasPower_Parms), &Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "@return true if we have power; false if we do not have power.\n@note This is updated once per frame so if setting target consumption the result is available next frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "HasPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventHasPower_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_HasPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_HasPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics
	{
		struct FGPowerInfoComponent_eventIsConnected_Parms
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
	void Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPowerInfoComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPowerInfoComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "@return true if the connected to a circuit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "IsConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventIsConnected_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics
	{
		struct FGPowerInfoComponent_eventIsFuseTriggered_Parms
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
	void Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPowerInfoComponent_eventIsFuseTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPowerInfoComponent_eventIsFuseTriggered_Parms), &Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "@return true if the grid is overloaded and the fuse has been triggered; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "IsFuseTriggered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerInfoComponent_eventIsFuseTriggered_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics
	{
		struct FGPowerInfoComponent_eventSetBaseProduction_Parms
		{
			float newProduction;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newProduction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::NewProp_newProduction = { UE4CodeGen_Private::EPropertyClass::Float, "newProduction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventSetBaseProduction_Parms, newProduction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::NewProp_newProduction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Set the power we always provide to the circuit. This can not be regulated.\nE.g. A wind turbine always generate power when there's wind." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "SetBaseProduction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPowerInfoComponent_eventSetBaseProduction_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics
	{
		struct FGPowerInfoComponent_eventSetDynamicProductionCapacity_Parms
		{
			float newProduction;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newProduction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::NewProp_newProduction = { UE4CodeGen_Private::EPropertyClass::Float, "newProduction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventSetDynamicProductionCapacity_Parms, newProduction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::NewProp_newProduction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Set the maximum dynamic power production we can provide to the circuit.\nUse GetRegulatedDynamicProduction to see the actual production needed.\n@note Asynchronous." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "SetDynamicProductionCapacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPowerInfoComponent_eventSetDynamicProductionCapacity_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics
	{
		struct FGPowerInfoComponent_eventSetTargetConsumption_Parms
		{
			float newConsumption;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newConsumption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::NewProp_newConsumption = { UE4CodeGen_Private::EPropertyClass::Float, "newConsumption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPowerInfoComponent_eventSetTargetConsumption_Parms, newConsumption), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::NewProp_newConsumption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Set the power we want from the circuit.\nThis is only a request, use GetActualConsumption to see what is actually consumed.\n@note This call is asynchronous and the result is available next frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerInfoComponent, "SetTargetConsumption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPowerInfoComponent_eventSetTargetConsumption_Parms), Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGPowerInfoComponent_NoRegister()
	{
		return UFGPowerInfoComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGPowerInfoComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicProductionDemandFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDynamicProductionDemandFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicProductionCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDynamicProductionCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBaseProduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBaseProduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActualConsumption_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mActualConsumption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTargetConsumption_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTargetConsumption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCircuitID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCircuitID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGPowerInfoComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGPowerInfoComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_GetActualConsumption, "GetActualConsumption" }, // 2789273603
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_GetBaseProduction, "GetBaseProduction" }, // 1570412826
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionCapacity, "GetDynamicProductionCapacity" }, // 1373209419
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_GetDynamicProductionDemandFactor, "GetDynamicProductionDemandFactor" }, // 1692683797
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_GetPowerCircuit, "GetPowerCircuit" }, // 1011046443
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_GetRegulatedDynamicProduction, "GetRegulatedDynamicProduction" }, // 2179069561
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_GetTargetConsumption, "GetTargetConsumption" }, // 326459887
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_HasPower, "HasPower" }, // 12502125
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_IsConnected, "IsConnected" }, // 1113912994
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_IsFuseTriggered, "IsFuseTriggered" }, // 1536520234
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_SetBaseProduction, "SetBaseProduction" }, // 123283526
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_SetDynamicProductionCapacity, "SetDynamicProductionCapacity" }, // 2668320417
		{ &Z_Construct_UFunction_UFGPowerInfoComponent_SetTargetConsumption, "SetTargetConsumption" }, // 3733393436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerInfoComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FGPowerInfoComponent.h" },
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Default implementation for a powered building." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mIsFuseTriggered_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "true if the circuit is overloaded and the fuse has been triggered." },
	};
#endif
	void Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mIsFuseTriggered_SetBit(void* Obj)
	{
		((UFGPowerInfoComponent*)Obj)->mIsFuseTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mIsFuseTriggered = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsFuseTriggered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFGPowerInfoComponent), &Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mIsFuseTriggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mIsFuseTriggered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mIsFuseTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionDemandFactor_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "The demand for dynamic power (updated each frame)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionDemandFactor = { UE4CodeGen_Private::EPropertyClass::Float, "mDynamicProductionDemandFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGPowerInfoComponent, mDynamicProductionDemandFactor), METADATA_PARAMS(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionDemandFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionDemandFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionCapacity_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Power to optionally provide to the circuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionCapacity = { UE4CodeGen_Private::EPropertyClass::Float, "mDynamicProductionCapacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(UFGPowerInfoComponent, mDynamicProductionCapacity), METADATA_PARAMS(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionCapacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mBaseProduction_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Power to always provide to the circuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mBaseProduction = { UE4CodeGen_Private::EPropertyClass::Float, "mBaseProduction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(UFGPowerInfoComponent, mBaseProduction), METADATA_PARAMS(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mBaseProduction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mBaseProduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mActualConsumption_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "The actual power we got from the circuit (updated each frame)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mActualConsumption = { UE4CodeGen_Private::EPropertyClass::Float, "mActualConsumption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGPowerInfoComponent, mActualConsumption), METADATA_PARAMS(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mActualConsumption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mActualConsumption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mTargetConsumption_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "Power to draw from the circuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mTargetConsumption = { UE4CodeGen_Private::EPropertyClass::Float, "mTargetConsumption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(UFGPowerInfoComponent, mTargetConsumption), METADATA_PARAMS(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mTargetConsumption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mTargetConsumption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mCircuitID_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerInfoComponent.h" },
		{ "ToolTip", "The circuit we're connected to.\n@note - This ID may change at any time when changes occurs in the circuitry. Do not save copies of it!" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mCircuitID = { UE4CodeGen_Private::EPropertyClass::Int, "mCircuitID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGPowerInfoComponent, mCircuitID), METADATA_PARAMS(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mCircuitID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mCircuitID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGPowerInfoComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mIsFuseTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionDemandFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mDynamicProductionCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mBaseProduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mActualConsumption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mTargetConsumption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerInfoComponent_Statics::NewProp_mCircuitID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGPowerInfoComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(UFGPowerInfoComponent, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGPowerInfoComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGPowerInfoComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGPowerInfoComponent_Statics::ClassParams = {
		&UFGPowerInfoComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGPowerInfoComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGPowerInfoComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UFGPowerInfoComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGPowerInfoComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGPowerInfoComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGPowerInfoComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGPowerInfoComponent, 536637263);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGPowerInfoComponent(Z_Construct_UClass_UFGPowerInfoComponent, &UFGPowerInfoComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGPowerInfoComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGPowerInfoComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
