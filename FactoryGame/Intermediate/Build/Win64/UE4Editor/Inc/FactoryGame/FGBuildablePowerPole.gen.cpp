// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildablePowerPole_eventGetCachedNumConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildablePowerPole, "GetCachedNumConnections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildablePowerPole_eventGetCachedNumConnections_Parms), Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildablePowerPole_eventGetPowerCircuit_Parms, ReturnValue), Z_Construct_UClass_UFGPowerCircuit_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildablePowerPole, "GetPowerCircuit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildablePowerPole_eventGetPowerCircuit_Parms), Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGBuildablePowerPole_eventGetPowerConnection_Parms, ReturnValue), Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerPole" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildablePowerPole, "GetPowerConnection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildablePowerPole_eventGetPowerConnection_Parms), Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionsWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildablePowerPole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildablePowerPole_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildablePowerPole_GetCachedNumConnections, "GetCachedNumConnections" }, // 2360545031
		{ &Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerCircuit, "GetPowerCircuit" }, // 2917781960
		{ &Z_Construct_UFunction_AFGBuildablePowerPole_GetPowerConnection, "GetPowerConnection" }, // 2062109284
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mCachedNumConnectionsToPole = { UE4CodeGen_Private::EPropertyClass::Int, "mCachedNumConnectionsToPole", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AFGBuildablePowerPole, mCachedNumConnectionsToPole), METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mCachedNumConnectionsToPole_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mCachedNumConnectionsToPole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy_MetaData[] = {
		{ "Category", "FGBuildablePowerPole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
		{ "ToolTip", "The mesh component for this pole. //UPROPERTY( VisibleAnywhere )\n//class UProxyInstancedStaticMeshComponent* mMeshComponent; //@TODO:[DavalliusA:Tue/05-03-2019] remove later //[DavalliusA:Tue/05-03-2019] removed as the transfer to the new proxy instance system is done" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy = { UE4CodeGen_Private::EPropertyClass::Object, "mMeshComponentProxy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildablePowerPole, mMeshComponentProxy), Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection_MetaData[] = {
		{ "Category", "PowerPole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
		{ "ToolTip", "The connection on this pole." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection = { UE4CodeGen_Private::EPropertyClass::Object, "mPowerConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0029, 1, nullptr, STRUCT_OFFSET(AFGBuildablePowerPole, mPowerConnection), Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidget_MetaData[] = {
		{ "Category", "PowerPole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePowerPole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidget = { UE4CodeGen_Private::EPropertyClass::Object, "mConnectionsWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AFGBuildablePowerPole, mConnectionsWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildablePowerPole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mCachedNumConnectionsToPole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mMeshComponentProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mPowerConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePowerPole_Statics::NewProp_mConnectionsWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildablePowerPole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildablePowerPole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildablePowerPole_Statics::ClassParams = {
		&AFGBuildablePowerPole::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildablePowerPole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePowerPole_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGBuildablePowerPole, 3629406587);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildablePowerPole(Z_Construct_UClass_AFGBuildablePowerPole, &AFGBuildablePowerPole::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildablePowerPole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildablePowerPole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
