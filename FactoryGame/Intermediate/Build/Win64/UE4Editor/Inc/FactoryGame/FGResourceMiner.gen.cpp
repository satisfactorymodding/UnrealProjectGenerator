// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGResourceMiner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResourceMiner() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceMiner_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceMiner();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceMiner_DoMine();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceMiner_GetResourceNode();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceMiner_RemoveEquipment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceMiner_Server_ExtractResources();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceMiner_SetResourceNode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceMiner_StartMining();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceMiner_StopMining();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	static FName NAME_AFGResourceMiner_Server_ExtractResources = FName(TEXT("Server_ExtractResources"));
	void AFGResourceMiner::Server_ExtractResources()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceMiner_Server_ExtractResources),NULL);
	}
	static FName NAME_AFGResourceMiner_StartMining = FName(TEXT("StartMining"));
	void AFGResourceMiner::StartMining()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceMiner_StartMining),NULL);
	}
	static FName NAME_AFGResourceMiner_StopMining = FName(TEXT("StopMining"));
	void AFGResourceMiner::StopMining()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceMiner_StopMining),NULL);
	}
	void AFGResourceMiner::StaticRegisterNativesAFGResourceMiner()
	{
		UClass* Class = AFGResourceMiner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoMine", &AFGResourceMiner::execDoMine },
			{ "GetResourceNode", &AFGResourceMiner::execGetResourceNode },
			{ "RemoveEquipment", &AFGResourceMiner::execRemoveEquipment },
			{ "Server_ExtractResources", &AFGResourceMiner::execServer_ExtractResources },
			{ "SetResourceNode", &AFGResourceMiner::execSetResourceNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGResourceMiner_DoMine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceMiner_DoMine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Miner" },
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "This is where we do the actual mining ( claim resource etc )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceMiner_DoMine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceMiner, nullptr, "DoMine", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceMiner_DoMine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceMiner_DoMine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceMiner_DoMine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceMiner_DoMine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics
	{
		struct FGResourceMiner_eventGetResourceNode_Parms
		{
			AFGResourceNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceMiner_eventGetResourceNode_Parms, ReturnValue), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Miner" },
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "Gets the saved resource node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceMiner, nullptr, "GetResourceNode", sizeof(FGResourceMiner_eventGetResourceNode_Parms), Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceMiner_GetResourceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceMiner_GetResourceNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceMiner_RemoveEquipment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceMiner_RemoveEquipment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Miner" },
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "Used to unequip this equipment from client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceMiner_RemoveEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceMiner, nullptr, "RemoveEquipment", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceMiner_RemoveEquipment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceMiner_RemoveEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceMiner_RemoveEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceMiner_RemoveEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceMiner_Server_ExtractResources_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceMiner_Server_ExtractResources_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "server notified of hit from client to verify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceMiner_Server_ExtractResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceMiner, nullptr, "Server_ExtractResources", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceMiner_Server_ExtractResources_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceMiner_Server_ExtractResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceMiner_Server_ExtractResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceMiner_Server_ExtractResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics
	{
		struct FGResourceMiner_eventSetResourceNode_Parms
		{
			AFGResourceNode* inNode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::NewProp_inNode = { "inNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceMiner_eventSetResourceNode_Parms, inNode), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::NewProp_inNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Miner" },
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "Sets the node we are mining" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceMiner, nullptr, "SetResourceNode", sizeof(FGResourceMiner_eventSetResourceNode_Parms), Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceMiner_SetResourceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceMiner_SetResourceNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceMiner_StartMining_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceMiner_StartMining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Miner" },
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "Called when we start mining" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceMiner_StartMining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceMiner, nullptr, "StartMining", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceMiner_StartMining_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceMiner_StartMining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceMiner_StartMining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceMiner_StartMining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceMiner_StopMining_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceMiner_StopMining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Miner" },
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "Called when we stop mining" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceMiner_StopMining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceMiner, nullptr, "StopMining", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceMiner_StopMining_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceMiner_StopMining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceMiner_StopMining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceMiner_StopMining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGResourceMiner_NoRegister()
	{
		return AFGResourceMiner::StaticClass();
	}
	struct Z_Construct_UClass_AFGResourceMiner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedResouceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedResouceNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPickArmsAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPickArmsAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPickParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPickParticleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGResourceMiner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGResourceMiner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGResourceMiner_DoMine, "DoMine" }, // 131583733
		{ &Z_Construct_UFunction_AFGResourceMiner_GetResourceNode, "GetResourceNode" }, // 1628786254
		{ &Z_Construct_UFunction_AFGResourceMiner_RemoveEquipment, "RemoveEquipment" }, // 1711211174
		{ &Z_Construct_UFunction_AFGResourceMiner_Server_ExtractResources, "Server_ExtractResources" }, // 2807221886
		{ &Z_Construct_UFunction_AFGResourceMiner_SetResourceNode, "SetResourceNode" }, // 3111380071
		{ &Z_Construct_UFunction_AFGResourceMiner_StartMining, "StartMining" }, // 783387123
		{ &Z_Construct_UFunction_AFGResourceMiner_StopMining, "StopMining" }, // 267902890
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceMiner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGResourceMiner.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mCachedResouceNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "The node we want to pick from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mCachedResouceNode = { "mCachedResouceNode", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResourceMiner, mCachedResouceNode), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mCachedResouceNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mCachedResouceNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickArmsAnim_MetaData[] = {
		{ "Category", "Resource Miner" },
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "Animation to play when picking." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickArmsAnim = { "mPickArmsAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResourceMiner, mPickArmsAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickArmsAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickArmsAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickParticleSystem_MetaData[] = {
		{ "Category", "Resource Miner" },
		{ "ModuleRelativePath", "Public/Equipment/FGResourceMiner.h" },
		{ "ToolTip", "The effect the spawn when picking." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickParticleSystem = { "mPickParticleSystem", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResourceMiner, mPickParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickParticleSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickParticleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGResourceMiner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mCachedResouceNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickArmsAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceMiner_Statics::NewProp_mPickParticleSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGResourceMiner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGResourceMiner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGResourceMiner_Statics::ClassParams = {
		&AFGResourceMiner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGResourceMiner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGResourceMiner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGResourceMiner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGResourceMiner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGResourceMiner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGResourceMiner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGResourceMiner, 3297269616);
	template<> FACTORYGAME_API UClass* StaticClass<AFGResourceMiner>()
	{
		return AFGResourceMiner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGResourceMiner(Z_Construct_UClass_AFGResourceMiner, &AFGResourceMiner::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGResourceMiner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGResourceMiner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
