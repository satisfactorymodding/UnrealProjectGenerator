// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRecipeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRecipeManager() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRecipeManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRecipeManager();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRecipeManager_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	void AFGRecipeManager::StaticRegisterNativesAFGRecipeManager()
	{
		UClass* Class = AFGRecipeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindRecipesByIngredient", &AFGRecipeManager::execFindRecipesByIngredient },
			{ "FindRecipesByProduct", &AFGRecipeManager::execFindRecipesByProduct },
			{ "Get", &AFGRecipeManager::execGet },
			{ "GetAllAvailableRecipes", &AFGRecipeManager::execGetAllAvailableRecipes },
			{ "GetAvailableRecipesForProducer", &AFGRecipeManager::execGetAvailableRecipesForProducer },
			{ "IsRecipeAvailable", &AFGRecipeManager::execIsRecipeAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics
	{
		struct FGRecipeManager_eventFindRecipesByIngredient_Parms
		{
			TSubclassOf<UFGItemDescriptor>  ingredient;
			TArray<TSubclassOf<UFGRecipe> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ingredient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventFindRecipesByIngredient_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::NewProp_ingredient = { UE4CodeGen_Private::EPropertyClass::Class, "ingredient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventFindRecipesByIngredient_Parms, ingredient), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::NewProp_ingredient,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipe" },
		{ "ModuleRelativePath", "FGRecipeManager.h" },
		{ "ToolTip", "Find all recipes using the given item as an ingredient." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRecipeManager, "FindRecipesByIngredient", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44020401, sizeof(FGRecipeManager_eventFindRecipesByIngredient_Parms), Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics
	{
		struct FGRecipeManager_eventFindRecipesByProduct_Parms
		{
			TSubclassOf<UFGItemDescriptor>  product;
			TArray<TSubclassOf<UFGRecipe> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_product;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventFindRecipesByProduct_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::NewProp_product = { UE4CodeGen_Private::EPropertyClass::Class, "product", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventFindRecipesByProduct_Parms, product), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::NewProp_product,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipe" },
		{ "ModuleRelativePath", "FGRecipeManager.h" },
		{ "ToolTip", "Find all recipes having the given item as an product." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRecipeManager, "FindRecipesByProduct", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44020401, sizeof(FGRecipeManager_eventFindRecipesByProduct_Parms), Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRecipeManager_Get_Statics
	{
		struct FGRecipeManager_eventGet_Parms
		{
			UObject* worldContext;
			AFGRecipeManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRecipeManager_Get_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGRecipeManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRecipeManager_Get_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRecipeManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRecipeManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipe" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetRecipeManager" },
		{ "ModuleRelativePath", "FGRecipeManager.h" },
		{ "ToolTip", "Get the game phase manager from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRecipeManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRecipeManager, "Get", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGRecipeManager_eventGet_Parms), Z_Construct_UFunction_AFGRecipeManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_Get_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRecipeManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRecipeManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRecipeManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics
	{
		struct FGRecipeManager_eventGetAllAvailableRecipes_Parms
		{
			TArray<TSubclassOf<UFGRecipe> > out_recipes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_recipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_recipes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::NewProp_out_recipes = { UE4CodeGen_Private::EPropertyClass::Array, "out_recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventGetAllAvailableRecipes_Parms, out_recipes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::NewProp_out_recipes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "out_recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::NewProp_out_recipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::NewProp_out_recipes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipe" },
		{ "ModuleRelativePath", "FGRecipeManager.h" },
		{ "ToolTip", "Gets all available recipes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRecipeManager, "GetAllAvailableRecipes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGRecipeManager_eventGetAllAvailableRecipes_Parms), Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics
	{
		struct FGRecipeManager_eventGetAvailableRecipesForProducer_Parms
		{
			TSubclassOf<UObject>  forProducer;
			TArray<TSubclassOf<UFGRecipe> > out_recipes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_recipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_recipes_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_forProducer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::NewProp_out_recipes = { UE4CodeGen_Private::EPropertyClass::Array, "out_recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventGetAvailableRecipesForProducer_Parms, out_recipes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::NewProp_out_recipes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "out_recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::NewProp_forProducer = { UE4CodeGen_Private::EPropertyClass::Class, "forProducer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventGetAvailableRecipesForProducer_Parms, forProducer), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::NewProp_out_recipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::NewProp_out_recipes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::NewProp_forProducer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipe" },
		{ "ModuleRelativePath", "FGRecipeManager.h" },
		{ "ToolTip", "Gets the available recipes for the given class, may not be null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRecipeManager, "GetAvailableRecipesForProducer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGRecipeManager_eventGetAvailableRecipesForProducer_Parms), Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics
	{
		struct FGRecipeManager_eventIsRecipeAvailable_Parms
		{
			TSubclassOf<UFGRecipe>  recipeClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRecipeManager_eventIsRecipeAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGRecipeManager_eventIsRecipeAvailable_Parms), &Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::NewProp_recipeClass = { UE4CodeGen_Private::EPropertyClass::Class, "recipeClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGRecipeManager_eventIsRecipeAvailable_Parms, recipeClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::NewProp_recipeClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Recipe" },
		{ "ModuleRelativePath", "FGRecipeManager.h" },
		{ "ToolTip", "Is the past recipe available?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRecipeManager, "IsRecipeAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGRecipeManager_eventIsRecipeAvailable_Parms), Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGRecipeManager_NoRegister()
	{
		return AFGRecipeManager::StaticClass();
	}
	struct Z_Construct_UClass_AFGRecipeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAvailableRecipes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAvailableRecipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAvailableRecipes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRecipeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGRecipeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGRecipeManager_FindRecipesByIngredient, "FindRecipesByIngredient" }, // 972972885
		{ &Z_Construct_UFunction_AFGRecipeManager_FindRecipesByProduct, "FindRecipesByProduct" }, // 229781261
		{ &Z_Construct_UFunction_AFGRecipeManager_Get, "Get" }, // 2791985158
		{ &Z_Construct_UFunction_AFGRecipeManager_GetAllAvailableRecipes, "GetAllAvailableRecipes" }, // 3006172427
		{ &Z_Construct_UFunction_AFGRecipeManager_GetAvailableRecipesForProducer, "GetAvailableRecipesForProducer" }, // 1182083173
		{ &Z_Construct_UFunction_AFGRecipeManager_IsRecipeAvailable, "IsRecipeAvailable" }, // 3006085528
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRecipeManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGRecipeManager.h" },
		{ "ModuleRelativePath", "FGRecipeManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Handles everything to do with recipes in the game." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRecipeManager_Statics::NewProp_mAvailableRecipes_MetaData[] = {
		{ "ModuleRelativePath", "FGRecipeManager.h" },
		{ "ToolTip", "All recipes that are available to the producers, i.e. build gun, workbench, manufacturers etc." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGRecipeManager_Statics::NewProp_mAvailableRecipes = { UE4CodeGen_Private::EPropertyClass::Array, "mAvailableRecipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000001000020, 1, nullptr, STRUCT_OFFSET(AFGRecipeManager, mAvailableRecipes), METADATA_PARAMS(Z_Construct_UClass_AFGRecipeManager_Statics::NewProp_mAvailableRecipes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRecipeManager_Statics::NewProp_mAvailableRecipes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGRecipeManager_Statics::NewProp_mAvailableRecipes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mAvailableRecipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRecipeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRecipeManager_Statics::NewProp_mAvailableRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRecipeManager_Statics::NewProp_mAvailableRecipes_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGRecipeManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGRecipeManager, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRecipeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRecipeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRecipeManager_Statics::ClassParams = {
		&AFGRecipeManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGRecipeManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGRecipeManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGRecipeManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRecipeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRecipeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRecipeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRecipeManager, 501399782);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRecipeManager(Z_Construct_UClass_AFGRecipeManager, &AFGRecipeManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRecipeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRecipeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
