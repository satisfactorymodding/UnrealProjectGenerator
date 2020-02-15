// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableGeneratorFuel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableGeneratorFuel() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGeneratorFuel_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGeneratorFuel();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGenerator();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResourceForm();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPipeConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGReplicationDetailInventoryComponent_NoRegister();
// End Cross Module References
	void AFGBuildableGeneratorFuel::StaticRegisterNativesAFGBuildableGeneratorFuel()
	{
		UClass* Class = AFGBuildableGeneratorFuel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterFuelClasses", &AFGBuildableGeneratorFuel::execFilterFuelClasses },
			{ "GetAvailableFuelClasses", &AFGBuildableGeneratorFuel::execGetAvailableFuelClasses },
			{ "GetCurrentFuelClass", &AFGBuildableGeneratorFuel::execGetCurrentFuelClass },
			{ "GetFuelAmount", &AFGBuildableGeneratorFuel::execGetFuelAmount },
			{ "GetFuelInventory", &AFGBuildableGeneratorFuel::execGetFuelInventory },
			{ "GetFuelResourceForm", &AFGBuildableGeneratorFuel::execGetFuelResourceForm },
			{ "GetRequiresSupplementalResource", &AFGBuildableGeneratorFuel::execGetRequiresSupplementalResource },
			{ "GetSupplementalAmount", &AFGBuildableGeneratorFuel::execGetSupplementalAmount },
			{ "GetSupplementalConsumptionRateCurrent", &AFGBuildableGeneratorFuel::execGetSupplementalConsumptionRateCurrent },
			{ "GetSupplementalConsumptionRateMaximum", &AFGBuildableGeneratorFuel::execGetSupplementalConsumptionRateMaximum },
			{ "GetSupplementalResourceClass", &AFGBuildableGeneratorFuel::execGetSupplementalResourceClass },
			{ "HasFuel", &AFGBuildableGeneratorFuel::execHasFuel },
			{ "HasSuppleentalResource", &AFGBuildableGeneratorFuel::execHasSuppleentalResource },
			{ "IsValidFuel", &AFGBuildableGeneratorFuel::execIsValidFuel },
			{ "IsValidSupplementalResource", &AFGBuildableGeneratorFuel::execIsValidSupplementalResource },
			{ "OnRep_FuelInventory", &AFGBuildableGeneratorFuel::execOnRep_FuelInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics
	{
		struct FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms
		{
			TSubclassOf<UObject>  object;
			int32 idx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms), &Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms, object), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Filter out what we consider as fuel for our fuel inventory.\n@see IsValidFuel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "FilterFuelClasses", sizeof(FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetAvailableFuelClasses_Parms
		{
			TArray<TSubclassOf<UFGItemDescriptor> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetAvailableFuelClasses_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Returns all fuel classes this generator can use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetAvailableFuelClasses", sizeof(FGBuildableGeneratorFuel_eventGetAvailableFuelClasses_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetCurrentFuelClass_Parms
		{
			TSubclassOf<UFGItemDescriptor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetCurrentFuelClass_Parms, ReturnValue), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Returns the currently used fuel class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetCurrentFuelClass", sizeof(FGBuildableGeneratorFuel_eventGetCurrentFuelClass_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetFuelAmount_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetFuelAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "How much of the fuel have we burned? In range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetFuelAmount", sizeof(FGBuildableGeneratorFuel_eventGetFuelAmount_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetFuelInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetFuelInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "@return a valid pointer to the inventory if this machine runs on fuel. Can be nullptr on client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetFuelInventory", sizeof(FGBuildableGeneratorFuel_eventGetFuelInventory_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetFuelResourceForm_Parms
		{
			EResourceForm ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetFuelResourceForm_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Get the specified resource form for Fuel allowed to be used in this generator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetFuelResourceForm", sizeof(FGBuildableGeneratorFuel_eventGetFuelResourceForm_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetRequiresSupplementalResource_Parms
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
	void Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableGeneratorFuel_eventGetRequiresSupplementalResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableGeneratorFuel_eventGetRequiresSupplementalResource_Parms), &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Returns true if this generator requires a supplemental resource to run" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetRequiresSupplementalResource", sizeof(FGBuildableGeneratorFuel_eventGetRequiresSupplementalResource_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetSupplementalAmount_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetSupplementalAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "How much of the supplemental resource is remaining? In range [0,1]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetSupplementalAmount", sizeof(FGBuildableGeneratorFuel_eventGetSupplementalAmount_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetSupplementalConsumptionRateCurrent_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetSupplementalConsumptionRateCurrent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Get the current Supplemental resource consumption rate in M^3/s (Cubic Meters per Second)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetSupplementalConsumptionRateCurrent", sizeof(FGBuildableGeneratorFuel_eventGetSupplementalConsumptionRateCurrent_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetSupplementalConsumptionRateMaximum_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetSupplementalConsumptionRateMaximum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Get the maximum Supplemental resource consumption rate in M^3/s (Cubic Meters per Second)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetSupplementalConsumptionRateMaximum", sizeof(FGBuildableGeneratorFuel_eventGetSupplementalConsumptionRateMaximum_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics
	{
		struct FGBuildableGeneratorFuel_eventGetSupplementalResourceClass_Parms
		{
			TSubclassOf<UFGItemDescriptor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetSupplementalResourceClass_Parms, ReturnValue), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Returns the class of the supplemental resource required (can be null)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "GetSupplementalResourceClass", sizeof(FGBuildableGeneratorFuel_eventGetSupplementalResourceClass_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics
	{
		struct FGBuildableGeneratorFuel_eventHasFuel_Parms
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
	void Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableGeneratorFuel_eventHasFuel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableGeneratorFuel_eventHasFuel_Parms), &Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Check if this generator has fuel.\n@return - true if this generator has fuel; false if it has no fuel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "HasFuel", sizeof(FGBuildableGeneratorFuel_eventHasFuel_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics
	{
		struct FGBuildableGeneratorFuel_eventHasSuppleentalResource_Parms
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
	void Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableGeneratorFuel_eventHasSuppleentalResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableGeneratorFuel_eventHasSuppleentalResource_Parms), &Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Check if this generator has the required supplemental resource available\n@return - true if the resource is present OR if a supplemental resource is not needed. False otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "HasSuppleentalResource", sizeof(FGBuildableGeneratorFuel_eventHasSuppleentalResource_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics
	{
		struct FGBuildableGeneratorFuel_eventIsValidFuel_Parms
		{
			TSubclassOf<UFGItemDescriptor>  resource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_resource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableGeneratorFuel_eventIsValidFuel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableGeneratorFuel_eventIsValidFuel_Parms), &Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_resource = { "resource", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventIsValidFuel_Parms, resource), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_resource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Check if a resource is valid as fuel for this generator.\n@param resource - Resource class to check.\n@return - true if resource valid as fuel; false if not valid or if generator does not run on fuel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "IsValidFuel", sizeof(FGBuildableGeneratorFuel_eventIsValidFuel_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics
	{
		struct FGBuildableGeneratorFuel_eventIsValidSupplementalResource_Parms
		{
			TSubclassOf<UFGItemDescriptor>  resource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_resource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableGeneratorFuel_eventIsValidSupplementalResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableGeneratorFuel_eventIsValidSupplementalResource_Parms), &Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::NewProp_resource = { "resource", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventIsValidSupplementalResource_Parms, resource), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::NewProp_resource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Check if an item class is a required supplemental resource\n@param resource - Item or Resource class to check if it matches the set Supplemental Resouce Class\n@return - true if they're the same item / resource; otherwise false" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "IsValidSupplementalResource", sizeof(FGBuildableGeneratorFuel_eventIsValidSupplementalResource_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Set up the fuel inventory when replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, nullptr, "OnRep_FuelInventory", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableGeneratorFuel_NoRegister()
	{
		return AFGBuildableGeneratorFuel::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentFuelClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mCurrentFuelClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasSupplementalCached_MetaData[];
#endif
		static void NewProp_mHasSupplementalCached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasSupplementalCached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasFuelCached_MetaData[];
#endif
		static void NewProp_mHasFuelCached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasFuelCached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentSupplementalAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentSupplementalAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentFuelAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentFuelAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedPipeInputConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCachedPipeInputConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedPipeInputConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedInputConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCachedInputConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedInputConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFuelInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFuelInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSupplementalToPowerRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSupplementalToPowerRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSupplementalLoadAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mSupplementalLoadAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSupplementalResourceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSupplementalResourceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRequiresSupplementalResource_MetaData[];
#endif
		static void NewProp_mRequiresSupplementalResource_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mRequiresSupplementalResource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFuelResourceForm_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mFuelResourceForm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mFuelResourceForm_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAvailableFuelClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAvailableFuelClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAvailableFuelClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultFuelClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDefaultFuelClasses;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_mDefaultFuelClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFuelClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFuelClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mFuelClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFuelInventoryHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFuelInventoryHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses, "FilterFuelClasses" }, // 3742630274
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetAvailableFuelClasses, "GetAvailableFuelClasses" }, // 356435113
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass, "GetCurrentFuelClass" }, // 3347948340
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount, "GetFuelAmount" }, // 2518741022
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory, "GetFuelInventory" }, // 339935215
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelResourceForm, "GetFuelResourceForm" }, // 3291853493
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetRequiresSupplementalResource, "GetRequiresSupplementalResource" }, // 739804502
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalAmount, "GetSupplementalAmount" }, // 2660512623
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateCurrent, "GetSupplementalConsumptionRateCurrent" }, // 1858737946
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalConsumptionRateMaximum, "GetSupplementalConsumptionRateMaximum" }, // 2105437585
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetSupplementalResourceClass, "GetSupplementalResourceClass" }, // 1044094175
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel, "HasFuel" }, // 3863233563
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasSuppleentalResource, "HasSuppleentalResource" }, // 1556913113
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel, "IsValidFuel" }, // 3503863537
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidSupplementalResource, "IsValidSupplementalResource" }, // 2257102776
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory, "OnRep_FuelInventory" }, // 3691552978
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Type of the currently burned piece of fuel." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass = { "mCurrentFuelClass", nullptr, (EPropertyFlags)0x0024080001000020, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCurrentFuelClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasSupplementalCached_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Like the mHasFuelCached - Used to notify clients if there is enough supplemental resource available" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasSupplementalCached_SetBit(void* Obj)
	{
		((AFGBuildableGeneratorFuel*)Obj)->mHasSupplementalCached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasSupplementalCached = { "mHasSupplementalCached", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableGeneratorFuel), &Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasSupplementalCached_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasSupplementalCached_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasSupplementalCached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuelCached_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Used so clients know how if they have available fuel or not. Could be removed later if we start syncing the production indicator state" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuelCached_SetBit(void* Obj)
	{
		((AFGBuildableGeneratorFuel*)Obj)->mHasFuelCached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuelCached = { "mHasFuelCached", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableGeneratorFuel), &Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuelCached_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuelCached_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuelCached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentSupplementalAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Amount left of the currently loaded supplemental resource. In Liters ( 1 Liquid inventory item = 1 Liter )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentSupplementalAmount = { "mCurrentSupplementalAmount", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCurrentSupplementalAmount), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentSupplementalAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentSupplementalAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Amount left of the currently burned piece of fuel. In megawatt seconds (MWs)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount = { "mCurrentFuelAmount", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCurrentFuelAmount), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedPipeInputConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Cached pipe input connections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedPipeInputConnections = { "mCachedPipeInputConnections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCachedPipeInputConnections), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedPipeInputConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedPipeInputConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedPipeInputConnections_Inner = { "mCachedPipeInputConnections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGPipeConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedInputConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Cached input connections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedInputConnections = { "mCachedInputConnections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCachedInputConnections), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedInputConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedInputConnections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedInputConnections_Inner = { "mCachedInputConnections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "@todo: Cleanup, this shouldn't need to be replicated, clients should be able to fetch this anyway. Static index of fuel slot?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory = { "mFuelInventory", "OnRep_FuelInventory", (EPropertyFlags)0x0020080101080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalToPowerRatio_MetaData[] = {
		{ "Category", "Power" },
		{ "EditCondition", "mRequiresSupplementalResource" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "The quantity of supplemental resource to consume per megawatt of power produced" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalToPowerRatio = { "mSupplementalToPowerRatio", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mSupplementalToPowerRatio), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalToPowerRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalToPowerRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalLoadAmount_MetaData[] = {
		{ "Category", "Power" },
		{ "EditCondition", "mRequiresSupplementalResource" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "The quantity of supplemental inventory to be loaded for use during generation.\n     Any quantity less than this will fail to load and halt generation. This acts as a buffer against constant starting and stopping\n     of generation of electricity.\n     @note - 1 unit equates to 1 Liter. So 1000 units would be 1 Cubic Meter." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalLoadAmount = { "mSupplementalLoadAmount", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mSupplementalLoadAmount), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalLoadAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalLoadAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalResourceClass_MetaData[] = {
		{ "Category", "Power" },
		{ "EditCondition", "mRequiresSupplementalResource" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Required secondary resource class to continue with generation. Tex. Water. Leave empty if none is desired" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalResourceClass = { "mSupplementalResourceClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mSupplementalResourceClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalResourceClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalResourceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mRequiresSupplementalResource_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Does this generator require a secondary NON fuel source to generate power?" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mRequiresSupplementalResource_SetBit(void* Obj)
	{
		((AFGBuildableGeneratorFuel*)Obj)->mRequiresSupplementalResource = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mRequiresSupplementalResource = { "mRequiresSupplementalResource", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableGeneratorFuel), &Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mRequiresSupplementalResource_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mRequiresSupplementalResource_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mRequiresSupplementalResource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelResourceForm_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "The form of resource this generator is allowed to accept. ie. SOLID or LIQUID" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelResourceForm = { "mFuelResourceForm", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelResourceForm), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelResourceForm_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelResourceForm_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelResourceForm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Current fuel classes of the generator, useful for runtime adding of fuel classes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses = { "mAvailableFuelClasses", nullptr, (EPropertyFlags)0x0024080000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mAvailableFuelClasses), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses_Inner = { "mAvailableFuelClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "MustImplement", "FGInventoryInterface" },
		{ "ToolTip", "Fuel classes this machine can run on. Leave empty if it does not run on fuel." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses = { "mDefaultFuelClasses", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mDefaultFuelClasses), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses_Inner = { "mDefaultFuelClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Fuel classes this machine can run on. Leave empty if it does not run on fuel." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses = { "mFuelClasses", nullptr, (EPropertyFlags)0x0024080020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelClasses_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses_Inner = { "mFuelClasses", nullptr, (EPropertyFlags)0x0004000020000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventoryHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Maintainer of the active storage component for this actor. Use this to get the active inventory component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventoryHandler = { "mFuelInventoryHandler", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelInventoryHandler), Z_Construct_UClass_UFGReplicationDetailInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventoryHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventoryHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasSupplementalCached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuelCached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentSupplementalAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedPipeInputConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedPipeInputConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedInputConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCachedInputConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalToPowerRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalLoadAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mSupplementalResourceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mRequiresSupplementalResource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelResourceForm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelResourceForm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventoryHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableGeneratorFuel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::ClassParams = {
		&AFGBuildableGeneratorFuel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableGeneratorFuel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableGeneratorFuel, 4252440046);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableGeneratorFuel>()
	{
		return AFGBuildableGeneratorFuel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableGeneratorFuel(Z_Construct_UClass_AFGBuildableGeneratorFuel, &AFGBuildableGeneratorFuel::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableGeneratorFuel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableGeneratorFuel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
