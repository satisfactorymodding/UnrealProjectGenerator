// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableStorage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableStorage() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableStorage_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableStorage();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
// End Cross Module References
	void AFGBuildableStorage::StaticRegisterNativesAFGBuildableStorage()
	{
		UClass* Class = AFGBuildableStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStorageInventory", &AFGBuildableStorage::execGetStorageInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics
	{
		struct FGBuildableStorage_eventGetStorageInventory_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGBuildableStorage_eventGetStorageInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStorage.h" },
		{ "ToolTip", "Get the storage inventory from this storage box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableStorage, "GetStorageInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableStorage_eventGetStorageInventory_Parms), Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableStorage_NoRegister()
	{
		return AFGBuildableStorage::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStorageInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStorageInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventorySizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mInventorySizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventorySizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mInventorySizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultResources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDefaultResources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDefaultResources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStackingHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mStackingHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableStorage_GetStorageInventory, "GetStorageInventory" }, // 4110739924
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableStorage.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStorage.h" },
		{ "ToolTip", "Base class for all storage boxes, large and small. May have an arbitrary number of inputs and outputs." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStorageInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStorage.h" },
		{ "ToolTip", "The inventory to store everything in. Don't use this directly, use mStorageInventoryHandler->GetActiveInventoryComponent()" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStorageInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mStorageInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001080008, 1, nullptr, STRUCT_OFFSET(AFGBuildableStorage, mStorageInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStorageInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStorageInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeY_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStorage.h" },
		{ "ToolTip", "The size of the inventory for this storage." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeY = { UE4CodeGen_Private::EPropertyClass::Int, "mInventorySizeY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableStorage, mInventorySizeY), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeX_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStorage.h" },
		{ "ToolTip", "The size of the inventory for this storage." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeX = { UE4CodeGen_Private::EPropertyClass::Int, "mInventorySizeX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableStorage, mInventorySizeX), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mDefaultResources_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStorage.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Default resources in a storage @todo Why this special case here, add the stuff in blueprint instead first time we're being built... I guess this is only used for the tutorial?" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mDefaultResources = { UE4CodeGen_Private::EPropertyClass::Array, "mDefaultResources", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableStorage, mDefaultResources), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mDefaultResources_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mDefaultResources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mDefaultResources_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mDefaultResources", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStackingHeight_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableStorage.h" },
		{ "ToolTip", "How far apart in Z do multiple storages stack." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStackingHeight = { UE4CodeGen_Private::EPropertyClass::Float, "mStackingHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableStorage, mStackingHeight), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStackingHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStackingHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStorageInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mInventorySizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mDefaultResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mDefaultResources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableStorage_Statics::NewProp_mStackingHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableStorage_Statics::ClassParams = {
		&AFGBuildableStorage::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableStorage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStorage_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableStorage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableStorage, 2261735947);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableStorage(Z_Construct_UClass_AFGBuildableStorage, &AFGBuildableStorage::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
