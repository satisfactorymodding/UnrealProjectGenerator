// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGStartingPod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGStartingPod() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGStartingPod_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGStartingPod();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStartingPod_OnPlayerSkipIntroSequence();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGStartingPod_StartSequence();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDismantleInterface_NoRegister();
// End Cross Module References
	static FName NAME_AFGStartingPod_OnPlayerSkipIntroSequence = FName(TEXT("OnPlayerSkipIntroSequence"));
	void AFGStartingPod::OnPlayerSkipIntroSequence()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGStartingPod_OnPlayerSkipIntroSequence),NULL);
	}
	static FName NAME_AFGStartingPod_StartSequence = FName(TEXT("StartSequence"));
	void AFGStartingPod::StartSequence()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGStartingPod_StartSequence),NULL);
	}
	void AFGStartingPod::StaticRegisterNativesAFGStartingPod()
	{
		UClass* Class = AFGStartingPod::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCachedPlayer", &AFGStartingPod::execGetCachedPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics
	{
		struct FGStartingPod_eventGetCachedPlayer_Parms
		{
			AFGCharacterPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGStartingPod_eventGetCachedPlayer_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Starting Pod" },
		{ "ModuleRelativePath", "Public/FGStartingPod.h" },
		{ "ToolTip", "Getter for player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStartingPod, "GetCachedPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGStartingPod_eventGetCachedPlayer_Parms), Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStartingPod_OnPlayerSkipIntroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStartingPod_OnPlayerSkipIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Starting Pod" },
		{ "ModuleRelativePath", "Public/FGStartingPod.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStartingPod_OnPlayerSkipIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStartingPod, "OnPlayerSkipIntroSequence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStartingPod_OnPlayerSkipIntroSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStartingPod_OnPlayerSkipIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStartingPod_OnPlayerSkipIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStartingPod_OnPlayerSkipIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGStartingPod_StartSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGStartingPod_StartSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Starting Pod" },
		{ "ModuleRelativePath", "Public/FGStartingPod.h" },
		{ "ToolTip", "Start the pod animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGStartingPod_StartSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGStartingPod, "StartSequence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGStartingPod_StartSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGStartingPod_StartSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGStartingPod_StartSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGStartingPod_StartSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGStartingPod_NoRegister()
	{
		return AFGStartingPod::StaticClass();
	}
	struct Z_Construct_UClass_AFGStartingPod_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDropPodMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDropPodMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDismantleStacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDismantleStacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDismantleStacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGStartingPod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGStartingPod_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGStartingPod_GetCachedPlayer, "GetCachedPlayer" }, // 1266991581
		{ &Z_Construct_UFunction_AFGStartingPod_OnPlayerSkipIntroSequence, "OnPlayerSkipIntroSequence" }, // 709393538
		{ &Z_Construct_UFunction_AFGStartingPod_StartSequence, "StartSequence" }, // 4186554548
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStartingPod_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGStartingPod.h" },
		{ "ModuleRelativePath", "Public/FGStartingPod.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDropPodMesh_MetaData[] = {
		{ "Category", "Starting Pod" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGStartingPod.h" },
		{ "ToolTip", "Main mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDropPodMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mDropPodMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AFGStartingPod, mDropPodMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDropPodMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDropPodMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDismantleStacks_MetaData[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "Public/FGStartingPod.h" },
		{ "ToolTip", "Array containing how much to get back when dismantling this bad boy" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDismantleStacks = { UE4CodeGen_Private::EPropertyClass::Array, "mDismantleStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGStartingPod, mDismantleStacks), METADATA_PARAMS(Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDismantleStacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDismantleStacks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDismantleStacks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mDismantleStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mCachedPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGStartingPod.h" },
		{ "ToolTip", "Player associated with this pod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mCachedPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "mCachedPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AFGStartingPod, mCachedPlayer), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mCachedPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mCachedPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGStartingPod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDropPodMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDismantleStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mDismantleStacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGStartingPod_Statics::NewProp_mCachedPlayer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGStartingPod_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGDismantleInterface_NoRegister, (int32)VTABLE_OFFSET(AFGStartingPod, IFGDismantleInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGStartingPod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGStartingPod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGStartingPod_Statics::ClassParams = {
		&AFGStartingPod::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGStartingPod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGStartingPod_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGStartingPod_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGStartingPod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGStartingPod()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGStartingPod_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGStartingPod, 1510262135);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGStartingPod(Z_Construct_UClass_AFGStartingPod, &AFGStartingPod::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGStartingPod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGStartingPod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
