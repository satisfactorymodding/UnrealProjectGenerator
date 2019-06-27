// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGResourceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResourceSettings() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FResourceDepositPackage();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceSettings();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSettings();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRenderTargetStage_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EStackSize();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
// End Cross Module References
class UScriptStruct* FResourceDepositPackage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FResourceDepositPackage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResourceDepositPackage, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ResourceDepositPackage"), sizeof(FResourceDepositPackage), Get_Z_Construct_UScriptStruct_FResourceDepositPackage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResourceDepositPackage(FResourceDepositPackage::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ResourceDepositPackage"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFResourceDepositPackage
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFResourceDepositPackage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ResourceDepositPackage")),new UScriptStruct::TCppStructOps<FResourceDepositPackage>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFResourceDepositPackage;
	struct Z_Construct_UScriptStruct_FResourceDepositPackage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiningAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiningAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResourceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResourceDepositPackage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MiningAmount_MetaData[] = {
		{ "Category", "ResourceDepositPackage" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "How much to get per \"mine cycle\"" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MiningAmount = { UE4CodeGen_Private::EPropertyClass::Int, "MiningAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FResourceDepositPackage, MiningAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MiningAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MiningAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MaxAmount_MetaData[] = {
		{ "Category", "ResourceDepositPackage" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Amount of resources in deposit as max" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MaxAmount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FResourceDepositPackage, MaxAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MaxAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MaxAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MinAmount_MetaData[] = {
		{ "Category", "ResourceDepositPackage" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Amount of resources in deposit as minimum" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MinAmount = { UE4CodeGen_Private::EPropertyClass::Int, "MinAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FResourceDepositPackage, MinAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MinAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MinAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_ResourceClass_MetaData[] = {
		{ "Category", "ResourceDepositPackage" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "What resource class to use" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_ResourceClass = { UE4CodeGen_Private::EPropertyClass::Class, "ResourceClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000015, 1, nullptr, STRUCT_OFFSET(FResourceDepositPackage, ResourceClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_ResourceClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_ResourceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_DropChance_MetaData[] = {
		{ "Category", "ResourceDepositPackage" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Chance in roulette selection to get the package" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_DropChance = { UE4CodeGen_Private::EPropertyClass::Float, "DropChance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FResourceDepositPackage, DropChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_DropChance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_DropChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MiningAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MaxAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_MinAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_ResourceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::NewProp_DropChance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ResourceDepositPackage",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FResourceDepositPackage),
		alignof(FResourceDepositPackage),
		Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResourceDepositPackage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResourceDepositPackage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResourceDepositPackage"), sizeof(FResourceDepositPackage), Get_Z_Construct_UScriptStruct_FResourceDepositPackage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResourceDepositPackage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResourceDepositPackage_CRC() { return 2252710510U; }
class UScriptStruct* FItemSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FItemSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemSettings, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ItemSettings"), sizeof(FItemSettings), Get_Z_Construct_UScriptStruct_FItemSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemSettings(FItemSettings::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ItemSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFItemSettings
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFItemSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemSettings")),new UScriptStruct::TCppStructOps<FItemSettings>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFItemSettings;
	struct Z_Construct_UScriptStruct_FItemSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResourceClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGResourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_MasterMaterial_MetaData[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Material that should be used for each icon, need to have a parameter named Texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_MasterMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "MasterMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FItemSettings, MasterMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_MasterMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_MasterMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "The x and y resolution of the icon (must be power of 2), -1 means no icon" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_Resolution = { UE4CodeGen_Private::EPropertyClass::Int, "Resolution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FItemSettings, Resolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_Resolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_ResourceClass_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "The class (and it's subclasses) that we want to specify the resolution for" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_ResourceClass = { UE4CodeGen_Private::EPropertyClass::Class, "ResourceClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FItemSettings, ResourceClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_ResourceClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_ResourceClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_MasterMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_Resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSettings_Statics::NewProp_ResourceClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ItemSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FItemSettings),
		alignof(FItemSettings),
		Z_Construct_UScriptStruct_FItemSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemSettings"), sizeof(FItemSettings), Get_Z_Construct_UScriptStruct_FItemSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemSettings_CRC() { return 1221461271U; }
	void UFGResourceSettings::StaticRegisterNativesUFGResourceSettings()
	{
		UClass* Class = UFGResourceSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomResourceDepositData", &UFGResourceSettings::execGetRandomResourceDepositData },
			{ "GetResourceDepositDataFromClass", &UFGResourceSettings::execGetResourceDepositDataFromClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics
	{
		struct FGResourceSettings_eventGetRandomResourceDepositData_Parms
		{
			int32 out_resourceDepositPackageIdx;
			AActor* worldContext;
			FResourceDepositPackage ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_resourceDepositPackageIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(FGResourceSettings_eventGetRandomResourceDepositData_Parms, ReturnValue), Z_Construct_UScriptStruct_FResourceDepositPackage, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceSettings_eventGetRandomResourceDepositData_Parms, worldContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::NewProp_out_resourceDepositPackageIdx = { UE4CodeGen_Private::EPropertyClass::Int, "out_resourceDepositPackageIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGResourceSettings_eventGetRandomResourceDepositData_Parms, out_resourceDepositPackageIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::NewProp_worldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::NewProp_out_resourceDepositPackageIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ResourceDepositPackage" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Get a random resource deposit package" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceSettings, "GetRandomResourceDepositData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGResourceSettings_eventGetRandomResourceDepositData_Parms), Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics
	{
		struct FGResourceSettings_eventGetResourceDepositDataFromClass_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  desiredResourceClass;
			int32 out_resourceDepositPackageIdx;
			AActor* worldContext;
			FResourceDepositPackage ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_resourceDepositPackageIdx;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_desiredResourceClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(FGResourceSettings_eventGetResourceDepositDataFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FResourceDepositPackage, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceSettings_eventGetResourceDepositDataFromClass_Parms, worldContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_out_resourceDepositPackageIdx = { UE4CodeGen_Private::EPropertyClass::Int, "out_resourceDepositPackageIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGResourceSettings_eventGetResourceDepositDataFromClass_Parms, out_resourceDepositPackageIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_desiredResourceClass = { UE4CodeGen_Private::EPropertyClass::Class, "desiredResourceClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceSettings_eventGetResourceDepositDataFromClass_Parms, desiredResourceClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_worldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_out_resourceDepositPackageIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::NewProp_desiredResourceClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ResourceDepositPackage" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Gets deposit data with a specified resource class\nreturns false if no deposit data existed with that resource class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceSettings, "GetResourceDepositDataFromClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGResourceSettings_eventGetResourceDepositDataFromClass_Parms), Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGResourceSettings_NoRegister()
	{
		return UFGResourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGResourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mIconSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mIconSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStageClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mStageClass;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemDropClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mItemDropClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStackSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mStackSizes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mStackSizes_Key_KeyProp;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mStackSizes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mStackSizes_ValueProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPurityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPurityMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPurityMultiplier_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mResourceAmount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mResourceAmount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceDepositTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mResourceDepositTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mResourceDepositTable_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGResourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGResourceSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGResourceSettings_GetRandomResourceDepositData, "GetRandomResourceDepositData" }, // 1010998486
		{ &Z_Construct_UFunction_UFGResourceSettings_GetResourceDepositDataFromClass, "GetResourceDepositDataFromClass" }, // 4107439225
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGResourceSettings.h" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mIconSettings_MetaData[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Resolutions of different item classes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mIconSettings = { UE4CodeGen_Private::EPropertyClass::Array, "mIconSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800010001, 1, nullptr, STRUCT_OFFSET(UFGResourceSettings, mIconSettings), METADATA_PARAMS(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mIconSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mIconSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mIconSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mIconSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStageClass_MetaData[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "The stage that should be used to make icons" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStageClass = { UE4CodeGen_Private::EPropertyClass::Class, "mStageClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000800010001, 1, nullptr, STRUCT_OFFSET(UFGResourceSettings, mStageClass), Z_Construct_UClass_AFGRenderTargetStage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStageClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStageClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mItemDropClass_MetaData[] = {
		{ "Category", "Drops" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "The class of item we want to drop when we drop something" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mItemDropClass = { UE4CodeGen_Private::EPropertyClass::Class, "mItemDropClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UFGResourceSettings, mItemDropClass), Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mItemDropClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mItemDropClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "How many of diffrent items can be in the same stack" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes = { UE4CodeGen_Private::EPropertyClass::Map, "mStackSizes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGResourceSettings, mStackSizes), METADATA_PARAMS(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "mStackSizes_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes_ValueProp = { UE4CodeGen_Private::EPropertyClass::Enum, "mStackSizes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UEnum_FactoryGame_EStackSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes_ValueProp_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mDefaultItemMesh_MetaData[] = {
		{ "Category", "Buildable" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Mesh used on items that do not have their own specified." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mDefaultItemMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mDefaultItemMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGResourceSettings, mDefaultItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mDefaultItemMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mDefaultItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mPurityMultiplier_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Index 0 is poor amount, 1 is normal and 2 is rich" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mPurityMultiplier = { UE4CodeGen_Private::EPropertyClass::Array, "mPurityMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010041, 1, nullptr, STRUCT_OFFSET(UFGResourceSettings, mPurityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mPurityMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mPurityMultiplier_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mPurityMultiplier_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "mPurityMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceAmount_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "Index 0 is poor amount, 1 is normal and 2 is rich" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceAmount = { UE4CodeGen_Private::EPropertyClass::Array, "mResourceAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010041, 1, nullptr, STRUCT_OFFSET(UFGResourceSettings, mResourceAmount), METADATA_PARAMS(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceAmount_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceAmount_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mResourceAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceDepositTable_MetaData[] = {
		{ "Category", "ResourceDepositPackage" },
		{ "ModuleRelativePath", "FGResourceSettings.h" },
		{ "ToolTip", "List of all available resource deposit packages" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceDepositTable = { UE4CodeGen_Private::EPropertyClass::Array, "mResourceDepositTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFGResourceSettings, mResourceDepositTable), METADATA_PARAMS(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceDepositTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceDepositTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceDepositTable_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mResourceDepositTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FResourceDepositPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGResourceSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mIconSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mIconSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStageClass,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mItemDropClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mStackSizes_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mDefaultItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mPurityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mPurityMultiplier_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceAmount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceDepositTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceSettings_Statics::NewProp_mResourceDepositTable_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGResourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGResourceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGResourceSettings_Statics::ClassParams = {
		&UFGResourceSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGResourceSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGResourceSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGResourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGResourceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGResourceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGResourceSettings, 4257192490);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGResourceSettings(Z_Construct_UClass_UFGResourceSettings, &UFGResourceSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGResourceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGResourceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
