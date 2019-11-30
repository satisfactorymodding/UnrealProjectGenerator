// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/UI/FGButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGButtonWidget() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGButtonWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGButtonWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGButtonWidget_SetButton();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UFGButtonWidget::StaticRegisterNativesUFGButtonWidget()
	{
		UClass* Class = UFGButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetButton", &UFGButtonWidget::execSetButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics
	{
		struct FGButtonWidget_eventSetButton_Parms
		{
			UButton* inButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::NewProp_inButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::NewProp_inButton = { "inButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGButtonWidget_eventSetButton_Parms, inButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::NewProp_inButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::NewProp_inButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::NewProp_inButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/UI/FGButtonWidget.h" },
		{ "ToolTip", "Sets our internal button that will be used for focus handling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGButtonWidget, nullptr, "SetButton", sizeof(FGButtonWidget_eventSetButton_Parms), Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGButtonWidget_SetButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGButtonWidget_SetButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGButtonWidget_NoRegister()
	{
		return UFGButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFGButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGButtonWidget_SetButton, "SetButton" }, // 921739695
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGButtonWidget.h" },
		{ "ModuleRelativePath", "Public/UI/FGButtonWidget.h" },
		{ "ToolTip", "Base class for a widget that should be a button ( regular button, checkbox etc )" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGButtonWidget_Statics::ClassParams = {
		&UFGButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGButtonWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGButtonWidget, 3700676844);
	template<> FACTORYGAME_API UClass* StaticClass<UFGButtonWidget>()
	{
		return UFGButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGButtonWidget(Z_Construct_UClass_UFGButtonWidget, &UFGButtonWidget::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
