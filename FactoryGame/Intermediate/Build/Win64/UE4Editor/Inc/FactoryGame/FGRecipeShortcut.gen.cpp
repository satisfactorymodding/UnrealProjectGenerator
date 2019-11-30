// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRecipeShortcut.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRecipeShortcut() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipeShortcut_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipeShortcut();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHotbarShortcut();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipeShortcut_OnRep_Recipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe();
// End Cross Module References
	void UFGRecipeShortcut::StaticRegisterNativesUFGRecipeShortcut()
	{
		UClass* Class = UFGRecipeShortcut::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRecipe", &UFGRecipeShortcut::execGetRecipe },
			{ "OnRep_Recipe", &UFGRecipeShortcut::execOnRep_Recipe },
			{ "SetRecipe", &UFGRecipeShortcut::execSetRecipe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics
	{
		struct FGRecipeShortcut_eventGetRecipe_Parms
		{
			TSubclassOf<UFGRecipe>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipeShortcut_eventGetRecipe_Parms, ReturnValue), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "FGRecipeShortcut.h" },
		{ "ToolTip", "Get the recipe we want to activate when activating this shortcut" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipeShortcut, "GetRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRecipeShortcut_eventGetRecipe_Parms), Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipeShortcut_OnRep_Recipe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipeShortcut_OnRep_Recipe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRecipeShortcut.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipeShortcut_OnRep_Recipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipeShortcut, "OnRep_Recipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipeShortcut_OnRep_Recipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipeShortcut_OnRep_Recipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipeShortcut_OnRep_Recipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipeShortcut_OnRep_Recipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics
	{
		struct FGRecipeShortcut_eventSetRecipe_Parms
		{
			TSubclassOf<UFGRecipe>  recipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::NewProp_recipe = { UE4CodeGen_Private::EPropertyClass::Class, "recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipeShortcut_eventSetRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "FGRecipeShortcut.h" },
		{ "ToolTip", "Set the recipe of the current shortcut, the recipe will be saved\n@param recipe - null is valid, then we won't have any shortcut show up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipeShortcut, "SetRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGRecipeShortcut_eventSetRecipe_Parms), Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGRecipeShortcut_NoRegister()
	{
		return UFGRecipeShortcut::StaticClass();
	}
	struct Z_Construct_UClass_UFGRecipeShortcut_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRecipeToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mRecipeToActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRecipeShortcut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGHotbarShortcut,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGRecipeShortcut_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGRecipeShortcut_GetRecipe, "GetRecipe" }, // 268643105
		{ &Z_Construct_UFunction_UFGRecipeShortcut_OnRep_Recipe, "OnRep_Recipe" }, // 4003793442
		{ &Z_Construct_UFunction_UFGRecipeShortcut_SetRecipe, "SetRecipe" }, // 2940797770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipeShortcut_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGRecipeShortcut.h" },
		{ "ModuleRelativePath", "FGRecipeShortcut.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipeShortcut_Statics::NewProp_mRecipeToActivate_MetaData[] = {
		{ "ModuleRelativePath", "FGRecipeShortcut.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGRecipeShortcut_Statics::NewProp_mRecipeToActivate = { UE4CodeGen_Private::EPropertyClass::Class, "mRecipeToActivate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080101000020, 1, "OnRep_Recipe", STRUCT_OFFSET(UFGRecipeShortcut, mRecipeToActivate), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGRecipeShortcut_Statics::NewProp_mRecipeToActivate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipeShortcut_Statics::NewProp_mRecipeToActivate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGRecipeShortcut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipeShortcut_Statics::NewProp_mRecipeToActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRecipeShortcut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGRecipeShortcut>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRecipeShortcut_Statics::ClassParams = {
		&UFGRecipeShortcut::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGRecipeShortcut_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGRecipeShortcut_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGRecipeShortcut_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRecipeShortcut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRecipeShortcut()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRecipeShortcut_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRecipeShortcut, 850575577);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRecipeShortcut(Z_Construct_UClass_UFGRecipeShortcut, &UFGRecipeShortcut::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRecipeShortcut"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRecipeShortcut);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
