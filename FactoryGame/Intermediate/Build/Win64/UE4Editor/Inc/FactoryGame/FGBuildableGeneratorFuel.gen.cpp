// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableGeneratorFuel.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGReplicationDetailInventoryComponent_NoRegister();
// End Cross Module References
	void AFGBuildableGeneratorFuel::StaticRegisterNativesAFGBuildableGeneratorFuel()
	{
		UClass* Class = AFGBuildableGeneratorFuel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterFuelClasses", &AFGBuildableGeneratorFuel::execFilterFuelClasses },
			{ "GetCurrentFuelClass", &AFGBuildableGeneratorFuel::execGetCurrentFuelClass },
			{ "GetFuelAmount", &AFGBuildableGeneratorFuel::execGetFuelAmount },
			{ "GetFuelInventory", &AFGBuildableGeneratorFuel::execGetFuelInventory },
			{ "HasFuel", &AFGBuildableGeneratorFuel::execHasFuel },
			{ "IsValidFuel", &AFGBuildableGeneratorFuel::execIsValidFuel },
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms), &Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_object = { UE4CodeGen_Private::EPropertyClass::Class, "object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms, object), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::NewProp_object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Filter out what we consider as fuel for our fuel inventory.\n@see IsValidFuel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, "FilterFuelClasses", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40040401, sizeof(FGBuildableGeneratorFuel_eventFilterFuelClasses_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses_Statics::FuncParams);
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetCurrentFuelClass_Parms, ReturnValue), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Returns the currently used fuel class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, "GetCurrentFuelClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableGeneratorFuel_eventGetCurrentFuelClass_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetFuelAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "How much of the fuel have we burned? In range [0,1]." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, "GetFuelAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableGeneratorFuel_eventGetFuelAmount_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventGetFuelInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "@return a valid pointer to the inventory if this machine runs on fuel. Can be nullptr on client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, "GetFuelInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableGeneratorFuel_eventGetFuelInventory_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableGeneratorFuel_eventHasFuel_Parms), &Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Check if this generator has fuel.\n@return - true if this generator has fuel; false if it has no fuel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, "HasFuel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableGeneratorFuel_eventHasFuel_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableGeneratorFuel_eventIsValidFuel_Parms), &Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_resource = { UE4CodeGen_Private::EPropertyClass::Class, "resource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableGeneratorFuel_eventIsValidFuel_Parms, resource), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::NewProp_resource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Check if a resource is valid as fuel for this generator.\n@param resource - Resource class to check.\n@return - true if resource valid as fuel; false if not valid or if generator does not run on fuel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, "IsValidFuel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableGeneratorFuel_eventIsValidFuel_Parms), Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Set up the fuel inventory when replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableGeneratorFuel, "OnRep_FuelInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasFuleCached_MetaData[];
#endif
		static void NewProp_mHasFuleCached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasFuleCached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentFuelAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentFuelAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFuelInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFuelInventory;
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
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_FilterFuelClasses, "FilterFuelClasses" }, // 830751550
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetCurrentFuelClass, "GetCurrentFuelClass" }, // 2980746046
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelAmount, "GetFuelAmount" }, // 777080882
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_GetFuelInventory, "GetFuelInventory" }, // 533974644
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_HasFuel, "HasFuel" }, // 2131874303
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_IsValidFuel, "IsValidFuel" }, // 3265324674
		{ &Z_Construct_UFunction_AFGBuildableGeneratorFuel_OnRep_FuelInventory, "OnRep_FuelInventory" }, // 2371047459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Type of the currently burned piece of fuel." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass = { UE4CodeGen_Private::EPropertyClass::Class, "mCurrentFuelClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCurrentFuelClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuleCached_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Used so clients know how if they have available fuel or not. Could be removed later if we start syncing the production indicator state" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuleCached_SetBit(void* Obj)
	{
		((AFGBuildableGeneratorFuel*)Obj)->mHasFuleCached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuleCached = { UE4CodeGen_Private::EPropertyClass::Bool, "mHasFuleCached", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGBuildableGeneratorFuel), &Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuleCached_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuleCached_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuleCached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Amount left of the currently burned piece of fuel. In megawatt seconds (MWs)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount = { UE4CodeGen_Private::EPropertyClass::Float, "mCurrentFuelAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mCurrentFuelAmount), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "@todo: Cleanup, this shouldn't need to be replicated, clients should be able to fetch this anyway. Static index of fuel slot?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mFuelInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080101080028, 1, "OnRep_FuelInventory", STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Current fuel classes of the generator, useful for runtime adding of fuel classes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mAvailableFuelClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mAvailableFuelClasses), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mAvailableFuelClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mAvailableFuelClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "MustImplement", "FGInventoryInterface" },
		{ "ToolTip", "Fuel classes this machine can run on. Leave empty if it does not run on fuel." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mDefaultFuelClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mDefaultFuelClasses), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mDefaultFuelClasses_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "mDefaultFuelClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Fuel classes this machine can run on. Leave empty if it does not run on fuel." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mFuelClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080020000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelClasses_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mFuelClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000020000000, 1, nullptr, 0, Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventoryHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorFuel.h" },
		{ "ToolTip", "Maintainer of the active storage component for this actor. Use this to get the active inventory component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventoryHandler = { UE4CodeGen_Private::EPropertyClass::Object, "mFuelInventoryHandler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFGBuildableGeneratorFuel, mFuelInventoryHandler), Z_Construct_UClass_UFGReplicationDetailInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventoryHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventoryHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mHasFuleCached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mCurrentFuelAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::NewProp_mFuelInventory,
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorFuel_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGBuildableGeneratorFuel, 1866262139);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableGeneratorFuel(Z_Construct_UClass_AFGBuildableGeneratorFuel, &AFGBuildableGeneratorFuel::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableGeneratorFuel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableGeneratorFuel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
