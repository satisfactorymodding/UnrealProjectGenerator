// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGResourceScanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResourceScanner() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FNodeClusterData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceScanner_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceScanner();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceScanner_CloseResourceDescriptorSelectUI();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceScanner_GetScannableResources();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceScanner_Server_ScanReleased();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceScanner_SetPressingScan();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceScanner_ShowResourceDescriptorSelectUI();
// End Cross Module References
class UScriptStruct* FNodeClusterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FNodeClusterData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeClusterData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("NodeClusterData"), sizeof(FNodeClusterData), Get_Z_Construct_UScriptStruct_FNodeClusterData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeClusterData(FNodeClusterData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("NodeClusterData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFNodeClusterData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFNodeClusterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeClusterData")),new UScriptStruct::TCppStructOps<FNodeClusterData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFNodeClusterData;
	struct Z_Construct_UScriptStruct_FNodeClusterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceDescriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResourceDescriptor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MidPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeClusterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Holds information about resource node clusters. This could be saved in actors on the level for optimization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeClusterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_ResourceDescriptor_MetaData[] = {
		{ "Category", "NodeClusterData" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "The resource descriptor of this cluster" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_ResourceDescriptor = { UE4CodeGen_Private::EPropertyClass::Class, "ResourceDescriptor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000014, 1, nullptr, STRUCT_OFFSET(FNodeClusterData, ResourceDescriptor), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_ResourceDescriptor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_ResourceDescriptor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_MidPoint_MetaData[] = {
		{ "Category", "NodeClusterData" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "The average location of all the nodes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_MidPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "MidPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FNodeClusterData, MidPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_MidPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_MidPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_Nodes_MetaData[] = {
		{ "Category", "NodeClusterData" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Cost of schematic if there are more than once item in this array the true cost will be randomly selected." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_Nodes = { UE4CodeGen_Private::EPropertyClass::Array, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FNodeClusterData, Nodes), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_Nodes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_Nodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeClusterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_ResourceDescriptor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_MidPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeClusterData_Statics::NewProp_Nodes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeClusterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"NodeClusterData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FNodeClusterData),
		alignof(FNodeClusterData),
		Z_Construct_UScriptStruct_FNodeClusterData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeClusterData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeClusterData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeClusterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeClusterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeClusterData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeClusterData"), sizeof(FNodeClusterData), Get_Z_Construct_UScriptStruct_FNodeClusterData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeClusterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeClusterData_CRC() { return 3452271283U; }
	static FName NAME_AFGResourceScanner_CloseResourceDescriptorSelectUI = FName(TEXT("CloseResourceDescriptorSelectUI"));
	void AFGResourceScanner::CloseResourceDescriptorSelectUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceScanner_CloseResourceDescriptorSelectUI),NULL);
	}
	static FName NAME_AFGResourceScanner_PlayClusterEffects = FName(TEXT("PlayClusterEffects"));
	void AFGResourceScanner::PlayClusterEffects(TArray<FNodeClusterData> const& clusters)
	{
		FGResourceScanner_eventPlayClusterEffects_Parms Parms;
		Parms.clusters=clusters;
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceScanner_PlayClusterEffects),&Parms);
	}
	static FName NAME_AFGResourceScanner_Server_ScanReleased = FName(TEXT("Server_ScanReleased"));
	void AFGResourceScanner::Server_ScanReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceScanner_Server_ScanReleased),NULL);
	}
	static FName NAME_AFGResourceScanner_ShowResourceDescriptorSelectUI = FName(TEXT("ShowResourceDescriptorSelectUI"));
	void AFGResourceScanner::ShowResourceDescriptorSelectUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceScanner_ShowResourceDescriptorSelectUI),NULL);
	}
	void AFGResourceScanner::StaticRegisterNativesAFGResourceScanner()
	{
		UClass* Class = AFGResourceScanner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetResourceDescriptorToScanFor", &AFGResourceScanner::execGetResourceDescriptorToScanFor },
			{ "GetScannableResources", &AFGResourceScanner::execGetScannableResources },
			{ "Server_ScanReleased", &AFGResourceScanner::execServer_ScanReleased },
			{ "SetPressingScan", &AFGResourceScanner::execSetPressingScan },
			{ "SetResourceDescriptorToScanFor", &AFGResourceScanner::execSetResourceDescriptorToScanFor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGResourceScanner_CloseResourceDescriptorSelectUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceScanner_CloseResourceDescriptorSelectUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Close the resource descriptor selection UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceScanner_CloseResourceDescriptorSelectUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceScanner, "CloseResourceDescriptorSelectUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceScanner_CloseResourceDescriptorSelectUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_CloseResourceDescriptorSelectUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceScanner_CloseResourceDescriptorSelectUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceScanner_CloseResourceDescriptorSelectUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics
	{
		struct FGResourceScanner_eventGetResourceDescriptorToScanFor_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceScanner_eventGetResourceDescriptorToScanFor_Parms, ReturnValue), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Returns the current resource descriptor class that we scan for nodes that has" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceScanner, "GetResourceDescriptorToScanFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceScanner_eventGetResourceDescriptorToScanFor_Parms), Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics
	{
		struct FGResourceScanner_eventGetScannableResources_Parms
		{
			TArray<TSubclassOf<UFGResourceDescriptor> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceScanner_eventGetScannableResources_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Returns the current resource descriptor classes that we should be able to chose from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceScanner, "GetScannableResources", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceScanner_eventGetScannableResources_Parms), Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceScanner_GetScannableResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceScanner_GetScannableResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clusters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_clusters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_clusters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::NewProp_clusters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::NewProp_clusters = { UE4CodeGen_Private::EPropertyClass::Array, "clusters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGResourceScanner_eventPlayClusterEffects_Parms, clusters), METADATA_PARAMS(Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::NewProp_clusters_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::NewProp_clusters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::NewProp_clusters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "clusters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNodeClusterData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::NewProp_clusters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::NewProp_clusters_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "The function that play effects, sound and particle, in the world at the found node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceScanner, "PlayClusterEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(FGResourceScanner_eventPlayClusterEffects_Parms), Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceScanner_Server_ScanReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceScanner_Server_ScanReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "server notified of when a scanning was made" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceScanner_Server_ScanReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceScanner, "Server_ScanReleased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceScanner_Server_ScanReleased_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_Server_ScanReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceScanner_Server_ScanReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceScanner_Server_ScanReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics
	{
		struct FGResourceScanner_eventSetPressingScan_Parms
		{
			bool isPressingScan;
		};
		static void NewProp_isPressingScan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPressingScan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::NewProp_isPressingScan_SetBit(void* Obj)
	{
		((FGResourceScanner_eventSetPressingScan_Parms*)Obj)->isPressingScan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::NewProp_isPressingScan = { UE4CodeGen_Private::EPropertyClass::Bool, "isPressingScan", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResourceScanner_eventSetPressingScan_Parms), &Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::NewProp_isPressingScan_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::NewProp_isPressingScan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Sets the status of mIsPressingScan" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceScanner, "SetPressingScan", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGResourceScanner_eventSetPressingScan_Parms), Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceScanner_SetPressingScan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceScanner_SetPressingScan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics
	{
		struct FGResourceScanner_eventSetResourceDescriptorToScanFor_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceScanner_eventSetResourceDescriptorToScanFor_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Set resource descriptor class we should scan for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceScanner, "SetResourceDescriptorToScanFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGResourceScanner_eventSetResourceDescriptorToScanFor_Parms), Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceScanner_ShowResourceDescriptorSelectUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceScanner_ShowResourceDescriptorSelectUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Show the resource descriptor selection UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceScanner_ShowResourceDescriptorSelectUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceScanner, "ShowResourceDescriptorSelectUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceScanner_ShowResourceDescriptorSelectUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceScanner_ShowResourceDescriptorSelectUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceScanner_ShowResourceDescriptorSelectUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceScanner_ShowResourceDescriptorSelectUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGResourceScanner_NoRegister()
	{
		return AFGResourceScanner::StaticClass();
	}
	struct Z_Construct_UClass_AFGResourceScanner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNodeClusters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mNodeClusters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mNodeClusters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDistBetweenNodesInCluster_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDistBetweenNodesInCluster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsWaitingForSelectionUI_MetaData[];
#endif
		static void NewProp_mIsWaitingForSelectionUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsWaitingForSelectionUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsPressingScan_MetaData[];
#endif
		static void NewProp_mIsPressingScan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsPressingScan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHoldDownDurationForUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mHoldDownDurationForUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLastPressedTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLastPressedTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNrOfClosestClustersToMark_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNrOfClosestClustersToMark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceDescriptorToScanFor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mResourceDescriptorToScanFor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGResourceScanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGResourceScanner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGResourceScanner_CloseResourceDescriptorSelectUI, "CloseResourceDescriptorSelectUI" }, // 3701333671
		{ &Z_Construct_UFunction_AFGResourceScanner_GetResourceDescriptorToScanFor, "GetResourceDescriptorToScanFor" }, // 3876854588
		{ &Z_Construct_UFunction_AFGResourceScanner_GetScannableResources, "GetScannableResources" }, // 3664421116
		{ &Z_Construct_UFunction_AFGResourceScanner_PlayClusterEffects, "PlayClusterEffects" }, // 1367945894
		{ &Z_Construct_UFunction_AFGResourceScanner_Server_ScanReleased, "Server_ScanReleased" }, // 3025540455
		{ &Z_Construct_UFunction_AFGResourceScanner_SetPressingScan, "SetPressingScan" }, // 3044048901
		{ &Z_Construct_UFunction_AFGResourceScanner_SetResourceDescriptorToScanFor, "SetResourceDescriptorToScanFor" }, // 190577443
		{ &Z_Construct_UFunction_AFGResourceScanner_ShowResourceDescriptorSelectUI, "ShowResourceDescriptorSelectUI" }, // 2109504587
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceScanner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGResourceScanner.h" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Locates resources for the player." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNodeClusters_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "A list of all the clusters of nodes non the level" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNodeClusters = { UE4CodeGen_Private::EPropertyClass::Array, "mNodeClusters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGResourceScanner, mNodeClusters), METADATA_PARAMS(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNodeClusters_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNodeClusters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNodeClusters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mNodeClusters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNodeClusterData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mDistBetweenNodesInCluster_MetaData[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "If nodes are closer that dist they are considered within the cluster" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mDistBetweenNodesInCluster = { UE4CodeGen_Private::EPropertyClass::Float, "mDistBetweenNodesInCluster", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGResourceScanner, mDistBetweenNodesInCluster), METADATA_PARAMS(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mDistBetweenNodesInCluster_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mDistBetweenNodesInCluster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsWaitingForSelectionUI_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "True if we are waiting for the selection UI" },
	};
#endif
	void Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsWaitingForSelectionUI_SetBit(void* Obj)
	{
		((AFGResourceScanner*)Obj)->mIsWaitingForSelectionUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsWaitingForSelectionUI = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsWaitingForSelectionUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGResourceScanner), &Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsWaitingForSelectionUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsWaitingForSelectionUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsWaitingForSelectionUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsPressingScan_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "True in between OnScanPressed and OnScanReleased" },
	};
#endif
	void Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsPressingScan_SetBit(void* Obj)
	{
		((AFGResourceScanner*)Obj)->mIsPressingScan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsPressingScan = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsPressingScan", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGResourceScanner), &Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsPressingScan_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsPressingScan_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsPressingScan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mHoldDownDurationForUI_MetaData[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Time needed to hold down the key to show the selection UI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mHoldDownDurationForUI = { UE4CodeGen_Private::EPropertyClass::Float, "mHoldDownDurationForUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGResourceScanner, mHoldDownDurationForUI), METADATA_PARAMS(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mHoldDownDurationForUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mHoldDownDurationForUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mLastPressedTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "Keeps track of the last time we pressed Scan" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mLastPressedTimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "mLastPressedTimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGResourceScanner, mLastPressedTimeStamp), METADATA_PARAMS(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mLastPressedTimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mLastPressedTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNrOfClosestClustersToMark_MetaData[] = {
		{ "Category", "Resource Scanner" },
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "How many node clusters should be marked" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNrOfClosestClustersToMark = { UE4CodeGen_Private::EPropertyClass::Int, "mNrOfClosestClustersToMark", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGResourceScanner, mNrOfClosestClustersToMark), METADATA_PARAMS(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNrOfClosestClustersToMark_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNrOfClosestClustersToMark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mResourceDescriptorToScanFor_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGResourceScanner.h" },
		{ "ToolTip", "This is the resource class to scan for" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mResourceDescriptorToScanFor = { UE4CodeGen_Private::EPropertyClass::Class, "mResourceDescriptorToScanFor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000000, 1, nullptr, STRUCT_OFFSET(AFGResourceScanner, mResourceDescriptorToScanFor), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mResourceDescriptorToScanFor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mResourceDescriptorToScanFor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGResourceScanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNodeClusters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNodeClusters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mDistBetweenNodesInCluster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsWaitingForSelectionUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mIsPressingScan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mHoldDownDurationForUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mLastPressedTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mNrOfClosestClustersToMark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceScanner_Statics::NewProp_mResourceDescriptorToScanFor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGResourceScanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGResourceScanner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGResourceScanner_Statics::ClassParams = {
		&AFGResourceScanner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGResourceScanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGResourceScanner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGResourceScanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGResourceScanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGResourceScanner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGResourceScanner, 937662334);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGResourceScanner(Z_Construct_UClass_AFGResourceScanner, &AFGResourceScanner::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGResourceScanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGResourceScanner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
