// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGCentralStorageSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCentralStorageSubsystem() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCentralStorageSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCentralStorageSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCentralStorageContainer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "CentralStorageAddedOrRemovedDelegate__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AFGCentralStorageSubsystem::StaticRegisterNativesAFGCentralStorageSubsystem()
	{
		UClass* Class = AFGCentralStorageSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &AFGCentralStorageSubsystem::execGet },
			{ "GetCentralStorageContainers", &AFGCentralStorageSubsystem::execGetCentralStorageContainers },
			{ "GetNumItemsFromCentralStorage", &AFGCentralStorageSubsystem::execGetNumItemsFromCentralStorage },
			{ "IsCentralStorageBuilt", &AFGCentralStorageSubsystem::execIsCentralStorageBuilt },
			{ "RemoveItemsFromCentralStorage", &AFGCentralStorageSubsystem::execRemoveItemsFromCentralStorage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics
	{
		struct FGCentralStorageSubsystem_eventGet_Parms
		{
			UObject* worldContext;
			AFGCentralStorageSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGCentralStorageSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Central Storage" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetCentralStorage" },
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
		{ "ToolTip", "Get the central storage from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, nullptr, "Get", sizeof(FGCentralStorageSubsystem_eventGet_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics
	{
		struct FGCentralStorageSubsystem_eventGetCentralStorageContainers_Parms
		{
			TArray<AFGCentralStorageContainer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGetCentralStorageContainers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGCentralStorageContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Central Storage" },
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
		{ "ToolTip", "@return All central storages built; empty if none built." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, nullptr, "GetCentralStorageContainers", sizeof(FGCentralStorageSubsystem_eventGetCentralStorageContainers_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics
	{
		struct FGCentralStorageSubsystem_eventGetNumItemsFromCentralStorage_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGetNumItemsFromCentralStorage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGetNumItemsFromCentralStorage_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Central Storage" },
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
		{ "ToolTip", "@return Number of items available across all the central storages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, nullptr, "GetNumItemsFromCentralStorage", sizeof(FGCentralStorageSubsystem_eventGetNumItemsFromCentralStorage_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics
	{
		struct FGCentralStorageSubsystem_eventIsCentralStorageBuilt_Parms
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
	void Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCentralStorageSubsystem_eventIsCentralStorageBuilt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCentralStorageSubsystem_eventIsCentralStorageBuilt_Parms), &Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Central Storage" },
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
		{ "ToolTip", "@return True if we've at least 1 central storage built; false if 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, nullptr, "IsCentralStorageBuilt", sizeof(FGCentralStorageSubsystem_eventIsCentralStorageBuilt_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics
	{
		struct FGCentralStorageSubsystem_eventRemoveItemsFromCentralStorage_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemClass;
			int32 num;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_num;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCentralStorageSubsystem_eventRemoveItemsFromCentralStorage_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCentralStorageSubsystem_eventRemoveItemsFromCentralStorage_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::NewProp_num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::NewProp_itemClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Central Storage" },
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
		{ "ToolTip", "Removes the number of specified items across all central storages.\n\n@param itemClass - Type of items to remove.\n@param num - Number of items to remove. Must be >= 0. If count is more than the items available, a partial remove is done and a warning is raised." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, nullptr, "RemoveItemsFromCentralStorage", sizeof(FGCentralStorageSubsystem_eventRemoveItemsFromCentralStorage_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCentralStorageSubsystem_NoRegister()
	{
		return AFGCentralStorageSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGCentralStorageSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCentralStorages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCentralStorages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCentralStorages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CentralStorageAddedOrRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CentralStorageAddedOrRemoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_Get, "Get" }, // 2418875404
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers, "GetCentralStorageContainers" }, // 1023112428
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage, "GetNumItemsFromCentralStorage" }, // 4209529759
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt, "IsCentralStorageBuilt" }, // 2464899306
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage, "RemoveItemsFromCentralStorage" }, // 2127757299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGCentralStorageSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Handles the central storage system in the game." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
		{ "ToolTip", "All the central storages built." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages = { "mCentralStorages", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCentralStorageSubsystem, mCentralStorages), METADATA_PARAMS(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages_Inner = { "mCentralStorages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGCentralStorageContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_CentralStorageAddedOrRemoved_MetaData[] = {
		{ "Category", "Central Storage" },
		{ "DisplayName", "OnCentralStorageAddedOrRemoved" },
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
		{ "ToolTip", "Called when a central storage has been removed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_CentralStorageAddedOrRemoved = { "CentralStorageAddedOrRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCentralStorageSubsystem, CentralStorageAddedOrRemoved), Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_CentralStorageAddedOrRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_CentralStorageAddedOrRemoved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_CentralStorageAddedOrRemoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCentralStorageSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::ClassParams = {
		&AFGCentralStorageSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCentralStorageSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCentralStorageSubsystem, 2959945532);
	template<> FACTORYGAME_API UClass* StaticClass<AFGCentralStorageSubsystem>()
	{
		return AFGCentralStorageSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCentralStorageSubsystem(Z_Construct_UClass_AFGCentralStorageSubsystem, &AFGCentralStorageSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCentralStorageSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCentralStorageSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
