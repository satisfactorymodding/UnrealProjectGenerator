// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSchematic.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_AddRecipe();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetCost();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetItemIcon();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetSchematicCategory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematicCategory_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetSubCategories();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetTechTier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetTimeToComplete();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocks();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUnlock_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed();
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
	template<> FACTORYGAME_API UEnum* StaticEnum<ESchematicType>()
	{
		return ESchematicType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESchematicType(ESchematicType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ESchematicType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ESchematicType_Hash() { return 2150935734U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ESchematicType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESchematicType"), 0, Get_Z_Construct_UEnum_FactoryGame_ESchematicType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESchematicType::EST_Custom", (int64)ESchematicType::EST_Custom },
				{ "ESchematicType::EST_Cheat", (int64)ESchematicType::EST_Cheat },
				{ "ESchematicType::EST_Tutorial", (int64)ESchematicType::EST_Tutorial },
				{ "ESchematicType::EST_Milestone", (int64)ESchematicType::EST_Milestone },
				{ "ESchematicType::EST_Alternate", (int64)ESchematicType::EST_Alternate },
				{ "ESchematicType::EST_Story", (int64)ESchematicType::EST_Story },
				{ "ESchematicType::EST_MAM", (int64)ESchematicType::EST_MAM },
				{ "ESchematicType::EST_ResourceSink", (int64)ESchematicType::EST_ResourceSink },
				{ "ESchematicType::EST_HardDrive", (int64)ESchematicType::EST_HardDrive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EST_Alternate.DisplayName", "Alternate" },
				{ "EST_Cheat.DisplayName", "Cheat" },
				{ "EST_Custom.DisplayName", "Custom" },
				{ "EST_HardDrive.DisplayName", "Hard Drive" },
				{ "EST_MAM.DisplayName", "MAM" },
				{ "EST_Milestone.DisplayName", "Milestone" },
				{ "EST_ResourceSink.DisplayName", "Resource Sink" },
				{ "EST_Story.DisplayName", "Story" },
				{ "EST_Tutorial.DisplayName", "Tutorial" },
				{ "ModuleRelativePath", "Public/FGSchematic.h" },
				{ "ToolTip", "@todo [MODSUPPORT] This should maybe be implemented the same way as UFGBuildCategories?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ESchematicType",
				"ESchematicType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
	template<> FACTORYGAME_API UEnum* StaticEnum<ESchematicCategory>()
	{
		return ESchematicCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESchematicCategory(ESchematicCategory_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ESchematicCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ESchematicCategory_Hash() { return 671807633U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ESchematicCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESchematicCategory"), 0, Get_Z_Construct_UEnum_FactoryGame_ESchematicCategory_Hash(), false);
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
				{ "ModuleRelativePath", "Public/FGSchematic.h" },
				{ "ToolTip", "@todo [MODSUPPORT] This should maybe be implemented the same way as UFGBuildCategories?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ESchematicCategory",
				"ESchematicCategory",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMultipleItemStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultipleItemStruct, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MultipleItemStruct"), sizeof(FMultipleItemStruct), Get_Z_Construct_UScriptStruct_FMultipleItemStruct_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FMultipleItemStruct>()
{
	return FMultipleItemStruct::StaticStruct();
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
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
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
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Cost of schematic if there are more than once item in this array the true cost will be randomly selected." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost = { "ItemCost", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultipleItemStruct, ItemCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost_Inner = { "ItemCost", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::NewProp_ItemCost_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MultipleItemStruct",
		sizeof(FMultipleItemStruct),
		alignof(FMultipleItemStruct),
		Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultipleItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultipleItemStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultipleItemStruct"), sizeof(FMultipleItemStruct), Get_Z_Construct_UScriptStruct_FMultipleItemStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultipleItemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultipleItemStruct_Hash() { return 75850898U; }
	void UFGSchematic::StaticRegisterNativesUFGSchematic()
	{
		UClass* Class = UFGSchematic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddRecipe", &UFGSchematic::execAddRecipe },
#endif // WITH_EDITOR
			{ "GetAdditionalSchematicDependencies", &UFGSchematic::execGetAdditionalSchematicDependencies },
			{ "GetCost", &UFGSchematic::execGetCost },
			{ "GetDependentOnSchematic", &UFGSchematic::execGetDependentOnSchematic },
			{ "GetItemIcon", &UFGSchematic::execGetItemIcon },
			{ "GetSchematicCategory", &UFGSchematic::execGetSchematicCategory },
			{ "GetSchematicDisplayName", &UFGSchematic::execGetSchematicDisplayName },
			{ "GetSubCategories", &UFGSchematic::execGetSubCategories },
			{ "GetTechTier", &UFGSchematic::execGetTechTier },
			{ "GetTimeToComplete", &UFGSchematic::execGetTimeToComplete },
			{ "GetType", &UFGSchematic::execGetType },
			{ "GetUnlocks", &UFGSchematic::execGetUnlocks },
			{ "IsIncludedInBuild", &UFGSchematic::execIsIncludedInBuild },
			{ "IsRepeatPurchasesAllowed", &UFGSchematic::execIsRepeatPurchasesAllowed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics
	{
		struct FGSchematic_eventAddRecipe_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			TSubclassOf<UFGRecipe>  recipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventAddRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventAddRecipe_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::NewProp_recipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor|Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Add a recipe to this schematic. Only for editor use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "AddRecipe", sizeof(FGSchematic_eventAddRecipe_Parms), Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_AddRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_AddRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetAdditionalSchematicDependencies_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetAdditionalSchematicDependencies_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Gets an additional array of dependencies for this schematic to be available" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetAdditionalSchematicDependencies", sizeof(FGSchematic_eventGetAdditionalSchematicDependencies_Parms), Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetCost_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetCost_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Returns the cost of this schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetCost", sizeof(FGSchematic_eventGetCost_Parms), Z_Construct_UFunction_UFGSchematic_GetCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetCost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetCost_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetDependentOnSchematic_Parms, ReturnValue), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetDependentOnSchematic_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Gets the schematic this is dependent on for being unlocked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetDependentOnSchematic", sizeof(FGSchematic_eventGetDependentOnSchematic_Parms), Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetItemIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetItemIcon_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "The icon to be used in UI." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetItemIcon", sizeof(FGSchematic_eventGetItemIcon_Parms), Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetItemIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetItemIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics
	{
		struct FGSchematic_eventGetSchematicCategory_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			TSubclassOf<UFGSchematicCategory>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetSchematicCategory_Parms, ReturnValue), Z_Construct_UClass_UFGSchematicCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetSchematicCategory_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Returns the category of this schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetSchematicCategory", sizeof(FGSchematic_eventGetSchematicCategory_Parms), Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSchematicCategory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetSchematicDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetSchematicDisplayName_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Returns the display name of this schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetSchematicDisplayName", sizeof(FGSchematic_eventGetSchematicDisplayName_Parms), Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics
	{
		struct FGSchematic_eventGetSubCategories_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			TArray<TSubclassOf<UFGSchematicCategory> > out_subCategories;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_subCategories;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_subCategories_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::NewProp_out_subCategories = { "out_subCategories", nullptr, (EPropertyFlags)0x0014000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetSubCategories_Parms, out_subCategories), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::NewProp_out_subCategories_Inner = { "out_subCategories", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematicCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetSubCategories_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::NewProp_out_subCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::NewProp_out_subCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Returns the sub categories of this schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetSubCategories", sizeof(FGSchematic_eventGetSubCategories_Parms), Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetSubCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetSubCategories_Statics::FuncParams);
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetTechTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetTechTier_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Returns mTechOnionTier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetTechTier", sizeof(FGSchematic_eventGetTechTier_Parms), Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetTechTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetTechTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics
	{
		struct FGSchematic_eventGetTimeToComplete_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetTimeToComplete_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetTimeToComplete_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Returns how long this schematics takes to complete its actions when we acquire it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetTimeToComplete", sizeof(FGSchematic_eventGetTimeToComplete_Parms), Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetTimeToComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetTimeToComplete_Statics::FuncParams);
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ESchematicType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetType_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetType_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Returns the type of schematic." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetType", sizeof(FGSchematic_eventGetType_Parms), Z_Construct_UFunction_UFGSchematic_GetType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics
	{
		struct FGSchematic_eventGetUnlocks_Parms
		{
			TSubclassOf<UFGSchematic>  inClass;
			TArray<UFGUnlock*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetUnlocks_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGUnlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventGetUnlocks_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Returns the unlocks granted by this schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "GetUnlocks", sizeof(FGSchematic_eventGetUnlocks_Parms), Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_GetUnlocks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_GetUnlocks_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSchematic_eventIsIncludedInBuild_Parms), &Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventIsIncludedInBuild_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Return true if we should include this schematic in the current build" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "IsIncludedInBuild", sizeof(FGSchematic_eventIsIncludedInBuild_Parms), Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics
	{
		struct FGSchematic_eventIsRepeatPurchasesAllowed_Parms
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
	void Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematic_eventIsRepeatPurchasesAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSchematic_eventIsRepeatPurchasesAllowed_Parms), &Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematic_eventIsRepeatPurchasesAllowed_Parms, inClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Returns true if this schematic is allowed to be purchased more than once" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSchematic, nullptr, "IsRepeatPurchasesAllowed", sizeof(FGSchematic_eventIsRepeatPurchasesAllowed_Parms), Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSchematicCategoryDeprecated_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mSchematicCategoryDeprecated;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mSchematicCategoryDeprecated_Underlying;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mUnlocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlocks_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mUnlocks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTimeToComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTimeToComplete;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSubCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSubCategories;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSubCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSchematicCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSchematicCategory;
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
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UFGSchematic_AddRecipe, "AddRecipe" }, // 2996688878
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UFGSchematic_GetAdditionalSchematicDependencies, "GetAdditionalSchematicDependencies" }, // 128793614
		{ &Z_Construct_UFunction_UFGSchematic_GetCost, "GetCost" }, // 2532838687
		{ &Z_Construct_UFunction_UFGSchematic_GetDependentOnSchematic, "GetDependentOnSchematic" }, // 3649984223
		{ &Z_Construct_UFunction_UFGSchematic_GetItemIcon, "GetItemIcon" }, // 2329714181
		{ &Z_Construct_UFunction_UFGSchematic_GetSchematicCategory, "GetSchematicCategory" }, // 2513349240
		{ &Z_Construct_UFunction_UFGSchematic_GetSchematicDisplayName, "GetSchematicDisplayName" }, // 3485346695
		{ &Z_Construct_UFunction_UFGSchematic_GetSubCategories, "GetSubCategories" }, // 2086154296
		{ &Z_Construct_UFunction_UFGSchematic_GetTechTier, "GetTechTier" }, // 3026545383
		{ &Z_Construct_UFunction_UFGSchematic_GetTimeToComplete, "GetTimeToComplete" }, // 3504971091
		{ &Z_Construct_UFunction_UFGSchematic_GetType, "GetType" }, // 3990321040
		{ &Z_Construct_UFunction_UFGSchematic_GetUnlocks, "GetUnlocks" }, // 3715193085
		{ &Z_Construct_UFunction_UFGSchematic_IsIncludedInBuild, "IsIncludedInBuild" }, // 560645726
		{ &Z_Construct_UFunction_UFGSchematic_IsRepeatPurchasesAllowed, "IsRepeatPurchasesAllowed" }, // 1153250822
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::Class_MetaDataParams[] = {
		{ "AutoJSON", "TRUE" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGSchematic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "This is a schematic. It is purchased in the trading post and grants the player resources and/or recipes." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Slightly misleading name, as this doesn't only apply to builds. If set to Never, it won't show up in editor" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds = { "mIncludeInBuilds", nullptr, (EPropertyFlags)0x0040010800010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mIncludeInBuilds), Z_Construct_UEnum_FactoryGame_EIncludeInBuilds, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Asset Bundle data computed at save time. In cooked builds this is accessible from AssetRegistry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData = { "mAssetBundleData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mAssetBundleData), Z_Construct_UScriptStruct_FAssetBundleData, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategoryDeprecated_MetaData[] = {
		{ "Category", "Deprecated - To be removed" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use new schematic category object instead" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "The category this schematic belongs to." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategoryDeprecated = { "mSchematicCategoryDeprecated", nullptr, (EPropertyFlags)0x0020080000030001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mSchematicCategoryDeprecated), Z_Construct_UEnum_FactoryGame_ESchematicCategory, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategoryDeprecated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategoryDeprecated_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategoryDeprecated_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Additional list of schematics for more specific dependency checking" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies = { "mAdditionalSchematicDependencies", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mAdditionalSchematicDependencies), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_Inner = { "mAdditionalSchematicDependencies", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "Is this schematic dependant on any other for being unlocked?" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic = { "mDependsOnSchematic", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mDependsOnSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Icon used when displaying this schematic" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon = { "mSchematicIcon", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mSchematicIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks_MetaData[] = {
		{ "Category", "Unlocks" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "The unlocks you get when purchasing" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks = { "mUnlocks", nullptr, (EPropertyFlags)0x0020088000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mUnlocks), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks_Inner_MetaData[] = {
		{ "Category", "Unlocks" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "The unlocks you get when purchasing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks_Inner = { "mUnlocks", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGUnlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTimeToComplete_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "When we acquire this schematic how long does it take for it to complete its actions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTimeToComplete = { "mTimeToComplete", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mTimeToComplete), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTimeToComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTimeToComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_MetaData[] = {
		{ "Category", "Cost" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "The cost of this schematic." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost = { "mCost", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mCost), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_Inner = { "mCost", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "The tech tier that this Schematic belongs to. [0...N]" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier = { "mTechTier", nullptr, (EPropertyFlags)0x0020090000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mTechTier), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSubCategories_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "The sub categories this schematic belongs to." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSubCategories = { "mSubCategories", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mSubCategories), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSubCategories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSubCategories_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSubCategories_Inner = { "mSubCategories", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematicCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "The category this schematic belongs to." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory = { "mSchematicCategory", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mSchematicCategory), Z_Construct_UClass_UFGSchematicCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "The name to be displayed to the player" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName = { "mDisplayName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematic.h" },
		{ "ToolTip", "What type of schematic is this." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType = { "mType", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSchematic, mType), Z_Construct_UEnum_FactoryGame_ESchematicType, METADATA_PARAMS(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGSchematic_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mIncludeInBuilds_Underlying,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAssetBundleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategoryDeprecated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategoryDeprecated_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mAdditionalSchematicDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDependsOnSchematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mUnlocks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTimeToComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mCost_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mTechTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSubCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSubCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mSchematicCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSchematic_Statics::NewProp_mType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSchematic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSchematic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSchematic_Statics::ClassParams = {
		&UFGSchematic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGSchematic_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGSchematic_Statics::PropPointers),
		0,
		0x009000A0u,
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
	IMPLEMENT_CLASS(UFGSchematic, 132280729);
	template<> FACTORYGAME_API UClass* StaticClass<UFGSchematic>()
	{
		return UFGSchematic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSchematic(Z_Construct_UClass_UFGSchematic, &UFGSchematic::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSchematic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSchematic);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFGSchematic)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
