// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildablePowerPole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildablePowerPole() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildablePowerPole_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildablePowerPole();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerCircuit_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildablePowerPole_OnShowConnectionFeedback();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFGBuildablePowerPole_OnShowConnectionFeedback = FName(TEXT("OnShowConnectionFeedback"));
	void AFGBuildablePowerPole::OnShowConnectionFeedback()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildablePowerPole_OnShowConnectionFeedback),NULL);
	}
	void AFGBuildablePowerPole::StaticRegisterNativesAFGBuildablePowerPole()
	{
		UClass* Class = AFGBuildablePowerPole::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCachedNumConnections", &AFGBuildablePowerPole::execGetCachedNumConnections },
			{ "GetPowerCircuit", &AFGBuildablePowerPole::execGetPowerCircuit },
			{ "GetPowerConnection", &AFGBuildablePowerPole::execGetPowerConnection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics
	{
		struct FGBuildablePowerPole_eventGetCachedNumConnections_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildablePowerPole_eventGetCachedNumConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerPole" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
		{ "ToolTip", "Faster way to query how many connections this power pole currently have connected to it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildablePowerPole, nullptr, "GetCachedNumConnections", sizeof(FGBuildablePowerPole_eventGetCachedNumConnections_Parms), Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics
	{
		struct FGBuildablePowerPole_eventGetPowerCircuit_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildablePowerPole_eventGetPowerCircuit_Parms, ReturnValue), Z_Construct_UClass_UFGPowerCircuit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerPole" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
		{ "ToolTip", "@return The power circuit this pole is connected to; nullptr if not connected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildablePowerPole, nullptr, "GetPowerCircuit", sizeof(FGBuildablePowerPole_eventGetPowerCircuit_Parms), Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics
	{
		struct FGBuildablePowerPole_eventGetPowerConnection_Parms
		{
			UFGPowerConnectionComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildablePowerPole_eventGetPowerConnection_Parms, ReturnValue), Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerPole" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildablePowerPole, nullptr, "GetPowerConnection", sizeof(FGBuildablePowerPole_eventGetPowerConnection_Parms), Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildablePowerPole_OnShowConnectionFeedback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildablePowerPole_OnShowConnectionFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerPole" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildablePowerPole_OnShowConnectionFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildablePowerPole, nullptr, "OnShowConnectionFeedback", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePowerPole_OnShowConnectionFeedback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_OnShowConnectionFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildablePowerPole_OnShowConnectionFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildablePowerPole_OnShowConnectionFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildablePowerPole_NoRegister()
	{
		return AFGBuildablePowerPole::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildablePowerPole_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedNumConnectionsToPole_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCachedNumConnectionsToPole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshComponentProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMeshComponentProxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPowerConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mConnectionWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionsWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionsWidgetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildablePowerPole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildablePowerPole_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections, "GetCachedNumConnections" }, // 4119702202
		{ &Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit, "GetPowerCircuit" }, // 789612497
		{ &Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection, "GetPowerConnection" }, // 302569205
		{ &Z_Construct_UFunction_AFGBuildablePowerPole_OnShowConnectionFeedback, "OnShowConnectionFeedback" }, // 3186148067
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePowerPole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildablePowerPole.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
		{ "ToolTip", "Base class for all power poles." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mCachedNumConnectionsToPole_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
		{ "NoAutoJson", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mCachedNumConnectionsToPole = { "mCachedNumConnectionsToPole", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildablePowerPole, mCachedNumConnectionsToPole), METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mCachedNumConnectionsToPole_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mCachedNumConnectionsToPole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy_MetaData[] = {
		{ "Category", "FGBuildablePowerPole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
		{ "ToolTip", "The mesh component for this pole." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy = { "mMeshComponentProxy", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildablePowerPole, mMeshComponentProxy), Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection_MetaData[] = {
		{ "Category", "PowerPole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
		{ "ToolTip", "The connection on this pole." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection = { "mPowerConnection", nullptr, (EPropertyFlags)0x00400000000a0029, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildablePowerPole, mPowerConnection), Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionWidgetClass_MetaData[] = {
		{ "Category", "PowerPole" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionWidgetClass = { "mConnectionWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildablePowerPole, mConnectionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidgetComponent_MetaData[] = {
		{ "Category", "PowerPole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidgetComponent = { "mConnectionsWidgetComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildablePowerPole, mConnectionsWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidgetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildablePowerPole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mCachedNumConnectionsToPole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidgetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildablePowerPole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildablePowerPole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::ClassParams = {
		&AFGBuildablePowerPole::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildablePowerPole_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildablePowerPole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildablePowerPole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildablePowerPole, 3244443466);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildablePowerPole>()
	{
		return AFGBuildablePowerPole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildablePowerPole(Z_Construct_UClass_AFGBuildablePowerPole, &AFGBuildablePowerPole::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildablePowerPole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildablePowerPole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
