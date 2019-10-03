// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnSortRulesChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSplitterSortRule_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplitterSortRule, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SplitterSortRule"), sizeof(FSplitterSortRule), Get_Z_Construct_UScriptStruct_FSplitterSortRule_CRC());
	}
	return Singleton;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_OutputIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OutputIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001010005, 1, nullptr, STRUCT_OFFSET(FSplitterSortRule, OutputIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_OutputIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_OutputIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "Sort Rule" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "This is the item class to filter out." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass = { UE4CodeGen_Private::EPropertyClass::Class, "ItemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000001010005, 1, nullptr, STRUCT_OFFSET(FSplitterSortRule, ItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplitterSortRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_OutputIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplitterSortRule_Statics::NewProp_ItemClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplitterSortRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SplitterSortRule",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSplitterSortRule),
		alignof(FSplitterSortRule),
		Z_Construct_UScriptStruct_FSplitterSortRule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterSortRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplitterSortRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplitterSortRule_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplitterSortRule"), sizeof(FSplitterSortRule), Get_Z_Construct_UScriptStruct_FSplitterSortRule_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplitterSortRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplitterSortRule_CRC() { return 1227740456U; }
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::NewProp_rule = { UE4CodeGen_Private::EPropertyClass::Struct, "rule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSplitterSmart_eventAddSortRule_Parms, rule), Z_Construct_UScriptStruct_FSplitterSortRule, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, "AddSortRule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGBuildableSplitterSmart_eventAddSortRule_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableSplitterSmart_eventGetMaxNumSortRules_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, "GetMaxNumSortRules", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableSplitterSmart_eventGetMaxNumSortRules_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableSplitterSmart_eventGetNumSortRules_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, "GetNumSortRules", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableSplitterSmart_eventGetNumSortRules_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableSplitterSmart_eventGetSortRuleAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FSplitterSortRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSplitterSmart_eventGetSortRuleAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, "GetSortRuleAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableSplitterSmart_eventGetSortRuleAt_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableSplitterSmart_eventIsValidSortRuleAt_Parms), &Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSplitterSmart_eventIsValidSortRuleAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, "IsValidSortRuleAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableSplitterSmart_eventIsValidSortRuleAt_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, "OnRep_SortRules", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSplitterSmart_eventRemoveSortRuleAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, "RemoveSortRuleAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGBuildableSplitterSmart_eventRemoveSortRuleAt_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::NewProp_rule = { UE4CodeGen_Private::EPropertyClass::Struct, "rule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSplitterSmart_eventSetSortRuleAt_Parms, rule), Z_Construct_UScriptStruct_FSplitterSortRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSplitterSmart_eventSetSortRuleAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSplitterSmart, "SetSortRuleAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGBuildableSplitterSmart_eventSetSortRuleAt_Parms), Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_AddSortRule, "AddSortRule" }, // 251323190
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_GetMaxNumSortRules, "GetMaxNumSortRules" }, // 314220331
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_GetNumSortRules, "GetNumSortRules" }, // 2793170692
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_GetSortRuleAt, "GetSortRuleAt" }, // 4149885636
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_IsValidSortRuleAt, "IsValidSortRuleAt" }, // 2510089076
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_OnRep_SortRules, "OnRep_SortRules" }, // 4157146614
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_RemoveSortRuleAt, "RemoveSortRuleAt" }, // 2425936982
		{ &Z_Construct_UFunction_AFGBuildableSplitterSmart_SetSortRuleAt, "SetSortRuleAt" }, // 4269618100
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastOutputIndex = { UE4CodeGen_Private::EPropertyClass::Int, "mLastOutputIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableSplitterSmart, mLastOutputIndex), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastOutputIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastOutputIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap = { UE4CodeGen_Private::EPropertyClass::Map, "mItemToLastOutputMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableSplitterSmart, mItemToLastOutputMap), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Class, "mItemToLastOutputMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mItemToLastOutputMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Byte, "mItemToLastOutputMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastItem_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastItem = { UE4CodeGen_Private::EPropertyClass::Struct, "mLastItem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableSplitterSmart, mLastItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastItem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mLastItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mMaxNumSortRules_MetaData[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "ToolTip", "How many rules this splitter can have." },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mMaxNumSortRules = { UE4CodeGen_Private::EPropertyClass::Int, "mMaxNumSortRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableSplitterSmart, mMaxNumSortRules), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mMaxNumSortRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mMaxNumSortRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules_MetaData[] = {
		{ "Category", "Sort" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "These are the sorting rules the player has entered." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules = { UE4CodeGen_Private::EPropertyClass::Array, "mSortRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000101010021, 1, "OnRep_SortRules", STRUCT_OFFSET(AFGBuildableSplitterSmart, mSortRules), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_mSortRules_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mSortRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSplitterSortRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_OnSortRulesChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSplitterSmart.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_OnSortRulesChangedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSortRulesChangedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(AFGBuildableSplitterSmart, OnSortRulesChangedDelegate), Z_Construct_UDelegateFunction_FactoryGame_OnSortRulesChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_OnSortRulesChangedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::NewProp_OnSortRulesChangedDelegate_MetaData)) };
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSplitterSmart_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGBuildableSplitterSmart, 3173924693);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableSplitterSmart(Z_Construct_UClass_AFGBuildableSplitterSmart, &AFGBuildableSplitterSmart::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableSplitterSmart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableSplitterSmart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
