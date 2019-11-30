// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGLocomotive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGLocomotive() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGLocomotive_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGLocomotive();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicle();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EMultipleUnitControl();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_GetPowerInfo();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerInfoComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_OnNameChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	static FName NAME_AFGLocomotive_OnNameChanged = FName(TEXT("OnNameChanged"));
	void AFGLocomotive::OnNameChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGLocomotive_OnNameChanged),NULL);
	}
	void AFGLocomotive::StaticRegisterNativesAFGLocomotive()
	{
		UClass* Class = AFGLocomotive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSetTrainMultipleUnitMaster", &AFGLocomotive::execCanSetTrainMultipleUnitMaster },
			{ "ClearMultipleUnitControlMaster", &AFGLocomotive::execClearMultipleUnitControlMaster },
			{ "GetLocomotiveMovementComponent", &AFGLocomotive::execGetLocomotiveMovementComponent },
			{ "GetMultipleUnitRole", &AFGLocomotive::execGetMultipleUnitRole },
			{ "GetPowerInfo", &AFGLocomotive::execGetPowerInfo },
			{ "OnRep_ReplicatedMovementTransform", &AFGLocomotive::execOnRep_ReplicatedMovementTransform },
			{ "SetMultipleUnitControlMaster", &AFGLocomotive::execSetMultipleUnitControlMaster },
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
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
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
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
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
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
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
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
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
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
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
	struct Z_Construct_UFunction_AFGLocomotive_OnNameChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_OnNameChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
		{ "ToolTip", "Called when the name of the train this locomotive is part of has changed name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_OnNameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, "OnNameChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_OnNameChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_OnNameChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGLocomotive_OnNameChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGLocomotive_OnNameChanged_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
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
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSlidingShoe_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSlidingShoe;
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
		{ &Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster, "CanSetTrainMultipleUnitMaster" }, // 3256985316
		{ &Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster, "ClearMultipleUnitControlMaster" }, // 434024254
		{ &Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent, "GetLocomotiveMovementComponent" }, // 3750286471
		{ &Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole, "GetMultipleUnitRole" }, // 113652135
		{ &Z_Construct_UFunction_AFGLocomotive_GetPowerInfo, "GetPowerInfo" }, // 419923944
		{ &Z_Construct_UFunction_AFGLocomotive_OnNameChanged, "OnNameChanged" }, // 1253645724
		{ &Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform, "OnRep_ReplicatedMovementTransform" }, // 3392007146
		{ &Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster, "SetMultipleUnitControlMaster" }, // 1039469561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGLocomotive.h" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
		{ "ToolTip", "Base class for locomotives, choo choo!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
		{ "ToolTip", "vehicle simulation component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement = { UE4CodeGen_Private::EPropertyClass::Object, "mVehicleMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AFGLocomotive, mVehicleMovement), Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
		{ "ToolTip", "@todo Replace when proper physics simulations are done." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "mReplicatedMovementTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ReplicatedMovementTransform", STRUCT_OFFSET(AFGLocomotive, mReplicatedMovementTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
		{ "ToolTip", "The power info for this train, draw power from the circuit." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo = { UE4CodeGen_Private::EPropertyClass::Object, "mPowerInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080028, 1, nullptr, STRUCT_OFFSET(AFGLocomotive, mPowerInfo), Z_Construct_UClass_UFGPowerInfoComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSlidingShoe_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
		{ "ToolTip", "The sliding shoe making contact with the third rail." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSlidingShoe = { UE4CodeGen_Private::EPropertyClass::Object, "mSlidingShoe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGLocomotive, mSlidingShoe), Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSlidingShoe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSlidingShoe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption_MetaData[] = {
		{ "Category", "Power" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FGLocomotive.h" },
		{ "ToolTip", "The power consumption of this electric locomotive, min is idle power consumption and max is power consumption at maximum torque." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption = { UE4CodeGen_Private::EPropertyClass::Struct, "mPowerConsumption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGLocomotive, mPowerConsumption), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGLocomotive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSlidingShoe,
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
	IMPLEMENT_CLASS(AFGLocomotive, 1986650068);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGLocomotive(Z_Construct_UClass_AFGLocomotive, &AFGLocomotive::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGLocomotive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGLocomotive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
