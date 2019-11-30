// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableSplitterSmart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableSplitterSmart() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSplitterSortRule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSplitterSmart_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSplitterSmart();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentSplitter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnSortRulesChanged__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FSplitterSortRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSplitterSortRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplitterSortRule, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SplitterSortRule"), sizeof(FSplitterSortRule), Get_Z_Construct_UScriptStruct_FSplitterSortRule_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSplitterSortRule>()
{
	return FSplitterSortRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplitterSortRule(FSplitterSortRule::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SplitterSortRule"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSplitterSortRule
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSplitterSortRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplitterSortRule")),new UScriptStruct::TCppStructOps<FSplitterSortRule>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSplitterSortRule;
	struct Z_Construct_UScriptStruct_FSplitterSortRule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplitterSortRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplitterSortRule>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_OutputIndex_MetaData[] = {
		{ "Category", "Sort Rule" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "Which output to send this to." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000001010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplitterSortRule, OutputIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_OutputIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_OutputIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "Sort Rule" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "This is the item class to filter out." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000001010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplitterSortRule, ItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplitterSortRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_OutputIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplitterSortRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SplitterSortRule",
		sizeof(FSplitterSortRule),
		alignof(FSplitterSortRule),
		Z_Construct_UScriptStruct_FSplitterSortRule_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplitterSortRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplitterSortRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplitterSortRule"), sizeof(FSplitterSortRule), Get_Z_Construct_UScriptStruct_FSplitterSortRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplitterSortRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplitterSortRule_Hash() { return 1704843251U; }
	void AFGBuildableSplitterSmart::StaticRegisterNativesAFGBuildableSplitterSmart()
	{
		UClass* Class = AFGBuildableSplitterSmart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSortRule", &AFGBuildableSplitterSmart::execAddSortRule },
			{ "GetMaxNumSortRules", &AFGBuildableSplitterSmart::execGetMaxNumSortRules },
			{ "GetNumSortRules", &AFGBuildableSplitterSmart::execGetNumSortRules },
			{ "GetSortRuleAt", &AFGBuildableSplitterSmart::execGetSortRuleAt },
			{ "IsValidSortRuleAt", &AFGBuildableSplitterSmart::execIsValidSortRuleAt },
			{ "OnRep_SortRules", &AFGBuildableSplitterSmart::execOnRep_SortRules },
			{ "RemoveSortRuleAt", &AFGBuildableSplitterSmart::execRemoveSortRuleAt },
			{ "SetSortRuleAt", &AFGBuildableSplitterSmart::execSetSortRuleAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics
	{
		struct FGBuildableSplitterSmart_eventAddSortRule_Parms
		{
			FSplitterSortRule rule;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::NewProp_rule = { "rule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableSplitterSmart_eventAddSortRule_Parms, rule), Z_Construct_UScriptStruct_FSplitterSortRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::NewProp_rule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "Adds a new sort rule." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, nullptr, "AddSortRule", sizeof(FGBuildableSplitterSmart_eventAddSortRule_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics
	{
		struct FGBuildableSplitterSmart_eventGetMaxNumSortRules_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableSplitterSmart_eventGetMaxNumSortRules_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "Get number of max sort rules." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, nullptr, "GetMaxNumSortRules", sizeof(FGBuildableSplitterSmart_eventGetMaxNumSortRules_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics
	{
		struct FGBuildableSplitterSmart_eventGetNumSortRules_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableSplitterSmart_eventGetNumSortRules_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "Get the number of sort rules this splitter has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, nullptr, "GetNumSortRules", sizeof(FGBuildableSplitterSmart_eventGetNumSortRules_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics
	{
		struct FGBuildableSplitterSmart_eventGetSortRuleAt_Parms
		{
			int32 index;
			FSplitterSortRule ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableSplitterSmart_eventGetSortRuleAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FSplitterSortRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableSplitterSmart_eventGetSortRuleAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "Get the number of sort rules this splitter has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, nullptr, "GetSortRuleAt", sizeof(FGBuildableSplitterSmart_eventGetSortRuleAt_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics
	{
		struct FGBuildableSplitterSmart_eventIsValidSortRuleAt_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableSplitterSmart_eventIsValidSortRuleAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableSplitterSmart_eventIsValidSortRuleAt_Parms), &Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableSplitterSmart_eventIsValidSortRuleAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "Is this a valid sort rule index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, nullptr, "IsValidSortRuleAt", sizeof(FGBuildableSplitterSmart_eventIsValidSortRuleAt_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, nullptr, "OnRep_SortRules", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics
	{
		struct FGBuildableSplitterSmart_eventRemoveSortRuleAt_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableSplitterSmart_eventRemoveSortRuleAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "Removes the rule at passed index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, nullptr, "RemoveSortRuleAt", sizeof(FGBuildableSplitterSmart_eventRemoveSortRuleAt_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics
	{
		struct FGBuildableSplitterSmart_eventSetSortRuleAt_Parms
		{
			int32 index;
			FSplitterSortRule rule;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rule;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::NewProp_rule = { "rule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableSplitterSmart_eventSetSortRuleAt_Parms, rule), Z_Construct_UScriptStruct_FSplitterSortRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableSplitterSmart_eventSetSortRuleAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::NewProp_rule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "Updates the sort rule at the passed index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, nullptr, "SetSortRuleAt", sizeof(FGBuildableSplitterSmart_eventSetSortRuleAt_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableSplitterSmart_NoRegister()
	{
		return AFGBuildableSplitterSmart::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableSplitterSmart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLastOutputIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mLastOutputIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemToLastOutputMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mItemToLastOutputMap;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mItemToLastOutputMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mItemToLastOutputMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLastItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mLastItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxNumSortRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxNumSortRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSortRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSortRules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSortRules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSortRulesChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSortRulesChangedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableAttachmentSplitter,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule, "AddSortRule" }, // 956670054
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules, "GetMaxNumSortRules" }, // 2888951846
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules, "GetNumSortRules" }, // 2492296574
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt, "GetSortRuleAt" }, // 3880457818
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt, "IsValidSortRuleAt" }, // 3640654468
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules, "OnRep_SortRules" }, // 1168242531
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt, "RemoveSortRuleAt" }, // 1212109467
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt, "SetSortRuleAt" }, // 2330671074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "A smart splitter which you can tell where stuff should go!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastOutputIndex_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastOutputIndex = { "mLastOutputIndex", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableSplitterSmart, mLastOutputIndex), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastOutputIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastOutputIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap = { "mItemToLastOutputMap", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableSplitterSmart, mItemToLastOutputMap), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_Key_KeyProp = { "mItemToLastOutputMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_ValueProp = { "mItemToLastOutputMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastItem_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastItem = { "mLastItem", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableSplitterSmart, mLastItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastItem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mMaxNumSortRules_MetaData[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "How many rules this splitter can have." },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mMaxNumSortRules = { "mMaxNumSortRules", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableSplitterSmart, mMaxNumSortRules), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mMaxNumSortRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mMaxNumSortRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules_MetaData[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "These are the sorting rules the player has entered." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules = { "mSortRules", "OnRep_SortRules", (EPropertyFlags)0x0040000101010021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableSplitterSmart, mSortRules), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules_Inner = { "mSortRules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSplitterSortRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_OnSortRulesChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_OnSortRulesChangedDelegate = { "OnSortRulesChangedDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableSplitterSmart, OnSortRulesChangedDelegate), Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_OnSortRulesChangedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_OnSortRulesChangedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastOutputIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mMaxNumSortRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_OnSortRulesChangedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableSplitterSmart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::ClassParams = {
		&AFGBuildableSplitterSmart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableSplitterSmart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableSplitterSmart, 1280090509);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableSplitterSmart>()
	{
		return AFGBuildableSplitterSmart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableSplitterSmart(Z_Construct_UClass_AFGBuildableSplitterSmart, &AFGBuildableSplitterSmart::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableSplitterSmart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableSplitterSmart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
