// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGDeveloperSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDeveloperSettings() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDeveloperSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESchematicCategory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematicCategory_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUnlockArmEquipmentSlot_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUnlockInventorySlot_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUnlockBuildOverclock_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUnlockBuildEfficiency_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUnlockMap_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUnlockScannableResource_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUnlockRecipe_NoRegister();
// End Cross Module References
	void UFGDeveloperSettings::StaticRegisterNativesUFGDeveloperSettings()
	{
	}
	UClass* Z_Construct_UClass_UFGDeveloperSettings_NoRegister()
	{
		return UFGDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSchematicCategoryMigrationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mSchematicCategoryMigrationData;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mSchematicCategoryMigrationData_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mSchematicCategoryMigrationData_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSchematicCategoryMigrationData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockArmEquipmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mUnlockArmEquipmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockInvetorySlotClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mUnlockInvetorySlotClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockBuildOverclockClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mUnlockBuildOverclockClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockBuildEfficiencyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mUnlockBuildEfficiencyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockMapClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mUnlockMapClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockScannerResourceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mUnlockScannerResourceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockRecipeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mUnlockRecipeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGreedyFocusInPIE_MetaData[];
#endif
		static void NewProp_mGreedyFocusInPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mGreedyFocusInPIE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Satisfactory Developer Settings" },
		{ "IncludePath", "FGDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData_MetaData[] = {
		{ "Category", "Schematic category classes for migrating from old enum to new object based type" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData = { "mSchematicCategoryMigrationData", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDeveloperSettings, mSchematicCategoryMigrationData), METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData_Key_KeyProp = { "mSchematicCategoryMigrationData_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FactoryGame_ESchematicCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData_ValueProp = { "mSchematicCategoryMigrationData", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFGSchematicCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockArmEquipmentClass_MetaData[] = {
		{ "Category", "Unlock Classes For Migrating To New Unlock System" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockArmEquipmentClass = { "mUnlockArmEquipmentClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDeveloperSettings, mUnlockArmEquipmentClass), Z_Construct_UClass_UFGUnlockArmEquipmentSlot_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockArmEquipmentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockArmEquipmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockInvetorySlotClass_MetaData[] = {
		{ "Category", "Unlock Classes For Migrating To New Unlock System" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockInvetorySlotClass = { "mUnlockInvetorySlotClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDeveloperSettings, mUnlockInvetorySlotClass), Z_Construct_UClass_UFGUnlockInventorySlot_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockInvetorySlotClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockInvetorySlotClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildOverclockClass_MetaData[] = {
		{ "Category", "Unlock Classes For Migrating To New Unlock System" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildOverclockClass = { "mUnlockBuildOverclockClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDeveloperSettings, mUnlockBuildOverclockClass), Z_Construct_UClass_UFGUnlockBuildOverclock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildOverclockClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildOverclockClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildEfficiencyClass_MetaData[] = {
		{ "Category", "Unlock Classes For Migrating To New Unlock System" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildEfficiencyClass = { "mUnlockBuildEfficiencyClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDeveloperSettings, mUnlockBuildEfficiencyClass), Z_Construct_UClass_UFGUnlockBuildEfficiency_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildEfficiencyClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildEfficiencyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockMapClass_MetaData[] = {
		{ "Category", "Unlock Classes For Migrating To New Unlock System" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockMapClass = { "mUnlockMapClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDeveloperSettings, mUnlockMapClass), Z_Construct_UClass_UFGUnlockMap_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockMapClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockMapClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockScannerResourceClass_MetaData[] = {
		{ "Category", "Unlock Classes For Migrating To New Unlock System" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockScannerResourceClass = { "mUnlockScannerResourceClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDeveloperSettings, mUnlockScannerResourceClass), Z_Construct_UClass_UFGUnlockScannableResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockScannerResourceClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockScannerResourceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockRecipeClass_MetaData[] = {
		{ "Category", "Unlock Classes For Migrating To New Unlock System" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockRecipeClass = { "mUnlockRecipeClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDeveloperSettings, mUnlockRecipeClass), Z_Construct_UClass_UFGUnlockRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockRecipeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockRecipeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_MetaData[] = {
		{ "Category", "Focus" },
		{ "ModuleRelativePath", "Public/FGDeveloperSettings.h" },
		{ "ToolTip", "Should widgets grab focus back on focus lost in PIE. Default is off to avoid intrusive behaviour when trying to work. You can override this value in Game.ini. Ask K2 how" },
	};
#endif
	void Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_SetBit(void* Obj)
	{
		((UFGDeveloperSettings*)Obj)->mGreedyFocusInPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE = { "mGreedyFocusInPIE", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGDeveloperSettings), &Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGDeveloperSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mSchematicCategoryMigrationData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockArmEquipmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockInvetorySlotClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildOverclockClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockBuildEfficiencyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockMapClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockScannerResourceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mUnlockRecipeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDeveloperSettings_Statics::NewProp_mGreedyFocusInPIE,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGDeveloperSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDeveloperSettings_Statics::ClassParams = {
		&UFGDeveloperSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGDeveloperSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFGDeveloperSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDeveloperSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDeveloperSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDeveloperSettings, 454942730);
	template<> FACTORYGAME_API UClass* StaticClass<UFGDeveloperSettings>()
	{
		return UFGDeveloperSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDeveloperSettings(Z_Construct_UClass_UFGDeveloperSettings, &UFGDeveloperSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
