// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGHardDriveSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGHardDriveSettings() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FHardDriveSchematicDrop();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHardDriveSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHardDriveSettings();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSettings();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FHardDriveSchematicDrop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHardDriveSchematicDrop, Z_Construct_UPackage__Script_FactoryGame(), TEXT("HardDriveSchematicDrop"), sizeof(FHardDriveSchematicDrop), Get_Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FHardDriveSchematicDrop>()
{
	return FHardDriveSchematicDrop::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHardDriveSchematicDrop(FHardDriveSchematicDrop::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("HardDriveSchematicDrop"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFHardDriveSchematicDrop
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFHardDriveSchematicDrop()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HardDriveSchematicDrop")),new UScriptStruct::TCppStructOps<FHardDriveSchematicDrop>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFHardDriveSchematicDrop;
	struct Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Schematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Schematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHardDriveSchematicDrop>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_Schematic_MetaData[] = {
		{ "Category", "HardDriveSchematic" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "@todonow: Remove BlueprintReadOnly on this and make a access function from BP for this Schematic that the hard drive might drop and it's drop chance. This might be null if the schematic isn't included in the build" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_Schematic = { "Schematic", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHardDriveSchematicDrop, Schematic), Z_Construct_UClass_UFGSchematic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_Schematic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_Schematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_DropChance_MetaData[] = {
		{ "Category", "HardDriveSchematic" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "Probability of this schematic showing up AFTER culling those that are not valid drops" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_DropChance = { "DropChance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHardDriveSchematicDrop, DropChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_DropChance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_DropChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_Schematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::NewProp_DropChance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"HardDriveSchematicDrop",
		sizeof(FHardDriveSchematicDrop),
		alignof(FHardDriveSchematicDrop),
		Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHardDriveSchematicDrop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HardDriveSchematicDrop"), sizeof(FHardDriveSchematicDrop), Get_Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHardDriveSchematicDrop_Hash() { return 3253846504U; }
	void UFGHardDriveSettings::StaticRegisterNativesUFGHardDriveSettings()
	{
		UClass* Class = UFGHardDriveSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFallbackReturnItem", &UFGHardDriveSettings::execGetFallbackReturnItem },
			{ "GetHardDriveResearchSchematic", &UFGHardDriveSettings::execGetHardDriveResearchSchematic },
			{ "GetResearchRewardPackages", &UFGHardDriveSettings::execGetResearchRewardPackages },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics
	{
		struct FGHardDriveSettings_eventGetFallbackReturnItem_Parms
		{
			FItemAmount ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHardDriveSettings_eventGetFallbackReturnItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "HardDrive" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "Get what we return back if we don't have any rewards to give for researching a hard drive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHardDriveSettings, nullptr, "GetFallbackReturnItem", sizeof(FGHardDriveSettings_eventGetFallbackReturnItem_Parms), Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics
	{
		struct FGHardDriveSettings_eventGetHardDriveResearchSchematic_Parms
		{
			TSubclassOf<UFGSchematic>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHardDriveSettings_eventGetHardDriveResearchSchematic_Parms, ReturnValue), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "HardDrive" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "Get the schematic that is associated with hard drive research" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHardDriveSettings, nullptr, "GetHardDriveResearchSchematic", sizeof(FGHardDriveSettings_eventGetHardDriveResearchSchematic_Parms), Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics
	{
		struct FGHardDriveSettings_eventGetResearchRewardPackages_Parms
		{
			UWorld* world;
			TArray<TSubclassOf<UFGSchematic> > ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHardDriveSettings_eventGetResearchRewardPackages_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHardDriveSettings_eventGetResearchRewardPackages_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "* Called to fill in an array of research schematics for storage and access from the MAM.\n* @note The research is assumed repeatable because of its inherent nature, thus the calledByResearch parameter is added back as a reward" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHardDriveSettings, nullptr, "GetResearchRewardPackages", sizeof(FGHardDriveSettings_eventGetResearchRewardPackages_Parms), Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGHardDriveSettings_NoRegister()
	{
		return UFGHardDriveSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGHardDriveSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHardDriveResearchSchematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mHardDriveResearchSchematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFallbackReturnItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFallbackReturnItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPotentialSchematicDrops_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPotentialSchematicDrops;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPotentialSchematicDrops_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUniqueItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mUniqueItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGHardDriveSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGHardDriveSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGHardDriveSettings_GetFallbackReturnItem, "GetFallbackReturnItem" }, // 3611819060
		{ &Z_Construct_UFunction_UFGHardDriveSettings_GetHardDriveResearchSchematic, "GetHardDriveResearchSchematic" }, // 2974228543
		{ &Z_Construct_UFunction_UFGHardDriveSettings_GetResearchRewardPackages, "GetResearchRewardPackages" }, // 948524366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHardDriveSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGHardDriveSettings.h" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "Settings for which schematics are returned from research" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mHardDriveResearchSchematic_MetaData[] = {
		{ "Category", "HardDrive" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "The schematic which is used to research hard drives" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mHardDriveResearchSchematic = { "mHardDriveResearchSchematic", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHardDriveSettings, mHardDriveResearchSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mHardDriveResearchSchematic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mHardDriveResearchSchematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mFallbackReturnItem_MetaData[] = {
		{ "Category", "HardDrive" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "Fallback for returning hard drive if no research was available" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mFallbackReturnItem = { "mFallbackReturnItem", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHardDriveSettings, mFallbackReturnItem), Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mFallbackReturnItem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mFallbackReturnItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mPotentialSchematicDrops_MetaData[] = {
		{ "Category", "HardDrive" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "Schematics to fill hard drive reward package with" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mPotentialSchematicDrops = { "mPotentialSchematicDrops", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHardDriveSettings, mPotentialSchematicDrops), METADATA_PARAMS(Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mPotentialSchematicDrops_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mPotentialSchematicDrops_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mPotentialSchematicDrops_Inner = { "mPotentialSchematicDrops", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHardDriveSchematicDrop, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mUniqueItemCount_MetaData[] = {
		{ "Category", "HardDrive" },
		{ "ModuleRelativePath", "Public/FGHardDriveSettings.h" },
		{ "ToolTip", "* This is the total quantity of unique elements Schematics that will be added to the reward package\n* @note This is the number of options the player can pick from" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mUniqueItemCount = { "mUniqueItemCount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHardDriveSettings, mUniqueItemCount), METADATA_PARAMS(Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mUniqueItemCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mUniqueItemCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGHardDriveSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mHardDriveResearchSchematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mFallbackReturnItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mPotentialSchematicDrops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mPotentialSchematicDrops_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHardDriveSettings_Statics::NewProp_mUniqueItemCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGHardDriveSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGHardDriveSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGHardDriveSettings_Statics::ClassParams = {
		&UFGHardDriveSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGHardDriveSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGHardDriveSettings_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGHardDriveSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGHardDriveSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGHardDriveSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGHardDriveSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGHardDriveSettings, 2183552395);
	template<> FACTORYGAME_API UClass* StaticClass<UFGHardDriveSettings>()
	{
		return UFGHardDriveSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGHardDriveSettings(Z_Construct_UClass_UFGHardDriveSettings, &UFGHardDriveSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGHardDriveSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGHardDriveSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
