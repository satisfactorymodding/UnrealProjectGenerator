// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "CentralStorageAddedOrRemovedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGCentralStorageSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, "Get", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGCentralStorageSubsystem_eventGet_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_Get_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGetCentralStorageContainers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGCentralStorageContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, "GetCentralStorageContainers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGCentralStorageSubsystem_eventGetCentralStorageContainers_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGetNumItemsFromCentralStorage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCentralStorageSubsystem_eventGetNumItemsFromCentralStorage_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, "GetNumItemsFromCentralStorage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGCentralStorageSubsystem_eventGetNumItemsFromCentralStorage_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGCentralStorageSubsystem_eventIsCentralStorageBuilt_Parms), &Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, "IsCentralStorageBuilt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGCentralStorageSubsystem_eventIsCentralStorageBuilt_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::NewProp_num = { UE4CodeGen_Private::EPropertyClass::Int, "num", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCentralStorageSubsystem_eventRemoveItemsFromCentralStorage_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::NewProp_itemClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCentralStorageSubsystem_eventRemoveItemsFromCentralStorage_Parms, itemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageSubsystem, "RemoveItemsFromCentralStorage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(FGCentralStorageSubsystem_eventRemoveItemsFromCentralStorage_Parms), Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_Get, "Get" }, // 2796291976
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_GetCentralStorageContainers, "GetCentralStorageContainers" }, // 3865821071
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_GetNumItemsFromCentralStorage, "GetNumItemsFromCentralStorage" }, // 160151318
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_IsCentralStorageBuilt, "IsCentralStorageBuilt" }, // 1123690765
		{ &Z_Construct_UFunction_AFGCentralStorageSubsystem_RemoveItemsFromCentralStorage, "RemoveItemsFromCentralStorage" }, // 874868415
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages = { UE4CodeGen_Private::EPropertyClass::Array, "mCentralStorages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGCentralStorageSubsystem, mCentralStorages), METADATA_PARAMS(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_mCentralStorages_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mCentralStorages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGCentralStorageContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_CentralStorageAddedOrRemoved_MetaData[] = {
		{ "Category", "Central Storage" },
		{ "DisplayName", "OnCentralStorageAddedOrRemoved" },
		{ "ModuleRelativePath", "Public/FGCentralStorageSubsystem.h" },
		{ "ToolTip", "Called when a central storage has been removed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_CentralStorageAddedOrRemoved = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "CentralStorageAddedOrRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGCentralStorageSubsystem, CentralStorageAddedOrRemoved), Z_Construct_UDelegateFunction_FactoryGame_CentralStorageAddedOrRemovedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_CentralStorageAddedOrRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::NewProp_CentralStorageAddedOrRemoved_MetaData)) };
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGCentralStorageSubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGCentralStorageSubsystem, 3970390335);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCentralStorageSubsystem(Z_Construct_UClass_AFGCentralStorageSubsystem, &AFGCentralStorageSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCentralStorageSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCentralStorageSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
