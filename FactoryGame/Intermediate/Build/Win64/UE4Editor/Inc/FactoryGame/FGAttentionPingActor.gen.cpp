// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGAttentionPingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAttentionPingActor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAttentionPingActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAttentionPingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGAttentionPingActor_OnRep_PlayerSlotIdx();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGAttentionPingActor_SpawnAttentionPingEffects();
// End Cross Module References
	static FName NAME_AFGAttentionPingActor_SpawnAttentionPingEffects = FName(TEXT("SpawnAttentionPingEffects"));
	void AFGAttentionPingActor::SpawnAttentionPingEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGAttentionPingActor_SpawnAttentionPingEffects),NULL);
	}
	void AFGAttentionPingActor::StaticRegisterNativesAFGAttentionPingActor()
	{
		UClass* Class = AFGAttentionPingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerSlotIdx", &AFGAttentionPingActor::execGetPlayerSlotIdx },
			{ "OnRep_PlayerSlotIdx", &AFGAttentionPingActor::execOnRep_PlayerSlotIdx },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics
	{
		struct FGAttentionPingActor_eventGetPlayerSlotIdx_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAttentionPingActor_eventGetPlayerSlotIdx_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attention Ping" },
		{ "ModuleRelativePath", "FGAttentionPingActor.h" },
		{ "ToolTip", "Slot index of the player that spawned this actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGAttentionPingActor, "GetPlayerSlotIdx", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGAttentionPingActor_eventGetPlayerSlotIdx_Parms), Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGAttentionPingActor_OnRep_PlayerSlotIdx_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGAttentionPingActor_OnRep_PlayerSlotIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGAttentionPingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGAttentionPingActor_OnRep_PlayerSlotIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGAttentionPingActor, "OnRep_PlayerSlotIdx", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGAttentionPingActor_OnRep_PlayerSlotIdx_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGAttentionPingActor_OnRep_PlayerSlotIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGAttentionPingActor_OnRep_PlayerSlotIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGAttentionPingActor_OnRep_PlayerSlotIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGAttentionPingActor_SpawnAttentionPingEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGAttentionPingActor_SpawnAttentionPingEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attention Ping" },
		{ "ModuleRelativePath", "FGAttentionPingActor.h" },
		{ "ToolTip", "Called when we have the slot idx replicated so now we can spawn the effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGAttentionPingActor_SpawnAttentionPingEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGAttentionPingActor, "SpawnAttentionPingEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGAttentionPingActor_SpawnAttentionPingEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGAttentionPingActor_SpawnAttentionPingEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGAttentionPingActor_SpawnAttentionPingEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGAttentionPingActor_SpawnAttentionPingEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGAttentionPingActor_NoRegister()
	{
		return AFGAttentionPingActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGAttentionPingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlayerSlotIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mPlayerSlotIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGAttentionPingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGAttentionPingActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGAttentionPingActor_GetPlayerSlotIdx, "GetPlayerSlotIdx" }, // 236539097
		{ &Z_Construct_UFunction_AFGAttentionPingActor_OnRep_PlayerSlotIdx, "OnRep_PlayerSlotIdx" }, // 3066365526
		{ &Z_Construct_UFunction_AFGAttentionPingActor_SpawnAttentionPingEffects, "SpawnAttentionPingEffects" }, // 4046200362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAttentionPingActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGAttentionPingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGAttentionPingActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAttentionPingActor_Statics::NewProp_mPlayerSlotIdx_MetaData[] = {
		{ "ModuleRelativePath", "FGAttentionPingActor.h" },
		{ "ToolTip", "Who spawned this ping?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGAttentionPingActor_Statics::NewProp_mPlayerSlotIdx = { UE4CodeGen_Private::EPropertyClass::Int, "mPlayerSlotIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_PlayerSlotIdx", STRUCT_OFFSET(AFGAttentionPingActor, mPlayerSlotIdx), METADATA_PARAMS(Z_Construct_UClass_AFGAttentionPingActor_Statics::NewProp_mPlayerSlotIdx_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAttentionPingActor_Statics::NewProp_mPlayerSlotIdx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGAttentionPingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAttentionPingActor_Statics::NewProp_mPlayerSlotIdx,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGAttentionPingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGAttentionPingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGAttentionPingActor_Statics::ClassParams = {
		&AFGAttentionPingActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGAttentionPingActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGAttentionPingActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGAttentionPingActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGAttentionPingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGAttentionPingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGAttentionPingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGAttentionPingActor, 2940223776);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGAttentionPingActor(Z_Construct_UClass_AFGAttentionPingActor, &AFGAttentionPingActor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGAttentionPingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGAttentionPingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
