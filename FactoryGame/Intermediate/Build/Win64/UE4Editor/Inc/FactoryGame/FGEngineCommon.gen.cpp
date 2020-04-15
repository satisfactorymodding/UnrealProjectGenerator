// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGEngineCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEngineCommon() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGEngineCommon();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAtmosphereUpdater_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngine_NoRegister();
// End Cross Module References
class UScriptStruct* FFGEngineCommon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFGEngineCommon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGEngineCommon, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FGEngineCommon"), sizeof(FFGEngineCommon), Get_Z_Construct_UScriptStruct_FFGEngineCommon_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFGEngineCommon>()
{
	return FFGEngineCommon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGEngineCommon(FFGEngineCommon::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FGEngineCommon"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFGEngineCommon
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFGEngineCommon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGEngineCommon")),new UScriptStruct::TCppStructOps<FFGEngineCommon>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFGEngineCommon;
	struct Z_Construct_UScriptStruct_FFGEngineCommon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphereUpdater_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtmosphereUpdater;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedWorlds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreatedWorlds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedWorlds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Engine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Engine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGEngineCommon_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGEngineCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGEngineCommon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_AtmosphereUpdater_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGEngineCommon.h" },
		{ "ToolTip", "Height fog properties that's controlled from camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_AtmosphereUpdater = { "AtmosphereUpdater", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGEngineCommon, AtmosphereUpdater), Z_Construct_UClass_UFGAtmosphereUpdater_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_AtmosphereUpdater_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_AtmosphereUpdater_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_CreatedWorlds_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGEngineCommon.h" },
		{ "ToolTip", "The worlds created through IFGWorldCreationInterface" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_CreatedWorlds = { "CreatedWorlds", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGEngineCommon, CreatedWorlds), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_CreatedWorlds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_CreatedWorlds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_CreatedWorlds_Inner = { "CreatedWorlds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_Engine_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGEngineCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_Engine = { "Engine", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGEngineCommon, Engine), Z_Construct_UClass_UEngine_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_Engine_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_Engine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGEngineCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_AtmosphereUpdater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_CreatedWorlds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_CreatedWorlds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGEngineCommon_Statics::NewProp_Engine,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGEngineCommon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FGEngineCommon",
		sizeof(FFGEngineCommon),
		alignof(FFGEngineCommon),
		Z_Construct_UScriptStruct_FFGEngineCommon_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFGEngineCommon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGEngineCommon_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGEngineCommon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGEngineCommon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGEngineCommon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGEngineCommon"), sizeof(FFGEngineCommon), Get_Z_Construct_UScriptStruct_FFGEngineCommon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGEngineCommon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGEngineCommon_Hash() { return 2525146527U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
