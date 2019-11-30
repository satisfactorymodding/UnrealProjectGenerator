// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/SaveErrors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveErrors() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FErrors();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
class UScriptStruct* FErrors::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FErrors_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FErrors, Z_Construct_UPackage__Script_FactoryGame(), TEXT("Errors"), sizeof(FErrors), Get_Z_Construct_UScriptStruct_FErrors_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FErrors>()
{
	return FErrors::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FErrors(FErrors::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("Errors"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFErrors
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFErrors()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Errors")),new UScriptStruct::TCppStructOps<FErrors>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFErrors;
	struct Z_Construct_UScriptStruct_FErrors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnknownClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_UnknownClasses;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnknownClasses_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnknownLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_UnknownLevels;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnknownLevels_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrors_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveErrors.h" },
		{ "ToolTip", "Errors we want to store to disc" },
	};
#endif
	void* Z_Construct_UScriptStruct_FErrors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FErrors>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveErrors.h" },
		{ "ToolTip", "All unknown classes" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownClasses = { "UnknownClasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrors, UnknownClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownClasses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownClasses_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownClasses_ElementProp = { "UnknownClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveErrors.h" },
		{ "ToolTip", "All unknown levels" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownLevels = { "UnknownLevels", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrors, UnknownLevels), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownLevels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownLevels_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownLevels_ElementProp = { "UnknownLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FErrors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownClasses_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrors_Statics::NewProp_UnknownLevels_ElementProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FErrors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"Errors",
		sizeof(FErrors),
		alignof(FErrors),
		Z_Construct_UScriptStruct_FErrors_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FErrors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FErrors_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FErrors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FErrors()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FErrors_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Errors"), sizeof(FErrors), Get_Z_Construct_UScriptStruct_FErrors_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FErrors_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FErrors_Hash() { return 1218445877U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
