// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableTradingPost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableTradingPost() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableTradingPost_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableTradingPost();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_OnRep_NeedPlayingBuildEffect();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_UpdateGeneratorVisibility();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_UpdateMAMVisibility();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_UpdateStorageVisibility();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSchematicManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHubTerminal_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGenerator_NoRegister();
// End Cross Module References
	static FName NAME_AFGBuildableTradingPost_OnTradingPostUpgraded = FName(TEXT("OnTradingPostUpgraded"));
	void AFGBuildableTradingPost::OnTradingPostUpgraded(int32 level, bool suppressBuildEffects)
	{
		FGBuildableTradingPost_eventOnTradingPostUpgraded_Parms Parms;
		Parms.level=level;
		Parms.suppressBuildEffects=suppressBuildEffects ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableTradingPost_OnTradingPostUpgraded),&Parms);
	}
	void AFGBuildableTradingPost::StaticRegisterNativesAFGBuildableTradingPost()
	{
		UClass* Class = AFGBuildableTradingPost::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreChildBuildingsLoaded", &AFGBuildableTradingPost::execAreChildBuildingsLoaded },
			{ "GetStorageInventory", &AFGBuildableTradingPost::execGetStorageInventory },
			{ "GetTradingPostLevel", &AFGBuildableTradingPost::execGetTradingPostLevel },
			{ "OnRep_NeedPlayingBuildEffect", &AFGBuildableTradingPost::execOnRep_NeedPlayingBuildEffect },
			{ "OnTradingPostUpgraded", &AFGBuildableTradingPost::execOnTradingPostUpgraded },
			{ "UpdateGeneratorVisibility", &AFGBuildableTradingPost::execUpdateGeneratorVisibility },
			{ "UpdateMAMVisibility", &AFGBuildableTradingPost::execUpdateMAMVisibility },
			{ "UpdateStorageVisibility", &AFGBuildableTradingPost::execUpdateStorageVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics
	{
		struct FGBuildableTradingPost_eventAreChildBuildingsLoaded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableTradingPost_eventAreChildBuildingsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableTradingPost_eventAreChildBuildingsLoaded_Parms), &Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Checks if all child buildings are created so that we can use them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableTradingPost, "AreChildBuildingsLoaded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableTradingPost_eventAreChildBuildingsLoaded_Parms), Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics
	{
		struct FGBuildableTradingPost_eventGetStorageInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGBuildableTradingPost_eventGetStorageInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Returns the inventory component used in the storage box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableTradingPost, "GetStorageInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableTradingPost_eventGetStorageInventory_Parms), Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics
	{
		struct FGBuildableTradingPost_eventGetTradingPostLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableTradingPost_eventGetTradingPostLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Returns level of trading post upgrade" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableTradingPost, "GetTradingPostLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableTradingPost_eventGetTradingPostLevel_Parms), Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableTradingPost_OnRep_NeedPlayingBuildEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableTradingPost_OnRep_NeedPlayingBuildEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableTradingPost_OnRep_NeedPlayingBuildEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableTradingPost, "OnRep_NeedPlayingBuildEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableTradingPost_OnRep_NeedPlayingBuildEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_OnRep_NeedPlayingBuildEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_OnRep_NeedPlayingBuildEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableTradingPost_OnRep_NeedPlayingBuildEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics
	{
		static void NewProp_suppressBuildEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_suppressBuildEffects;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::NewProp_suppressBuildEffects_SetBit(void* Obj)
	{
		((FGBuildableTradingPost_eventOnTradingPostUpgraded_Parms*)Obj)->suppressBuildEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::NewProp_suppressBuildEffects = { UE4CodeGen_Private::EPropertyClass::Bool, "suppressBuildEffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableTradingPost_eventOnTradingPostUpgraded_Parms), &Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::NewProp_suppressBuildEffects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::NewProp_level = { UE4CodeGen_Private::EPropertyClass::Int, "level", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableTradingPost_eventOnTradingPostUpgraded_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::NewProp_suppressBuildEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::Function_MetaDataParams[] = {
		{ "Category", "TradingPost" },
		{ "CPP_Default_suppressBuildEffects", "false" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Upgrading the trading post to specified level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableTradingPost, "OnTradingPostUpgraded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(FGBuildableTradingPost_eventOnTradingPostUpgraded_Parms), Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableTradingPost_UpdateGeneratorVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableTradingPost_UpdateGeneratorVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Handles the generators visibility depending on tutorial step" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableTradingPost_UpdateGeneratorVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableTradingPost, "UpdateGeneratorVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableTradingPost_UpdateGeneratorVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_UpdateGeneratorVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_UpdateGeneratorVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableTradingPost_UpdateGeneratorVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableTradingPost_UpdateMAMVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableTradingPost_UpdateMAMVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Handles the MAM visibility depending on tutorial step" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableTradingPost_UpdateMAMVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableTradingPost, "UpdateMAMVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableTradingPost_UpdateMAMVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_UpdateMAMVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_UpdateMAMVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableTradingPost_UpdateMAMVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableTradingPost_UpdateStorageVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableTradingPost_UpdateStorageVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Handles the storage visibility depending on tutorial step" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableTradingPost_UpdateStorageVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableTradingPost, "UpdateStorageVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableTradingPost_UpdateStorageVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableTradingPost_UpdateStorageVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableTradingPost_UpdateStorageVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableTradingPost_UpdateStorageVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableTradingPost_NoRegister()
	{
		return AFGBuildableTradingPost::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableTradingPost_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNeedPlayingBuildEffectNotification_MetaData[];
#endif
		static void NewProp_mNeedPlayingBuildEffectNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mNeedPlayingBuildEffectNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWorkBenchLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mWorkBenchLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHubTerminalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHubTerminalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMAMLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMAMLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStorageLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStorageLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGenerator2Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mGenerator2Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGenerator1Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mGenerator1Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultResources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDefaultResources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDefaultResources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStorageInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStorageInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSchematicManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSchematicManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGroundSearchZDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mGroundSearchZDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpawningGroundZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpawningGroundZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInputInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMAMVisibilityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMAMVisibilityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStorageVisibilityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mStorageVisibilityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStorageInventorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mStorageInventorySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGeneratorVisibilityLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mGeneratorVisibilityLevels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mGeneratorVisibilityLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWorkBench_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mWorkBench;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHubTerminal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHubTerminal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMAM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMAM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultWorkBenchRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDefaultWorkBenchRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultHubTerminalRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDefaultHubTerminalRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultMAMRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDefaultMAMRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultStorageRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDefaultStorageRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mGenerators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultGeneratorRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDefaultGeneratorRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableTradingPost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableTradingPost_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableTradingPost_AreChildBuildingsLoaded, "AreChildBuildingsLoaded" }, // 2088009160
		{ &Z_Construct_UFunction_AFGBuildableTradingPost_GetStorageInventory, "GetStorageInventory" }, // 2666724757
		{ &Z_Construct_UFunction_AFGBuildableTradingPost_GetTradingPostLevel, "GetTradingPostLevel" }, // 3797963937
		{ &Z_Construct_UFunction_AFGBuildableTradingPost_OnRep_NeedPlayingBuildEffect, "OnRep_NeedPlayingBuildEffect" }, // 1110940982
		{ &Z_Construct_UFunction_AFGBuildableTradingPost_OnTradingPostUpgraded, "OnTradingPostUpgraded" }, // 88400288
		{ &Z_Construct_UFunction_AFGBuildableTradingPost_UpdateGeneratorVisibility, "UpdateGeneratorVisibility" }, // 143277659
		{ &Z_Construct_UFunction_AFGBuildableTradingPost_UpdateMAMVisibility, "UpdateMAMVisibility" }, // 2125267081
		{ &Z_Construct_UFunction_AFGBuildableTradingPost_UpdateStorageVisibility, "UpdateStorageVisibility" }, // 726017931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "The trading post, it has N inputs and sells inputed items for money." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mNeedPlayingBuildEffectNotification_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Bool to sync playing of build and upgrade effects" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mNeedPlayingBuildEffectNotification_SetBit(void* Obj)
	{
		((AFGBuildableTradingPost*)Obj)->mNeedPlayingBuildEffectNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mNeedPlayingBuildEffectNotification = { UE4CodeGen_Private::EPropertyClass::Bool, "mNeedPlayingBuildEffectNotification", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_NeedPlayingBuildEffect", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGBuildableTradingPost), &Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mNeedPlayingBuildEffectNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mNeedPlayingBuildEffectNotification_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mNeedPlayingBuildEffectNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBenchLocation_MetaData[] = {
		{ "Category", "FGBuildableTradingPost" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Component used to determine work bench terminal location" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBenchLocation = { UE4CodeGen_Private::EPropertyClass::Object, "mWorkBenchLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mWorkBenchLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBenchLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBenchLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminalLocation_MetaData[] = {
		{ "Category", "FGBuildableTradingPost" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Component used to determine Hub terminal location" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminalLocation = { UE4CodeGen_Private::EPropertyClass::Object, "mHubTerminalLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mHubTerminalLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminalLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMLocation_MetaData[] = {
		{ "Category", "FGBuildableTradingPost" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Component used to determine MAM location" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMLocation = { UE4CodeGen_Private::EPropertyClass::Object, "mMAMLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mMAMLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageLocation_MetaData[] = {
		{ "Category", "FGBuildableTradingPost" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Component used to determine storage location" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageLocation = { UE4CodeGen_Private::EPropertyClass::Object, "mStorageLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mStorageLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator2Location_MetaData[] = {
		{ "Category", "FGBuildableTradingPost" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Component used to determine generators location" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator2Location = { UE4CodeGen_Private::EPropertyClass::Object, "mGenerator2Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mGenerator2Location), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator2Location_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator2Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator1Location_MetaData[] = {
		{ "Category", "FGBuildableTradingPost" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Component used to determine generators location" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator1Location = { UE4CodeGen_Private::EPropertyClass::Object, "mGenerator1Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mGenerator1Location), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator1Location_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator1Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultResources_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "The starting resources in the tradingpost storage" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultResources = { UE4CodeGen_Private::EPropertyClass::Array, "mDefaultResources", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mDefaultResources), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultResources_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultResources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultResources_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mDefaultResources", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "The inventory to store everything in." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mStorageInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001080028, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mStorageInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSchematicManager_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "A cached schematic manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSchematicManager = { UE4CodeGen_Private::EPropertyClass::Object, "mSchematicManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mSchematicManager), Z_Construct_UClass_AFGSchematicManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSchematicManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSchematicManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGroundSearchZDistance_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "How much up and down we should search for the ground around all child actors that's spawning AFGPlayerStartTradingPost" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGroundSearchZDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mGroundSearchZDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mGroundSearchZDistance), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGroundSearchZDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGroundSearchZDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSpawningGroundZOffset_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "How far above the ground the spawn-points should be adjusted" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSpawningGroundZOffset = { UE4CodeGen_Private::EPropertyClass::Float, "mSpawningGroundZOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mSpawningGroundZOffset), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSpawningGroundZOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSpawningGroundZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mInputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Our input inventory where items are stored before put on ship" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mInputInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mInputInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001080028, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mInputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mInputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mInputInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMVisibilityLevel_MetaData[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "At what trading post level should the MAM be visible" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMVisibilityLevel = { UE4CodeGen_Private::EPropertyClass::Int, "mMAMVisibilityLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mMAMVisibilityLevel), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMVisibilityLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMVisibilityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageVisibilityLevel_MetaData[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "At what trading post level should the storage be visible" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageVisibilityLevel = { UE4CodeGen_Private::EPropertyClass::Int, "mStorageVisibilityLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mStorageVisibilityLevel), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageVisibilityLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageVisibilityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventorySize_MetaData[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Size of the storage box" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventorySize = { UE4CodeGen_Private::EPropertyClass::Int, "mStorageInventorySize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mStorageInventorySize), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventorySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventorySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGeneratorVisibilityLevels_MetaData[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Arrays containing ints for what level  we should activate/show the generator" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGeneratorVisibilityLevels = { UE4CodeGen_Private::EPropertyClass::Array, "mGeneratorVisibilityLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mGeneratorVisibilityLevels), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGeneratorVisibilityLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGeneratorVisibilityLevels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGeneratorVisibilityLevels_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "mGeneratorVisibilityLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBench_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "References to the created work bench" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBench = { UE4CodeGen_Private::EPropertyClass::Object, "mWorkBench", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mWorkBench), Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBench_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBench_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminal_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "References to the created Hub Terminal" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminal = { UE4CodeGen_Private::EPropertyClass::Object, "mHubTerminal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mHubTerminal), Z_Construct_UClass_AFGBuildableHubTerminal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAM_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "References to the created MAM" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAM = { UE4CodeGen_Private::EPropertyClass::Object, "mMAM", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mMAM), Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAM_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorage_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "References to the created storage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorage = { UE4CodeGen_Private::EPropertyClass::Object, "mStorage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mStorage), Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultWorkBenchRecipe_MetaData[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Class of work bench to create with the trading post" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultWorkBenchRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mDefaultWorkBenchRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mDefaultWorkBenchRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultWorkBenchRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultWorkBenchRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultHubTerminalRecipe_MetaData[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Class of hub terminal to create with the trading post" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultHubTerminalRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mDefaultHubTerminalRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mDefaultHubTerminalRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultHubTerminalRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultHubTerminalRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultMAMRecipe_MetaData[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Class of MAM to create with the trading post" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultMAMRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mDefaultMAMRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mDefaultMAMRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultMAMRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultMAMRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultStorageRecipe_MetaData[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Class of storage to create with the trading post" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultStorageRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mDefaultStorageRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mDefaultStorageRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultStorageRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultStorageRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "References to the created generators" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerators = { UE4CodeGen_Private::EPropertyClass::Array, "mGenerators", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mGenerators), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerators_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerators_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mGenerators", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildableGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultGeneratorRecipe_MetaData[] = {
		{ "Category", "Trading Post" },
		{ "ModuleRelativePath", "Buildables/FGBuildableTradingPost.h" },
		{ "ToolTip", "Class of generators to create with the trading post" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultGeneratorRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mDefaultGeneratorRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableTradingPost, mDefaultGeneratorRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultGeneratorRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultGeneratorRecipe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableTradingPost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mNeedPlayingBuildEffectNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBenchLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator2Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerator1Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultResources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSchematicManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGroundSearchZDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mSpawningGroundZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mInputInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAMVisibilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageVisibilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorageInventorySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGeneratorVisibilityLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGeneratorVisibilityLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mWorkBench,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mHubTerminal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mMAM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultWorkBenchRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultHubTerminalRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultMAMRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultStorageRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableTradingPost_Statics::NewProp_mDefaultGeneratorRecipe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableTradingPost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableTradingPost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableTradingPost_Statics::ClassParams = {
		&AFGBuildableTradingPost::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableTradingPost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableTradingPost_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableTradingPost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableTradingPost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableTradingPost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableTradingPost, 2163200393);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableTradingPost(Z_Construct_UClass_AFGBuildableTradingPost, &AFGBuildableTradingPost::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableTradingPost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableTradingPost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
