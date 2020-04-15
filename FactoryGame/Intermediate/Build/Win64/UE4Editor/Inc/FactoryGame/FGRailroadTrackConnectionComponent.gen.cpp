// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGRailroadTrackConnectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadTrackConnectionComponent() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadTrackConnectionComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConnectionComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadSignal_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadSwitchControl_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnRailRoadConnectionSwitched_Parms
		{
			int32 newSwitch;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newSwitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::NewProp_newSwitch = { "newSwitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnRailRoadConnectionSwitched_Parms, newSwitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::NewProp_newSwitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnRailRoadConnectionSwitched__DelegateSignature", sizeof(_Script_FactoryGame_eventOnRailRoadConnectionSwitched_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFGRailroadTrackConnectionComponent::StaticRegisterNativesUFGRailroadTrackConnectionComponent()
	{
		UClass* Class = UFGRailroadTrackConnectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConnection", &UFGRailroadTrackConnectionComponent::execGetConnection },
			{ "GetNumSwitchPositions", &UFGRailroadTrackConnectionComponent::execGetNumSwitchPositions },
			{ "GetSwitchPosition", &UFGRailroadTrackConnectionComponent::execGetSwitchPosition },
			{ "SetSwitchPosition", &UFGRailroadTrackConnectionComponent::execSetSwitchPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics
	{
		struct FGRailroadTrackConnectionComponent_eventGetConnection_Parms
		{
			int32 position;
			UFGRailroadTrackConnectionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTrackConnectionComponent_eventGetConnection_Parms, ReturnValue), Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTrackConnectionComponent_eventGetConnection_Parms, position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Track" },
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "@return The connected connection at switch position; nullptr if not connected or bad index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadTrackConnectionComponent, nullptr, "GetConnection", sizeof(FGRailroadTrackConnectionComponent_eventGetConnection_Parms), Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics
	{
		struct FGRailroadTrackConnectionComponent_eventGetNumSwitchPositions_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTrackConnectionComponent_eventGetNumSwitchPositions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Track" },
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "0: Not connected.\n1: Connected.\n>1: Turnout.\n\n@return The number of connections, i.e. switch positions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadTrackConnectionComponent, nullptr, "GetNumSwitchPositions", sizeof(FGRailroadTrackConnectionComponent_eventGetNumSwitchPositions_Parms), Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics
	{
		struct FGRailroadTrackConnectionComponent_eventGetSwitchPosition_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTrackConnectionComponent_eventGetSwitchPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Track" },
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "@return The current switch position [0,n]; 0 if not a switch." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadTrackConnectionComponent, nullptr, "GetSwitchPosition", sizeof(FGRailroadTrackConnectionComponent_eventGetSwitchPosition_Parms), Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics
	{
		struct FGRailroadTrackConnectionComponent_eventSetSwitchPosition_Parms
		{
			int32 position;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadTrackConnectionComponent_eventSetSwitchPosition_Parms, position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Track" },
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "Set the current switch position.\n@param position Will be clamped to the valid range [0,n]." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadTrackConnectionComponent, nullptr, "SetSwitchPosition", sizeof(FGRailroadTrackConnectionComponent_eventSetSwitchPosition_Parms), Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister()
	{
		return UFGRailroadTrackConnectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSignal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSwitchControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSwitchControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSwitchPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mSwitchPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mConnectedComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRailRoadSwitchDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mRailRoadSwitchDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGConnectionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetConnection, "GetConnection" }, // 314842608
		{ &Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetNumSwitchPositions, "GetNumSwitchPositions" }, // 68812839
		{ &Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_GetSwitchPosition, "GetSwitchPosition" }, // 1866608220
		{ &Z_Construct_UFunction_UFGRailroadTrackConnectionComponent_SetSwitchPosition, "SetSwitchPosition" }, // 44062735
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGRailroadTrackConnectionComponent.h" },
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "The actual track connection placed in the editor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSignal_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "The signal associated with this connection, if any." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSignal = { "mSignal", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mSignal), Z_Construct_UClass_AFGBuildableRailroadSignal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSignal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSignal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mStation_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "The station associated with this connection, if any." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mStation = { "mStation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mStation), Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mStation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mStation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchControl_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "The switch control associated with this connection, if any." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchControl = { "mSwitchControl", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mSwitchControl), Z_Construct_UClass_AFGBuildableRailroadSwitchControl_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "If this is a switch, this is the switch position." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchPosition = { "mSwitchPosition", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mSwitchPosition), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mConnectedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "The components we're connected to. If >1 this is a switch." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mConnectedComponents = { "mConnectedComponents", nullptr, (EPropertyFlags)0x0040008001000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mConnectedComponents), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mConnectedComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mConnectedComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mConnectedComponents_Inner = { "mConnectedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mRailRoadSwitchDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadTrackConnectionComponent.h" },
		{ "ToolTip", "Delegate to fire when changing switch on a track" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mRailRoadSwitchDelegate = { "mRailRoadSwitchDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRailroadTrackConnectionComponent, mRailRoadSwitchDelegate), Z_Construct_UDelegateFunction_FactoryGame_OnRailRoadConnectionSwitched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mRailRoadSwitchDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mRailRoadSwitchDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSignal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mStation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mSwitchPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mConnectedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mConnectedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::NewProp_mRailRoadSwitchDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGRailroadTrackConnectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::ClassParams = {
		&UFGRailroadTrackConnectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRailroadTrackConnectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRailroadTrackConnectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRailroadTrackConnectionComponent, 4060140932);
	template<> FACTORYGAME_API UClass* StaticClass<UFGRailroadTrackConnectionComponent>()
	{
		return UFGRailroadTrackConnectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRailroadTrackConnectionComponent(Z_Construct_UClass_UFGRailroadTrackConnectionComponent, &UFGRailroadTrackConnectionComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRailroadTrackConnectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRailroadTrackConnectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
