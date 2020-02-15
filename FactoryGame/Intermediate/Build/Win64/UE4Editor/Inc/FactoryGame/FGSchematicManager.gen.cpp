// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSchematicManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSchematicManager() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSchematicManager_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSchematicCost();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSchematicManager();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESchematicType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetCostFor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_LaunchShip();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnActiveSchematicChanged_Parms
		{
			TSubclassOf<UFGSchematic>  activeSchematic;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_activeSchematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::NewProp_activeSchematic = { "activeSchematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActiveSchematicChanged_Parms, activeSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::NewProp_activeSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnActiveSchematicChanged__DelegateSignature", sizeof(_Script_FactoryGame_eventOnActiveSchematicChanged_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventPaidOffOnSchematicDelegate_Parms
		{
			AFGSchematicManager* schematicManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_schematicManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::NewProp_schematicManager = { "schematicManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventPaidOffOnSchematicDelegate_Parms, schematicManager), Z_Construct_UClass_AFGSchematicManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::NewProp_schematicManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "PaidOffOnSchematicDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventPaidOffOnSchematicDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventPurchasedSchematicDelegate_Parms
		{
			TSubclassOf<UFGSchematic>  purchasedSchematic;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_purchasedSchematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::NewProp_purchasedSchematic = { "purchasedSchematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventPurchasedSchematicDelegate_Parms, purchasedSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::NewProp_purchasedSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "PurchasedSchematicDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventPurchasedSchematicDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FSchematicCost::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSchematicCost_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSchematicCost, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SchematicCost"), sizeof(FSchematicCost), Get_Z_Construct_UScriptStruct_FSchematicCost_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSchematicCost>()
{
	return FSchematicCost::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSchematicCost(FSchematicCost::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SchematicCost"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSchematicCost
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSchematicCost()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SchematicCost")),new UScriptStruct::TCppStructOps<FSchematicCost>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSchematicCost;
	struct Z_Construct_UScriptStruct_FSchematicCost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemCost;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemCost_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Schematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSchematicCost_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Holds info about a schematic and How much has been paid of on it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSchematicCost_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSchematicCost>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost_MetaData[] = {
		{ "Category", "SchematicCost" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Amount paid off" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost = { "ItemCost", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSchematicCost, ItemCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost_Inner = { "ItemCost", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_Schematic_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_Schematic = { "Schematic", nullptr, (EPropertyFlags)0x0014000001000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSchematicCost, Schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_Schematic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_Schematic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSchematicCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_Schematic,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSchematicCost_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SchematicCost",
		sizeof(FSchematicCost),
		alignof(FSchematicCost),
		Z_Construct_UScriptStruct_FSchematicCost_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicCost_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicCost_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicCost_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSchematicCost()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSchematicCost_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SchematicCost"), sizeof(FSchematicCost), Get_Z_Construct_UScriptStruct_FSchematicCost_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSchematicCost_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSchematicCost_Hash() { return 507700735U; }
	void AFGSchematicManager::StaticRegisterNativesAFGSchematicManager()
	{
		UClass* Class = AFGSchematicManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAvailableSchematic", &AFGSchematicManager::execAddAvailableSchematic },
			{ "CanSetAsActiveSchematic", &AFGSchematicManager::execCanSetAsActiveSchematic },
			{ "Get", &AFGSchematicManager::execGet },
			{ "GetActiveSchematic", &AFGSchematicManager::execGetActiveSchematic },
			{ "GetAllPurchasedSchematics", &AFGSchematicManager::execGetAllPurchasedSchematics },
			{ "GetAllSchematics", &AFGSchematicManager::execGetAllSchematics },
			{ "GetAllSchematicsOfType", &AFGSchematicManager::execGetAllSchematicsOfType },
			{ "GetAllSchematicsOfTypeFilteredOnDependency", &AFGSchematicManager::execGetAllSchematicsOfTypeFilteredOnDependency },
			{ "GetAvailableSchematics", &AFGSchematicManager::execGetAvailableSchematics },
			{ "GetCostFor", &AFGSchematicManager::execGetCostFor },
			{ "GetHighestAvailableTechTier", &AFGSchematicManager::execGetHighestAvailableTechTier },
			{ "GetMaxAllowedTechTier", &AFGSchematicManager::execGetMaxAllowedTechTier },
			{ "GetPaidOffCostFor", &AFGSchematicManager::execGetPaidOffCostFor },
			{ "GetPurchasedSchematicsOfTypes", &AFGSchematicManager::execGetPurchasedSchematicsOfTypes },
			{ "GetRemainingCostFor", &AFGSchematicManager::execGetRemainingCostFor },
			{ "GetTimeUntilShipReturn", &AFGSchematicManager::execGetTimeUntilShipReturn },
			{ "GiveAccessToSchematic", &AFGSchematicManager::execGiveAccessToSchematic },
			{ "IsSchematicPaidOff", &AFGSchematicManager::execIsSchematicPaidOff },
			{ "IsSchematicPurchased", &AFGSchematicManager::execIsSchematicPurchased },
			{ "IsShipAtTradingPost", &AFGSchematicManager::execIsShipAtTradingPost },
			{ "LaunchShip", &AFGSchematicManager::execLaunchShip },
			{ "OnRep_ActiveSchematic", &AFGSchematicManager::execOnRep_ActiveSchematic },
			{ "OnRep_PaidOffOnSchematic", &AFGSchematicManager::execOnRep_PaidOffOnSchematic },
			{ "OnRep_PurchasedSchematic", &AFGSchematicManager::execOnRep_PurchasedSchematic },
			{ "PayOffOnSchematic", &AFGSchematicManager::execPayOffOnSchematic },
			{ "SetActiveSchematic", &AFGSchematicManager::execSetActiveSchematic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics
	{
		struct FGSchematicManager_eventAddAvailableSchematic_Parms
		{
			TSubclassOf<UFGSchematic>  schematicClassToAdd;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematicClassToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::NewProp_schematicClassToAdd = { "schematicClassToAdd", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventAddAvailableSchematic_Parms, schematicClassToAdd), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::NewProp_schematicClassToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "adds a schematic to available schematics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "AddAvailableSchematic", sizeof(FGSchematicManager_eventAddAvailableSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics
	{
		struct FGSchematicManager_eventCanSetAsActiveSchematic_Parms
		{
			TSubclassOf<UFGSchematic>  inSchematic;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inSchematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematicManager_eventCanSetAsActiveSchematic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSchematicManager_eventCanSetAsActiveSchematic_Parms), &Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_inSchematic = { "inSchematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventCanSetAsActiveSchematic_Parms, inSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_inSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Can we set the passed schematic as the active one?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "CanSetAsActiveSchematic", sizeof(FGSchematicManager_eventCanSetAsActiveSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_Get_Statics
	{
		struct FGSchematicManager_eventGet_Parms
		{
			UObject* worldContext;
			AFGSchematicManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSchematicManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGSchematicManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSchematicManager_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetSchematicManager" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Get the schematic manager from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "Get", sizeof(FGSchematicManager_eventGet_Parms), Z_Construct_UFunction_AFGSchematicManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics
	{
		struct FGSchematicManager_eventGetActiveSchematic_Parms
		{
			TSubclassOf<UFGSchematic>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetActiveSchematic_Parms, ReturnValue), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Get active Schematic." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetActiveSchematic", sizeof(FGSchematicManager_eventGetActiveSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics
	{
		struct FGSchematicManager_eventGetAllPurchasedSchematics_Parms
		{
			TArray<TSubclassOf<UFGSchematic> > out_schematics;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_schematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_schematics_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::NewProp_out_schematics = { "out_schematics", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetAllPurchasedSchematics_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::NewProp_out_schematics_Inner = { "out_schematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::NewProp_out_schematics_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns all schematics the players have purchased." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetAllPurchasedSchematics", sizeof(FGSchematicManager_eventGetAllPurchasedSchematics_Parms), Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics
	{
		struct FGSchematicManager_eventGetAllSchematics_Parms
		{
			TArray<TSubclassOf<UFGSchematic> > out_schematics;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_schematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_schematics_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::NewProp_out_schematics = { "out_schematics", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetAllSchematics_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::NewProp_out_schematics_Inner = { "out_schematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::NewProp_out_schematics_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns every possible schematic that is in the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetAllSchematics", sizeof(FGSchematicManager_eventGetAllSchematics_Parms), Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics
	{
		struct FGSchematicManager_eventGetAllSchematicsOfType_Parms
		{
			ESchematicType type;
			TArray<TSubclassOf<UFGSchematic> > out_schematics;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_schematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_schematics_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_out_schematics = { "out_schematics", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetAllSchematicsOfType_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_out_schematics_Inner = { "out_schematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetAllSchematicsOfType_Parms, type), Z_Construct_UEnum_FactoryGame_ESchematicType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_out_schematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns all schematics of a type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetAllSchematicsOfType", sizeof(FGSchematicManager_eventGetAllSchematicsOfType_Parms), Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics
	{
		struct FGSchematicManager_eventGetAllSchematicsOfTypeFilteredOnDependency_Parms
		{
			ESchematicType type;
			TArray<TSubclassOf<UFGSchematic> > out_schematics;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_schematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_schematics_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::NewProp_out_schematics = { "out_schematics", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetAllSchematicsOfTypeFilteredOnDependency_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::NewProp_out_schematics_Inner = { "out_schematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetAllSchematicsOfTypeFilteredOnDependency_Parms, type), Z_Construct_UEnum_FactoryGame_ESchematicType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::NewProp_out_schematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns all schematics of a type that have any of their dependencies met." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetAllSchematicsOfTypeFilteredOnDependency", sizeof(FGSchematicManager_eventGetAllSchematicsOfTypeFilteredOnDependency_Parms), Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics
	{
		struct FGSchematicManager_eventGetAvailableSchematics_Parms
		{
			TArray<TSubclassOf<UFGSchematic> > out_schematics;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_schematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_schematics_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::NewProp_out_schematics = { "out_schematics", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetAvailableSchematics_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::NewProp_out_schematics_Inner = { "out_schematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::NewProp_out_schematics_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns the available schematics in the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetAvailableSchematics", sizeof(FGSchematicManager_eventGetAvailableSchematics_Parms), Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics
	{
		struct FGSchematicManager_eventGetCostFor_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			TArray<FItemAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetCostFor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetCostFor_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Get the cost from the Schematic directly" },
		{ "DisplayName", "GetCostFor_Deprecated" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Gives you the base cost, after random, for a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetCostFor", sizeof(FGSchematicManager_eventGetCostFor_Parms), Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetCostFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics
	{
		struct FGSchematicManager_eventGetHighestAvailableTechTier_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetHighestAvailableTechTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetHighestAvailableTechTier", sizeof(FGSchematicManager_eventGetHighestAvailableTechTier_Parms), Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics
	{
		struct FGSchematicManager_eventGetMaxAllowedTechTier_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetMaxAllowedTechTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetMaxAllowedTechTier", sizeof(FGSchematicManager_eventGetMaxAllowedTechTier_Parms), Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics
	{
		struct FGSchematicManager_eventGetPaidOffCostFor_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			TArray<FItemAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetPaidOffCostFor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetPaidOffCostFor_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns how much the players has paid off on a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetPaidOffCostFor", sizeof(FGSchematicManager_eventGetPaidOffCostFor_Parms), Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics
	{
		struct FGSchematicManager_eventGetPurchasedSchematicsOfTypes_Parms
		{
			TArray<ESchematicType> types;
			TArray<TSubclassOf<UFGSchematic> > out_schematics;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_schematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_schematics_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_types;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_types_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_types_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_out_schematics = { "out_schematics", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetPurchasedSchematicsOfTypes_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_out_schematics_Inner = { "out_schematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_types = { "types", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetPurchasedSchematicsOfTypes_Parms, types), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_types_Inner = { "types", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FactoryGame_ESchematicType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_types_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_out_schematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_types,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_types_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::NewProp_types_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns the schematics the players have purchased of the given types." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetPurchasedSchematicsOfTypes", sizeof(FGSchematicManager_eventGetPurchasedSchematicsOfTypes_Parms), Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics
	{
		struct FGSchematicManager_eventGetRemainingCostFor_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			TArray<FItemAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetRemainingCostFor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetRemainingCostFor_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns remaining cost for a certain schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetRemainingCostFor", sizeof(FGSchematicManager_eventGetRemainingCostFor_Parms), Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics
	{
		struct FGSchematicManager_eventGetTimeUntilShipReturn_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGetTimeUntilShipReturn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns the time until the ship is back" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GetTimeUntilShipReturn", sizeof(FGSchematicManager_eventGetTimeUntilShipReturn_Parms), Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics
	{
		struct FGSchematicManager_eventGiveAccessToSchematic_Parms
		{
			TSubclassOf<UFGSchematic>  schematicClass;
			bool accessedViaCheats;
		};
		static void NewProp_accessedViaCheats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_accessedViaCheats;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematicClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_accessedViaCheats_SetBit(void* Obj)
	{
		((FGSchematicManager_eventGiveAccessToSchematic_Parms*)Obj)->accessedViaCheats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_accessedViaCheats = { "accessedViaCheats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSchematicManager_eventGiveAccessToSchematic_Parms), &Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_accessedViaCheats_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_schematicClass = { "schematicClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventGiveAccessToSchematic_Parms, schematicClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_accessedViaCheats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_schematicClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "CPP_Default_accessedViaCheats", "false" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Give the player access to a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "GiveAccessToSchematic", sizeof(FGSchematicManager_eventGiveAccessToSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics
	{
		struct FGSchematicManager_eventIsSchematicPaidOff_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematicManager_eventIsSchematicPaidOff_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSchematicManager_eventIsSchematicPaidOff_Parms), &Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventIsSchematicPaidOff_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns how much the players has paid off on a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "IsSchematicPaidOff", sizeof(FGSchematicManager_eventIsSchematicPaidOff_Parms), Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics
	{
		struct FGSchematicManager_eventIsSchematicPurchased_Parms
		{
			TSubclassOf<UFGSchematic>  schematicClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematicClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematicManager_eventIsSchematicPurchased_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSchematicManager_eventIsSchematicPurchased_Parms), &Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_schematicClass = { "schematicClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventIsSchematicPurchased_Parms, schematicClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_schematicClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "returns true if the passed schematic has been purchased" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "IsSchematicPurchased", sizeof(FGSchematicManager_eventIsSchematicPurchased_Parms), Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics
	{
		struct FGSchematicManager_eventIsShipAtTradingPost_Parms
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
	void Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematicManager_eventIsShipAtTradingPost_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSchematicManager_eventIsShipAtTradingPost_Parms), &Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Returns true if the ship is at the trading post" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "IsShipAtTradingPost", sizeof(FGSchematicManager_eventIsShipAtTradingPost_Parms), Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_LaunchShip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_LaunchShip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Player initiated launch of the ship" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_LaunchShip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "LaunchShip", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_LaunchShip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_LaunchShip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_LaunchShip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_LaunchShip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "OnRep_ActiveSchematic", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "OnRep_PaidOffOnSchematic", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "OnRep_PurchasedSchematic", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics
	{
		struct FGSchematicManager_eventPayOffOnSchematic_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			TArray<FItemAmount> amount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_amount_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematicManager_eventPayOffOnSchematic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSchematicManager_eventPayOffOnSchematic_Parms), &Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventPayOffOnSchematic_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_amount_Inner = { "amount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventPayOffOnSchematic_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_amount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Adds paid off amount on a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "PayOffOnSchematic", sizeof(FGSchematicManager_eventPayOffOnSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics
	{
		struct FGSchematicManager_eventSetActiveSchematic_Parms
		{
			TSubclassOf<UFGSchematic>  newActiveSchematic;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_newActiveSchematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSchematicManager_eventSetActiveSchematic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSchematicManager_eventSetActiveSchematic_Parms), &Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_newActiveSchematic = { "newActiveSchematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSchematicManager_eventSetActiveSchematic_Parms, newActiveSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_newActiveSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Sets the new active schematic to sell stuff towards" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, nullptr, "SetActiveSchematic", sizeof(FGSchematicManager_eventSetActiveSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGSchematicManager_NoRegister()
	{
		return AFGSchematicManager::StaticClass();
	}
	struct Z_Construct_UClass_AFGSchematicManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShipReturnedMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mShipReturnedMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxAllowedTechTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxAllowedTechTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasTechTierLimit_MetaData[];
#endif
		static void NewProp_mHasTechTierLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasTechTierLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShipLandTimeStampSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mShipLandTimeStampSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShipLandTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mShipLandTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnActiveSchematicChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnActiveSchematicChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActiveSchematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mActiveSchematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPaidOffSchematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPaidOffSchematic;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPaidOffSchematic_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPurchasedSchematics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPurchasedSchematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mPurchasedSchematics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAvailableSchematics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAvailableSchematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAvailableSchematics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllSchematics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllSchematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAllSchematics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaidOffOnSchematicDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PaidOffOnSchematicDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchasedSchematicDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PurchasedSchematicDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSchematicManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGSchematicManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic, "AddAvailableSchematic" }, // 1181209781
		{ &Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic, "CanSetAsActiveSchematic" }, // 231979503
		{ &Z_Construct_UFunction_AFGSchematicManager_Get, "Get" }, // 3226795529
		{ &Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic, "GetActiveSchematic" }, // 4283713077
		{ &Z_Construct_UFunction_AFGSchematicManager_GetAllPurchasedSchematics, "GetAllPurchasedSchematics" }, // 2482547552
		{ &Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics, "GetAllSchematics" }, // 1754031221
		{ &Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType, "GetAllSchematicsOfType" }, // 1766837625
		{ &Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfTypeFilteredOnDependency, "GetAllSchematicsOfTypeFilteredOnDependency" }, // 4140930633
		{ &Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics, "GetAvailableSchematics" }, // 3060499708
		{ &Z_Construct_UFunction_AFGSchematicManager_GetCostFor, "GetCostFor" }, // 2736101378
		{ &Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier, "GetHighestAvailableTechTier" }, // 889659190
		{ &Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier, "GetMaxAllowedTechTier" }, // 1315851438
		{ &Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor, "GetPaidOffCostFor" }, // 738005820
		{ &Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematicsOfTypes, "GetPurchasedSchematicsOfTypes" }, // 586008979
		{ &Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor, "GetRemainingCostFor" }, // 811511471
		{ &Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn, "GetTimeUntilShipReturn" }, // 3085195642
		{ &Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic, "GiveAccessToSchematic" }, // 2350127080
		{ &Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff, "IsSchematicPaidOff" }, // 3886777933
		{ &Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased, "IsSchematicPurchased" }, // 3448833568
		{ &Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost, "IsShipAtTradingPost" }, // 2024853812
		{ &Z_Construct_UFunction_AFGSchematicManager_LaunchShip, "LaunchShip" }, // 2077356954
		{ &Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic, "OnRep_ActiveSchematic" }, // 2077474613
		{ &Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic, "OnRep_PaidOffOnSchematic" }, // 3428631241
		{ &Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic, "OnRep_PurchasedSchematic" }, // 1747157946
		{ &Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic, "PayOffOnSchematic" }, // 1941420359
		{ &Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic, "SetActiveSchematic" }, // 1600073846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Tick Rendering Replication Input Actor Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGSchematicManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Keeps track of everything regarding schematics" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipReturnedMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Message sent when trading post ship has returned" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipReturnedMessage = { "mShipReturnedMessage", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mShipReturnedMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipReturnedMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipReturnedMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mMaxAllowedTechTier_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ClampMax", "99999" },
		{ "ClampMin", "0" },
		{ "EditCondition", "mHasTechTierLimit" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "UIMax", "99999" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mMaxAllowedTechTier = { "mMaxAllowedTechTier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mMaxAllowedTechTier), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mMaxAllowedTechTier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mMaxAllowedTechTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
	};
#endif
	void Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_SetBit(void* Obj)
	{
		((AFGSchematicManager*)Obj)->mHasTechTierLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit = { "mHasTechTierLimit", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGSchematicManager), &Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStampSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Used to save the ship land timestamp" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStampSave = { "mShipLandTimeStampSave", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mShipLandTimeStampSave), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStampSave_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStampSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Time stamp for when the ship is gonna land back at the Trading Post." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStamp = { "mShipLandTimeStamp", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mShipLandTimeStamp), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mOnActiveSchematicChanged_MetaData[] = {
		{ "Category", "Schematics" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Called when we the schematic has been changed ." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mOnActiveSchematicChanged = { "mOnActiveSchematicChanged", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mOnActiveSchematicChanged), Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mOnActiveSchematicChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mOnActiveSchematicChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mActiveSchematic_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "The active schematic the resources is being sold towards." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mActiveSchematic = { "mActiveSchematic", "OnRep_ActiveSchematic", (EPropertyFlags)0x0024080101000020, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mActiveSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mActiveSchematic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mActiveSchematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "This keeps track of what players have paid off on different schematics" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic = { "mPaidOffSchematic", "OnRep_PaidOffOnSchematic", (EPropertyFlags)0x0020080101000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mPaidOffSchematic), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic_Inner = { "mPaidOffSchematic", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSchematicCost, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Once schematic is purchased it ends up here" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics = { "mPurchasedSchematics", "OnRep_PurchasedSchematic", (EPropertyFlags)0x0024080101010021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mPurchasedSchematics), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics_Inner = { "mPurchasedSchematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "All schematics that are available to the player" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics = { "mAvailableSchematics", nullptr, (EPropertyFlags)0x0024080001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mAvailableSchematics), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics_Inner = { "mAvailableSchematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "All schematic assets that have been sucked up in the PopulateSchematicsList function. Contains cheats and all sort of schematic." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics = { "mAllSchematics", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, mAllSchematics), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics_Inner = { "mAllSchematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PaidOffOnSchematicDelegate_MetaData[] = {
		{ "Category", "Events|Schematics" },
		{ "DisplayName", "OnPaidOffOnSchematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Called when a payment on a schematic occurs" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PaidOffOnSchematicDelegate = { "PaidOffOnSchematicDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, PaidOffOnSchematicDelegate), Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PaidOffOnSchematicDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PaidOffOnSchematicDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PurchasedSchematicDelegate_MetaData[] = {
		{ "Category", "Events|Schematics" },
		{ "DisplayName", "OnPurchasedSchematic" },
		{ "ModuleRelativePath", "Public/FGSchematicManager.h" },
		{ "ToolTip", "Called when we players are granted a schematic." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PurchasedSchematicDelegate = { "PurchasedSchematicDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSchematicManager, PurchasedSchematicDelegate), Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PurchasedSchematicDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PurchasedSchematicDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSchematicManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipReturnedMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mMaxAllowedTechTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStampSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mOnActiveSchematicChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mActiveSchematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PaidOffOnSchematicDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PurchasedSchematicDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGSchematicManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGSchematicManager, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSchematicManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSchematicManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSchematicManager_Statics::ClassParams = {
		&AFGSchematicManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGSchematicManager_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSchematicManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSchematicManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSchematicManager, 307284451);
	template<> FACTORYGAME_API UClass* StaticClass<AFGSchematicManager>()
	{
		return AFGSchematicManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSchematicManager(Z_Construct_UClass_AFGSchematicManager, &AFGSchematicManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSchematicManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSchematicManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
