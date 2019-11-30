// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGMaterialFlowAnalysisFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMaterialFlowAnalysisFunctionLibrary() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialFlowNode();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialFlowConnection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialFlowGraph();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRecipeManager_NoRegister();
// End Cross Module References
class UScriptStruct* FMaterialFlowNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMaterialFlowNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialFlowNode, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MaterialFlowNode"), sizeof(FMaterialFlowNode), Get_Z_Construct_UScriptStruct_FMaterialFlowNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialFlowNode(FMaterialFlowNode::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("MaterialFlowNode"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFMaterialFlowNode
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFMaterialFlowNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialFlowNode")),new UScriptStruct::TCppStructOps<FMaterialFlowNode>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFMaterialFlowNode;
	struct Z_Construct_UScriptStruct_FMaterialFlowNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProducerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProducerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Recipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FactoryGame|MaterialFlow" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Material flow node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialFlowNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "MaterialFlowNode" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Child flow nodes, 0 for leaf nodes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Array, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowNode, Inputs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Inputs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Inputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMaterialFlowConnection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Outputs_MetaData[] = {
		{ "Category", "MaterialFlowNode" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Parent flow nodes, 0 for root nodes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Outputs = { UE4CodeGen_Private::EPropertyClass::Array, "Outputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowNode, Outputs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Outputs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Outputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Outputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMaterialFlowConnection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_ProducerCount_MetaData[] = {
		{ "Category", "MaterialFlowNode" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "How many producers are needed for this recipe." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_ProducerCount = { UE4CodeGen_Private::EPropertyClass::Int, "ProducerCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowNode, ProducerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_ProducerCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_ProducerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "MaterialFlowNode" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "At which depth in the dependency tree is this item, root is 0." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Depth = { UE4CodeGen_Private::EPropertyClass::Int, "Depth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowNode, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Depth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Recipe_MetaData[] = {
		{ "Category", "MaterialFlowNode" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Recipe analyzed, nullptr for leaf nodes." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Recipe = { UE4CodeGen_Private::EPropertyClass::Class, "Recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowNode, Recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Recipe_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Recipe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Outputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_ProducerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::NewProp_Recipe,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MaterialFlowNode",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMaterialFlowNode),
		alignof(FMaterialFlowNode),
		Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialFlowNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialFlowNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialFlowNode"), sizeof(FMaterialFlowNode), Get_Z_Construct_UScriptStruct_FMaterialFlowNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialFlowNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialFlowNode_CRC() { return 2460710067U; }
class UScriptStruct* FMaterialFlowConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMaterialFlowConnection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialFlowConnection, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MaterialFlowConnection"), sizeof(FMaterialFlowConnection), Get_Z_Construct_UScriptStruct_FMaterialFlowConnection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialFlowConnection(FMaterialFlowConnection::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("MaterialFlowConnection"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFMaterialFlowConnection
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFMaterialFlowConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialFlowConnection")),new UScriptStruct::TCppStructOps<FMaterialFlowConnection>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFMaterialFlowConnection;
	struct Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalFlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Flow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Descriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FactoryGame|MaterialFlow" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Input/output in the flow analysis." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialFlowConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalFlow_MetaData[] = {
		{ "Category", "MaterialFlowConnection" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Total flow. [items/second]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalFlow = { UE4CodeGen_Private::EPropertyClass::Float, "TotalFlow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowConnection, TotalFlow), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalFlow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalFlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalCount_MetaData[] = {
		{ "Category", "MaterialFlowConnection" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Total count. [items/cycle]" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalCount = { UE4CodeGen_Private::EPropertyClass::Int, "TotalCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowConnection, TotalCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Flow_MetaData[] = {
		{ "Category", "MaterialFlowConnection" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Base flow. [items/second]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Flow = { UE4CodeGen_Private::EPropertyClass::Float, "Flow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowConnection, Flow), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Flow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Flow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "MaterialFlowConnection" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Base count. [items/cycle]" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Count = { UE4CodeGen_Private::EPropertyClass::Int, "Count", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowConnection, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Count_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Descriptor_MetaData[] = {
		{ "Category", "MaterialFlowConnection" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Details about the material flow in this step." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Descriptor = { UE4CodeGen_Private::EPropertyClass::Class, "Descriptor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000014, 1, nullptr, STRUCT_OFFSET(FMaterialFlowConnection, Descriptor), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Descriptor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Descriptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalFlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_TotalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Flow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::NewProp_Descriptor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MaterialFlowConnection",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMaterialFlowConnection),
		alignof(FMaterialFlowConnection),
		Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialFlowConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialFlowConnection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialFlowConnection"), sizeof(FMaterialFlowConnection), Get_Z_Construct_UScriptStruct_FMaterialFlowConnection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialFlowConnection_CRC() { return 2650018656U; }
class UScriptStruct* FMaterialFlowGraph::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMaterialFlowGraph_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialFlowGraph, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MaterialFlowGraph"), sizeof(FMaterialFlowGraph), Get_Z_Construct_UScriptStruct_FMaterialFlowGraph_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialFlowGraph(FMaterialFlowGraph::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("MaterialFlowGraph"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFMaterialFlowGraph
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFMaterialFlowGraph()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialFlowGraph")),new UScriptStruct::TCppStructOps<FMaterialFlowGraph>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFMaterialFlowGraph;
	struct Z_Construct_UScriptStruct_FMaterialFlowGraph_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFlowGraph_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FactoryGame|MaterialFlow" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "The resulting DAG from a flow analysis." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialFlowGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialFlowGraph>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialFlowGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MaterialFlowGraph",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMaterialFlowGraph),
		alignof(FMaterialFlowGraph),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFlowGraph_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFlowGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialFlowGraph()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialFlowGraph_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialFlowGraph"), sizeof(FMaterialFlowGraph), Get_Z_Construct_UScriptStruct_FMaterialFlowGraph_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialFlowGraph_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialFlowGraph_CRC() { return 2148391437U; }
	void UFGMaterialFlowAnalysisFunctionLibrary::StaticRegisterNativesUFGMaterialFlowAnalysisFunctionLibrary()
	{
		UClass* Class = UFGMaterialFlowAnalysisFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGraphDepth", &UFGMaterialFlowAnalysisFunctionLibrary::execGetGraphDepth },
			{ "GetGraphNodes", &UFGMaterialFlowAnalysisFunctionLibrary::execGetGraphNodes },
			{ "PerformMaterialFlowAnalysis", &UFGMaterialFlowAnalysisFunctionLibrary::execPerformMaterialFlowAnalysis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics
	{
		struct FGMaterialFlowAnalysisFunctionLibrary_eventGetGraphDepth_Parms
		{
			FMaterialFlowGraph graph;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_graph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMaterialFlowAnalysisFunctionLibrary_eventGetGraphDepth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::NewProp_graph_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::NewProp_graph = { UE4CodeGen_Private::EPropertyClass::Struct, "graph", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGMaterialFlowAnalysisFunctionLibrary_eventGetGraphDepth_Parms, graph), Z_Construct_UScriptStruct_FMaterialFlowGraph, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::NewProp_graph_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::NewProp_graph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::NewProp_graph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|MaterialFlow" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Get the depth of the material flow graph." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary, "GetGraphDepth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGMaterialFlowAnalysisFunctionLibrary_eventGetGraphDepth_Parms), Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics
	{
		struct FGMaterialFlowAnalysisFunctionLibrary_eventGetGraphNodes_Parms
		{
			FMaterialFlowGraph graph;
			int32 depth;
			TArray<FMaterialFlowNode> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_graph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMaterialFlowAnalysisFunctionLibrary_eventGetGraphNodes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMaterialFlowNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_depth = { UE4CodeGen_Private::EPropertyClass::Int, "depth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMaterialFlowAnalysisFunctionLibrary_eventGetGraphNodes_Parms, depth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_graph_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_graph = { UE4CodeGen_Private::EPropertyClass::Struct, "graph", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGMaterialFlowAnalysisFunctionLibrary_eventGetGraphNodes_Parms, graph), Z_Construct_UScriptStruct_FMaterialFlowGraph, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_graph_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_graph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::NewProp_graph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|MaterialFlow" },
		{ "CPP_Default_depth", "-1" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Get nodes in the material flow graph at a certain depth, -1 to get all nodes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary, "GetGraphNodes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FGMaterialFlowAnalysisFunctionLibrary_eventGetGraphNodes_Parms), Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics
	{
		struct FGMaterialFlowAnalysisFunctionLibrary_eventPerformMaterialFlowAnalysis_Parms
		{
			TArray<TSubclassOf<UFGRecipe> > recipes;
			AFGRecipeManager* recipeManager;
			FMaterialFlowGraph ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_recipeManager;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_recipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMaterialFlowAnalysisFunctionLibrary_eventPerformMaterialFlowAnalysis_Parms, ReturnValue), Z_Construct_UScriptStruct_FMaterialFlowGraph, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::NewProp_recipeManager = { UE4CodeGen_Private::EPropertyClass::Object, "recipeManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMaterialFlowAnalysisFunctionLibrary_eventPerformMaterialFlowAnalysis_Parms, recipeManager), Z_Construct_UClass_AFGRecipeManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::NewProp_recipes = { UE4CodeGen_Private::EPropertyClass::Array, "recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGMaterialFlowAnalysisFunctionLibrary_eventPerformMaterialFlowAnalysis_Parms, recipes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::NewProp_recipes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::NewProp_recipeManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::NewProp_recipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::NewProp_recipes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|MaterialFlow" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Perform a material flow analysis on the given recipe." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary, "PerformMaterialFlowAnalysis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGMaterialFlowAnalysisFunctionLibrary_eventPerformMaterialFlowAnalysis_Parms), Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_NoRegister()
	{
		return UFGMaterialFlowAnalysisFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphDepth, "GetGraphDepth" }, // 1763549670
		{ &Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_GetGraphNodes, "GetGraphNodes" }, // 2723721470
		{ &Z_Construct_UFunction_UFGMaterialFlowAnalysisFunctionLibrary_PerformMaterialFlowAnalysis, "PerformMaterialFlowAnalysis" }, // 825485897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ModuleRelativePath", "FGMaterialFlowAnalysisFunctionLibrary.h" },
		{ "ToolTip", "Function library for material flow analysis in the factory." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMaterialFlowAnalysisFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics::ClassParams = {
		&UFGMaterialFlowAnalysisFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMaterialFlowAnalysisFunctionLibrary, 1695704549);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMaterialFlowAnalysisFunctionLibrary(Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary, &UFGMaterialFlowAnalysisFunctionLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMaterialFlowAnalysisFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMaterialFlowAnalysisFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
