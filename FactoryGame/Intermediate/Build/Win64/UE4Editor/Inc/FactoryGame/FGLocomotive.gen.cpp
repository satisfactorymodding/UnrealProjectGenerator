// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLocomotive_eventCanSetTrainMultipleUnitMaster_Parms), &Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "@return true if we can set the multiple unit master on locomotive without forcing; false if we cannot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, nullptr, "CanSetTrainMultipleUnitMaster", sizeof(FGLocomotive_eventCanSetTrainMultipleUnitMaster_Parms), Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Clears this vehicle as the MU master.\nReturns the train to MU disabled until another one is set as master." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, nullptr, "ClearMultipleUnitControlMaster", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotive_eventGetLocomotiveMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, nullptr, "GetLocomotiveMovementComponent", sizeof(FGLocomotive_eventGetLocomotiveMovementComponent_Parms), Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotive_eventGetMultipleUnitRole_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EMultipleUnitControl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Get the role for this locomotive when MUing.\n@see EMultipleUnitControl." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, nullptr, "GetMultipleUnitRole", sizeof(FGLocomotive_eventGetMultipleUnitRole_Parms), Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotive_eventGetPowerInfo_Parms, ReturnValue), Z_Construct_UClass_UFGPowerInfoComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Get the power info about this train. If it runs on electricity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, nullptr, "GetPowerInfo", sizeof(FGLocomotive_eventGetPowerInfo_Parms), Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_GetPowerInfo_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Called when the name of the train this locomotive is part of has changed name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_OnNameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, nullptr, "OnNameChanged", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_OnNameChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_OnNameChanged_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGLocomotive.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, nullptr, "OnRep_ReplicatedMovementTransform", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLocomotive_eventSetMultipleUnitControlMaster_Parms), &Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_force_SetBit(void* Obj)
	{
		((FGLocomotive_eventSetMultipleUnitControlMaster_Parms*)Obj)->force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLocomotive_eventSetMultipleUnitControlMaster_Parms), &Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_force_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::NewProp_force,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Locomotive" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "Set this vehicle as the MU master.\nThis updates all other vehicles in the train accordingly.\n@param force Force this to be the master, sets any current master to slave.\n@return true on success; false if there is another master and this was not forced." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGLocomotive, nullptr, "SetMultipleUnitControlMaster", sizeof(FGLocomotive_eventSetMultipleUnitControlMaster_Parms), Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGLocomotive_CanSetTrainMultipleUnitMaster, "CanSetTrainMultipleUnitMaster" }, // 567167856
		{ &Z_Construct_UFunction_AFGLocomotive_ClearMultipleUnitControlMaster, "ClearMultipleUnitControlMaster" }, // 1665637588
		{ &Z_Construct_UFunction_AFGLocomotive_GetLocomotiveMovementComponent, "GetLocomotiveMovementComponent" }, // 1456431669
		{ &Z_Construct_UFunction_AFGLocomotive_GetMultipleUnitRole, "GetMultipleUnitRole" }, // 1451102600
		{ &Z_Construct_UFunction_AFGLocomotive_GetPowerInfo, "GetPowerInfo" }, // 508971176
		{ &Z_Construct_UFunction_AFGLocomotive_OnNameChanged, "OnNameChanged" }, // 70779914
		{ &Z_Construct_UFunction_AFGLocomotive_OnRep_ReplicatedMovementTransform, "OnRep_ReplicatedMovementTransform" }, // 1680929495
		{ &Z_Construct_UFunction_AFGLocomotive_SetMultipleUnitControlMaster, "SetMultipleUnitControlMaster" }, // 1745727898
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "vehicle simulation component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement = { "mVehicleMovement", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGLocomotive, mVehicleMovement), Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mVehicleMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "@todo Replace when proper physics simulations are done." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform = { "mReplicatedMovementTransform", "OnRep_ReplicatedMovementTransform", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGLocomotive, mReplicatedMovementTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mReplicatedMovementTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "The power info for this train, draw power from the circuit." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo = { "mPowerInfo", nullptr, (EPropertyFlags)0x0040000000080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGLocomotive, mPowerInfo), Z_Construct_UClass_UFGPowerInfoComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSlidingShoe_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "The sliding shoe making contact with the third rail." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSlidingShoe = { "mSlidingShoe", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGLocomotive, mSlidingShoe), Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSlidingShoe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mSlidingShoe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption_MetaData[] = {
		{ "Category", "Power" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "FGLocomotive.h" },
		{ "ToolTip", "The power consumption of this electric locomotive, min is idle power consumption and max is power consumption at maximum torque." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption = { "mPowerConsumption", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGLocomotive, mPowerConsumption), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::NewProp_mPowerConsumption_MetaData)) };
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGLocomotive_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGLocomotive_Statics::PropPointers),
		0,
		0x009000A0u,
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
	IMPLEMENT_CLASS(AFGLocomotive, 4168361332);
	template<> FACTORYGAME_API UClass* StaticClass<AFGLocomotive>()
	{
		return AFGLocomotive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGLocomotive(Z_Construct_UClass_AFGLocomotive, &AFGLocomotive::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGLocomotive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGLocomotive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
