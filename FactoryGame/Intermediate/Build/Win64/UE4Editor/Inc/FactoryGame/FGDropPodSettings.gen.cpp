// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGDropPodSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDropPodSettings() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDropPackage();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemDrop();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDropPodSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDropPodSettings();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSettings();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FDropPackage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FDropPackage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDropPackage, Z_Construct_UPackage__Script_FactoryGame(), TEXT("DropPackage"), sizeof(FDropPackage), Get_Z_Construct_UScriptStruct_FDropPackage_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FDropPackage>()
{
	return FDropPackage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDropPackage(FDropPackage::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("DropPackage"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFDropPackage
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFDropPackage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DropPackage")),new UScriptStruct::TCppStructOps<FDropPackage>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFDropPackage;
	struct Z_Construct_UScriptStruct_FDropPackage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredSchematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RequiredSchematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DropDisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGDropPodSettings.h" },
		{ "ToolTip", "Describes a package of items you can get in a drop." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDropPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDropPackage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_RequiredSchematic_MetaData[] = {
		{ "Category", "DropPackage" },
		{ "ModuleRelativePath", "Public/FGDropPodSettings.h" },
		{ "ToolTip", "We can not find this package if we haven't purchased this schematic." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_RequiredSchematic = { "RequiredSchematic", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDropPackage, RequiredSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_RequiredSchematic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_RequiredSchematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "DropPackage" },
		{ "ModuleRelativePath", "Public/FGDropPodSettings.h" },
		{ "ToolTip", "Item contained in the package" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDropPackage, Items), METADATA_PARAMS(Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_Items_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemDrop, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropChance_MetaData[] = {
		{ "Category", "DropPackage" },
		{ "ModuleRelativePath", "Public/FGDropPodSettings.h" },
		{ "ToolTip", "Chance in roulette selection to get the package." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropChance = { "DropChance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDropPackage, DropChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropChance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropDisplayText_MetaData[] = {
		{ "Category", "DropPackage" },
		{ "ModuleRelativePath", "Public/FGDropPodSettings.h" },
		{ "ToolTip", "Text showing up when finding the drop." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropDisplayText = { "DropDisplayText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDropPackage, DropDisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropDisplayText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropDisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDropPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_RequiredSchematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropPackage_Statics::NewProp_DropDisplayText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDropPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"DropPackage",
		sizeof(FDropPackage),
		alignof(FDropPackage),
		Z_Construct_UScriptStruct_FDropPackage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDropPackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDropPackage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDropPackage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDropPackage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DropPackage"), sizeof(FDropPackage), Get_Z_Construct_UScriptStruct_FDropPackage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDropPackage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDropPackage_Hash() { return 1945558816U; }
	void UFGDropPodSettings::StaticRegisterNativesUFGDropPodSettings()
	{
		UClass* Class = UFGDropPodSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomDropPackage", &UFGDropPodSettings::execGetRandomDropPackage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics
	{
		struct FGDropPodSettings_eventGetRandomDropPackage_Parms
		{
			UWorld* world;
			FDropPackage ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDropPodSettings_eventGetRandomDropPackage_Parms, ReturnValue), Z_Construct_UScriptStruct_FDropPackage, METADATA_PARAMS(Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDropPodSettings_eventGetRandomDropPackage_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "DropPackage" },
		{ "ModuleRelativePath", "Public/FGDropPodSettings.h" },
		{ "ToolTip", "Get a random drop package" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDropPodSettings, nullptr, "GetRandomDropPackage", sizeof(FGDropPodSettings_eventGetRandomDropPackage_Parms), Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGDropPodSettings_NoRegister()
	{
		return UFGDropPodSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGDropPodSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDropTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDropTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDropTable_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDropPodSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGDropPodSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGDropPodSettings_GetRandomDropPackage, "GetRandomDropPackage" }, // 1051285065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDropPodSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGDropPodSettings.h" },
		{ "ModuleRelativePath", "Public/FGDropPodSettings.h" },
		{ "ToolTip", "Settings for the drop pods." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDropPodSettings_Statics::NewProp_mDropTable_MetaData[] = {
		{ "Category", "DropPackage" },
		{ "ModuleRelativePath", "Public/FGDropPodSettings.h" },
		{ "ToolTip", "List of all available drop packages" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGDropPodSettings_Statics::NewProp_mDropTable = { "mDropTable", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDropPodSettings, mDropTable), METADATA_PARAMS(Z_Construct_UClass_UFGDropPodSettings_Statics::NewProp_mDropTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDropPodSettings_Statics::NewProp_mDropTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGDropPodSettings_Statics::NewProp_mDropTable_Inner = { "mDropTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDropPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGDropPodSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDropPodSettings_Statics::NewProp_mDropTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDropPodSettings_Statics::NewProp_mDropTable_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDropPodSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGDropPodSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDropPodSettings_Statics::ClassParams = {
		&UFGDropPodSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGDropPodSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGDropPodSettings_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGDropPodSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDropPodSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDropPodSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDropPodSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDropPodSettings, 1887530462);
	template<> FACTORYGAME_API UClass* StaticClass<UFGDropPodSettings>()
	{
		return UFGDropPodSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDropPodSettings(Z_Construct_UClass_UFGDropPodSettings, &UFGDropPodSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDropPodSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDropPodSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
