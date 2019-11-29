// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Creature/FGLootSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGLootSettings() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLootSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLootSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UFGLootSettings::StaticRegisterNativesUFGLootSettings()
	{
		UClass* Class = UFGLootSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLootSettingsDefaultObject", &UFGLootSettings::execGetLootSettingsDefaultObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics
	{
		struct FGLootSettings_eventGetLootSettingsDefaultObject_Parms
		{
			TSubclassOf<UFGLootSettings>  inClass;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLootSettings_eventGetLootSettingsDefaultObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLootSettings_eventGetLootSettingsDefaultObject_Parms, inClass), Z_Construct_UClass_UFGLootSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "LootSettings|Utilities" },
		{ "DeterminesOutputType", "inClass" },
		{ "ModuleRelativePath", "Creature/FGLootSettings.h" },
		{ "ToolTip", "Gets default object for loot settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLootSettings, nullptr, "GetLootSettingsDefaultObject", sizeof(FGLootSettings_eventGetLootSettingsDefaultObject_Parms), Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGLootSettings_NoRegister()
	{
		return UFGLootSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGLootSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGLootSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGLootSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGLootSettings_GetLootSettingsDefaultObject, "GetLootSettingsDefaultObject" }, // 963438670
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLootSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Creature/FGLootSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Creature/FGLootSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGLootSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGLootSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGLootSettings_Statics::ClassParams = {
		&UFGLootSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGLootSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGLootSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGLootSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGLootSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGLootSettings, 3692397602);
	template<> FACTORYGAME_API UClass* StaticClass<UFGLootSettings>()
	{
		return UFGLootSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGLootSettings(Z_Construct_UClass_UFGLootSettings, &UFGLootSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGLootSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGLootSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
