// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGFactorySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFactorySettings() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCategory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactorySettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactorySettings();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSettings();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipeShortcut_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDismantleShortcut_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceMiner_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceScanner_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildGun_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMaterialEffect_Build_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
class UScriptStruct* FCategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCategory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCategory, Z_Construct_UPackage__Script_FactoryGame(), TEXT("Category"), sizeof(FCategory), Get_Z_Construct_UScriptStruct_FCategory_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FCategory>()
{
	return FCategory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCategory(FCategory::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("Category"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFCategory
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFCategory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Category")),new UScriptStruct::TCppStructOps<FCategory>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFCategory;
	struct Z_Construct_UScriptStruct_FCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCategory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Icon for the category" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCategory, Icon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Icon_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Localized name of a category" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCategory, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategory_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"Category",
		sizeof(FCategory),
		alignof(FCategory),
		Z_Construct_UScriptStruct_FCategory_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCategory_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCategory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCategory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Category"), sizeof(FCategory), Get_Z_Construct_UScriptStruct_FCategory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCategory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCategory_Hash() { return 2416265807U; }
	void UFGFactorySettings::StaticRegisterNativesUFGFactorySettings()
	{
		UClass* Class = UFGFactorySettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomConstructionSound", &UFGFactorySettings::execGetRandomConstructionSound },
			{ "GetRandomDismantleSound", &UFGFactorySettings::execGetRandomDismantleSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics
	{
		struct FGFactorySettings_eventGetRandomConstructionSound_Parms
		{
			UAkAudioEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFactorySettings_eventGetRandomConstructionSound_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buildable" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Get a random construction sound to play." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactorySettings, nullptr, "GetRandomConstructionSound", sizeof(FGFactorySettings_eventGetRandomConstructionSound_Parms), Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics
	{
		struct FGFactorySettings_eventGetRandomDismantleSound_Parms
		{
			UAkAudioEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFactorySettings_eventGetRandomDismantleSound_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buildable" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Get a random dismantle sound to play." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactorySettings, nullptr, "GetRandomDismantleSound", sizeof(FGFactorySettings_eventGetRandomDismantleSound_Parms), Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGFactorySettings_NoRegister()
	{
		return UFGFactorySettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGFactorySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShortcutMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mShortcutMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mShortcutMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRecipeShortcutClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mRecipeShortcutClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDismantleShortcutClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDismantleShortcutClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxFeetLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxFeetLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFootMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFootMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLegMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLegMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceMinerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mResourceMinerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceScannerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mResourceScannerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildGunClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mBuildGunClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDismantlePendingMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDismantlePendingMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDismantleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDismantleEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mBuildEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDismantleSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDismantleSounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDismantleSounds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConstructionSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mConstructionSounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConstructionSounds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventoryDropCrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mInventoryDropCrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConveyorBuildGuideMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConveyorBuildGuideMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildGuideMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBuildGuideMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildGuideMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBuildGuideMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHologramSnapSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHologramSnapSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHologramLoopSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHologramLoopSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClearanceMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClearanceMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClearanceMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClearanceMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultPowerConnectionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultPowerConnectionMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultConveyorConnectionArrowMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultConveyorConnectionArrowMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultConveyorConnectionFrameMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultConveyorConnectionFrameMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultPowerConnectionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultPowerConnectionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultOutputConnectionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultOutputConnectionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultInputConnectionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultInputConnectionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultInvalidPlacementMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultInvalidPlacementMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultValidPlacementMaterialSimplified_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultValidPlacementMaterialSimplified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultValidPlacementMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultValidPlacementMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGFactorySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGFactorySettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGFactorySettings_GetRandomConstructionSound, "GetRandomConstructionSound" }, // 940357022
		{ &Z_Construct_UFunction_UFGFactorySettings_GetRandomDismantleSound, "GetRandomDismantleSound" }, // 1276888590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGFactorySettings.h" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Common settings for the factory buildings and their holograms." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mShortcutMap_MetaData[] = {
		{ "Category", "Shortcuts" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Names if the input actions that defines the shortcuts. This maps directly to their index (so first entry here should mean that it should call ExecuteShortcut 0)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mShortcutMap = { "mShortcutMap", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mShortcutMap), METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mShortcutMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mShortcutMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mShortcutMap_Inner = { "mShortcutMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mRecipeShortcutClass_MetaData[] = {
		{ "Category", "Shortcuts" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "The class we want to spawn for recipe shortcuts" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mRecipeShortcutClass = { "mRecipeShortcutClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mRecipeShortcutClass), Z_Construct_UClass_UFGRecipeShortcut_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mRecipeShortcutClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mRecipeShortcutClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleShortcutClass_MetaData[] = {
		{ "Category", "Shortcuts" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "The class we want to spawn for dismantle shortcuts" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleShortcutClass = { "mDismantleShortcutClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDismantleShortcutClass), Z_Construct_UClass_UFGDismantleShortcut_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleShortcutClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleShortcutClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mMaxFeetLength_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Maximum length when we want to spawn the legs" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mMaxFeetLength = { "mMaxFeetLength", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mMaxFeetLength), METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mMaxFeetLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mMaxFeetLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mFootMesh_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "The mesh to be used as foots on factories" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mFootMesh = { "mFootMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mFootMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mFootMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mFootMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mLegMesh_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "The mesh to be used as legs on factories" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mLegMesh = { "mLegMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mLegMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mLegMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mLegMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceMinerClass_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "The default resource miner class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceMinerClass = { "mResourceMinerClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mResourceMinerClass), Z_Construct_UClass_AFGResourceMiner_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceMinerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceMinerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceScannerClass_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "The default resource scanner class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceScannerClass = { "mResourceScannerClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mResourceScannerClass), Z_Construct_UClass_AFGResourceScanner_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceScannerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceScannerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGunClass_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "The default buildgun class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGunClass = { "mBuildGunClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mBuildGunClass), Z_Construct_UClass_AFGBuildGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGunClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGunClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantlePendingMaterial_MetaData[] = {
		{ "Category", "Buildable|Dismantle" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material used when looking at buildings for dismantle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantlePendingMaterial = { "mDismantlePendingMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDismantlePendingMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantlePendingMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantlePendingMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleEffect_MetaData[] = {
		{ "Category", "Buildable|Build Effect" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Effect to play when a building is dismantled //[DavalliusA:Mon/01-04-2019] seems to never ba used? //@TODO: see if we can't remove this" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleEffect = { "mDismantleEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDismantleEffect), Z_Construct_UClass_UFGMaterialEffect_Build_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildEffect_MetaData[] = {
		{ "Category", "Buildable|Build Effect" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Effect to play when a building is built //[DavalliusA:Mon/01-04-2019] seems to only be used for replays? //@TODO: see if we can't store this in a way more suitable for replays... a waste to have it in a global class like this" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildEffect = { "mBuildEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mBuildEffect), Z_Construct_UClass_UFGMaterialEffect_Build_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleSounds_MetaData[] = {
		{ "Category", "Buildable|Build Effect" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Default sound played when dismantling a building, a random from the list is played." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleSounds = { "mDismantleSounds", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDismantleSounds), METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleSounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleSounds_Inner = { "mDismantleSounds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConstructionSounds_MetaData[] = {
		{ "Category", "Buildable|Build Effect" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Default sound played when constructing a building, a random from the list is played." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConstructionSounds = { "mConstructionSounds", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mConstructionSounds), METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConstructionSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConstructionSounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConstructionSounds_Inner = { "mConstructionSounds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mInventoryDropCrate_MetaData[] = {
		{ "Category", "Buildable" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Crate spawned when we dismantle an actor or when we die. It will be filled with the refund if it doesn't fit in the players inventory." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mInventoryDropCrate = { "mInventoryDropCrate", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mInventoryDropCrate), Z_Construct_UClass_AFGCrate_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mInventoryDropCrate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mInventoryDropCrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConveyorBuildGuideMaterial_MetaData[] = {
		{ "Category", "BuildGuides|Alignment" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material applied to build guides specifically for conveyor belts to visualize alignment in build mode. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConveyorBuildGuideMaterial = { "mConveyorBuildGuideMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mConveyorBuildGuideMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConveyorBuildGuideMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConveyorBuildGuideMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMaterial_MetaData[] = {
		{ "Category", "BuildGuides|Alignment" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material applied to build guides to visualize alignment in build mode. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMaterial = { "mBuildGuideMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mBuildGuideMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMesh_MetaData[] = {
		{ "Category", "BuildGuides|Alignment" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Mesh used to visualize alignment in build mode. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMesh = { "mBuildGuideMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mBuildGuideMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramSnapSound_MetaData[] = {
		{ "Category", "Hologram|Sound" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Snapping sound for holograms, e.g. when a conveyor snaps to an output." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramSnapSound = { "mHologramSnapSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mHologramSnapSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramSnapSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramSnapSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramLoopSound_MetaData[] = {
		{ "Category", "Hologram|Sound" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Default sound loop placed on holograms." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramLoopSound = { "mHologramLoopSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mHologramLoopSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramLoopSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramLoopSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMaterial_MetaData[] = {
		{ "Category", "Hologram|Clearance" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material on hologram for clearance. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMaterial = { "mClearanceMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mClearanceMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMesh_MetaData[] = {
		{ "Category", "Hologram|Clearance" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Mesh used to visualize the clearance mesh on factories @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMesh = { "mClearanceMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mClearanceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMesh_MetaData[] = {
		{ "Category", "Hologram|Connections" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Mesh used to visualize power connections. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMesh = { "mDefaultPowerConnectionMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDefaultPowerConnectionMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionArrowMesh_MetaData[] = {
		{ "Category", "Hologram|Connections" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Mesh used to visualize input or output connections direction. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionArrowMesh = { "mDefaultConveyorConnectionArrowMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDefaultConveyorConnectionArrowMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionArrowMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionArrowMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionFrameMesh_MetaData[] = {
		{ "Category", "Hologram|Connections" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Mesh used to visualize input or output connections location. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionFrameMesh = { "mDefaultConveyorConnectionFrameMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDefaultConveyorConnectionFrameMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionFrameMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionFrameMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMaterial_MetaData[] = {
		{ "Category", "Hologram|Material" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material on hologram for power connections. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMaterial = { "mDefaultPowerConnectionMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDefaultPowerConnectionMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultOutputConnectionMaterial_MetaData[] = {
		{ "Category", "Hologram|Material" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material on hologram for output connections. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultOutputConnectionMaterial = { "mDefaultOutputConnectionMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDefaultOutputConnectionMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultOutputConnectionMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultOutputConnectionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInputConnectionMaterial_MetaData[] = {
		{ "Category", "Hologram|Material" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material on hologram for input connections. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInputConnectionMaterial = { "mDefaultInputConnectionMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDefaultInputConnectionMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInputConnectionMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInputConnectionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInvalidPlacementMaterial_MetaData[] = {
		{ "Category", "Hologram|Material" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material on hologram for invalid placement. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInvalidPlacementMaterial = { "mDefaultInvalidPlacementMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDefaultInvalidPlacementMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInvalidPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInvalidPlacementMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterialSimplified_MetaData[] = {
		{ "Category", "Hologram|Material" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material on hologram for valid placement. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterialSimplified = { "mDefaultValidPlacementMaterialSimplified", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDefaultValidPlacementMaterialSimplified), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterialSimplified_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterialSimplified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterial_MetaData[] = {
		{ "Category", "Hologram|Material" },
		{ "ModuleRelativePath", "FGFactorySettings.h" },
		{ "ToolTip", "Material on hologram for valid placement. @note Do not set in code!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterial = { "mDefaultValidPlacementMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactorySettings, mDefaultValidPlacementMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGFactorySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mShortcutMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mShortcutMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mRecipeShortcutClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleShortcutClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mMaxFeetLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mFootMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mLegMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceMinerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mResourceScannerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGunClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantlePendingMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDismantleSounds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConstructionSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConstructionSounds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mInventoryDropCrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mConveyorBuildGuideMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mBuildGuideMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramSnapSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mHologramLoopSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mClearanceMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionArrowMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultConveyorConnectionFrameMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultPowerConnectionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultOutputConnectionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInputConnectionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultInvalidPlacementMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterialSimplified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactorySettings_Statics::NewProp_mDefaultValidPlacementMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGFactorySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGFactorySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGFactorySettings_Statics::ClassParams = {
		&UFGFactorySettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGFactorySettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGFactorySettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGFactorySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGFactorySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGFactorySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGFactorySettings, 79568958);
	template<> FACTORYGAME_API UClass* StaticClass<UFGFactorySettings>()
	{
		return UFGFactorySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGFactorySettings(Z_Construct_UClass_UFGFactorySettings, &UFGFactorySettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGFactorySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGFactorySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
