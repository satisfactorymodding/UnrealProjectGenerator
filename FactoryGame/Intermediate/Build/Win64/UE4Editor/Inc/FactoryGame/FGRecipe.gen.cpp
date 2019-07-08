// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRecipe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRecipe() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetIngredients();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetProducedIn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetProducts();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetRecipeName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_SortByName();
// End Cross Module References
	void UFGRecipe::StaticRegisterNativesUFGRecipe()
	{
		UClass* Class = UFGRecipe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIngredients", &UFGRecipe::execGetIngredients },
			{ "GetManufacturingDuration", &UFGRecipe::execGetManufacturingDuration },
			{ "GetProducedIn", &UFGRecipe::execGetProducedIn },
			{ "GetProducts", &UFGRecipe::execGetProducts },
			{ "GetRecipeName", &UFGRecipe::execGetRecipeName },
			{ "GetRewardedRecipes", &UFGRecipe::execGetRewardedRecipes },
			{ "IsRecipeAffordable", &UFGRecipe::execIsRecipeAffordable },
			{ "SortByName", &UFGRecipe::execSortByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics
	{
		struct FGRecipe_eventGetIngredients_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetIngredients_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetIngredients_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "Used to get the ingredients in blueprint. @todo: Make return value a out value instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, "GetIngredients", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGRecipe_eventGetIngredients_Parms), Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetIngredients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics
	{
		struct FGRecipe_eventGetManufacturingDuration_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetManufacturingDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetManufacturingDuration_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "Used to get the manufacturing duration in blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, "GetManufacturingDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGRecipe_eventGetManufacturingDuration_Parms), Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics
	{
		struct FGRecipe_eventGetProducedIn_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
			TArray<TSubclassOf<UObject> > ReturnValue;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetProducedIn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetProducedIn_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "@todo: change return value to out variable. Used to get the produced in buildings in blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, "GetProducedIn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGRecipe_eventGetProducedIn_Parms), Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetProducedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetProducts_Statics
	{
		struct FGRecipe_eventGetProducts_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
			bool allowChildRecipes;
			TArray<FItemAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_allowChildRecipes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allowChildRecipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetProducts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_allowChildRecipes_SetBit(void* Obj)
	{
		((FGRecipe_eventGetProducts_Parms*)Obj)->allowChildRecipes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_allowChildRecipes = { UE4CodeGen_Private::EPropertyClass::Bool, "allowChildRecipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGRecipe_eventGetProducts_Parms), &Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_allowChildRecipes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetProducts_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_allowChildRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "CPP_Default_allowChildRecipes", "false" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "Used to get the products in blueprint. @todo: Make return value a out value instead, @todo remove unused allowChildRecipes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, "GetProducts", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGRecipe_eventGetProducts_Parms), Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetProducts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics
	{
		struct FGRecipe_eventGetRecipeName_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetRecipeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetRecipeName_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "Used to get the recipe name in blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, "GetRecipeName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGRecipe_eventGetRecipeName_Parms), Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetRecipeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics
	{
		struct FGRecipe_eventGetRewardedRecipes_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetRewardedRecipes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventGetRewardedRecipes_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "MAM is rewritten, use the new system instead!" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "Used to get the products in blueprint. @todo Deprecated since 2018-10-23, but have been unused since MAM refactor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, "GetRewardedRecipes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGRecipe_eventGetRewardedRecipes_Parms), Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics
	{
		struct FGRecipe_eventIsRecipeAffordable_Parms
		{
			AFGCharacterPlayer* player;
			TSubclassOf<UFGRecipe>  recipe;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRecipe_eventIsRecipeAffordable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGRecipe_eventIsRecipeAffordable_Parms), &Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_recipe = { UE4CodeGen_Private::EPropertyClass::Class, "recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventIsRecipeAffordable_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventIsRecipeAffordable_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_recipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "Can the given player afford the recipe" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, "IsRecipeAffordable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGRecipe_eventIsRecipeAffordable_Parms), Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_SortByName_Statics
	{
		struct FGRecipe_eventSortByName_Parms
		{
			TArray<TSubclassOf<UFGRecipe> > recipes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_recipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_SortByName_Statics::NewProp_recipes = { UE4CodeGen_Private::EPropertyClass::Array, "recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000008000180, 1, nullptr, STRUCT_OFFSET(FGRecipe_eventSortByName_Parms, recipes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_SortByName_Statics::NewProp_recipes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_SortByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_SortByName_Statics::NewProp_recipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_SortByName_Statics::NewProp_recipes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_SortByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "Sort a array dependent on their names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_SortByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, "SortByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FGRecipe_eventSortByName_Parms), Z_Construct_UFunction_UFGRecipe_SortByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_SortByName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_SortByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_SortByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_SortByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_SortByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGRecipe_NoRegister()
	{
		return UFGRecipe::StaticClass();
	}
	struct Z_Construct_UClass_UFGRecipe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProducedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mProducedIn;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_mProducedIn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mManufactoringDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mManufactoringDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProduct_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mProduct;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mProduct_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIngredients_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mIngredients;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mIngredients_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisplayNameOverride_MetaData[];
#endif
		static void NewProp_mDisplayNameOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDisplayNameOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRecipe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGRecipe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGRecipe_GetIngredients, "GetIngredients" }, // 1916774543
		{ &Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration, "GetManufacturingDuration" }, // 902419836
		{ &Z_Construct_UFunction_UFGRecipe_GetProducedIn, "GetProducedIn" }, // 18821254
		{ &Z_Construct_UFunction_UFGRecipe_GetProducts, "GetProducts" }, // 3888611636
		{ &Z_Construct_UFunction_UFGRecipe_GetRecipeName, "GetRecipeName" }, // 707800229
		{ &Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes, "GetRewardedRecipes" }, // 914025154
		{ &Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable, "IsRecipeAffordable" }, // 995100470
		{ &Z_Construct_UFunction_UFGRecipe_SortByName, "SortByName" }, // 549393531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::Class_MetaDataParams[] = {
		{ "AutoJSON", "TRUE" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGRecipe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "This is a class describing a recipe, subclass this in blueprint to make a new recipe." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_MetaData[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "MustImplement", "FGRecipeProducerInterface" },
		{ "ToolTip", "Defines where this recipe can be produced" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn = { UE4CodeGen_Private::EPropertyClass::Array, "mProducedIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGRecipe, mProducedIn), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "mProducedIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration_MetaData[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "The time it takes to produce the output." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration = { UE4CodeGen_Private::EPropertyClass::Float, "mManufactoringDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGRecipe, mManufactoringDuration), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_MetaData[] = {
		{ "Category", "Rewards" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "The products produced from this recipe." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct = { UE4CodeGen_Private::EPropertyClass::Array, "mProduct", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGRecipe, mProduct), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mProduct", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_MetaData[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "Ingredients needed to produce the products." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients = { UE4CodeGen_Private::EPropertyClass::Array, "mIngredients", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGRecipe, mIngredients), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mIngredients", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName_MetaData[] = {
		{ "Category", "Recipe" },
		{ "EditCondition", "mDisplayNameOverride" },
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "ToolTip", "Overridden name for this recipe, if mDisplayNameOverride is false the first product's item name is used." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "mDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGRecipe, mDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_MetaData[] = {
		{ "ModuleRelativePath", "FGRecipe.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "If we override the display name or get it from the first products item name." },
	};
#endif
	void Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_SetBit(void* Obj)
	{
		((UFGRecipe*)Obj)->mDisplayNameOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "mDisplayNameOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGRecipe), &Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRecipe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGRecipe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRecipe_Statics::ClassParams = {
		&UFGRecipe::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRecipe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRecipe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRecipe, 2103591266);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRecipe(Z_Construct_UClass_UFGRecipe, &UFGRecipe::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRecipe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRecipe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
