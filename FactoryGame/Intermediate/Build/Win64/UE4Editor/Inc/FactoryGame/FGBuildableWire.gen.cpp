// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableWire.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableWire() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWire_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWire();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableWire_GetConnection();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableWire_GetLength();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFGBuildableWire::StaticRegisterNativesAFGBuildableWire()
	{
		UClass* Class = AFGBuildableWire::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConnection", &AFGBuildableWire::execGetConnection },
			{ "GetLength", &AFGBuildableWire::execGetLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics
	{
		struct FGBuildableWire_eventGetConnection_Parms
		{
			int32 index;
			UFGCircuitConnectionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableWire_eventGetConnection_Parms, ReturnValue), Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableWire_eventGetConnection_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buildable|Wire" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWire.h" },
		{ "ToolTip", "@return The connection connected at the end of the wire." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableWire, nullptr, "GetConnection", sizeof(FGBuildableWire_eventGetConnection_Parms), Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableWire_GetConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableWire_GetConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics
	{
		struct FGBuildableWire_eventGetLength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableWire_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buildable|Wire" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWire.h" },
		{ "ToolTip", "@return The distance between the points the wire connects." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableWire, nullptr, "GetLength", sizeof(FGBuildableWire_eventGetLength_Parms), Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableWire_GetLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableWire_GetLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableWire_NoRegister()
	{
		return AFGBuildableWire::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableWire_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_mConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWireMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mWireMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLengthPerCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLengthPerCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableWire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableWire_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableWire_GetConnection, "GetConnection" }, // 2267768907
		{ &Z_Construct_UFunction_AFGBuildableWire_GetLength, "GetLength" }, // 3866375102
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWire_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableWire.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWire.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A wire that connects to wire connection components.\nThis is an edge in a circuit graph." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWire.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "The two locations this wire span." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLocations = { "mLocations", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mLocations, AFGBuildableWire), STRUCT_OFFSET(AFGBuildableWire, mLocations), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLocations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mConnections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWire.h" },
		{ "ToolTip", "The connections made by this wire.\nWeak references as buildings can be removed and leave the cables hanging.\nThis is for mod stability or just different lifespan when dismantling building and wires." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mConnections = { "mConnections", nullptr, (EPropertyFlags)0x0044000000080028, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mConnections, AFGBuildableWire), STRUCT_OFFSET(AFGBuildableWire, mConnections), Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mWireMesh_MetaData[] = {
		{ "Category", "Wire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWire.h" },
		{ "ToolTip", "Mesh used to visualize the power line" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mWireMesh = { "mWireMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableWire, mWireMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mWireMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mWireMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLengthPerCost_MetaData[] = {
		{ "Category", "Wire" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWire.h" },
		{ "ToolTip", "How much length we get per unit cost, 0 to disable per length cost. [cm]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLengthPerCost = { "mLengthPerCost", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableWire, mLengthPerCost), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLengthPerCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLengthPerCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mMaxLength_MetaData[] = {
		{ "Category", "Wire" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWire.h" },
		{ "ToolTip", "Maximum length a wire may be. [cm]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mMaxLength = { "mMaxLength", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableWire, mMaxLength), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mMaxLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mMaxLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableWire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mWireMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mLengthPerCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWire_Statics::NewProp_mMaxLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableWire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableWire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableWire_Statics::ClassParams = {
		&AFGBuildableWire::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableWire_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWire_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWire_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableWire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableWire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableWire, 2931539307);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableWire>()
	{
		return AFGBuildableWire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableWire(Z_Construct_UClass_AFGBuildableWire, &AFGBuildableWire::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableWire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableWire);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGBuildableWire)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
