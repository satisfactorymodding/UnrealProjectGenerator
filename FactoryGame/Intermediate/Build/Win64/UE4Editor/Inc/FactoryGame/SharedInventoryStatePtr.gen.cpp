// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/SharedInventoryStatePtr.h"
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedInventoryStatePtr, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SharedInventoryStatePtr"), sizeof(FSharedInventoryStatePtr), Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_CRC());
	}
	return Singleton;
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
		{ "ModuleRelativePath", "SharedInventoryStatePtr.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedInventoryStatePtr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr_MetaData[] = {
		{ "ModuleRelativePath", "SharedInventoryStatePtr.h" },
		{ "ToolTip", "The actor we've shared ownership over." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr = { UE4CodeGen_Private::EPropertyClass::Object, "ActorPtr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FSharedInventoryStatePtr, ActorPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::NewProp_ActorPtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SharedInventoryStatePtr",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSharedInventoryStatePtr),
		alignof(FSharedInventoryStatePtr),
		Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSharedInventoryStatePtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SharedInventoryStatePtr"), sizeof(FSharedInventoryStatePtr), Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSharedInventoryStatePtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSharedInventoryStatePtr_CRC() { return 3256329690U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
