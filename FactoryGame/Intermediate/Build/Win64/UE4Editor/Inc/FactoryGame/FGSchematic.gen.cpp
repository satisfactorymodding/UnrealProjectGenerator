// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGSchematic.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSchematic() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESchematicType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESchematicCategory();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMultipleItemStruct();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetCost();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetItemIcon();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetRecipes();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetSchematicCategory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetTechTier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksMap();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EIncludeInBuilds();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
// End Cross Module References
	static UEnum* ESchematicType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ESchematicType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ESchematicType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESchematicType(ESchematicType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ESchematicType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ESchematicType_CRC() { return 2917853658U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ESchematicType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESchematicType"), 0, Get_Z_Construct_UEnum_FactoryGame_ESchematicType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESchematicType::EST_Custom", (int64)ESchematicType::EST_Custom },
				{ "ESchematicType::EST_Cheat", (int64)ESchematicType::EST_Cheat },
				{ "ESchematicType::EST_Tutorial", (int64)ESchematicType::EST_Tutorial },
				{ "ESchematicType::EST_Research", (int64)ESchematicType::EST_Research },
				{ "ESchematicType::EST_Alternate", (int64)ESchematicType::EST_Alternate },
				{ "ESchematicType::EST_Story", (int64)ESchematicType::EST_Story },
				{ "ESchematicType::EST_TradingPostUpgrade", (int64)ESchematicType::EST_TradingPostUpgrade },
				{ "ESchematicType::EST_MAM", (int64)ESchematicType::EST_MAM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EST_Alternate.DisplayName", "Alternate" },
				{ "EST_Cheat.DisplayName", "Cheat" },
				{ "EST_Custom.DisplayName", "Custom" },
				{ "EST_MAM.DisplayName", "MAM unlocked" },
				{ "EST_Research.DisplayName", "Research" },
				{ "EST_Story.DisplayName", "Story" },
				{ "EST_TradingPostUpgrade.DisplayName", "Hub upgrade" },
				{ "EST_Tutorial.DisplayName", "Tutorial" },
				{ "ModuleRelativePath", "FGSchematic.h" },
				{ "ToolTip", "@todo [MODSUPPORT] This should maybe be implemented the same way as UFGBuildCategories?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESchematicType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESchematicType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESchematicCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ESchematicCategory, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ESchematicCategory"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESchematicCategory(ESchematicCategory_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ESchematicCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ESchematicCategory_CRC() { return 818151288U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ESchematicCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESchematicCategory"), 0, Get_Z_Construct_UEnum_FactoryGame_ESchematicCategory_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESchematicCategory::ESC_LOGISTICS", (int64)ESchematicCategory::ESC_LOGISTICS },
				{ "ESchematicCategory::ESC_PRODUCTION", (int64)ESchematicCategory::ESC_PRODUCTION },
				{ "ESchematicCategory::ESC_EQUIPMENT", (int64)ESchematicCategory::ESC_EQUIPMENT },
				{ "ESchematicCategory::ESC_ORGANISATION", (int64)ESchematicCategory::ESC_ORGANISATION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ESC_EQUIPMENT.DisplayName", "Equipment" },
				{ "ESC_LOGISTICS.DisplayName", "Logistics" },
				{ "ESC_ORGANISATION.DisplayName", "Organisation" },
				{ "ESC_PRODUCTION.DisplayName", "Production" },
				{ "ModuleRelativePath", "FGSchematic.h" },
				{ "ToolTip", "@todo [MODSUPPORT] This should maybe be implemented the same way as UFGBuildCategories?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESchematicCategory",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESchematicCategory",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMultipleItemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMultipleItemStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultipleItemStruct, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MultipleItemStruct"), sizeof(FMultipleItemStruct), Get_Z_Construct_UScriptStruct_FMultipleItemStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultipleItemStruct(FMultipleItemStruct::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("MultipleItemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFMultipleItemStruct
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFMultipleItemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MultipleItemStruct")),new UScriptStruct::TCppStructOps<FMultipleItemStruct>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFMultipleItemStruct;
	struct Z_Construct_UScriptStruct_FMultipleItemStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemCost;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemCost_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Holds info about a schematic cost." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultipleItemStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost_MetaData[] = {
		{ "Category", "MultipleItemStruct" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Cost of schematic if there are more than once item in this array the true cost will be randomly selected." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost = { UE4CodeGen_Private::EPropertyClass::Array, "ItemCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FMultipleItemStruct, ItemCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MultipleItemStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMultipleItemStruct),
		alignof(FMultipleItemStruct),
		Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultipleItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultipleItemStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultipleItemStruct"), sizeof(FMultipleItemStruct), Get_Z_Construct_UScriptStruct_FMultipleItemStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultipleItemStruct_CRC() { return 2323341287U; }
	void UFGSchematic::StaticRegisterNativesUFGSchematic()
	{
		UClass* Class = UFGSchematic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdditionalSchematicDependencies", &UFGSchematic::execGetAdditionalSchematicDependencies },
			{ "GetCost", &UFGSchematic::execGetCost },
			{ "GetDependentOnSchematic", &UFGSchematic::execGetDependentOnSchematic },
			{ "GetItemIcon", &UFGSchematic::execGetItemIcon },
			{ "GetNumArmEquipmentSlotsUnlocked", &UFGSchematic::execGetNumArmEquipmentSlotsUnlocked },
			{ "GetNumInventorySlotsUnlocked", &UFGSchematic::execGetNumInventorySlotsUnlocked },
			{ "GetRecipes", &UFGSchematic::execGetRecipes },
			{ "GetResourceToAddToScanner", &UFGSchematic::execGetResourceToAddToScanner },
			{ "GetSchematicCategory", &UFGSchematic::execGetSchematicCategory },
			{ "GetSchematicDisplayName", &UFGSchematic::execGetSchematicDisplayName },
			{ "GetShipTravelTimeAfterPurchase", &UFGSchematic::execGetShipTravelTimeAfterPurchase },
			{ "GetTechTier", &UFGSchematic::execGetTechTier },
			{ "GetType", &UFGSchematic::execGetType },
			{ "GetUnlocksArmEquipmentSlots", &UFGSchematic::execGetUnlocksArmEquipmentSlots },
			{ "GetUnlocksBuildEfficiencyDisplay", &UFGSchematic::execGetUnlocksBuildEfficiencyDisplay },
			{ "GetUnlocksBuildOverclock", &UFGSchematic::execGetUnlocksBuildOverclock },
			{ "GetUnlocksInventorySlots", &UFGSchematic::execGetUnlocksInventorySlots },
			{ "GetUnlocksMap", &UFGSchematic::execGetUnlocksMap },
			{ "IsIncludedInBuild", &UFGSchematic::execIsIncludedInBuild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics
	{
		struct FGSchematic_eventGetAdditionalSchematicDependencies_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			TArray<TSubclassOf<UFGSchematic> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetAdditionalSchematicDependencies_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetAdditionalSchematicDependencies_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Gets an additional array of dependencies for this schematic to be available" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetAdditionalSchematicDependencies", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetAdditionalSchematicDependencies_Parms), Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetCost_Statics
	{
		struct FGSchematic_eventGetCost_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			TArray<FItemAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetCost_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Returns the cost of this schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetCost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetCost_Parms), Z_Construct_UFunction_UFGSchematic_GetCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetCost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetCost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics
	{
		struct FGSchematic_eventGetDependentOnSchematic_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			TSubclassOf<UFGSchematic>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetDependentOnSchematic_Parms, ReturnValue), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetDependentOnSchematic_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Gets the schematic this is dependent on for being unlocked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetDependentOnSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetDependentOnSchematic_Parms), Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics
	{
		struct FGSchematic_eventGetItemIcon_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			FSlateBrush ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetItemIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetItemIcon_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "The icon to be used in UI." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetItemIcon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetItemIcon_Parms), Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetItemIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics
	{
		struct FGSchematic_eventGetNumArmEquipmentSlotsUnlocked_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetNumArmEquipmentSlotsUnlocked_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetNumArmEquipmentSlotsUnlocked_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "How many arm equipment slots are unlocked by schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetNumArmEquipmentSlotsUnlocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetNumArmEquipmentSlotsUnlocked_Parms), Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics
	{
		struct FGSchematic_eventGetNumInventorySlotsUnlocked_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetNumInventorySlotsUnlocked_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetNumInventorySlotsUnlocked_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "How many inventory slots are unlocked by schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetNumInventorySlotsUnlocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetNumInventorySlotsUnlocked_Parms), Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics
	{
		struct FGSchematic_eventGetRecipes_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			TArray<TSubclassOf<UFGRecipe> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetRecipes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetRecipes_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Returns the recipes granted by this schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetRecipes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetRecipes_Parms), Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics
	{
		struct FGSchematic_eventGetResourceToAddToScanner_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			TArray<TSubclassOf<UFGResourceDescriptor> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetResourceToAddToScanner_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetResourceToAddToScanner_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Returns mResourcesToAddToScanner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetResourceToAddToScanner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetResourceToAddToScanner_Parms), Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics
	{
		struct FGSchematic_eventGetSchematicCategory_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			ESchematicCategory ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetSchematicCategory_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ESchematicCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetSchematicCategory_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Returns the category of this schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetSchematicCategory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetSchematicCategory_Parms), Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetSchematicCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics
	{
		struct FGSchematic_eventGetSchematicDisplayName_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetSchematicDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetSchematicDisplayName_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Returns the display name of this schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetSchematicDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetSchematicDisplayName_Parms), Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics
	{
		struct FGSchematic_eventGetShipTravelTimeAfterPurchase_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetShipTravelTimeAfterPurchase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetShipTravelTimeAfterPurchase_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Returns mShipTravelTimeAfterPurchase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetShipTravelTimeAfterPurchase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetShipTravelTimeAfterPurchase_Parms), Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics
	{
		struct FGSchematic_eventGetTechTier_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetTechTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetTechTier_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Returns mTechOnionTier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetTechTier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetTechTier_Parms), Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetTechTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetType_Statics
	{
		struct FGSchematic_eventGetType_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			ESchematicType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ESchematicType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetType_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Returns the type of schematic." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetType_Parms), Z_Construct_UFunction_UFGSchematic_GetType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics
	{
		struct FGSchematic_eventGetUnlocksArmEquipmentSlots_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematic_eventGetUnlocksArmEquipmentSlots_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematic_eventGetUnlocksArmEquipmentSlots_Parms), &Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetUnlocksArmEquipmentSlots_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Does this schematic unlock any arm equipment slots" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetUnlocksArmEquipmentSlots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetUnlocksArmEquipmentSlots_Parms), Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics
	{
		struct FGSchematic_eventGetUnlocksBuildEfficiencyDisplay_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematic_eventGetUnlocksBuildEfficiencyDisplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematic_eventGetUnlocksBuildEfficiencyDisplay_Parms), &Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetUnlocksBuildEfficiencyDisplay_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Does this schematic unlock the build efficiency display" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetUnlocksBuildEfficiencyDisplay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetUnlocksBuildEfficiencyDisplay_Parms), Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics
	{
		struct FGSchematic_eventGetUnlocksBuildOverclock_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematic_eventGetUnlocksBuildOverclock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematic_eventGetUnlocksBuildOverclock_Parms), &Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetUnlocksBuildOverclock_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Does this schematic unlock the build overclock system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetUnlocksBuildOverclock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetUnlocksBuildOverclock_Parms), Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics
	{
		struct FGSchematic_eventGetUnlocksInventorySlots_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematic_eventGetUnlocksInventorySlots_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematic_eventGetUnlocksInventorySlots_Parms), &Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetUnlocksInventorySlots_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Does this schematic unlock any inventory slots" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetUnlocksInventorySlots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetUnlocksInventorySlots_Parms), Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics
	{
		struct FGSchematic_eventGetUnlocksMap_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematic_eventGetUnlocksMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematic_eventGetUnlocksMap_Parms), &Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventGetUnlocksMap_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Does this schematic unlock the map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "GetUnlocksMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventGetUnlocksMap_Parms), Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocksMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetUnlocksMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics
	{
		struct FGSchematic_eventIsIncludedInBuild_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematic_eventIsIncludedInBuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematic_eventIsIncludedInBuild_Parms), &Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematic_eventIsIncludedInBuild_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Return true if we should include this schematic in the current build" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, "IsIncludedInBuild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematic_eventIsIncludedInBuild_Parms), Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGSchematic_NoRegister()
	{
		return UFGSchematic::StaticClass();
	}
	struct Z_Construct_UClass_UFGSchematic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIncludeInBuilds_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mIncludeInBuilds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mIncludeInBuilds_Underlying;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAssetBundleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mAssetBundleData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAdditionalSchematicDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAdditionalSchematicDependencies;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAdditionalSchematicDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDependsOnSchematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDependsOnSchematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSchematicIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSchematicIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumArmEquipmentSlotsToUnlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumArmEquipmentSlotsToUnlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumInventorySlotsToUnlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumInventorySlotsToUnlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlocksBuildOverclock_MetaData[];
#endif
		static void NewProp_mUnlocksBuildOverclock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUnlocksBuildOverclock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlocksBuildEfficiency_MetaData[];
#endif
		static void NewProp_mUnlocksBuildEfficiency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUnlocksBuildEfficiency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlocksMap_MetaData[];
#endif
		static void NewProp_mUnlocksMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUnlocksMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourcesToAddToScanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mResourcesToAddToScanner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mResourcesToAddToScanner_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRecipes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mRecipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mRecipes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShipTravelTimeAfterPurchase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mShipTravelTimeAfterPurchase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCost;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCost_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTechTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mTechTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSchematicCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mSchematicCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mSchematicCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSchematic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGSchematic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies, "GetAdditionalSchematicDependencies" }, // 1850563873
		{ &Z_Construct_UFunction_UFGSchematic_GetCost, "GetCost" }, // 949358189
		{ &Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic, "GetDependentOnSchematic" }, // 430965732
		{ &Z_Construct_UFunction_UFGSchematic_GetItemIcon, "GetItemIcon" }, // 2687018522
		{ &Z_Construct_UFunction_UFGSchematic_GetNumArmEquipmentSlotsUnlocked, "GetNumArmEquipmentSlotsUnlocked" }, // 1262160619
		{ &Z_Construct_UFunction_UFGSchematic_GetNumInventorySlotsUnlocked, "GetNumInventorySlotsUnlocked" }, // 837161162
		{ &Z_Construct_UFunction_UFGSchematic_GetRecipes, "GetRecipes" }, // 361308119
		{ &Z_Construct_UFunction_UFGSchematic_GetResourceToAddToScanner, "GetResourceToAddToScanner" }, // 1912992433
		{ &Z_Construct_UFunction_UFGSchematic_GetSchematicCategory, "GetSchematicCategory" }, // 2710958865
		{ &Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName, "GetSchematicDisplayName" }, // 2871477103
		{ &Z_Construct_UFunction_UFGSchematic_GetShipTravelTimeAfterPurchase, "GetShipTravelTimeAfterPurchase" }, // 1545446721
		{ &Z_Construct_UFunction_UFGSchematic_GetTechTier, "GetTechTier" }, // 3822698935
		{ &Z_Construct_UFunction_UFGSchematic_GetType, "GetType" }, // 973005451
		{ &Z_Construct_UFunction_UFGSchematic_GetUnlocksArmEquipmentSlots, "GetUnlocksArmEquipmentSlots" }, // 4151347025
		{ &Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildEfficiencyDisplay, "GetUnlocksBuildEfficiencyDisplay" }, // 3658337889
		{ &Z_Construct_UFunction_UFGSchematic_GetUnlocksBuildOverclock, "GetUnlocksBuildOverclock" }, // 3363896693
		{ &Z_Construct_UFunction_UFGSchematic_GetUnlocksInventorySlots, "GetUnlocksInventorySlots" }, // 3390113786
		{ &Z_Construct_UFunction_UFGSchematic_GetUnlocksMap, "GetUnlocksMap" }, // 1630922603
		{ &Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild, "IsIncludedInBuild" }, // 825774063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::Class_MetaDataParams[] = {
		{ "AutoJSON", "TRUE" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGSchematic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "This is a schematic. It is purchased in the trading post and grants the player resources and/or recipes." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Slightly misleading name, as this doesn't only apply to builds. If set to Never, it won't show up in editor" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds = { UE4CodeGen_Private::EPropertyClass::Enum, "mIncludeInBuilds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040010800010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mIncludeInBuilds), Z_Construct_UEnum_FactoryGame_EIncludeInBuilds, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData_MetaData[] = {
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Asset Bundle data computed at save time. In cooked builds this is accessible from AssetRegistry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData = { UE4CodeGen_Private::EPropertyClass::Struct, "mAssetBundleData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mAssetBundleData), Z_Construct_UScriptStruct_FAssetBundleData, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Additional list of schematics for more specific dependency checking" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies = { UE4CodeGen_Private::EPropertyClass::Array, "mAdditionalSchematicDependencies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mAdditionalSchematicDependencies), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mAdditionalSchematicDependencies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Is this schematic dependant on any other for being unlocked?" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic = { UE4CodeGen_Private::EPropertyClass::Class, "mDependsOnSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mDependsOnSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Icon used when displaying this schematic" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon = { UE4CodeGen_Private::EPropertyClass::Struct, "mSchematicIcon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mSchematicIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumArmEquipmentSlotsToUnlock_MetaData[] = {
		{ "Category", "Unlocks" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Number of arm equipment slots this schematic adds to the players inventory" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumArmEquipmentSlotsToUnlock = { UE4CodeGen_Private::EPropertyClass::Int, "mNumArmEquipmentSlotsToUnlock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mNumArmEquipmentSlotsToUnlock), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumArmEquipmentSlotsToUnlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumArmEquipmentSlotsToUnlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumInventorySlotsToUnlock_MetaData[] = {
		{ "Category", "Unlocks" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Number of inventory slots this schematic adds to the players inventory" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumInventorySlotsToUnlock = { UE4CodeGen_Private::EPropertyClass::Int, "mNumInventorySlotsToUnlock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mNumInventorySlotsToUnlock), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumInventorySlotsToUnlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumInventorySlotsToUnlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildOverclock_MetaData[] = {
		{ "Category", "Unlocks" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Does this schematic unlock the build overclock functionality?" },
	};
#endif
	void Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildOverclock_SetBit(void* Obj)
	{
		((UFGSchematic*)Obj)->mUnlocksBuildOverclock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildOverclock = { UE4CodeGen_Private::EPropertyClass::Bool, "mUnlocksBuildOverclock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGSchematic), &Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildOverclock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildOverclock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildOverclock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildEfficiency_MetaData[] = {
		{ "Category", "Unlocks" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Does this schematic unlock the build efficiency display?" },
	};
#endif
	void Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildEfficiency_SetBit(void* Obj)
	{
		((UFGSchematic*)Obj)->mUnlocksBuildEfficiency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildEfficiency = { UE4CodeGen_Private::EPropertyClass::Bool, "mUnlocksBuildEfficiency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGSchematic), &Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildEfficiency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildEfficiency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildEfficiency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksMap_MetaData[] = {
		{ "Category", "Unlocks" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "Does this schematic unlock the map?" },
	};
#endif
	void Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksMap_SetBit(void* Obj)
	{
		((UFGSchematic*)Obj)->mUnlocksMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksMap = { UE4CodeGen_Private::EPropertyClass::Bool, "mUnlocksMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGSchematic), &Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mResourcesToAddToScanner_MetaData[] = {
		{ "Category", "Unlocks" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "These are the resources that are scannable" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mResourcesToAddToScanner = { UE4CodeGen_Private::EPropertyClass::Array, "mResourcesToAddToScanner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mResourcesToAddToScanner), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mResourcesToAddToScanner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mResourcesToAddToScanner_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mResourcesToAddToScanner_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mResourcesToAddToScanner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mRecipes_MetaData[] = {
		{ "Category", "Unlocks" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "The recipes you get when purchasing" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mRecipes = { UE4CodeGen_Private::EPropertyClass::Array, "mRecipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mRecipes), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mRecipes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mRecipes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mRecipes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mRecipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mShipTravelTimeAfterPurchase_MetaData[] = {
		{ "Category", "Cost" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "When we purchase this schematic how long does it take the ship to come back?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mShipTravelTimeAfterPurchase = { UE4CodeGen_Private::EPropertyClass::Float, "mShipTravelTimeAfterPurchase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mShipTravelTimeAfterPurchase), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mShipTravelTimeAfterPurchase_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mShipTravelTimeAfterPurchase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_MetaData[] = {
		{ "Category", "Cost" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "The cost of this schematic." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost = { UE4CodeGen_Private::EPropertyClass::Array, "mCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mCost), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "The tech tier that this Schematic belongs to. [0...N]" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier = { UE4CodeGen_Private::EPropertyClass::Int, "mTechTier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020090000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mTechTier), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "The category this schematic belongs to." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory = { UE4CodeGen_Private::EPropertyClass::Enum, "mSchematicCategory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mSchematicCategory), Z_Construct_UEnum_FactoryGame_ESchematicCategory, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "The name to be displayed to the player" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "mDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematic.h" },
		{ "ToolTip", "What type of schematic is this." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType = { UE4CodeGen_Private::EPropertyClass::Enum, "mType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGSchematic, mType), Z_Construct_UEnum_FactoryGame_ESchematicType, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGSchematic_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_Underlying,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumArmEquipmentSlotsToUnlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mNumInventorySlotsToUnlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildOverclock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksBuildEfficiency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocksMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mResourcesToAddToScanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mResourcesToAddToScanner_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mRecipes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mShipTravelTimeAfterPurchase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSchematic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSchematic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSchematic_Statics::ClassParams = {
		&UFGSchematic::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSchematic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSchematic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSchematic, 4125133328);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSchematic(Z_Construct_UClass_UFGSchematic, &UFGSchematic::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSchematic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSchematic);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFGSchematic)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
