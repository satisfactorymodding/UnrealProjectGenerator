// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGCircuitConnectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCircuitConnectionComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuitConnectionComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConnectionComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWire_NoRegister();
// End Cross Module References
	static FName NAME_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged = FName(TEXT("ReceiveOnCircuitIDChanged"));
	void UFGCircuitConnectionComponent::ReceiveOnCircuitIDChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged),NULL);
	}
	void UFGCircuitConnectionComponent::StaticRegisterNativesUFGCircuitConnectionComponent()
	{
		UClass* Class = UFGCircuitConnectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCircuitID", &UFGCircuitConnectionComponent::execGetCircuitID },
			{ "GetMaxNumConnections", &UFGCircuitConnectionComponent::execGetMaxNumConnections },
			{ "GetNumConnections", &UFGCircuitConnectionComponent::execGetNumConnections },
			{ "GetNumFreeConnections", &UFGCircuitConnectionComponent::execGetNumFreeConnections },
			{ "GetNumHiddenConnections", &UFGCircuitConnectionComponent::execGetNumHiddenConnections },
			{ "IsConnected", &UFGCircuitConnectionComponent::execIsConnected },
			{ "IsHidden", &UFGCircuitConnectionComponent::execIsHidden },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics
	{
		struct FGCircuitConnectionComponent_eventGetCircuitID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetCircuitID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get the circuit this is connected to; -1 if not connected to a circuit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, "GetCircuitID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGCircuitConnectionComponent_eventGetCircuitID_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics
	{
		struct FGCircuitConnectionComponent_eventGetMaxNumConnections_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetMaxNumConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get the maximum allowed connections to this connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, "GetMaxNumConnections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGCircuitConnectionComponent_eventGetMaxNumConnections_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics
	{
		struct FGCircuitConnectionComponent_eventGetNumConnections_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetNumConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get the number of connections to this connection, excluding hidden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, "GetNumConnections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGCircuitConnectionComponent_eventGetNumConnections_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics
	{
		struct FGCircuitConnectionComponent_eventGetNumFreeConnections_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetNumFreeConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get How many free connections this connection has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, "GetNumFreeConnections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGCircuitConnectionComponent_eventGetNumFreeConnections_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics
	{
		struct FGCircuitConnectionComponent_eventGetNumHiddenConnections_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetNumHiddenConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get the number of hidden connections to this connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, "GetNumHiddenConnections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGCircuitConnectionComponent_eventGetNumHiddenConnections_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics
	{
		struct FGCircuitConnectionComponent_eventIsConnected_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCircuitConnectionComponent_eventIsConnected_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "@return true if this is connected to a circuit; false if not connected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, "IsConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGCircuitConnectionComponent_eventIsConnected_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics
	{
		struct FGCircuitConnectionComponent_eventIsHidden_Parms
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
	void Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCircuitConnectionComponent_eventIsHidden_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGCircuitConnectionComponent_eventIsHidden_Parms), &Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Is this a hidden connection, you cannot connect a wire to it but connect it through code." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, "IsHidden", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGCircuitConnectionComponent_eventIsHidden_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "DisplayName", "OnCircuitIDChanged" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Called when the circuit changes, this can happen at any time when the circuitry is changed, e.g. when circuits are split or merged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, "ReceiveOnCircuitIDChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister()
	{
		return UFGCircuitConnectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGCircuitConnectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCircuitID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCircuitID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHiddenConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mHiddenConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHiddenConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWires_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mWires;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mWires_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsHiddenConnection_MetaData[];
#endif
		static void NewProp_mIsHiddenConnection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsHiddenConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxNumConnectionLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxNumConnectionLinks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGConnectionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID, "GetCircuitID" }, // 2717693810
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections, "GetMaxNumConnections" }, // 3908074213
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections, "GetNumConnections" }, // 93347523
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections, "GetNumFreeConnections" }, // 4042725037
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections, "GetNumHiddenConnections" }, // 1907497119
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected, "IsConnected" }, // 2365351545
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden, "IsHidden" }, // 1431291199
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged, "ReceiveOnCircuitIDChanged" }, // 3448647654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGCircuitConnectionComponent.h" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "A scene component used for adding circuit connectors to a building.\nA wire can be connected between two connectors, making it a circuit in the circuit subsystem." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID_MetaData[] = {
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "The circuit this connection is connected to. INDEX_NONE if not connected.\n@note - This ID may change at any time when changes occurs in the circuitry. Do not save copies of it!" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID = { UE4CodeGen_Private::EPropertyClass::Int, "mCircuitID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(UFGCircuitConnectionComponent, mCircuitID), METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "The non-wired (if this or the other is hidden) connections to this." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections = { UE4CodeGen_Private::EPropertyClass::Array, "mHiddenConnections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008001000008, 1, nullptr, STRUCT_OFFSET(UFGCircuitConnectionComponent, mHiddenConnections), METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mHiddenConnections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires_MetaData[] = {
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "The wired connections to this." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires = { UE4CodeGen_Private::EPropertyClass::Array, "mWires", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(UFGCircuitConnectionComponent, mWires), METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mWires", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildableWire_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "This connection is hidden and can only be connected through the code. E.g. powered walls have a hidden connection all machines connect to." },
	};
#endif
	void Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_SetBit(void* Obj)
	{
		((UFGCircuitConnectionComponent*)Obj)->mIsHiddenConnection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsHiddenConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCircuitConnectionComponent), &Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mMaxNumConnectionLinks_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "FGCircuitConnectionComponent.h" },
		{ "ToolTip", "How many connections this component can have connected." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mMaxNumConnectionLinks = { UE4CodeGen_Private::EPropertyClass::Int, "mMaxNumConnectionLinks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UFGCircuitConnectionComponent, mMaxNumConnectionLinks), METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mMaxNumConnectionLinks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mMaxNumConnectionLinks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mMaxNumConnectionLinks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGCircuitConnectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::ClassParams = {
		&UFGCircuitConnectionComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGCircuitConnectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGCircuitConnectionComponent, 3575766488);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCircuitConnectionComponent(Z_Construct_UClass_UFGCircuitConnectionComponent, &UFGCircuitConnectionComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCircuitConnectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCircuitConnectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
