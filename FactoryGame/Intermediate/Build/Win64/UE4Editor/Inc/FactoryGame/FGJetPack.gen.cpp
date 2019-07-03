// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGJetPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGJetPack() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJetPack_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJetPack();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJetPack_CanThrust();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJetPack_GetCurrentFuel();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJetPack_GetMaxFuel();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJetPack_OnStartThrusting();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJetPack_OnStopThrusting();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJetPackAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJetPackAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJetPackAttachment_OnRep_IsThrusting();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJetPackAttachment_OnStartThrusting();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJetPackAttachment_OnStopThrusting();
// End Cross Module References
	static FName NAME_AFGJetPack_CanThrust = FName(TEXT("CanThrust"));
	bool AFGJetPack::CanThrust()
	{
		FGJetPack_eventCanThrust_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFGJetPack_CanThrust),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFGJetPack_GetCurrentFuel = FName(TEXT("GetCurrentFuel"));
	float AFGJetPack::GetCurrentFuel() const
	{
		FGJetPack_eventGetCurrentFuel_Parms Parms;
		const_cast<AFGJetPack*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFGJetPack_GetCurrentFuel),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFGJetPack_GetMaxFuel = FName(TEXT("GetMaxFuel"));
	float AFGJetPack::GetMaxFuel()
	{
		FGJetPack_eventGetMaxFuel_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFGJetPack_GetMaxFuel),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFGJetPack_GetNewVelocityWhenThrusting = FName(TEXT("GetNewVelocityWhenThrusting"));
	FVector AFGJetPack::GetNewVelocityWhenThrusting(float delta)
	{
		FGJetPack_eventGetNewVelocityWhenThrusting_Parms Parms;
		Parms.delta=delta;
		ProcessEvent(FindFunctionChecked(NAME_AFGJetPack_GetNewVelocityWhenThrusting),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFGJetPack_OnStartThrusting = FName(TEXT("OnStartThrusting"));
	void AFGJetPack::OnStartThrusting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGJetPack_OnStartThrusting),NULL);
	}
	static FName NAME_AFGJetPack_OnStopThrusting = FName(TEXT("OnStopThrusting"));
	void AFGJetPack::OnStopThrusting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGJetPack_OnStopThrusting),NULL);
	}
	void AFGJetPack::StaticRegisterNativesAFGJetPack()
	{
		UClass* Class = AFGJetPack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentFuel", &AFGJetPack::execGetCurrentFuel },
			{ "GetMaxFuel", &AFGJetPack::execGetMaxFuel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGJetPack_CanThrust_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGJetPack_eventCanThrust_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGJetPack_eventCanThrust_Parms), &Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "This function calculates our new velocity when we are thrusting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJetPack, "CanThrust", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGJetPack_eventCanThrust_Parms), Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJetPack_CanThrust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJetPack_CanThrust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGJetPack_eventGetCurrentFuel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::Function_MetaDataParams[] = {
		{ "Category", "JetPack" },
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "Returns the current amount of fuel for the jet pack. Please override." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJetPack, "GetCurrentFuel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(FGJetPack_eventGetCurrentFuel_Parms), Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJetPack_GetCurrentFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJetPack_GetCurrentFuel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGJetPack_eventGetMaxFuel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::Function_MetaDataParams[] = {
		{ "Category", "JetPack" },
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "Returns the maximum amount of fuel for the jet pack. Please override." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJetPack, "GetMaxFuel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x1C020C00, sizeof(FGJetPack_eventGetMaxFuel_Parms), Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJetPack_GetMaxFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJetPack_GetMaxFuel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGJetPack_eventGetNewVelocityWhenThrusting_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::NewProp_delta = { UE4CodeGen_Private::EPropertyClass::Float, "delta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGJetPack_eventGetNewVelocityWhenThrusting_Parms, delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::NewProp_delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "This function calculates our new velocity when we are thrusting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJetPack, "GetNewVelocityWhenThrusting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820800, sizeof(FGJetPack_eventGetNewVelocityWhenThrusting_Parms), Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJetPack_OnStartThrusting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJetPack_OnStartThrusting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "Called when we start thrusting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJetPack_OnStartThrusting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJetPack, "OnStartThrusting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJetPack_OnStartThrusting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_OnStartThrusting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJetPack_OnStartThrusting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJetPack_OnStartThrusting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJetPack_OnStopThrusting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJetPack_OnStopThrusting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "Called when we stop thrusting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJetPack_OnStopThrusting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJetPack, "OnStopThrusting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJetPack_OnStopThrusting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPack_OnStopThrusting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJetPack_OnStopThrusting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJetPack_OnStopThrusting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGJetPack_NoRegister()
	{
		return AFGJetPack::StaticClass();
	}
	struct Z_Construct_UClass_AFGJetPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsThrusting_MetaData[];
#endif
		static void NewProp_mIsThrusting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsThrusting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mJumpTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mJumpTimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGJetPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGJetPack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGJetPack_CanThrust, "CanThrust" }, // 1535171383
		{ &Z_Construct_UFunction_AFGJetPack_GetCurrentFuel, "GetCurrentFuel" }, // 3908326506
		{ &Z_Construct_UFunction_AFGJetPack_GetMaxFuel, "GetMaxFuel" }, // 554713532
		{ &Z_Construct_UFunction_AFGJetPack_GetNewVelocityWhenThrusting, "GetNewVelocityWhenThrusting" }, // 2032950030
		{ &Z_Construct_UFunction_AFGJetPack_OnStartThrusting, "OnStartThrusting" }, // 2876633536
		{ &Z_Construct_UFunction_AFGJetPack_OnStopThrusting, "OnStopThrusting" }, // 572220994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJetPack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGJetPack.h" },
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJetPack_Statics::NewProp_mIsThrusting_MetaData[] = {
		{ "Category", "FGJetPack" },
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "If we are actually thrusting or not" },
	};
#endif
	void Z_Construct_UClass_AFGJetPack_Statics::NewProp_mIsThrusting_SetBit(void* Obj)
	{
		((AFGJetPack*)Obj)->mIsThrusting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGJetPack_Statics::NewProp_mIsThrusting = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsThrusting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020815, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGJetPack), &Z_Construct_UClass_AFGJetPack_Statics::NewProp_mIsThrusting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGJetPack_Statics::NewProp_mIsThrusting_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGJetPack_Statics::NewProp_mIsThrusting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJetPack_Statics::NewProp_mJumpTimeStamp_MetaData[] = {
		{ "Category", "FGJetPack" },
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "The duration we've held down thrust this flight, only resets when Landed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGJetPack_Statics::NewProp_mJumpTimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "mJumpTimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020815, 1, nullptr, STRUCT_OFFSET(AFGJetPack, mJumpTimeStamp), METADATA_PARAMS(Z_Construct_UClass_AFGJetPack_Statics::NewProp_mJumpTimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGJetPack_Statics::NewProp_mJumpTimeStamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGJetPack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGJetPack_Statics::NewProp_mIsThrusting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGJetPack_Statics::NewProp_mJumpTimeStamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGJetPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGJetPack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGJetPack_Statics::ClassParams = {
		&AFGJetPack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGJetPack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGJetPack_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGJetPack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGJetPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGJetPack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGJetPack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGJetPack, 688523817);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGJetPack(Z_Construct_UClass_AFGJetPack, &AFGJetPack::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGJetPack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGJetPack);
	static FName NAME_AFGJetPackAttachment_OnStartThrusting = FName(TEXT("OnStartThrusting"));
	void AFGJetPackAttachment::OnStartThrusting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGJetPackAttachment_OnStartThrusting),NULL);
	}
	static FName NAME_AFGJetPackAttachment_OnStopThrusting = FName(TEXT("OnStopThrusting"));
	void AFGJetPackAttachment::OnStopThrusting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGJetPackAttachment_OnStopThrusting),NULL);
	}
	void AFGJetPackAttachment::StaticRegisterNativesAFGJetPackAttachment()
	{
		UClass* Class = AFGJetPackAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsThrusting", &AFGJetPackAttachment::execOnRep_IsThrusting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGJetPackAttachment_OnRep_IsThrusting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJetPackAttachment_OnRep_IsThrusting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "Called when mIsThrusting is replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJetPackAttachment_OnRep_IsThrusting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJetPackAttachment, "OnRep_IsThrusting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJetPackAttachment_OnRep_IsThrusting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPackAttachment_OnRep_IsThrusting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJetPackAttachment_OnRep_IsThrusting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJetPackAttachment_OnRep_IsThrusting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJetPackAttachment_OnStartThrusting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJetPackAttachment_OnStartThrusting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "Called when we start thrusting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJetPackAttachment_OnStartThrusting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJetPackAttachment, "OnStartThrusting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJetPackAttachment_OnStartThrusting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPackAttachment_OnStartThrusting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJetPackAttachment_OnStartThrusting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJetPackAttachment_OnStartThrusting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJetPackAttachment_OnStopThrusting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJetPackAttachment_OnStopThrusting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
		{ "ToolTip", "Called when we stop thrusting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJetPackAttachment_OnStopThrusting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJetPackAttachment, "OnStopThrusting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJetPackAttachment_OnStopThrusting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJetPackAttachment_OnStopThrusting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJetPackAttachment_OnStopThrusting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJetPackAttachment_OnStopThrusting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGJetPackAttachment_NoRegister()
	{
		return AFGJetPackAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGJetPackAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsThrusting_MetaData[];
#endif
		static void NewProp_mIsThrusting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsThrusting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGJetPackAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipmentAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGJetPackAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGJetPackAttachment_OnRep_IsThrusting, "OnRep_IsThrusting" }, // 2406739658
		{ &Z_Construct_UFunction_AFGJetPackAttachment_OnStartThrusting, "OnStartThrusting" }, // 3661310824
		{ &Z_Construct_UFunction_AFGJetPackAttachment_OnStopThrusting, "OnStopThrusting" }, // 2821159382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJetPackAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGJetPack.h" },
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJetPackAttachment_Statics::NewProp_mIsThrusting_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGJetPack.h" },
	};
#endif
	void Z_Construct_UClass_AFGJetPackAttachment_Statics::NewProp_mIsThrusting_SetBit(void* Obj)
	{
		((AFGJetPackAttachment*)Obj)->mIsThrusting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGJetPackAttachment_Statics::NewProp_mIsThrusting = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsThrusting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_IsThrusting", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGJetPackAttachment), &Z_Construct_UClass_AFGJetPackAttachment_Statics::NewProp_mIsThrusting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGJetPackAttachment_Statics::NewProp_mIsThrusting_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGJetPackAttachment_Statics::NewProp_mIsThrusting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGJetPackAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGJetPackAttachment_Statics::NewProp_mIsThrusting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGJetPackAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGJetPackAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGJetPackAttachment_Statics::ClassParams = {
		&AFGJetPackAttachment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGJetPackAttachment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGJetPackAttachment_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGJetPackAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGJetPackAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGJetPackAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGJetPackAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGJetPackAttachment, 3793763418);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGJetPackAttachment(Z_Construct_UClass_AFGJetPackAttachment, &AFGJetPackAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGJetPackAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGJetPackAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
