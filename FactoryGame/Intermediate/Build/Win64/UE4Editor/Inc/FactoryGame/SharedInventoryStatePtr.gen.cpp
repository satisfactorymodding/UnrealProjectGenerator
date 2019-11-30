// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/SharedInventoryStatePtr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedInventoryStatePtr() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSharedInventoryStatePtr();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSharedInventoryStatePtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedInventoryStatePtr, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SharedInventoryStatePtr"), sizeof(FSharedInventoryStatePtr), Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSharedInventoryStatePtr>()
{
	return FSharedInventoryStatePtr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSharedInventoryStatePtr(FSharedInventoryStatePtr::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SharedInventoryStatePtr"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSharedInventoryStatePtr
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSharedInventoryStatePtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SharedInventoryStatePtr")),new UScriptStruct::TCppStructOps<FSharedInventoryStatePtr>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSharedInventoryStatePtr;
	struct Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SharedInventoryStatePtr.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedInventoryStatePtr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedInventoryStatePtr.h" },
		{ "ToolTip", "The actor we've shared ownership over." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr = { "ActorPtr", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSharedInventoryStatePtr, ActorPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SharedInventoryStatePtr",
		sizeof(FSharedInventoryStatePtr),
		alignof(FSharedInventoryStatePtr),
		Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSharedInventoryStatePtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SharedInventoryStatePtr"), sizeof(FSharedInventoryStatePtr), Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Hash() { return 3126017265U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
