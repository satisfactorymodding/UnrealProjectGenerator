// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableSpaceElevator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableSpaceElevator() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSpaceElevator_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSpaceElevator();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_LaunchTowTruck();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_UpgradeTowTruck();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGamePhaseManager_NoRegister();
// End Cross Module References
	static FName NAME_AFGBuildableSpaceElevator_LaunchTowTruck = FName(TEXT("LaunchTowTruck"));
	void AFGBuildableSpaceElevator::LaunchTowTruck()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableSpaceElevator_LaunchTowTruck),NULL);
	}
	static FName NAME_AFGBuildableSpaceElevator_UpgradeTowTruck = FName(TEXT("UpgradeTowTruck"));
	void AFGBuildableSpaceElevator::UpgradeTowTruck()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableSpaceElevator_UpgradeTowTruck),NULL);
	}
	void AFGBuildableSpaceElevator::StaticRegisterNativesAFGBuildableSpaceElevator()
	{
		UClass* Class = AFGBuildableSpaceElevator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputInventory", &AFGBuildableSpaceElevator::execGetInputInventory },
			{ "GetNextPhaseCost", &AFGBuildableSpaceElevator::execGetNextPhaseCost },
			{ "IsFullyUpgraded", &AFGBuildableSpaceElevator::execIsFullyUpgraded },
			{ "IsReadyToUpgrade", &AFGBuildableSpaceElevator::execIsReadyToUpgrade },
			{ "LaunchTowTruck", &AFGBuildableSpaceElevator::execLaunchTowTruck },
			{ "PayOffFromInventory", &AFGBuildableSpaceElevator::execPayOffFromInventory },
			{ "UpgradeTowTruck", &AFGBuildableSpaceElevator::execUpgradeTowTruck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics
	{
		struct FGBuildableSpaceElevator_eventGetInputInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGBuildableSpaceElevator_eventGetInputInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Space Elevator" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ToolTip", "Get the input inventory from this building." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSpaceElevator, "GetInputInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableSpaceElevator_eventGetInputInventory_Parms), Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics
	{
		struct FGBuildableSpaceElevator_eventGetNextPhaseCost_Parms
		{
			TArray<FItemAmount> out_cost;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_cost;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_cost_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::NewProp_out_cost = { UE4CodeGen_Private::EPropertyClass::Array, "out_cost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGBuildableSpaceElevator_eventGetNextPhaseCost_Parms, out_cost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::NewProp_out_cost_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_cost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::NewProp_out_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::NewProp_out_cost_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Space Elevator" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ToolTip", "Returns the cost for the next upgrade" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSpaceElevator, "GetNextPhaseCost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGBuildableSpaceElevator_eventGetNextPhaseCost_Parms), Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics
	{
		struct FGBuildableSpaceElevator_eventIsFullyUpgraded_Parms
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
	void Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableSpaceElevator_eventIsFullyUpgraded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableSpaceElevator_eventIsFullyUpgraded_Parms), &Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Space Elevator" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ToolTip", "@returns true when we are fully upgraded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSpaceElevator, "IsFullyUpgraded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableSpaceElevator_eventIsFullyUpgraded_Parms), Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics
	{
		struct FGBuildableSpaceElevator_eventIsReadyToUpgrade_Parms
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
	void Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableSpaceElevator_eventIsReadyToUpgrade_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableSpaceElevator_eventIsReadyToUpgrade_Parms), &Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::Function_MetaDataParams[] = {
		{ "Category", "Space Elevator" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ToolTip", "*@returns True if we have eaten up all the items needed to upgrade. Returns false if not, but also if there is no current recipe available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSpaceElevator, "IsReadyToUpgrade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableSpaceElevator_eventIsReadyToUpgrade_Parms), Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSpaceElevator_LaunchTowTruck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSpaceElevator_LaunchTowTruck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Space Elevator" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ToolTip", "When the player is on the last step of the game, sending the tow truck will end the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSpaceElevator_LaunchTowTruck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSpaceElevator, "LaunchTowTruck", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSpaceElevator_LaunchTowTruck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_LaunchTowTruck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_LaunchTowTruck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSpaceElevator_LaunchTowTruck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics
	{
		struct FGBuildableSpaceElevator_eventPayOffFromInventory_Parms
		{
			UFGInventoryComponent* inventory;
			int32 inventorySlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inventorySlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::NewProp_inventorySlotIndex = { UE4CodeGen_Private::EPropertyClass::Int, "inventorySlotIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSpaceElevator_eventPayOffFromInventory_Parms, inventorySlotIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::NewProp_inventory = { UE4CodeGen_Private::EPropertyClass::Object, "inventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGBuildableSpaceElevator_eventPayOffFromInventory_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::NewProp_inventory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::NewProp_inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::NewProp_inventorySlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::NewProp_inventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Space Elevator" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ToolTip", "Player has dropped items onto the pay off widget from their inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSpaceElevator, "PayOffFromInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGBuildableSpaceElevator_eventPayOffFromInventory_Parms), Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSpaceElevator_UpgradeTowTruck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSpaceElevator_UpgradeTowTruck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Space Elevator" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ToolTip", "Called when the player presses to send more stuff to the tow truck" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSpaceElevator_UpgradeTowTruck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSpaceElevator, "UpgradeTowTruck", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSpaceElevator_UpgradeTowTruck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSpaceElevator_UpgradeTowTruck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSpaceElevator_UpgradeTowTruck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSpaceElevator_UpgradeTowTruck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableSpaceElevator_NoRegister()
	{
		return AFGBuildableSpaceElevator::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableSpaceElevator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGamePhaseManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mGamePhaseManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInputInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableSpaceElevator_GetInputInventory, "GetInputInventory" }, // 148963420
		{ &Z_Construct_UFunction_AFGBuildableSpaceElevator_GetNextPhaseCost, "GetNextPhaseCost" }, // 4030018325
		{ &Z_Construct_UFunction_AFGBuildableSpaceElevator_IsFullyUpgraded, "IsFullyUpgraded" }, // 3039540670
		{ &Z_Construct_UFunction_AFGBuildableSpaceElevator_IsReadyToUpgrade, "IsReadyToUpgrade" }, // 436942023
		{ &Z_Construct_UFunction_AFGBuildableSpaceElevator_LaunchTowTruck, "LaunchTowTruck" }, // 4130908486
		{ &Z_Construct_UFunction_AFGBuildableSpaceElevator_PayOffFromInventory, "PayOffFromInventory" }, // 846234686
		{ &Z_Construct_UFunction_AFGBuildableSpaceElevator_UpgradeTowTruck, "UpgradeTowTruck" }, // 2836342036
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mGamePhaseManager_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ToolTip", "A cached version of the game phase manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mGamePhaseManager = { UE4CodeGen_Private::EPropertyClass::Object, "mGamePhaseManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableSpaceElevator, mGamePhaseManager), Z_Construct_UClass_AFGGamePhaseManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mGamePhaseManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mGamePhaseManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mInputInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSpaceElevator.h" },
		{ "ToolTip", "Our input inventory, shared for all input connections." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mInputInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mInputInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001080028, 1, nullptr, STRUCT_OFFSET(AFGBuildableSpaceElevator, mInputInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mInputInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mInputInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mGamePhaseManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::NewProp_mInputInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableSpaceElevator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::ClassParams = {
		&AFGBuildableSpaceElevator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableSpaceElevator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableSpaceElevator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableSpaceElevator, 3305068630);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableSpaceElevator(Z_Construct_UClass_AFGBuildableSpaceElevator, &AFGBuildableSpaceElevator::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableSpaceElevator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableSpaceElevator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
