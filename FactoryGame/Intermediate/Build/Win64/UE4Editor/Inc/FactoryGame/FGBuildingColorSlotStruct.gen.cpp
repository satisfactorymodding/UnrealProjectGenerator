// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGBuildingColorSlotStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildingColorSlotStruct() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FFGBuildingColorSlotStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FGBuildingColorSlotStruct"), sizeof(FFGBuildingColorSlotStruct), Get_Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGBuildingColorSlotStruct(FFGBuildingColorSlotStruct::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FGBuildingColorSlotStruct"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFGBuildingColorSlotStruct
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFGBuildingColorSlotStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGBuildingColorSlotStruct")),new UScriptStruct::TCppStructOps<FFGBuildingColorSlotStruct>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFGBuildingColorSlotStruct;
	struct Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_secondary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_primary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGBuildingColorSlotStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGBuildingColorSlotStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_secondary_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGBuildingColorSlotStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_secondary = { UE4CodeGen_Private::EPropertyClass::Struct, "secondary", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFGBuildingColorSlotStruct, secondary), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_secondary_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_secondary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_primary_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGBuildingColorSlotStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_primary = { UE4CodeGen_Private::EPropertyClass::Struct, "primary", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFGBuildingColorSlotStruct, primary), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_primary_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_primary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_secondary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::NewProp_primary,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FGBuildingColorSlotStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FFGBuildingColorSlotStruct),
		alignof(FFGBuildingColorSlotStruct),
		Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGBuildingColorSlotStruct"), sizeof(FFGBuildingColorSlotStruct), Get_Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGBuildingColorSlotStruct_CRC() { return 3605049381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
