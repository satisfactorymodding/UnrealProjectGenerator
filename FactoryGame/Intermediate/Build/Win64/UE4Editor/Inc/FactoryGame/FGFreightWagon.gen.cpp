// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGFreightWagon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFreightWagon() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFreightWagon_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFreightWagon();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicle();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFreightWagon_InitializeInventoryComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadVehicleMovementComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
// End Cross Module References
	void AFGFreightWagon::StaticRegisterNativesAFGFreightWagon()
	{
		UClass* Class = AFGFreightWagon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFreightInventory", &AFGFreightWagon::execGetFreightInventory },
			{ "GetFreightInventoryFilledPercent", &AFGFreightWagon::execGetFreightInventoryFilledPercent },
			{ "InitializeInventoryComponent", &AFGFreightWagon::execInitializeInventoryComponent },
			{ "OnItemAddedToFreight", &AFGFreightWagon::execOnItemAddedToFreight },
			{ "OnItemRemovedFromFreight", &AFGFreightWagon::execOnItemRemovedFromFreight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics
	{
		struct FGFreightWagon_eventGetFreightInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGFreightWagon_eventGetFreightInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|FreightCar" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
		{ "ToolTip", "Get the inventory where we store the cargo." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFreightWagon, "GetFreightInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGFreightWagon_eventGetFreightInventory_Parms), Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics
	{
		struct FGFreightWagon_eventGetFreightInventoryFilledPercent_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGFreightWagon_eventGetFreightInventoryFilledPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|FreightCar" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
		{ "ToolTip", "Get the inventory where we store the cargo." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFreightWagon, "GetFreightInventoryFilledPercent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGFreightWagon_eventGetFreightInventoryFilledPercent_Parms), Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFreightWagon_InitializeInventoryComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFreightWagon_InitializeInventoryComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFreightWagon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFreightWagon_InitializeInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFreightWagon, "InitializeInventoryComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFreightWagon_InitializeInventoryComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_InitializeInventoryComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFreightWagon_InitializeInventoryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFreightWagon_InitializeInventoryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics
	{
		struct FGFreightWagon_eventOnItemAddedToFreight_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 numAdded;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numAdded;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::NewProp_numAdded = { UE4CodeGen_Private::EPropertyClass::Int, "numAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFreightWagon_eventOnItemAddedToFreight_Parms, numAdded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGFreightWagon_eventOnItemAddedToFreight_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::NewProp_numAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFreightWagon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFreightWagon, "OnItemAddedToFreight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGFreightWagon_eventOnItemAddedToFreight_Parms), Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics
	{
		struct FGFreightWagon_eventOnItemRemovedFromFreight_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 numRemoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numRemoved;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::NewProp_numRemoved = { UE4CodeGen_Private::EPropertyClass::Int, "numRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFreightWagon_eventOnItemRemovedFromFreight_Parms, numRemoved), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGFreightWagon_eventOnItemRemovedFromFreight_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::NewProp_numRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFreightWagon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFreightWagon, "OnItemRemovedFromFreight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGFreightWagon_eventOnItemRemovedFromFreight_Parms), Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGFreightWagon_NoRegister()
	{
		return AFGFreightWagon::StaticClass();
	}
	struct Z_Construct_UClass_AFGFreightWagon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCargoOverlapCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCargoOverlapCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLaunchCharacterScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLaunchCharacterScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCargoMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCargoMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mInventorySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStorageInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStorageInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVehicleMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mVehicleMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLaunchedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mLaunchedCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLaunchedCharacters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFreightWagon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGRailroadVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGFreightWagon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory, "GetFreightInventory" }, // 3112956500
		{ &Z_Construct_UFunction_AFGFreightWagon_GetFreightInventoryFilledPercent, "GetFreightInventoryFilledPercent" }, // 3288025612
		{ &Z_Construct_UFunction_AFGFreightWagon_InitializeInventoryComponent, "InitializeInventoryComponent" }, // 3360490441
		{ &Z_Construct_UFunction_AFGFreightWagon_OnItemAddedToFreight, "OnItemAddedToFreight" }, // 3509152172
		{ &Z_Construct_UFunction_AFGFreightWagon_OnItemRemovedFromFreight, "OnItemRemovedFromFreight" }, // 275391927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFreightWagon_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGFreightWagon.h" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoOverlapCollision_MetaData[] = {
		{ "Category", "FGFreightWagon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoOverlapCollision = { UE4CodeGen_Private::EPropertyClass::Object, "mCargoOverlapCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AFGFreightWagon, mCargoOverlapCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoOverlapCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoOverlapCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchCharacterScalar_MetaData[] = {
		{ "Category", "FreightWagon" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchCharacterScalar = { UE4CodeGen_Private::EPropertyClass::Float, "mLaunchCharacterScalar", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGFreightWagon, mLaunchCharacterScalar), METADATA_PARAMS(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchCharacterScalar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchCharacterScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mCargoMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGFreightWagon, mCargoMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mInventorySize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
		{ "ToolTip", "The size of the inventory for this wagon." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mInventorySize = { UE4CodeGen_Private::EPropertyClass::Int, "mInventorySize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGFreightWagon, mInventorySize), METADATA_PARAMS(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mInventorySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mInventorySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mStorageInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
		{ "ToolTip", "Responsible for handling our inventory" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mStorageInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mStorageInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001080028, 1, nullptr, STRUCT_OFFSET(AFGFreightWagon, mStorageInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mStorageInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mStorageInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mVehicleMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
		{ "ToolTip", "vehicle simulation component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mVehicleMovement = { UE4CodeGen_Private::EPropertyClass::Object, "mVehicleMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AFGFreightWagon, mVehicleMovement), Z_Construct_UClass_UFGRailroadVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mVehicleMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mVehicleMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchedCharacters_MetaData[] = {
		{ "ModuleRelativePath", "FGFreightWagon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchedCharacters = { UE4CodeGen_Private::EPropertyClass::Array, "mLaunchedCharacters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGFreightWagon, mLaunchedCharacters), METADATA_PARAMS(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchedCharacters_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchedCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchedCharacters_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mLaunchedCharacters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGFreightWagon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoOverlapCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchCharacterScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mCargoMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mInventorySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mStorageInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mVehicleMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchedCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mLaunchedCharacters_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFreightWagon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFreightWagon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFreightWagon_Statics::ClassParams = {
		&AFGFreightWagon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGFreightWagon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGFreightWagon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGFreightWagon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFreightWagon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFreightWagon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFreightWagon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFreightWagon, 3326868149);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFreightWagon(Z_Construct_UClass_AFGFreightWagon, &AFGFreightWagon::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFreightWagon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFreightWagon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
