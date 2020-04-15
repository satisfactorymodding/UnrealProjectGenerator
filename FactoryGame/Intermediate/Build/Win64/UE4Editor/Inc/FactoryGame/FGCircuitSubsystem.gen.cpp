// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGCircuitSubsystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCircuitSubsystem() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCircuitSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCircuitSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuit_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_OnRep_ReplicatedCircuits();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseReset();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseSet();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	static FName NAME_AFGCircuitSubsystem_PowerCircuit_OnFuseReset = FName(TEXT("PowerCircuit_OnFuseReset"));
	void AFGCircuitSubsystem::PowerCircuit_OnFuseReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCircuitSubsystem_PowerCircuit_OnFuseReset),NULL);
	}
	static FName NAME_AFGCircuitSubsystem_PowerCircuit_OnFuseSet = FName(TEXT("PowerCircuit_OnFuseSet"));
	void AFGCircuitSubsystem::PowerCircuit_OnFuseSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCircuitSubsystem_PowerCircuit_OnFuseSet),NULL);
	}
	void AFGCircuitSubsystem::StaticRegisterNativesAFGCircuitSubsystem()
	{
		UClass* Class = AFGCircuitSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindCircuit", &AFGCircuitSubsystem::execFindCircuit },
			{ "GetCircuitSubsystem", &AFGCircuitSubsystem::execGetCircuitSubsystem },
			{ "OnRep_ReplicatedCircuits", &AFGCircuitSubsystem::execOnRep_ReplicatedCircuits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics
	{
		struct FGCircuitSubsystem_eventFindCircuit_Parms
		{
			int32 circuitID;
			UFGCircuit* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_circuitID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitSubsystem_eventFindCircuit_Parms, ReturnValue), Z_Construct_UClass_UFGCircuit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::NewProp_circuitID = { "circuitID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitSubsystem_eventFindCircuit_Parms, circuitID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::NewProp_circuitID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits" },
		{ "ModuleRelativePath", "Public/FGCircuitSubsystem.h" },
		{ "ToolTip", "Find the circuit with the given circuit ID.\n@return - The circuit if found; nullptr if no circuit exists with that id.\n\n@note The returned pointer is only valid this tick or until a change is made to the circuitry by calling CreateCircuit, RemoveCircuit, ConnectComponents." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCircuitSubsystem, nullptr, "FindCircuit", sizeof(FGCircuitSubsystem_eventFindCircuit_Parms), Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics
	{
		struct FGCircuitSubsystem_eventGetCircuitSubsystem_Parms
		{
			UObject* worldContext;
			AFGCircuitSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitSubsystem_eventGetCircuitSubsystem_Parms, ReturnValue), Z_Construct_UClass_AFGCircuitSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuitSubsystem_eventGetCircuitSubsystem_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "Public/FGCircuitSubsystem.h" },
		{ "ToolTip", "Get the circuit subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCircuitSubsystem, nullptr, "GetCircuitSubsystem", sizeof(FGCircuitSubsystem_eventGetCircuitSubsystem_Parms), Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCircuitSubsystem_OnRep_ReplicatedCircuits_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCircuitSubsystem_OnRep_ReplicatedCircuits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCircuitSubsystem.h" },
		{ "ToolTip", "Let the clients know about changes in the circuits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCircuitSubsystem_OnRep_ReplicatedCircuits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCircuitSubsystem, nullptr, "OnRep_ReplicatedCircuits", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCircuitSubsystem_OnRep_ReplicatedCircuits_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCircuitSubsystem_OnRep_ReplicatedCircuits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_OnRep_ReplicatedCircuits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCircuitSubsystem_OnRep_ReplicatedCircuits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Power" },
		{ "ModuleRelativePath", "Public/FGCircuitSubsystem.h" },
		{ "ToolTip", "Called when a power circuit had it's power restored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCircuitSubsystem, nullptr, "PowerCircuit_OnFuseReset", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseReset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Power" },
		{ "ModuleRelativePath", "Public/FGCircuitSubsystem.h" },
		{ "ToolTip", "Called when a power circuit lost power." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCircuitSubsystem, nullptr, "PowerCircuit_OnFuseSet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCircuitSubsystem_NoRegister()
	{
		return AFGCircuitSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGCircuitSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicatedCircuits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mReplicatedCircuits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mReplicatedCircuits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCircuits_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mCircuits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCircuits_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCircuits_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCircuitSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCircuitSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCircuitSubsystem_FindCircuit, "FindCircuit" }, // 2137090511
		{ &Z_Construct_UFunction_AFGCircuitSubsystem_GetCircuitSubsystem, "GetCircuitSubsystem" }, // 1766120116
		{ &Z_Construct_UFunction_AFGCircuitSubsystem_OnRep_ReplicatedCircuits, "OnRep_ReplicatedCircuits" }, // 2976357145
		{ &Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseReset, "PowerCircuit_OnFuseReset" }, // 3695614620
		{ &Z_Construct_UFunction_AFGCircuitSubsystem_PowerCircuit_OnFuseSet, "PowerCircuit_OnFuseSet" }, // 3146212358
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCircuitSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGCircuitSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGCircuitSubsystem.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Subsystem to handle all circuits, connects, disconnects." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mReplicatedCircuits_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCircuitSubsystem.h" },
		{ "ToolTip", "@todo There is no support for TMap replication, fix something better than this." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mReplicatedCircuits = { "mReplicatedCircuits", "OnRep_ReplicatedCircuits", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCircuitSubsystem, mReplicatedCircuits), METADATA_PARAMS(Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mReplicatedCircuits_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mReplicatedCircuits_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mReplicatedCircuits_Inner = { "mReplicatedCircuits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGCircuit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mCircuits_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCircuitSubsystem.h" },
		{ "ToolTip", "Map with all circuits and the circuit ID as the key." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mCircuits = { "mCircuits", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCircuitSubsystem, mCircuits), METADATA_PARAMS(Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mCircuits_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mCircuits_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mCircuits_Key_KeyProp = { "mCircuits_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mCircuits_ValueProp = { "mCircuits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFGCircuit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCircuitSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mReplicatedCircuits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mReplicatedCircuits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mCircuits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mCircuits_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCircuitSubsystem_Statics::NewProp_mCircuits_ValueProp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGCircuitSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGCircuitSubsystem, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCircuitSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCircuitSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCircuitSubsystem_Statics::ClassParams = {
		&AFGCircuitSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGCircuitSubsystem_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGCircuitSubsystem_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AFGCircuitSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCircuitSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCircuitSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCircuitSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCircuitSubsystem, 150604401);
	template<> FACTORYGAME_API UClass* StaticClass<AFGCircuitSubsystem>()
	{
		return AFGCircuitSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCircuitSubsystem(Z_Construct_UClass_AFGCircuitSubsystem, &AFGCircuitSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCircuitSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCircuitSubsystem);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGCircuitSubsystem)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
