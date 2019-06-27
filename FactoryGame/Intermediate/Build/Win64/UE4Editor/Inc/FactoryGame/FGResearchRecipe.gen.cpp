// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGResearchRecipe.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResearchRecipe() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FResearchRecipeReward();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResearchRecipe_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResearchRecipe();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EIncludeInBuilds();
// End Cross Module References
class UScriptStruct* FResearchRecipeReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FResearchRecipeReward_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResearchRecipeReward, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ResearchRecipeReward"), sizeof(FResearchRecipeReward), Get_Z_Construct_UScriptStruct_FResearchRecipeReward_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResearchRecipeReward(FResearchRecipeReward::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ResearchRecipeReward"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFResearchRecipeReward
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFResearchRecipeReward()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ResearchRecipeReward")),new UScriptStruct::TCppStructOps<FResearchRecipeReward>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFResearchRecipeReward;
	struct Z_Construct_UScriptStruct_FResearchRecipeReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Schematics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Schematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Schematics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchRecipes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResearchRecipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResearchRecipes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Products_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Products;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Products_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResearchRecipeReward>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Schematics_MetaData[] = {
		{ "Category", "ResearchRecipeReward" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Schematics = { UE4CodeGen_Private::EPropertyClass::Array, "Schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000014, 1, nullptr, STRUCT_OFFSET(FResearchRecipeReward, Schematics), METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Schematics_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Schematics_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Schematics_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_ResearchRecipes_MetaData[] = {
		{ "Category", "ResearchRecipeReward" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_ResearchRecipes = { UE4CodeGen_Private::EPropertyClass::Array, "ResearchRecipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000014, 1, nullptr, STRUCT_OFFSET(FResearchRecipeReward, ResearchRecipes), METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_ResearchRecipes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_ResearchRecipes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_ResearchRecipes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ResearchRecipes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Products_MetaData[] = {
		{ "Category", "ResearchRecipeReward" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Products = { UE4CodeGen_Private::EPropertyClass::Array, "Products", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FResearchRecipeReward, Products), METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Products_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Products_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Products_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Products", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Schematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_ResearchRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_ResearchRecipes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Products,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::NewProp_Products_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ResearchRecipeReward",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FResearchRecipeReward),
		alignof(FResearchRecipeReward),
		Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResearchRecipeReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResearchRecipeReward_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResearchRecipeReward"), sizeof(FResearchRecipeReward), Get_Z_Construct_UScriptStruct_FResearchRecipeReward_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResearchRecipeReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResearchRecipeReward_CRC() { return 181630826U; }
	void UFGResearchRecipe::StaticRegisterNativesUFGResearchRecipe()
	{
		UClass* Class = UFGResearchRecipe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetResearchTime", &UFGResearchRecipe::execGetResearchTime },
			{ "GetResearchTriggerItems", &UFGResearchRecipe::execGetResearchTriggerItems },
			{ "GetResearcResults", &UFGResearchRecipe::execGetResearcResults },
			{ "IsResearchRepeatable", &UFGResearchRecipe::execIsResearchRepeatable },
			{ "IsValidResearchRecipeReward", &UFGResearchRecipe::execIsValidResearchRecipeReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics
	{
		struct FGResearchRecipe_eventGetResearchTime_Parms
		{
			TSubclassOf<UFGResearchRecipe>  inClass;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResearchRecipe_eventGetResearchTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchRecipe_eventGetResearchTime_Parms, inClass), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchRecipe, "GetResearchTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGResearchRecipe_eventGetResearchTime_Parms), Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics
	{
		struct FGResearchRecipe_eventGetResearchTriggerItems_Parms
		{
			TSubclassOf<UFGResearchRecipe>  inClass;
			TArray<TSubclassOf<UFGItemDescriptor> > ReturnValue;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGResearchRecipe_eventGetResearchTriggerItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchRecipe_eventGetResearchTriggerItems_Parms, inClass), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchRecipe, "GetResearchTriggerItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGResearchRecipe_eventGetResearchTriggerItems_Parms), Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics
	{
		struct FGResearchRecipe_eventGetResearcResults_Parms
		{
			TSubclassOf<UFGResearchRecipe>  inClass;
			FResearchRecipeReward ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResearchRecipe_eventGetResearcResults_Parms, ReturnValue), Z_Construct_UScriptStruct_FResearchRecipeReward, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchRecipe_eventGetResearcResults_Parms, inClass), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "ToolTip", ", TArray<FItemAmount>& out_products, TArray<TSubclassOf<UFGResearchRecipe>>& out_recipes, TArray<TSubclassOf<class UFGSchematic>>& out_schematics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchRecipe, "GetResearcResults", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGResearchRecipe_eventGetResearcResults_Parms), Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics
	{
		struct FGResearchRecipe_eventIsResearchRepeatable_Parms
		{
			TSubclassOf<UFGResearchRecipe>  inClass;
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
	void Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchRecipe_eventIsResearchRepeatable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResearchRecipe_eventIsResearchRepeatable_Parms), &Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchRecipe_eventIsResearchRepeatable_Parms, inClass), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchRecipe, "IsResearchRepeatable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGResearchRecipe_eventIsResearchRepeatable_Parms), Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics
	{
		struct FGResearchRecipe_eventIsValidResearchRecipeReward_Parms
		{
			FResearchRecipeReward recipeReward;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_recipeReward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchRecipe_eventIsValidResearchRecipeReward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResearchRecipe_eventIsValidResearchRecipeReward_Parms), &Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::NewProp_recipeReward = { UE4CodeGen_Private::EPropertyClass::Struct, "recipeReward", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchRecipe_eventIsValidResearchRecipeReward_Parms, recipeReward), Z_Construct_UScriptStruct_FResearchRecipeReward, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::NewProp_recipeReward,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchRecipe, "IsValidResearchRecipeReward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGResearchRecipe_eventIsValidResearchRecipeReward_Parms), Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGResearchRecipe_NoRegister()
	{
		return UFGResearchRecipe::StaticClass();
	}
	struct Z_Construct_UClass_UFGResearchRecipe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAssetBundleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mAssetBundleData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExcludeFromBuild_MetaData[];
#endif
		static void NewProp_mExcludeFromBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mExcludeFromBuild;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIncludeInBuilds_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mIncludeInBuilds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mIncludeInBuilds_Underlying;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStructurePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mStructurePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDecorPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mDecorPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockedSchematics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mUnlockedSchematics;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_mUnlockedSchematics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockedResearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mUnlockedResearch;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mUnlockedResearch_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRewardUsesDropPackage_MetaData[];
#endif
		static void NewProp_mRewardUsesDropPackage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mRewardUsesDropPackage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsRepeatable_MetaData[];
#endif
		static void NewProp_mIsRepeatable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsRepeatable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTriggerItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTriggerItems;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mTriggerItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGResearchRecipe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGRecipe,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGResearchRecipe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGResearchRecipe_GetResearchTime, "GetResearchTime" }, // 3190318453
		{ &Z_Construct_UFunction_UFGResearchRecipe_GetResearchTriggerItems, "GetResearchTriggerItems" }, // 3054846237
		{ &Z_Construct_UFunction_UFGResearchRecipe_GetResearcResults, "GetResearcResults" }, // 1862792181
		{ &Z_Construct_UFunction_UFGResearchRecipe_IsResearchRepeatable, "IsResearchRepeatable" }, // 1004162176
		{ &Z_Construct_UFunction_UFGResearchRecipe_IsValidResearchRecipeReward, "IsValidResearchRecipeReward" }, // 2767200525
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGResearchRecipe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mAssetBundleData_MetaData[] = {
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "ToolTip", "Asset Bundle data computed at save time. In cooked builds this is accessible from AssetRegistry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mAssetBundleData = { UE4CodeGen_Private::EPropertyClass::Struct, "mAssetBundleData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGResearchRecipe, mAssetBundleData), Z_Construct_UScriptStruct_FAssetBundleData, METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mAssetBundleData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mAssetBundleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mExcludeFromBuild_MetaData[] = {
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "ToolTip", "Old property for excluding from build, remove when all UFGResearchRecipe is resaved on main" },
	};
#endif
	void Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mExcludeFromBuild_SetBit(void* Obj)
	{
		((UFGResearchRecipe*)Obj)->mExcludeFromBuild_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mExcludeFromBuild = { UE4CodeGen_Private::EPropertyClass::Bool, "mExcludeFromBuild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGResearchRecipe), &Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mExcludeFromBuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mExcludeFromBuild_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mExcludeFromBuild_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIncludeInBuilds_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "ToolTip", "Slightly misleading name, as this doesn't only apply to builds. If set to Never, it won't show up in editor" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIncludeInBuilds = { UE4CodeGen_Private::EPropertyClass::Enum, "mIncludeInBuilds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020090800010001, 1, nullptr, STRUCT_OFFSET(UFGResearchRecipe, mIncludeInBuilds), Z_Construct_UEnum_FactoryGame_EIncludeInBuilds, METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIncludeInBuilds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIncludeInBuilds_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIncludeInBuilds_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mStructurePoints_MetaData[] = {
		{ "Category", "Rewards" },
		{ "ClampMax", "9999" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!mRewardUsesDropPackage" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "UIMax", "9999" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mStructurePoints = { UE4CodeGen_Private::EPropertyClass::Int, "mStructurePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGResearchRecipe, mStructurePoints), METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mStructurePoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mStructurePoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mDecorPoints_MetaData[] = {
		{ "Category", "Rewards" },
		{ "ClampMax", "9999" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!mRewardUsesDropPackage" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "UIMax", "9999" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mDecorPoints = { UE4CodeGen_Private::EPropertyClass::Int, "mDecorPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGResearchRecipe, mDecorPoints), METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mDecorPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mDecorPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedSchematics_MetaData[] = {
		{ "Category", "Rewards" },
		{ "EditCondition", "!mRewardUsesDropPackage" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "ToolTip", "What schematics that will be purchased by completing this research" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedSchematics = { UE4CodeGen_Private::EPropertyClass::Array, "mUnlockedSchematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGResearchRecipe, mUnlockedSchematics), METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedSchematics_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedSchematics_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedSchematics_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "mUnlockedSchematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedResearch_MetaData[] = {
		{ "Category", "Rewards" },
		{ "EditCondition", "!mRewardUsesDropPackage" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "ToolTip", "What research that will be unlocked in the research tree by completing this research" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedResearch = { UE4CodeGen_Private::EPropertyClass::Array, "mUnlockedResearch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGResearchRecipe, mUnlockedResearch), METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedResearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedResearch_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedResearch_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mUnlockedResearch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mRewardUsesDropPackage_MetaData[] = {
		{ "Category", "Rewards" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
	};
#endif
	void Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mRewardUsesDropPackage_SetBit(void* Obj)
	{
		((UFGResearchRecipe*)Obj)->mRewardUsesDropPackage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mRewardUsesDropPackage = { UE4CodeGen_Private::EPropertyClass::Bool, "mRewardUsesDropPackage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGResearchRecipe), &Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mRewardUsesDropPackage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mRewardUsesDropPackage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mRewardUsesDropPackage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIsRepeatable_MetaData[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "ToolTip", "Can this research be completed multiple times?" },
	};
#endif
	void Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIsRepeatable_SetBit(void* Obj)
	{
		((UFGResearchRecipe*)Obj)->mIsRepeatable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIsRepeatable = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsRepeatable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGResearchRecipe), &Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIsRepeatable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIsRepeatable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIsRepeatable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mTriggerItems_MetaData[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchRecipe.h" },
		{ "ToolTip", "Items that make this research available once it enters the players inventory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mTriggerItems = { UE4CodeGen_Private::EPropertyClass::Array, "mTriggerItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGResearchRecipe, mTriggerItems), METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mTriggerItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mTriggerItems_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mTriggerItems_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mTriggerItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGResearchRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mAssetBundleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mExcludeFromBuild,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIncludeInBuilds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIncludeInBuilds_Underlying,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mStructurePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mDecorPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedSchematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedSchematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedResearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mUnlockedResearch_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mRewardUsesDropPackage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mIsRepeatable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mTriggerItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchRecipe_Statics::NewProp_mTriggerItems_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGResearchRecipe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGResearchRecipe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGResearchRecipe_Statics::ClassParams = {
		&UFGResearchRecipe::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGResearchRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGResearchRecipe_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGResearchRecipe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGResearchRecipe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGResearchRecipe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGResearchRecipe, 1272851596);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGResearchRecipe(Z_Construct_UClass_UFGResearchRecipe, &UFGResearchRecipe::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGResearchRecipe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGResearchRecipe);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFGResearchRecipe)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
