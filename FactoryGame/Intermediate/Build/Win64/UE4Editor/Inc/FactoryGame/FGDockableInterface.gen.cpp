// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGDockableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDockableInterface() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EDockStationType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDockableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDockableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDockableInterface_CanDock();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDockableInterface_GetDockInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDockableInterface_OnBeginLoadVehicle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDockableInterface_OnBeginUnloadVehicle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDockableInterface_OnTransferComplete();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDockableInterface_WasDocked();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableDockingStation_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDockableInterface_WasUndocked();
// End Cross Module References
	static UEnum* EDockStationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EDockStationType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EDockStationType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDockStationType(EDockStationType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EDockStationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EDockStationType_CRC() { return 2473197690U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EDockStationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDockStationType"), 0, Get_Z_Construct_UEnum_FactoryGame_EDockStationType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDockStationType::DST_NONE", (int64)EDockStationType::DST_NONE },
				{ "EDockStationType::DST_TRUCK", (int64)EDockStationType::DST_TRUCK },
				{ "EDockStationType::DST_TRAIN", (int64)EDockStationType::DST_TRAIN },
				{ "EDockStationType::DST_LAST_ENUM", (int64)EDockStationType::DST_LAST_ENUM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DST_LAST_ENUM.Hidden", "" },
				{ "DST_NONE.DisplayName", "None" },
				{ "DST_TRAIN.DisplayName", "Train" },
				{ "DST_TRUCK.DisplayName", "Truck" },
				{ "ModuleRelativePath", "FGDockableInterface.h" },
				{ "ToolTip", "@todo: Change this in favour for more flexible docking stations (for instance, boats) that can be done in mods\nDifferent type of docks." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDockStationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDockStationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	bool IFGDockableInterface::CanDock(EDockStationType atStation) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanDock instead.");
		FGDockableInterface_eventCanDock_Parms Parms;
		return Parms.ReturnValue;
	}
	UFGInventoryComponent* IFGDockableInterface::GetDockFuelInventory() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDockFuelInventory instead.");
		FGDockableInterface_eventGetDockFuelInventory_Parms Parms;
		return Parms.ReturnValue;
	}
	UFGInventoryComponent* IFGDockableInterface::GetDockInventory() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDockInventory instead.");
		FGDockableInterface_eventGetDockInventory_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGDockableInterface::OnBeginLoadVehicle()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBeginLoadVehicle instead.");
	}
	void IFGDockableInterface::OnBeginUnloadVehicle()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBeginUnloadVehicle instead.");
	}
	void IFGDockableInterface::OnTransferComplete()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTransferComplete instead.");
	}
	void IFGDockableInterface::WasDocked(AFGBuildableDockingStation* atStation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_WasDocked instead.");
	}
	void IFGDockableInterface::WasUndocked()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_WasUndocked instead.");
	}
	void UFGDockableInterface::StaticRegisterNativesUFGDockableInterface()
	{
		UClass* Class = UFGDockableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDock", &IFGDockableInterface::execCanDock },
			{ "GetDockFuelInventory", &IFGDockableInterface::execGetDockFuelInventory },
			{ "GetDockInventory", &IFGDockableInterface::execGetDockInventory },
			{ "OnBeginLoadVehicle", &IFGDockableInterface::execOnBeginLoadVehicle },
			{ "OnBeginUnloadVehicle", &IFGDockableInterface::execOnBeginUnloadVehicle },
			{ "OnTransferComplete", &IFGDockableInterface::execOnTransferComplete },
			{ "WasDocked", &IFGDockableInterface::execWasDocked },
			{ "WasUndocked", &IFGDockableInterface::execWasUndocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_atStation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_atStation_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDockableInterface_eventCanDock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDockableInterface_eventCanDock_Parms), &Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::NewProp_atStation = { UE4CodeGen_Private::EPropertyClass::Enum, "atStation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDockableInterface_eventCanDock_Parms, atStation), Z_Construct_UEnum_FactoryGame_EDockStationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::NewProp_atStation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::NewProp_atStation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::NewProp_atStation_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Docking" },
		{ "ModuleRelativePath", "FGDockableInterface.h" },
		{ "ToolTip", "Check if this thing can dock at the given type of docking station." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDockableInterface, "CanDock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(FGDockableInterface_eventCanDock_Parms), Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDockableInterface_CanDock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDockableInterface_CanDock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGDockableInterface_eventGetDockFuelInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Docking" },
		{ "ModuleRelativePath", "FGDockableInterface.h" },
		{ "ToolTip", "Get the fuel inventory for this dockable thing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDockableInterface, "GetDockFuelInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(FGDockableInterface_eventGetDockFuelInventory_Parms), Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGDockableInterface_eventGetDockInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Docking" },
		{ "ModuleRelativePath", "FGDockableInterface.h" },
		{ "ToolTip", "Get the input/output inventory for this dockable thing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDockableInterface, "GetDockInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(FGDockableInterface_eventGetDockInventory_Parms), Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDockableInterface_GetDockInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDockableInterface_GetDockInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDockableInterface_OnBeginLoadVehicle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_OnBeginLoadVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Docking" },
		{ "ModuleRelativePath", "FGDockableInterface.h" },
		{ "ToolTip", "Called when we start loading the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDockableInterface_OnBeginLoadVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDockableInterface, "OnBeginLoadVehicle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_OnBeginLoadVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_OnBeginLoadVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDockableInterface_OnBeginLoadVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDockableInterface_OnBeginLoadVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDockableInterface_OnBeginUnloadVehicle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_OnBeginUnloadVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Docking" },
		{ "ModuleRelativePath", "FGDockableInterface.h" },
		{ "ToolTip", "Called when we start unloading the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDockableInterface_OnBeginUnloadVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDockableInterface, "OnBeginUnloadVehicle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_OnBeginUnloadVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_OnBeginUnloadVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDockableInterface_OnBeginUnloadVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDockableInterface_OnBeginUnloadVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDockableInterface_OnTransferComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_OnTransferComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Docking" },
		{ "ModuleRelativePath", "FGDockableInterface.h" },
		{ "ToolTip", "Notify for when loading/unloading are completed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDockableInterface_OnTransferComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDockableInterface, "OnTransferComplete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_OnTransferComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_OnTransferComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDockableInterface_OnTransferComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDockableInterface_OnTransferComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_atStation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::NewProp_atStation = { UE4CodeGen_Private::EPropertyClass::Object, "atStation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDockableInterface_eventWasDocked_Parms, atStation), Z_Construct_UClass_AFGBuildableDockingStation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::NewProp_atStation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Docking" },
		{ "ModuleRelativePath", "FGDockableInterface.h" },
		{ "ToolTip", "Called when it was docked to the station." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDockableInterface, "WasDocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(FGDockableInterface_eventWasDocked_Parms), Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDockableInterface_WasDocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDockableInterface_WasDocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDockableInterface_WasUndocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDockableInterface_WasUndocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Docking" },
		{ "ModuleRelativePath", "FGDockableInterface.h" },
		{ "ToolTip", "Called when it was undocked from the station." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDockableInterface_WasUndocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDockableInterface, "WasUndocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDockableInterface_WasUndocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDockableInterface_WasUndocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDockableInterface_WasUndocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDockableInterface_WasUndocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGDockableInterface_NoRegister()
	{
		return UFGDockableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGDockableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDockableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGDockableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGDockableInterface_CanDock, "CanDock" }, // 683877502
		{ &Z_Construct_UFunction_UFGDockableInterface_GetDockFuelInventory, "GetDockFuelInventory" }, // 474595590
		{ &Z_Construct_UFunction_UFGDockableInterface_GetDockInventory, "GetDockInventory" }, // 944924117
		{ &Z_Construct_UFunction_UFGDockableInterface_OnBeginLoadVehicle, "OnBeginLoadVehicle" }, // 1285804886
		{ &Z_Construct_UFunction_UFGDockableInterface_OnBeginUnloadVehicle, "OnBeginUnloadVehicle" }, // 2698835832
		{ &Z_Construct_UFunction_UFGDockableInterface_OnTransferComplete, "OnTransferComplete" }, // 3291945216
		{ &Z_Construct_UFunction_UFGDockableInterface_WasDocked, "WasDocked" }, // 317884603
		{ &Z_Construct_UFunction_UFGDockableInterface_WasUndocked, "WasUndocked" }, // 4157875853
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDockableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGDockableInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDockableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGDockableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDockableInterface_Statics::ClassParams = {
		&UFGDockableInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGDockableInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDockableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDockableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDockableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDockableInterface, 2960773687);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDockableInterface(Z_Construct_UClass_UFGDockableInterface, &UFGDockableInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDockableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDockableInterface);
	static FName NAME_UFGDockableInterface_CanDock = FName(TEXT("CanDock"));
	bool IFGDockableInterface::Execute_CanDock(const UObject* O, EDockStationType atStation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDockableInterface::StaticClass()));
		FGDockableInterface_eventCanDock_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDockableInterface_CanDock);
		if (Func)
		{
			Parms.atStation=atStation;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGDockableInterface*)(O->GetNativeInterfaceAddress(UFGDockableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanDock_Implementation(atStation);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGDockableInterface_GetDockFuelInventory = FName(TEXT("GetDockFuelInventory"));
	UFGInventoryComponent* IFGDockableInterface::Execute_GetDockFuelInventory(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDockableInterface::StaticClass()));
		FGDockableInterface_eventGetDockFuelInventory_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDockableInterface_GetDockFuelInventory);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGDockableInterface*)(O->GetNativeInterfaceAddress(UFGDockableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDockFuelInventory_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGDockableInterface_GetDockInventory = FName(TEXT("GetDockInventory"));
	UFGInventoryComponent* IFGDockableInterface::Execute_GetDockInventory(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDockableInterface::StaticClass()));
		FGDockableInterface_eventGetDockInventory_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDockableInterface_GetDockInventory);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGDockableInterface*)(O->GetNativeInterfaceAddress(UFGDockableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDockInventory_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGDockableInterface_OnBeginLoadVehicle = FName(TEXT("OnBeginLoadVehicle"));
	void IFGDockableInterface::Execute_OnBeginLoadVehicle(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDockableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFGDockableInterface_OnBeginLoadVehicle);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFGDockableInterface*)(O->GetNativeInterfaceAddress(UFGDockableInterface::StaticClass())))
		{
			I->OnBeginLoadVehicle_Implementation();
		}
	}
	static FName NAME_UFGDockableInterface_OnBeginUnloadVehicle = FName(TEXT("OnBeginUnloadVehicle"));
	void IFGDockableInterface::Execute_OnBeginUnloadVehicle(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDockableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFGDockableInterface_OnBeginUnloadVehicle);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFGDockableInterface*)(O->GetNativeInterfaceAddress(UFGDockableInterface::StaticClass())))
		{
			I->OnBeginUnloadVehicle_Implementation();
		}
	}
	static FName NAME_UFGDockableInterface_OnTransferComplete = FName(TEXT("OnTransferComplete"));
	void IFGDockableInterface::Execute_OnTransferComplete(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDockableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFGDockableInterface_OnTransferComplete);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFGDockableInterface*)(O->GetNativeInterfaceAddress(UFGDockableInterface::StaticClass())))
		{
			I->OnTransferComplete_Implementation();
		}
	}
	static FName NAME_UFGDockableInterface_WasDocked = FName(TEXT("WasDocked"));
	void IFGDockableInterface::Execute_WasDocked(UObject* O, AFGBuildableDockingStation* atStation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDockableInterface::StaticClass()));
		FGDockableInterface_eventWasDocked_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDockableInterface_WasDocked);
		if (Func)
		{
			Parms.atStation=atStation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGDockableInterface*)(O->GetNativeInterfaceAddress(UFGDockableInterface::StaticClass())))
		{
			I->WasDocked_Implementation(atStation);
		}
	}
	static FName NAME_UFGDockableInterface_WasUndocked = FName(TEXT("WasUndocked"));
	void IFGDockableInterface::Execute_WasUndocked(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDockableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFGDockableInterface_WasUndocked);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFGDockableInterface*)(O->GetNativeInterfaceAddress(UFGDockableInterface::StaticClass())))
		{
			I->WasUndocked_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
