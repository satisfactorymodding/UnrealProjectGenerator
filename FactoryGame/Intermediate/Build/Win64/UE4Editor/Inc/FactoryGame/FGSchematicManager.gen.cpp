// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGSchematicManager.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESchematicType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetCostFor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics();
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::NewProp_activeSchematic = { UE4CodeGen_Private::EPropertyClass::Class, "activeSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnActiveSchematicChanged_Parms, activeSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::NewProp_activeSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnActiveSchematicChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnActiveSchematicChanged_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::NewProp_schematicManager = { UE4CodeGen_Private::EPropertyClass::Object, "schematicManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventPaidOffOnSchematicDelegate_Parms, schematicManager), Z_Construct_UClass_AFGSchematicManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::NewProp_schematicManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "PaidOffOnSchematicDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventPaidOffOnSchematicDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::NewProp_purchasedSchematic = { UE4CodeGen_Private::EPropertyClass::Class, "purchasedSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventPurchasedSchematicDelegate_Parms, purchasedSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::NewProp_purchasedSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "PurchasedSchematicDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventPurchasedSchematicDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSchematicCost_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSchematicCost, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SchematicCost"), sizeof(FSchematicCost), Get_Z_Construct_UScriptStruct_FSchematicCost_CRC());
	}
	return Singleton;
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
		{ "ModuleRelativePath", "FGSchematicManager.h" },
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
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Amount paid off" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost = { UE4CodeGen_Private::EPropertyClass::Array, "ItemCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001010001, 1, nullptr, STRUCT_OFFSET(FSchematicCost, ItemCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_ItemCost_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_Schematic_MetaData[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_Schematic = { UE4CodeGen_Private::EPropertyClass::Class, "Schematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000001000000, 1, nullptr, STRUCT_OFFSET(FSchematicCost, Schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_Schematic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicCost_Statics::NewProp_Schematic_MetaData)) };
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
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSchematicCost),
		alignof(FSchematicCost),
		Z_Construct_UScriptStruct_FSchematicCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicCost_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSchematicCost_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSchematicCost_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSchematicCost()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSchematicCost_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SchematicCost"), sizeof(FSchematicCost), Get_Z_Construct_UScriptStruct_FSchematicCost_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSchematicCost_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSchematicCost_CRC() { return 2816202943U; }
	void AFGSchematicManager::StaticRegisterNativesAFGSchematicManager()
	{
		UClass* Class = AFGSchematicManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAvailableSchematic", &AFGSchematicManager::execAddAvailableSchematic },
			{ "CanSetAsActiveSchematic", &AFGSchematicManager::execCanSetAsActiveSchematic },
			{ "Get", &AFGSchematicManager::execGet },
			{ "GetActiveSchematic", &AFGSchematicManager::execGetActiveSchematic },
			{ "GetAllSchematics", &AFGSchematicManager::execGetAllSchematics },
			{ "GetAllSchematicsOfType", &AFGSchematicManager::execGetAllSchematicsOfType },
			{ "GetAvailableSchematics", &AFGSchematicManager::execGetAvailableSchematics },
			{ "GetCostFor", &AFGSchematicManager::execGetCostFor },
			{ "GetHighestAvailableTechTier", &AFGSchematicManager::execGetHighestAvailableTechTier },
			{ "GetMaxAllowedTechTier", &AFGSchematicManager::execGetMaxAllowedTechTier },
			{ "GetPaidOffCostFor", &AFGSchematicManager::execGetPaidOffCostFor },
			{ "GetPurchasedSchematics", &AFGSchematicManager::execGetPurchasedSchematics },
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::NewProp_schematicClassToAdd = { UE4CodeGen_Private::EPropertyClass::Class, "schematicClassToAdd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventAddAvailableSchematic_Parms, schematicClassToAdd), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::NewProp_schematicClassToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "adds a schematic to available schematics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "AddAvailableSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGSchematicManager_eventAddAvailableSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematicManager_eventCanSetAsActiveSchematic_Parms), &Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_inSchematic = { UE4CodeGen_Private::EPropertyClass::Class, "inSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventCanSetAsActiveSchematic_Parms, inSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::NewProp_inSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Can we set the passed schematic as the active one?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "CanSetAsActiveSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGSchematicManager_eventCanSetAsActiveSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSchematicManager_Get_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGSchematicManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSchematicManager_Get_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetSchematicManager" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Get the schematic manager from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "Get", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGSchematicManager_eventGet_Parms), Z_Construct_UFunction_AFGSchematicManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_Get_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_Get_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetActiveSchematic_Parms, ReturnValue), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Get active Schematic." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetActiveSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGSchematicManager_eventGetActiveSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic_Statics::FuncParams);
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::NewProp_out_schematics = { UE4CodeGen_Private::EPropertyClass::Array, "out_schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetAllSchematics_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::NewProp_out_schematics_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "out_schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::NewProp_out_schematics_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Returns every possible schematic that is in the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetAllSchematics", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44420401, sizeof(FGSchematicManager_eventGetAllSchematics_Parms), Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_out_schematics = { UE4CodeGen_Private::EPropertyClass::Array, "out_schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetAllSchematicsOfType_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_out_schematics_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "out_schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Enum, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetAllSchematicsOfType_Parms, type), Z_Construct_UEnum_FactoryGame_ESchematicType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_out_schematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Returns the all schematics of a type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetAllSchematicsOfType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44420401, sizeof(FGSchematicManager_eventGetAllSchematicsOfType_Parms), Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType_Statics::FuncParams);
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::NewProp_out_schematics = { UE4CodeGen_Private::EPropertyClass::Array, "out_schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetAvailableSchematics_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::NewProp_out_schematics_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "out_schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::NewProp_out_schematics_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Returns the available schematics in the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetAvailableSchematics", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44420401, sizeof(FGSchematicManager_eventGetAvailableSchematics_Parms), Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetCostFor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::NewProp_schematic = { UE4CodeGen_Private::EPropertyClass::Class, "schematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetCostFor_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Gives you the base cost, after random, for a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetCostFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGSchematicManager_eventGetCostFor_Parms), Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetCostFor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetHighestAvailableTechTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetHighestAvailableTechTier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGSchematicManager_eventGetHighestAvailableTechTier_Parms), Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetMaxAllowedTechTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetMaxAllowedTechTier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGSchematicManager_eventGetMaxAllowedTechTier_Parms), Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetPaidOffCostFor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_schematic = { UE4CodeGen_Private::EPropertyClass::Class, "schematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetPaidOffCostFor_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Returns how much the players has paid off on a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetPaidOffCostFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGSchematicManager_eventGetPaidOffCostFor_Parms), Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics
	{
		struct FGSchematicManager_eventGetPurchasedSchematics_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::NewProp_out_schematics = { UE4CodeGen_Private::EPropertyClass::Array, "out_schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetPurchasedSchematics_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::NewProp_out_schematics_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "out_schematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::NewProp_out_schematics_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Returns all schematics the players have purchased." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetPurchasedSchematics", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44420401, sizeof(FGSchematicManager_eventGetPurchasedSchematics_Parms), Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics_Statics::FuncParams);
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetRemainingCostFor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_schematic = { UE4CodeGen_Private::EPropertyClass::Class, "schematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetRemainingCostFor_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Returns remaining cost for a certain schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetRemainingCostFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGSchematicManager_eventGetRemainingCostFor_Parms), Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGetTimeUntilShipReturn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Returns the time until the ship is back" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GetTimeUntilShipReturn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGSchematicManager_eventGetTimeUntilShipReturn_Parms), Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_accessedViaCheats = { UE4CodeGen_Private::EPropertyClass::Bool, "accessedViaCheats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematicManager_eventGiveAccessToSchematic_Parms), &Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_accessedViaCheats_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_schematicClass = { UE4CodeGen_Private::EPropertyClass::Class, "schematicClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventGiveAccessToSchematic_Parms, schematicClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_accessedViaCheats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::NewProp_schematicClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "CPP_Default_accessedViaCheats", "false" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Give the player access to a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "GiveAccessToSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGSchematicManager_eventGiveAccessToSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematicManager_eventIsSchematicPaidOff_Parms), &Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_schematic = { UE4CodeGen_Private::EPropertyClass::Class, "schematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventIsSchematicPaidOff_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Returns how much the players has paid off on a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "IsSchematicPaidOff", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGSchematicManager_eventIsSchematicPaidOff_Parms), Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematicManager_eventIsSchematicPurchased_Parms), &Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_schematicClass = { UE4CodeGen_Private::EPropertyClass::Class, "schematicClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventIsSchematicPurchased_Parms, schematicClass), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::NewProp_schematicClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "returns true if the passed schematic has been purchased" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "IsSchematicPurchased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGSchematicManager_eventIsSchematicPurchased_Parms), Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematicManager_eventIsShipAtTradingPost_Parms), &Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Returns true if the ship is at the trading post" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "IsShipAtTradingPost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGSchematicManager_eventIsShipAtTradingPost_Parms), Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Player initiated launch of the ship" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_LaunchShip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "LaunchShip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_LaunchShip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_LaunchShip_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "OnRep_ActiveSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "OnRep_PaidOffOnSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "OnRep_PurchasedSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematicManager_eventPayOffOnSchematic_Parms), &Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_amount = { UE4CodeGen_Private::EPropertyClass::Array, "amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventPayOffOnSchematic_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_amount_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_schematic = { UE4CodeGen_Private::EPropertyClass::Class, "schematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventPayOffOnSchematic_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_amount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Adds paid off amount on a schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "PayOffOnSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGSchematicManager_eventPayOffOnSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSchematicManager_eventSetActiveSchematic_Parms), &Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_newActiveSchematic = { UE4CodeGen_Private::EPropertyClass::Class, "newActiveSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGSchematicManager_eventSetActiveSchematic_Parms, newActiveSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::NewProp_newActiveSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Sets the new active schematic to sell stuff towards" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSchematicManager, "SetActiveSchematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGSchematicManager_eventSetActiveSchematic_Parms), Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGSchematicManager_AddAvailableSchematic, "AddAvailableSchematic" }, // 1516174092
		{ &Z_Construct_UFunction_AFGSchematicManager_CanSetAsActiveSchematic, "CanSetAsActiveSchematic" }, // 1314246809
		{ &Z_Construct_UFunction_AFGSchematicManager_Get, "Get" }, // 3556730280
		{ &Z_Construct_UFunction_AFGSchematicManager_GetActiveSchematic, "GetActiveSchematic" }, // 3910292899
		{ &Z_Construct_UFunction_AFGSchematicManager_GetAllSchematics, "GetAllSchematics" }, // 2223865138
		{ &Z_Construct_UFunction_AFGSchematicManager_GetAllSchematicsOfType, "GetAllSchematicsOfType" }, // 2518672044
		{ &Z_Construct_UFunction_AFGSchematicManager_GetAvailableSchematics, "GetAvailableSchematics" }, // 867160255
		{ &Z_Construct_UFunction_AFGSchematicManager_GetCostFor, "GetCostFor" }, // 1894022803
		{ &Z_Construct_UFunction_AFGSchematicManager_GetHighestAvailableTechTier, "GetHighestAvailableTechTier" }, // 2287354605
		{ &Z_Construct_UFunction_AFGSchematicManager_GetMaxAllowedTechTier, "GetMaxAllowedTechTier" }, // 1604876164
		{ &Z_Construct_UFunction_AFGSchematicManager_GetPaidOffCostFor, "GetPaidOffCostFor" }, // 1799508789
		{ &Z_Construct_UFunction_AFGSchematicManager_GetPurchasedSchematics, "GetPurchasedSchematics" }, // 3761398672
		{ &Z_Construct_UFunction_AFGSchematicManager_GetRemainingCostFor, "GetRemainingCostFor" }, // 2292237634
		{ &Z_Construct_UFunction_AFGSchematicManager_GetTimeUntilShipReturn, "GetTimeUntilShipReturn" }, // 1056457683
		{ &Z_Construct_UFunction_AFGSchematicManager_GiveAccessToSchematic, "GiveAccessToSchematic" }, // 712789129
		{ &Z_Construct_UFunction_AFGSchematicManager_IsSchematicPaidOff, "IsSchematicPaidOff" }, // 4073159344
		{ &Z_Construct_UFunction_AFGSchematicManager_IsSchematicPurchased, "IsSchematicPurchased" }, // 1185932247
		{ &Z_Construct_UFunction_AFGSchematicManager_IsShipAtTradingPost, "IsShipAtTradingPost" }, // 4126061383
		{ &Z_Construct_UFunction_AFGSchematicManager_LaunchShip, "LaunchShip" }, // 2948681663
		{ &Z_Construct_UFunction_AFGSchematicManager_OnRep_ActiveSchematic, "OnRep_ActiveSchematic" }, // 3042716720
		{ &Z_Construct_UFunction_AFGSchematicManager_OnRep_PaidOffOnSchematic, "OnRep_PaidOffOnSchematic" }, // 1816767982
		{ &Z_Construct_UFunction_AFGSchematicManager_OnRep_PurchasedSchematic, "OnRep_PurchasedSchematic" }, // 3203219327
		{ &Z_Construct_UFunction_AFGSchematicManager_PayOffOnSchematic, "PayOffOnSchematic" }, // 1830800193
		{ &Z_Construct_UFunction_AFGSchematicManager_SetActiveSchematic, "SetActiveSchematic" }, // 1954833598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Tick Rendering Replication Input Actor Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGSchematicManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Keeps track of everything regarding schematics" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipReturnedMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Message sent when trading post ship has returned" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipReturnedMessage = { UE4CodeGen_Private::EPropertyClass::Class, "mShipReturnedMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AFGSchematicManager, mShipReturnedMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipReturnedMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipReturnedMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mMaxAllowedTechTier_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ClampMax", "99999" },
		{ "ClampMin", "0" },
		{ "EditCondition", "mHasTechTierLimit" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "UIMax", "99999" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mMaxAllowedTechTier = { UE4CodeGen_Private::EPropertyClass::Int, "mMaxAllowedTechTier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGSchematicManager, mMaxAllowedTechTier), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mMaxAllowedTechTier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mMaxAllowedTechTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
	};
#endif
	void Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_SetBit(void* Obj)
	{
		((AFGSchematicManager*)Obj)->mHasTechTierLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit = { UE4CodeGen_Private::EPropertyClass::Bool, "mHasTechTierLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGSchematicManager), &Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mHasTechTierLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStampSave_MetaData[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Used to save the ship land timestamp" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStampSave = { UE4CodeGen_Private::EPropertyClass::Float, "mShipLandTimeStampSave", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, STRUCT_OFFSET(AFGSchematicManager, mShipLandTimeStampSave), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStampSave_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStampSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Time stamp for when the ship is gonna land back at the Trading Post." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "mShipLandTimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AFGSchematicManager, mShipLandTimeStamp), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mShipLandTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mOnActiveSchematicChanged_MetaData[] = {
		{ "Category", "Schematics" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Called when we the schematic has been changed ." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mOnActiveSchematicChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnActiveSchematicChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(AFGSchematicManager, mOnActiveSchematicChanged), Z_Construct_UDelegateFunction_FactoryGame_OnActiveSchematicChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mOnActiveSchematicChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mOnActiveSchematicChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mActiveSchematic_MetaData[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "The active schematic the resources is being sold towards." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mActiveSchematic = { UE4CodeGen_Private::EPropertyClass::Class, "mActiveSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080101000020, 1, "OnRep_ActiveSchematic", STRUCT_OFFSET(AFGSchematicManager, mActiveSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mActiveSchematic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mActiveSchematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic_MetaData[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "This keeps track of what players have paid off on different schematics" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic = { UE4CodeGen_Private::EPropertyClass::Array, "mPaidOffSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080101000020, 1, "OnRep_PaidOffOnSchematic", STRUCT_OFFSET(AFGSchematicManager, mPaidOffSchematic), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPaidOffSchematic_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mPaidOffSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSchematicCost, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics_MetaData[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Once schematic is purchased it ends up here" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics = { UE4CodeGen_Private::EPropertyClass::Array, "mPurchasedSchematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080101010021, 1, "OnRep_PurchasedSchematic", STRUCT_OFFSET(AFGSchematicManager, mPurchasedSchematics), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mPurchasedSchematics_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mPurchasedSchematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics_MetaData[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "All schematics that are available to the player" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics = { UE4CodeGen_Private::EPropertyClass::Array, "mAvailableSchematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080001000020, 1, nullptr, STRUCT_OFFSET(AFGSchematicManager, mAvailableSchematics), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAvailableSchematics_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mAvailableSchematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics_MetaData[] = {
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "All schematic assets that have been sucked up in the PopulateSchematicsList function. Contains cheats and all sort of schematic." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics = { UE4CodeGen_Private::EPropertyClass::Array, "mAllSchematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000000, 1, nullptr, STRUCT_OFFSET(AFGSchematicManager, mAllSchematics), METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_mAllSchematics_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mAllSchematics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PaidOffOnSchematicDelegate_MetaData[] = {
		{ "Category", "Events|Schematics" },
		{ "DisplayName", "OnPaidOffOnSchematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Called when a payment on a schematic occurs" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PaidOffOnSchematicDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "PaidOffOnSchematicDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGSchematicManager, PaidOffOnSchematicDelegate), Z_Construct_UDelegateFunction_FactoryGame_PaidOffOnSchematicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PaidOffOnSchematicDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PaidOffOnSchematicDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PurchasedSchematicDelegate_MetaData[] = {
		{ "Category", "Events|Schematics" },
		{ "DisplayName", "OnPurchasedSchematic" },
		{ "ModuleRelativePath", "FGSchematicManager.h" },
		{ "ToolTip", "Called when we players are granted a schematic." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PurchasedSchematicDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "PurchasedSchematicDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGSchematicManager, PurchasedSchematicDelegate), Z_Construct_UDelegateFunction_FactoryGame_PurchasedSchematicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PurchasedSchematicDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::NewProp_PurchasedSchematicDelegate_MetaData)) };
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGSchematicManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGSchematicManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AFGSchematicManager, 1231199293);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSchematicManager(Z_Construct_UClass_AFGSchematicManager, &AFGSchematicManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSchematicManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSchematicManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
