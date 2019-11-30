// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::NewProp_newRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "newRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnNewRecipeDelegate_Parms, newRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::NewProp_newRecipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnNewRecipeDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnNewRecipeDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::NewProp_out_recipes = { UE4CodeGen_Private::EPropertyClass::Array, "out_recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGBuildableManufacturer_eventGetAvailableRecipes_Parms, out_recipes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::NewProp_out_recipes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "out_recipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, "GetAvailableRecipes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGBuildableManufacturer_eventGetAvailableRecipes_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableManufacturer_eventGetCurrentRecipe_Parms, ReturnValue), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, "GetCurrentRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableManufacturer_eventGetCurrentRecipe_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGBuildableManufacturer_eventGetInputInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::NewProp_ReturnValue_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, "GetInputInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableManufacturer_eventGetInputInventory_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableManufacturer_eventGetManufacturingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, "GetManufacturingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableManufacturer_eventGetManufacturingSpeed_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGBuildableManufacturer_eventGetOutputInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::NewProp_ReturnValue_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, "GetOutputInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableManufacturer_eventGetOutputInventory_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableManufacturer_eventMoveOrDropInputInventory_Parms), &Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::NewProp_pawn = { UE4CodeGen_Private::EPropertyClass::Object, "pawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableManufacturer_eventMoveOrDropInputInventory_Parms, pawn), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, "MoveOrDropInputInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(FGBuildableManufacturer_eventMoveOrDropInputInventory_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableManufacturer_eventMoveOrDropOutputInventory_Parms), &Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::NewProp_pawn = { UE4CodeGen_Private::EPropertyClass::Object, "pawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableManufacturer_eventMoveOrDropOutputInventory_Parms, pawn), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, "MoveOrDropOutputInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(FGBuildableManufacturer_eventMoveOrDropOutputInventory_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, "OnRep_CurrentRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::NewProp_recipe = { UE4CodeGen_Private::EPropertyClass::Class, "recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableManufacturer_eventSetRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableManufacturer, "SetRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGBuildableManufacturer_eventSetRecipe_Parms), Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetAvailableRecipes, "GetAvailableRecipes" }, // 2761471090
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetCurrentRecipe, "GetCurrentRecipe" }, // 3437163855
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetInputInventory, "GetInputInventory" }, // 1196864600
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetManufacturingSpeed, "GetManufacturingSpeed" }, // 4067204889
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_GetOutputInventory, "GetOutputInventory" }, // 2883238107
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropInputInventory, "MoveOrDropInputInventory" }, // 473632377
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_MoveOrDropOutputInventory, "MoveOrDropOutputInventory" }, // 2682774427
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_OnRep_CurrentRecipe, "OnRep_CurrentRecipe" }, // 1865579496
		{ &Z_Construct_UFunction_AFGBuildableManufacturer_SetRecipe, "SetRecipe" }, // 2235128379
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mCurrentRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080101000020, 1, "OnRep_CurrentRecipe", STRUCT_OFFSET(AFGBuildableManufacturer, mCurrentRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Our output inventory, shared for all output connections." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mOutputInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001080008, 1, nullptr, STRUCT_OFFSET(AFGBuildableManufacturer, mOutputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mInputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Our input inventory, shared for all input connections." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mInputInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mInputInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001080008, 1, nullptr, STRUCT_OFFSET(AFGBuildableManufacturer, mInputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mInputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mInputInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentManufacturingProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Manufacturing progress in range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentManufacturingProgress = { UE4CodeGen_Private::EPropertyClass::Float, "mCurrentManufacturingProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableManufacturer, mCurrentManufacturingProgress), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentManufacturingProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentManufacturingProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mManufacturingSpeed_MetaData[] = {
		{ "Category", "Production" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "The speed of which this building manufacture recipes, this is a multiplier to the recipe speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mManufacturingSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mManufacturingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableManufacturer, mManufacturingSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mManufacturingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mManufacturingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipeChanged_MetaData[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableManufacturer.h" },
		{ "ToolTip", "Called when a new recipe has been set." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipeChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mCurrentRecipeChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(AFGBuildableManufacturer, mCurrentRecipeChanged), Z_Construct_UDelegateFunction_FactoryGame_OnNewRecipeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableManufacturer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mCurrentRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableManufacturer_Statics::NewProp_mOutputInventory,
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableManufacturer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableManufacturer_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AFGBuildableManufacturer, 196419767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableManufacturer(Z_Construct_UClass_AFGBuildableManufacturer, &AFGBuildableManufacturer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableManufacturer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableManufacturer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
