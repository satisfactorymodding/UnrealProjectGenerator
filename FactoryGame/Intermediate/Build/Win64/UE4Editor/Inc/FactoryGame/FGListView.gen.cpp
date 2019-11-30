// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/UI/FGListView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGListView() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGListView();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGListView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGListView_Refresh();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics
	{
		struct FGListView_eventGetNumRows_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGListView_eventGetNumRows_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FGListView.h" },
		{ "ToolTip", "Delegate for getting the number of items to display." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGListView, nullptr, "GetNumRows__DelegateSignature", sizeof(FGListView_eventGetNumRows_Parms), Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics
	{
		struct FGListView_eventOnGenerateRow_Parms
		{
			int32 item;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGListView_eventOnGenerateRow_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGListView_eventOnGenerateRow_Parms, item), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FGListView.h" },
		{ "ToolTip", "Delegate for constructing a UWidget for an item to display." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGListView, nullptr, "OnGenerateRow__DelegateSignature", sizeof(FGListView_eventOnGenerateRow_Parms), Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFGListView::StaticRegisterNativesUFGListView()
	{
		UClass* Class = UFGListView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Refresh", &UFGListView::execRefresh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGListView_Refresh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGListView_Refresh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/UI/FGListView.h" },
		{ "ToolTip", "Tells the list view to refresh the items in the list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGListView_Refresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGListView, nullptr, "Refresh", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGListView_Refresh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGListView_Refresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGListView_Refresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGListView_Refresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGListView_NoRegister()
	{
		return UFGListView::StaticClass();
	}
	struct Z_Construct_UClass_UFGListView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSelectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mSelectionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGetNumRowsEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_mGetNumRowsEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnGenerateRowEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_mOnGenerateRowEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGListView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGListView_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature, "GetNumRows__DelegateSignature" }, // 1069296294
		{ &Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature, "OnGenerateRow__DelegateSignature" }, // 4208619418
		{ &Z_Construct_UFunction_UFGListView_Refresh, "Refresh" }, // 683734558
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGListView_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGListView.h" },
		{ "ModuleRelativePath", "Public/UI/FGListView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A vertical box widget is a view panel allowing child widgets to be automatically laid out vertically from an array.\nSupports selection and dynamic data binding to an array through delegates.\n\n* Many Children\n* Flows Vertical\n* Selection Functionality" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGListView_Statics::NewProp_mSelectionMode_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/UI/FGListView.h" },
		{ "ToolTip", "Edit" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGListView_Statics::NewProp_mSelectionMode = { "mSelectionMode", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGListView, mSelectionMode), Z_Construct_UEnum_Slate_ESelectionMode, METADATA_PARAMS(Z_Construct_UClass_UFGListView_Statics::NewProp_mSelectionMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGListView_Statics::NewProp_mSelectionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGListView_Statics::NewProp_mGetNumRowsEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "GetNumRowsEvent" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/UI/FGListView.h" },
		{ "ToolTip", "Delegate for getting the number of items to display." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UFGListView_Statics::NewProp_mGetNumRowsEvent = { "mGetNumRowsEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGListView, mGetNumRowsEvent), Z_Construct_UDelegateFunction_UFGListView_GetNumRows__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGListView_Statics::NewProp_mGetNumRowsEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGListView_Statics::NewProp_mGetNumRowsEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGListView_Statics::NewProp_mOnGenerateRowEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "OnGenerateRowEvent" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/UI/FGListView.h" },
		{ "ToolTip", "Delegate for constructing a UWidget for an item to display." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UFGListView_Statics::NewProp_mOnGenerateRowEvent = { "mOnGenerateRowEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGListView, mOnGenerateRowEvent), Z_Construct_UDelegateFunction_UFGListView_OnGenerateRow__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGListView_Statics::NewProp_mOnGenerateRowEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGListView_Statics::NewProp_mOnGenerateRowEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGListView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGListView_Statics::NewProp_mSelectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGListView_Statics::NewProp_mGetNumRowsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGListView_Statics::NewProp_mOnGenerateRowEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGListView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGListView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGListView_Statics::ClassParams = {
		&UFGListView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGListView_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGListView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGListView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGListView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGListView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGListView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGListView, 64822143);
	template<> FACTORYGAME_API UClass* StaticClass<UFGListView>()
	{
		return UFGListView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGListView(Z_Construct_UClass_UFGListView, &UFGListView::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGListView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGListView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
