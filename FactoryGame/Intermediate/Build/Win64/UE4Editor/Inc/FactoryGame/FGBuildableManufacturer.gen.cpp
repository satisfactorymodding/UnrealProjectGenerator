// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableManufacturer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableManufacturer() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableManufacturer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableManufacturer();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPipeConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipeProducerInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnNewRecipeDelegate_Parms
		{
			TSubclassOf<UFGRecipe>  newRecipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_newRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::NewProp_newRecipe = { "newRecipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnNewRecipeDelegate_Parms, newRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::NewProp_newRecipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnNewRecipeDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventOnNewRecipeDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AFGBuildableManufacturer::StaticRegisterNativesAFGBuildableManufacturer()
	{
		UClass* Class = AFGBuildableManufacturer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableRecipes", &AFGBuildableManufacturer::execGetAvailableRecipes },
			{ "GetCurrentRecipe", &AFGBuildableManufacturer::execGetCurrentRecipe },
			{ "GetInputInventory", &AFGBuildableManufacturer::execGetInputInventory },
			{ "GetManufacturingSpeed", &AFGBuildableManufacturer::execGetManufacturingSpeed },
			{ "GetOutputInventory", &AFGBuildableManufacturer::execGetOutputInventory },
			{ "MoveOrDropInputInventory", &AFGBuildableManufacturer::execMoveOrDropInputInventory },
			{ "MoveOrDropOutputInventory", &AFGBuildableManufacturer::execMoveOrDropOutputInventory },
			{ "OnRep_CurrentRecipe", &AFGBuildableManufacturer::execOnRep_CurrentRecipe },
			{ "SetRecipe", &AFGBuildableManufacturer::execSetRecipe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics
	{
		struct FGBuildableManufacturer_eventGetAvailableRecipes_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::NewProp_out_recipes = { "out_recipes", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableManufacturer_eventGetAvailableRecipes_Parms, out_recipes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::NewProp_out_recipes_Inner = { "out_recipes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::NewProp_out_recipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::NewProp_out_recipes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Factory|Recipe" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Gets all the recipes that can be produced.\n@note This is an expensive operation so cache the result.\n@param out_recipes Returns all recipes available to this machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, nullptr, "GetAvailableRecipes", sizeof(FGBuildableManufacturer_eventGetAvailableRecipes_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics
	{
		struct FGBuildableManufacturer_eventGetCurrentRecipe_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableManufacturer_eventGetCurrentRecipe_Parms, ReturnValue), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Factory|Recipe" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Get the current recipe for manufacturing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, nullptr, "GetCurrentRecipe", sizeof(FGBuildableManufacturer_eventGetCurrentRecipe_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics
	{
		struct FGBuildableManufacturer_eventGetInputInventory_Parms
		{
			UFGInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableManufacturer_eventGetInputInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Factory|Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Get the input inventory from this manufacturer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, nullptr, "GetInputInventory", sizeof(FGBuildableManufacturer_eventGetInputInventory_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics
	{
		struct FGBuildableManufacturer_eventGetManufacturingSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableManufacturer_eventGetManufacturingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Factory|Production" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Returns the speed of which this building manufacture recipes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, nullptr, "GetManufacturingSpeed", sizeof(FGBuildableManufacturer_eventGetManufacturingSpeed_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics
	{
		struct FGBuildableManufacturer_eventGetOutputInventory_Parms
		{
			UFGInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableManufacturer_eventGetOutputInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Factory|Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Get the output inventory from this manufacturer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, nullptr, "GetOutputInventory", sizeof(FGBuildableManufacturer_eventGetOutputInventory_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics
	{
		struct FGBuildableManufacturer_eventMoveOrDropInputInventory_Parms
		{
			AFGCharacterPlayer* pawn;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableManufacturer_eventMoveOrDropInputInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableManufacturer_eventMoveOrDropInputInventory_Parms), &Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableManufacturer_eventMoveOrDropInputInventory_Parms, pawn), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Factory|Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Move all items in the input inventory to the given inventory.\n@return true if successful; false if the given inventory is full or does not support the given type of item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, nullptr, "MoveOrDropInputInventory", sizeof(FGBuildableManufacturer_eventMoveOrDropInputInventory_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics
	{
		struct FGBuildableManufacturer_eventMoveOrDropOutputInventory_Parms
		{
			AFGCharacterPlayer* pawn;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableManufacturer_eventMoveOrDropOutputInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableManufacturer_eventMoveOrDropOutputInventory_Parms), &Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableManufacturer_eventMoveOrDropOutputInventory_Parms, pawn), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Factory|Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Move all items in the input output to the given inventory.\n@return true if successful; false if the given inventory is full or does not support the given type of item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, nullptr, "MoveOrDropOutputInventory", sizeof(FGBuildableManufacturer_eventMoveOrDropOutputInventory_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Called when NewRecipe is replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, nullptr, "OnRep_CurrentRecipe", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics
	{
		struct FGBuildableManufacturer_eventSetRecipe_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableManufacturer_eventSetRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Factory|Recipe" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Set the current recipe for manufacturing.\n@note It is up to the caller to make sure input and output inventories are empty before changing recipe.\n      This is so the case when players inventory is full can be handled correctly.\n@param recipe - The new recipe." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, nullptr, "SetRecipe", sizeof(FGBuildableManufacturer_eventSetRecipe_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableManufacturer_NoRegister()
	{
		return AFGBuildableManufacturer::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableManufacturer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mCurrentRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOutputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOutputInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeOutputConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPipeOutputConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPipeOutputConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFactoryOutputConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFactoryOutputConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFactoryOutputConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeInputConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPipeInputConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPipeInputConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFactoryInputConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFactoryInputConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFactoryInputConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInputInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentManufacturingProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentManufacturingProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mManufacturingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mManufacturingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentRecipeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mCurrentRecipeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableManufacturer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableManufacturer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes, "GetAvailableRecipes" }, // 3373177416
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe, "GetCurrentRecipe" }, // 486245742
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory, "GetInputInventory" }, // 452537585
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed, "GetManufacturingSpeed" }, // 2776332055
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory, "GetOutputInventory" }, // 4139351412
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory, "MoveOrDropInputInventory" }, // 2280742569
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory, "MoveOrDropOutputInventory" }, // 3642983226
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe, "OnRep_CurrentRecipe" }, // 2662267281
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe, "SetRecipe" }, // 2722963083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableManufacturer.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Base class for all buildings that are producing something out of something, i.e. constructors, smelters, refinery etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipe_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "The recipe we're currently running." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipe = { "mCurrentRecipe", "OnRep_CurrentRecipe", (EPropertyFlags)0x0024080101000020, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mCurrentRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Our output inventory, shared for all output connections." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory = { "mOutputInventory", nullptr, (EPropertyFlags)0x0020080001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mOutputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeOutputConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Cached output pipe connections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeOutputConnections = { "mPipeOutputConnections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mPipeOutputConnections), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeOutputConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeOutputConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeOutputConnections_Inner = { "mPipeOutputConnections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGPipeConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryOutputConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Cached factory output connections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryOutputConnections = { "mFactoryOutputConnections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mFactoryOutputConnections), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryOutputConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryOutputConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryOutputConnections_Inner = { "mFactoryOutputConnections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeInputConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Cached input pipe connections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeInputConnections = { "mPipeInputConnections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mPipeInputConnections), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeInputConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeInputConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeInputConnections_Inner = { "mPipeInputConnections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGPipeConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryInputConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Cached factory input connections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryInputConnections = { "mFactoryInputConnections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mFactoryInputConnections), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryInputConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryInputConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryInputConnections_Inner = { "mFactoryInputConnections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mInputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Our input inventory, shared for all input connections." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mInputInventory = { "mInputInventory", nullptr, (EPropertyFlags)0x0020080001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mInputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mInputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mInputInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentManufacturingProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Manufacturing progress in range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentManufacturingProgress = { "mCurrentManufacturingProgress", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mCurrentManufacturingProgress), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentManufacturingProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentManufacturingProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mManufacturingSpeed_MetaData[] = {
		{ "Category", "Production" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "The speed of which this building manufacture recipes, this is a multiplier to the recipe speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mManufacturingSpeed = { "mManufacturingSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mManufacturingSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mManufacturingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mManufacturingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipeChanged_MetaData[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Called when a new recipe has been set." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipeChanged = { "mCurrentRecipeChanged", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableManufacturer, mCurrentRecipeChanged), Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableManufacturer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeOutputConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeOutputConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryOutputConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryOutputConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeInputConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mPipeInputConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryInputConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mFactoryInputConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mInputInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentManufacturingProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mManufacturingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipeChanged,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGRecipeProducerInterface_NoRegister, (int32)VTABLE_OFFSET(AFGBuildableManufacturer, IFGRecipeProducerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableManufacturer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableManufacturer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::ClassParams = {
		&AFGBuildableManufacturer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableManufacturer_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableManufacturer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableManufacturer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableManufacturer, 1119746684);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableManufacturer>()
	{
		return AFGBuildableManufacturer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableManufacturer(Z_Construct_UClass_AFGBuildableManufacturer, &AFGBuildableManufacturer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableManufacturer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableManufacturer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
