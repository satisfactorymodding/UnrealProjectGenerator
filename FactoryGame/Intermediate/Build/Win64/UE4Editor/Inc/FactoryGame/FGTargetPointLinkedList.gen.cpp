// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGTargetPointLinkedList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGTargetPointLinkedList() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGTargetPointLinkedList_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGTargetPointLinkedList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_ClearRecording();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTargetPoint_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_SetClosestPointAsTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_SetNextTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	void UFGTargetPointLinkedList::StaticRegisterNativesUFGTargetPointLinkedList()
	{
		UClass* Class = UFGTargetPointLinkedList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearRecording", &UFGTargetPointLinkedList::execClearRecording },
			{ "GetCurrentTarget", &UFGTargetPointLinkedList::execGetCurrentTarget },
			{ "GetFirstTarget", &UFGTargetPointLinkedList::execGetFirstTarget },
			{ "GetLastTarget", &UFGTargetPointLinkedList::execGetLastTarget },
			{ "InsertItem", &UFGTargetPointLinkedList::execInsertItem },
			{ "RemoveItem", &UFGTargetPointLinkedList::execRemoveItem },
			{ "SetClosestPointAsTarget", &UFGTargetPointLinkedList::execSetClosestPointAsTarget },
			{ "SetCurrentTarget", &UFGTargetPointLinkedList::execSetCurrentTarget },
			{ "SetNextTarget", &UFGTargetPointLinkedList::execSetNextTarget },
			{ "SetPathVisibility", &UFGTargetPointLinkedList::execSetPathVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_ClearRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_ClearRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Clears the linked list and destroyes the targets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_ClearRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "ClearRecording", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_ClearRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_ClearRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_ClearRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_ClearRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics
	{
		struct FGTargetPointLinkedList_eventGetCurrentTarget_Parms
		{
			AFGTargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPointLinkedList_eventGetCurrentTarget_Parms, ReturnValue), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Get the current target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "GetCurrentTarget", sizeof(FGTargetPointLinkedList_eventGetCurrentTarget_Parms), Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics
	{
		struct FGTargetPointLinkedList_eventGetFirstTarget_Parms
		{
			AFGTargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPointLinkedList_eventGetFirstTarget_Parms, ReturnValue), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Get the first target in linked list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "GetFirstTarget", sizeof(FGTargetPointLinkedList_eventGetFirstTarget_Parms), Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics
	{
		struct FGTargetPointLinkedList_eventGetLastTarget_Parms
		{
			AFGTargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPointLinkedList_eventGetLastTarget_Parms, ReturnValue), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Get the first target in linked list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "GetLastTarget", sizeof(FGTargetPointLinkedList_eventGetLastTarget_Parms), Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics
	{
		struct FGTargetPointLinkedList_eventInsertItem_Parms
		{
			AFGTargetPoint* newTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::NewProp_newTarget = { "newTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPointLinkedList_eventInsertItem_Parms, newTarget), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::NewProp_newTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Add a new item in the end of the linked list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "InsertItem", sizeof(FGTargetPointLinkedList_eventInsertItem_Parms), Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics
	{
		struct FGTargetPointLinkedList_eventRemoveItem_Parms
		{
			AFGTargetPoint* targetToRemove;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::NewProp_targetToRemove = { "targetToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPointLinkedList_eventRemoveItem_Parms, targetToRemove), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::NewProp_targetToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Removes the desired element from the linked list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "RemoveItem", sizeof(FGTargetPointLinkedList_eventRemoveItem_Parms), Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_SetClosestPointAsTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_SetClosestPointAsTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Will go through the linked list and set the target node that is closest to the vehicles position as current target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_SetClosestPointAsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "SetClosestPointAsTarget", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_SetClosestPointAsTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_SetClosestPointAsTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_SetClosestPointAsTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_SetClosestPointAsTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics
	{
		struct FGTargetPointLinkedList_eventSetCurrentTarget_Parms
		{
			AFGTargetPoint* newTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::NewProp_newTarget = { "newTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPointLinkedList_eventSetCurrentTarget_Parms, newTarget), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::NewProp_newTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Set the current target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "SetCurrentTarget", sizeof(FGTargetPointLinkedList_eventSetCurrentTarget_Parms), Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_SetNextTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_SetNextTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Sets target in the linked list to the next available. Will loop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_SetNextTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "SetNextTarget", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_SetNextTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_SetNextTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_SetNextTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_SetNextTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics
	{
		struct FGTargetPointLinkedList_eventSetPathVisibility_Parms
		{
			bool inVisible;
		};
		static void NewProp_inVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::NewProp_inVisible_SetBit(void* Obj)
	{
		((FGTargetPointLinkedList_eventSetPathVisibility_Parms*)Obj)->inVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::NewProp_inVisible = { "inVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGTargetPointLinkedList_eventSetPathVisibility_Parms), &Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::NewProp_inVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::NewProp_inVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Sets visibility ( and collision ) status of all the targets in the linked list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTargetPointLinkedList, nullptr, "SetPathVisibility", sizeof(FGTargetPointLinkedList_eventSetPathVisibility_Parms), Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGTargetPointLinkedList_NoRegister()
	{
		return UFGTargetPointLinkedList::StaticClass();
	}
	struct Z_Construct_UClass_UFGTargetPointLinkedList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLast_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFirst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGTargetPointLinkedList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGTargetPointLinkedList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_ClearRecording, "ClearRecording" }, // 3271785177
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_GetCurrentTarget, "GetCurrentTarget" }, // 2245092608
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_GetFirstTarget, "GetFirstTarget" }, // 1631146804
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_GetLastTarget, "GetLastTarget" }, // 288631050
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_InsertItem, "InsertItem" }, // 4251412836
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_RemoveItem, "RemoveItem" }, // 1598384655
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_SetClosestPointAsTarget, "SetClosestPointAsTarget" }, // 2560223142
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_SetCurrentTarget, "SetCurrentTarget" }, // 184185459
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_SetNextTarget, "SetNextTarget" }, // 3327387252
		{ &Z_Construct_UFunction_UFGTargetPointLinkedList_SetPathVisibility, "SetPathVisibility" }, // 296094634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTargetPointLinkedList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGTargetPointLinkedList.h" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mMaxLength_MetaData[] = {
		{ "Category", "LinkedList" },
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Max length that the linked list can be" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mMaxLength = { "mMaxLength", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTargetPointLinkedList, mMaxLength), METADATA_PARAMS(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mMaxLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mMaxLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mCurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Current node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mCurrentTarget = { "mCurrentTarget", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTargetPointLinkedList, mCurrentTarget), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mCurrentTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mCurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mLast_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "Last node in linked list" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mLast = { "mLast", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTargetPointLinkedList, mLast), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mLast_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mLast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mFirst_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTargetPointLinkedList.h" },
		{ "ToolTip", "First node in linked list" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mFirst = { "mFirst", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTargetPointLinkedList, mFirst), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mFirst_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mFirst_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGTargetPointLinkedList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mMaxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mCurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mLast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTargetPointLinkedList_Statics::NewProp_mFirst,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGTargetPointLinkedList_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(UFGTargetPointLinkedList, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGTargetPointLinkedList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGTargetPointLinkedList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGTargetPointLinkedList_Statics::ClassParams = {
		&UFGTargetPointLinkedList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGTargetPointLinkedList_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGTargetPointLinkedList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGTargetPointLinkedList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGTargetPointLinkedList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGTargetPointLinkedList, 2684206497);
	template<> FACTORYGAME_API UClass* StaticClass<UFGTargetPointLinkedList>()
	{
		return UFGTargetPointLinkedList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGTargetPointLinkedList(Z_Construct_UClass_UFGTargetPointLinkedList, &UFGTargetPointLinkedList::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGTargetPointLinkedList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGTargetPointLinkedList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
