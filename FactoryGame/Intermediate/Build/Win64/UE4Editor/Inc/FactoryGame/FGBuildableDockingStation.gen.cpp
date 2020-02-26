// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableDockingStation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableDockingStation() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableDockingStation_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableDockingStation();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_Dock();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginLoadVehicle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginUnloadVehicle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_OnRep_FuelInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_OnTransferComplete();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_Undock();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGReplicationDetailInventoryComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFGBuildableDockingStation_OnBeginLoadVehicle = FName(TEXT("OnBeginLoadVehicle"));
	void AFGBuildableDockingStation::OnBeginLoadVehicle()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableDockingStation_OnBeginLoadVehicle),NULL);
	}
	static FName NAME_AFGBuildableDockingStation_OnBeginUnloadVehicle = FName(TEXT("OnBeginUnloadVehicle"));
	void AFGBuildableDockingStation::OnBeginUnloadVehicle()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableDockingStation_OnBeginUnloadVehicle),NULL);
	}
	static FName NAME_AFGBuildableDockingStation_OnTransferComplete = FName(TEXT("OnTransferComplete"));
	void AFGBuildableDockingStation::OnTransferComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableDockingStation_OnTransferComplete),NULL);
	}
	void AFGBuildableDockingStation::StaticRegisterNativesAFGBuildableDockingStation()
	{
		UClass* Class = AFGBuildableDockingStation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dock", &AFGBuildableDockingStation::execDock },
			{ "FilterFuelClasses", &AFGBuildableDockingStation::execFilterFuelClasses },
			{ "GetDockedActor", &AFGBuildableDockingStation::execGetDockedActor },
			{ "GetFuelInventory", &AFGBuildableDockingStation::execGetFuelInventory },
			{ "GetInventory", &AFGBuildableDockingStation::execGetInventory },
			{ "GetIsInLoadMode", &AFGBuildableDockingStation::execGetIsInLoadMode },
			{ "IsLoadUnloading", &AFGBuildableDockingStation::execIsLoadUnloading },
			{ "OnRep_FuelInventory", &AFGBuildableDockingStation::execOnRep_FuelInventory },
			{ "SetIsInLoadMode", &AFGBuildableDockingStation::execSetIsInLoadMode },
			{ "Undock", &AFGBuildableDockingStation::execUndock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics
	{
		struct FGBuildableDockingStation_eventDock_Parms
		{
			AActor* actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableDockingStation_eventDock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableDockingStation_eventDock_Parms), &Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableDockingStation_eventDock_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Dock an actor to this docking station." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "Dock", sizeof(FGBuildableDockingStation_eventDock_Parms), Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_Dock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_Dock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics
	{
		struct FGBuildableDockingStation_eventFilterFuelClasses_Parms
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
	void Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableDockingStation_eventFilterFuelClasses_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableDockingStation_eventFilterFuelClasses_Parms), &Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableDockingStation_eventFilterFuelClasses_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableDockingStation_eventFilterFuelClasses_Parms, object), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::NewProp_object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Filter out what we consider as fuel for our fuel inventory.\n@see IsValidFuel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "FilterFuelClasses", sizeof(FGBuildableDockingStation_eventFilterFuelClasses_Parms), Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics
	{
		struct FGBuildableDockingStation_eventGetDockedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableDockingStation_eventGetDockedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Get the docked actor if any." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "GetDockedActor", sizeof(FGBuildableDockingStation_eventGetDockedActor_Parms), Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics
	{
		struct FGBuildableDockingStation_eventGetFuelInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableDockingStation_eventGetFuelInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "@return a valid pointer to the fuel inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "GetFuelInventory", sizeof(FGBuildableDockingStation_eventGetFuelInventory_Parms), Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics
	{
		struct FGBuildableDockingStation_eventGetInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableDockingStation_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Get the inventory the docked vehicle loads/unloads to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "GetInventory", sizeof(FGBuildableDockingStation_eventGetInventory_Parms), Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics
	{
		struct FGBuildableDockingStation_eventGetIsInLoadMode_Parms
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
	void Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableDockingStation_eventGetIsInLoadMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableDockingStation_eventGetIsInLoadMode_Parms), &Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Get whether this station should load or unload from vehicles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "GetIsInLoadMode", sizeof(FGBuildableDockingStation_eventGetIsInLoadMode_Parms), Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics
	{
		struct FGBuildableDockingStation_eventIsLoadUnloading_Parms
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
	void Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableDockingStation_eventIsLoadUnloading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableDockingStation_eventIsLoadUnloading_Parms), &Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Get whether this station is currently loading or unloading from vehicles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "IsLoadUnloading", sizeof(FGBuildableDockingStation_eventIsLoadUnloading_Parms), Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginLoadVehicle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginLoadVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Called when we start loading the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginLoadVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "OnBeginLoadVehicle", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginLoadVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginLoadVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginLoadVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginLoadVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginUnloadVehicle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginUnloadVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Called when we start unloading the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginUnloadVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "OnBeginUnloadVehicle", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginUnloadVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginUnloadVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginUnloadVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginUnloadVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_OnRep_FuelInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_OnRep_FuelInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Set up the fuel inventory when replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_OnRep_FuelInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "OnRep_FuelInventory", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_OnRep_FuelInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_OnRep_FuelInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_OnRep_FuelInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_OnRep_FuelInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_OnTransferComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_OnTransferComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Notify for when unload and/or load transfers are completed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_OnTransferComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "OnTransferComplete", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_OnTransferComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_OnTransferComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_OnTransferComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_OnTransferComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics
	{
		struct FGBuildableDockingStation_eventSetIsInLoadMode_Parms
		{
			bool isInLoadMode;
		};
		static void NewProp_isInLoadMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInLoadMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::NewProp_isInLoadMode_SetBit(void* Obj)
	{
		((FGBuildableDockingStation_eventSetIsInLoadMode_Parms*)Obj)->isInLoadMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::NewProp_isInLoadMode = { "isInLoadMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableDockingStation_eventSetIsInLoadMode_Parms), &Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::NewProp_isInLoadMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::NewProp_isInLoadMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Set whether this station should load or unload from vehicles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "SetIsInLoadMode", sizeof(FGBuildableDockingStation_eventSetIsInLoadMode_Parms), Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDockingStation_Undock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDockingStation_Undock_Statics::Function_MetaDataParams[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Undock the docked actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDockingStation_Undock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDockingStation, nullptr, "Undock", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDockingStation_Undock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDockingStation_Undock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDockingStation_Undock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDockingStation_Undock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableDockingStation_NoRegister()
	{
		return AFGBuildableDockingStation::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableDockingStation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFuelInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFuelInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsLoadUnloading_MetaData[];
#endif
		static void NewProp_mIsLoadUnloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsLoadUnloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStackTransferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mStackTransferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsInLoadMode_MetaData[];
#endif
		static void NewProp_mIsInLoadMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsInLoadMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasDockedActor_MetaData[];
#endif
		static void NewProp_mHasDockedActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasDockedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDockedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDockedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventoryHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInventoryHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFuelInventoryHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFuelInventoryHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTransferProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTransferProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFuelTransferSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFuelTransferSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTransferSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTransferSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStorageSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_mStorageSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStorageSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_mStorageSizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableDockingStation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableDockingStation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_Dock, "Dock" }, // 1356382117
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_FilterFuelClasses, "FilterFuelClasses" }, // 2554049112
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_GetDockedActor, "GetDockedActor" }, // 2395723884
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_GetFuelInventory, "GetFuelInventory" }, // 1099273201
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_GetInventory, "GetInventory" }, // 4107985699
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_GetIsInLoadMode, "GetIsInLoadMode" }, // 3092352126
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_IsLoadUnloading, "IsLoadUnloading" }, // 4012603852
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginLoadVehicle, "OnBeginLoadVehicle" }, // 1303902205
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_OnBeginUnloadVehicle, "OnBeginUnloadVehicle" }, // 3121201224
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_OnRep_FuelInventory, "OnRep_FuelInventory" }, // 2940854944
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_OnTransferComplete, "OnTransferComplete" }, // 654862846
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_SetIsInLoadMode, "SetIsInLoadMode" }, // 2266675348
		{ &Z_Construct_UFunction_AFGBuildableDockingStation_Undock, "Undock" }, // 582406529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableDockingStation.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Base class for docking stations in the game, this is a load/unload station depending on the conveyor connections given." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Inventory for refueling the trucks." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventory = { "mFuelInventory", "OnRep_FuelInventory", (EPropertyFlags)0x0040000101080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mFuelInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "Inventory where we transfer items to when unloading from a vehicle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventory = { "mInventory", nullptr, (EPropertyFlags)0x0040000001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsLoadUnloading_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Are we currently in the process of loading or unloading inventory" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsLoadUnloading_SetBit(void* Obj)
	{
		((AFGBuildableDockingStation*)Obj)->mIsLoadUnloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsLoadUnloading = { "mIsLoadUnloading", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableDockingStation), &Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsLoadUnloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsLoadUnloading_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsLoadUnloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStackTransferSize_MetaData[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "How much of a stack to transfer in each separate transfer moment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStackTransferSize = { "mStackTransferSize", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mStackTransferSize), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStackTransferSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStackTransferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsInLoadMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Have the player specified that this station should either load or unload to vehicles?" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsInLoadMode_SetBit(void* Obj)
	{
		((AFGBuildableDockingStation*)Obj)->mIsInLoadMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsInLoadMode = { "mIsInLoadMode", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableDockingStation), &Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsInLoadMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsInLoadMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsInLoadMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mHasDockedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "If an actor is docked to this station. Used to detect actor becomes invalid due to e.g. dismantle." },
	};
#endif
	void Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mHasDockedActor_SetBit(void* Obj)
	{
		((AFGBuildableDockingStation*)Obj)->mHasDockedActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mHasDockedActor = { "mHasDockedActor", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AFGBuildableDockingStation), &Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mHasDockedActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mHasDockedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mHasDockedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mDockedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "The actor docked to this station." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mDockedActor = { "mDockedActor", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mDockedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mDockedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mDockedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventoryHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventoryHandler = { "mInventoryHandler", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mInventoryHandler), Z_Construct_UClass_UFGReplicationDetailInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventoryHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventoryHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventoryHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventoryHandler = { "mFuelInventoryHandler", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mFuelInventoryHandler), Z_Construct_UClass_UFGReplicationDetailInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventoryHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventoryHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Current progress on transfer from/to docking station ( in seconds )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferProgress = { "mTransferProgress", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mTransferProgress), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelTransferSpeed_MetaData[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "How long time it takes to transfer 1 stack of fuel from/to docking station ( in seconds )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelTransferSpeed = { "mFuelTransferSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mFuelTransferSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelTransferSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelTransferSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferSpeed_MetaData[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "How long time it takes to transfer one stack of item from/to docking station ( in seconds )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferSpeed = { "mTransferSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mTransferSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeY_MetaData[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "SizeY of storage inventory" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeY = { "mStorageSizeY", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mStorageSizeY), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeX_MetaData[] = {
		{ "Category", "DockingStation" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDockingStation.h" },
		{ "ToolTip", "SizeX of storage inventory" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeX = { "mStorageSizeX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDockingStation, mStorageSizeX), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableDockingStation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsLoadUnloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStackTransferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mIsInLoadMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mHasDockedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mDockedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mInventoryHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelInventoryHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mFuelTransferSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mTransferSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDockingStation_Statics::NewProp_mStorageSizeX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableDockingStation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableDockingStation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableDockingStation_Statics::ClassParams = {
		&AFGBuildableDockingStation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableDockingStation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDockingStation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDockingStation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableDockingStation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableDockingStation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableDockingStation, 2085206372);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableDockingStation>()
	{
		return AFGBuildableDockingStation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableDockingStation(Z_Construct_UClass_AFGBuildableDockingStation, &AFGBuildableDockingStation::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableDockingStation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableDockingStation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
