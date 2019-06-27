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
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadVehicleMovementComponent_NoRegister();
// End Cross Module References
	void AFGFreightWagon::StaticRegisterNativesAFGFreightWagon()
	{
		UClass* Class = AFGFreightWagon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFreightInventory", &AFGFreightWagon::execGetFreightInventory },
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
		{ "Category", "FreightWagon" },
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFreightWagon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGRailroadVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGFreightWagon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGFreightWagon_GetFreightInventory, "GetFreightInventory" }, // 2775266081
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFreightWagon_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGFreightWagon.h" },
		{ "ModuleRelativePath", "FGFreightWagon.h" },
	};
#endif
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGFreightWagon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mInventorySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mStorageInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFreightWagon_Statics::NewProp_mVehicleMovement,
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
	IMPLEMENT_CLASS(AFGFreightWagon, 620770323);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFreightWagon(Z_Construct_UClass_AFGFreightWagon, &AFGFreightWagon::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFreightWagon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFreightWagon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
