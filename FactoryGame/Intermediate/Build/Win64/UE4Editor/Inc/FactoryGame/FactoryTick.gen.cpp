// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FactoryTick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryTick() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFactoryTickFunction();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
// End Cross Module References
class UScriptStruct* FFactoryTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFactoryTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactoryTickFunction, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FactoryTickFunction"), sizeof(FFactoryTickFunction), Get_Z_Construct_UScriptStruct_FFactoryTickFunction_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFactoryTickFunction>()
{
	return FFactoryTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFactoryTickFunction(FFactoryTickFunction::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FactoryTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFactoryTickFunction
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFactoryTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FactoryTickFunction")),new UScriptStruct::TCppStructOps<FFactoryTickFunction>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFactoryTickFunction;
	struct Z_Construct_UScriptStruct_FFactoryTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactoryTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FactoryTick.h" },
		{ "ToolTip", "Tick function that calls AFGBuildable::TickFactory" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFactoryTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactoryTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactoryTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"FactoryTickFunction",
		sizeof(FFactoryTickFunction),
		alignof(FFactoryTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFactoryTickFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFactoryTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFactoryTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FactoryTickFunction"), sizeof(FFactoryTickFunction), Get_Z_Construct_UScriptStruct_FFactoryTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFactoryTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFactoryTickFunction_Hash() { return 563007292U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
