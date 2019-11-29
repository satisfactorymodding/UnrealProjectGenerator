// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGPowerCircuitWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPowerCircuitWidget() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerCircuitWidget();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerCircuit_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerCircuitWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics
	{
		struct FGPowerCircuitWidget_eventGetPowerCircuit_Parms
		{
			UFGPowerCircuit* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPowerCircuitWidget_eventGetPowerCircuit_Parms, ReturnValue), Z_Construct_UClass_UFGPowerCircuit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGPowerCircuitWidget.h" },
		{ "ToolTip", "Delegate for getting the power circuit to display." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuitWidget, nullptr, "GetPowerCircuit__DelegateSignature", sizeof(FGPowerCircuitWidget_eventGetPowerCircuit_Parms), Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFGPowerCircuitWidget::StaticRegisterNativesUFGPowerCircuitWidget()
	{
		UClass* Class = UFGPowerCircuitWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPowerCircuit", &UFGPowerCircuitWidget::execGetPowerCircuit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics
	{
		struct FGPowerCircuitWidget_eventGetPowerCircuit_Parms
		{
			UFGPowerCircuit* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPowerCircuitWidget_eventGetPowerCircuit_Parms, ReturnValue), Z_Construct_UClass_UFGPowerCircuit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "FGPowerCircuitWidget.h" },
		{ "ToolTip", "@return Get the power circuit to display info for, may be null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerCircuitWidget, nullptr, "GetPowerCircuit", sizeof(FGPowerCircuitWidget_eventGetPowerCircuit_Parms), Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGPowerCircuitWidget_NoRegister()
	{
		return UFGPowerCircuitWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFGPowerCircuitWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerCircuit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPowerCircuit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGetPowerCircuitEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_mGetPowerCircuitEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGPowerCircuitWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGPowerCircuitWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGPowerCircuitWidget_GetPowerCircuit, "GetPowerCircuit" }, // 1487311232
		{ &Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature, "GetPowerCircuit__DelegateSignature" }, // 715902633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuitWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGPowerCircuitWidget.h" },
		{ "ModuleRelativePath", "FGPowerCircuitWidget.h" },
		{ "ToolTip", "Base for widgets thats observes a power circuit." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mPowerCircuit_MetaData[] = {
		{ "ModuleRelativePath", "FGPowerCircuitWidget.h" },
		{ "ToolTip", "Power circuit we're observing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mPowerCircuit = { "mPowerCircuit", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGPowerCircuitWidget, mPowerCircuit), Z_Construct_UClass_UFGPowerCircuit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mPowerCircuit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mPowerCircuit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mGetPowerCircuitEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "GetPowerCircuitEvent" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "FGPowerCircuitWidget.h" },
		{ "ToolTip", "Delegate for getting the number of items to display." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mGetPowerCircuitEvent = { "mGetPowerCircuitEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGPowerCircuitWidget, mGetPowerCircuitEvent), Z_Construct_UDelegateFunction_UFGPowerCircuitWidget_GetPowerCircuit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mGetPowerCircuitEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mGetPowerCircuitEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGPowerCircuitWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mPowerCircuit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerCircuitWidget_Statics::NewProp_mGetPowerCircuitEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGPowerCircuitWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGPowerCircuitWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGPowerCircuitWidget_Statics::ClassParams = {
		&UFGPowerCircuitWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGPowerCircuitWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuitWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGPowerCircuitWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGPowerCircuitWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGPowerCircuitWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGPowerCircuitWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGPowerCircuitWidget, 3151125325);
	template<> FACTORYGAME_API UClass* StaticClass<UFGPowerCircuitWidget>()
	{
		return UFGPowerCircuitWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGPowerCircuitWidget(Z_Construct_UClass_UFGPowerCircuitWidget, &UFGPowerCircuitWidget::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGPowerCircuitWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGPowerCircuitWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
