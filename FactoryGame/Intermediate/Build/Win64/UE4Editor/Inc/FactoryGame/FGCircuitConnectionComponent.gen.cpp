// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGCircuitConnectionComponent.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_OnRep_CircuitIDChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection();
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
			{ "AddHiddenConnection", &UFGCircuitConnectionComponent::execAddHiddenConnection },
			{ "GetCircuitID", &UFGCircuitConnectionComponent::execGetCircuitID },
			{ "GetMaxNumConnections", &UFGCircuitConnectionComponent::execGetMaxNumConnections },
			{ "GetNumConnections", &UFGCircuitConnectionComponent::execGetNumConnections },
			{ "GetNumFreeConnections", &UFGCircuitConnectionComponent::execGetNumFreeConnections },
			{ "GetNumHiddenConnections", &UFGCircuitConnectionComponent::execGetNumHiddenConnections },
			{ "IsConnected", &UFGCircuitConnectionComponent::execIsConnected },
			{ "IsHidden", &UFGCircuitConnectionComponent::execIsHidden },
			{ "OnRep_CircuitIDChanged", &UFGCircuitConnectionComponent::execOnRep_CircuitIDChanged },
			{ "RemoveHiddenConnection", &UFGCircuitConnectionComponent::execRemoveHiddenConnection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics
	{
		struct FGCircuitConnectionComponent_eventAddHiddenConnection_Parms
		{
			UFGCircuitConnectionComponent* other;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::NewProp_other_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitConnectionComponent_eventAddHiddenConnection_Parms, other), Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::NewProp_other_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::NewProp_other_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::NewProp_other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Add a hidden connection to another connection component. One of the connections must be hidden for this to be valid.\nConnects both ends of the connection and the circuits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "AddHiddenConnection", sizeof(FGCircuitConnectionComponent_eventAddHiddenConnection_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetCircuitID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get the circuit this is connected to; -1 if not connected to a circuit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "GetCircuitID", sizeof(FGCircuitConnectionComponent_eventGetCircuitID_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetMaxNumConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get the maximum allowed connections to this connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "GetMaxNumConnections", sizeof(FGCircuitConnectionComponent_eventGetMaxNumConnections_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetNumConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get the number of connections to this connection, excluding hidden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "GetNumConnections", sizeof(FGCircuitConnectionComponent_eventGetNumConnections_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetNumFreeConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get How many free connections this connection has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "GetNumFreeConnections", sizeof(FGCircuitConnectionComponent_eventGetNumFreeConnections_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitConnectionComponent_eventGetNumHiddenConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Get the number of hidden connections to this connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "GetNumHiddenConnections", sizeof(FGCircuitConnectionComponent_eventGetNumHiddenConnections_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitConnectionComponent_eventIsConnected_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "@return true if this is connected to a circuit; false if not connected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "IsConnected", sizeof(FGCircuitConnectionComponent_eventIsConnected_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCircuitConnectionComponent_eventIsHidden_Parms), &Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Is this a hidden connection, you cannot connect a wire to it but connect it through code." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "IsHidden", sizeof(FGCircuitConnectionComponent_eventIsHidden_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_OnRep_CircuitIDChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_OnRep_CircuitIDChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Tracks replication changes to mCircuitID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_OnRep_CircuitIDChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "OnRep_CircuitIDChanged", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_OnRep_CircuitIDChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_OnRep_CircuitIDChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_OnRep_CircuitIDChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_OnRep_CircuitIDChanged_Statics::FuncParams);
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
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "DisplayName", "OnCircuitIDChanged" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Called when the circuit changes, this can happen at any time when the circuitry is changed, e.g. when circuits are split or merged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "ReceiveOnCircuitIDChanged", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics
	{
		struct FGCircuitConnectionComponent_eventRemoveHiddenConnection_Parms
		{
			UFGCircuitConnectionComponent* other;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::NewProp_other_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitConnectionComponent_eventRemoveHiddenConnection_Parms, other), Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::NewProp_other_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::NewProp_other_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::NewProp_other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "Remove a hidden connection to another connection component.\nDisconnects both ends of the connection and the circuits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuitConnectionComponent, nullptr, "RemoveHiddenConnection", sizeof(FGCircuitConnectionComponent_eventRemoveHiddenConnection_Parms), Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNbWiresConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mNbWiresConnected;
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
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_AddHiddenConnection, "AddHiddenConnection" }, // 664111920
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetCircuitID, "GetCircuitID" }, // 2162640675
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetMaxNumConnections, "GetMaxNumConnections" }, // 299488177
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumConnections, "GetNumConnections" }, // 1252355802
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumFreeConnections, "GetNumFreeConnections" }, // 356771345
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_GetNumHiddenConnections, "GetNumHiddenConnections" }, // 3543260798
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_IsConnected, "IsConnected" }, // 846451865
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_IsHidden, "IsHidden" }, // 1151436687
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_OnRep_CircuitIDChanged, "OnRep_CircuitIDChanged" }, // 2897476237
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_ReceiveOnCircuitIDChanged, "ReceiveOnCircuitIDChanged" }, // 2924008868
		{ &Z_Construct_UFunction_UFGCircuitConnectionComponent_RemoveHiddenConnection, "RemoveHiddenConnection" }, // 3608864394
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGCircuitConnectionComponent.h" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "A scene component used for adding circuit connectors to a building.\nA wire can be connected between two connectors, making it a circuit in the circuit subsystem." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "The circuit this connection is connected to. INDEX_NONE if not connected.\n@note - This ID may change at any time when changes occurs in the circuitry. Do not save copies of it!" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID = { "mCircuitID", "OnRep_CircuitIDChanged", (EPropertyFlags)0x0040000100020021, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCircuitConnectionComponent, mCircuitID), METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_MetaData[] = {
		{ "Category", "FGCircuitConnectionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "The non-wired (if this or the other is hidden) connections to this." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections = { "mHiddenConnections", nullptr, (EPropertyFlags)0x0040008001020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCircuitConnectionComponent, mHiddenConnections), METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_Inner = { "mHiddenConnections", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mNbWiresConnected_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "The wired connections to this." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mNbWiresConnected = { "mNbWiresConnected", nullptr, (EPropertyFlags)0x0040000001020021, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCircuitConnectionComponent, mNbWiresConnected), nullptr, METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mNbWiresConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mNbWiresConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "The wired connections to this." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires = { "mWires", nullptr, (EPropertyFlags)0x0040000001020021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCircuitConnectionComponent, mWires), METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mWires_Inner = { "mWires", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGBuildableWire_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "This connection is hidden and can only be connected through the code. E.g. powered walls have a hidden connection all machines connect to." },
	};
#endif
	void Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_SetBit(void* Obj)
	{
		((UFGCircuitConnectionComponent*)Obj)->mIsHiddenConnection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection = { "mIsHiddenConnection", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGCircuitConnectionComponent), &Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mIsHiddenConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mMaxNumConnectionLinks_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGCircuitConnectionComponent.h" },
		{ "ToolTip", "How many connections this component can have connected." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mMaxNumConnectionLinks = { "mMaxNumConnectionLinks", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCircuitConnectionComponent, mMaxNumConnectionLinks), METADATA_PARAMS(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mMaxNumConnectionLinks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mMaxNumConnectionLinks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mCircuitID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mHiddenConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::NewProp_mNbWiresConnected,
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
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGCircuitConnectionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
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
	IMPLEMENT_CLASS(UFGCircuitConnectionComponent, 1745078111);
	template<> FACTORYGAME_API UClass* StaticClass<UFGCircuitConnectionComponent>()
	{
		return UFGCircuitConnectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCircuitConnectionComponent(Z_Construct_UClass_UFGCircuitConnectionComponent, &UFGCircuitConnectionComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCircuitConnectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCircuitConnectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
