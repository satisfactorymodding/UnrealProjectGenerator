// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGWindow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWindow() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWindow_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWindow();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWindow_GetCloseButton();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static FName NAME_UFGWindow_GetCloseButton = FName(TEXT("GetCloseButton"));
	UUserWidget* UFGWindow::GetCloseButton()
	{
		FGWindow_eventGetCloseButton_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFGWindow_GetCloseButton),&Parms);
		return Parms.ReturnValue;
	}
	void UFGWindow::StaticRegisterNativesUFGWindow()
	{
	}
	struct Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGWindow_eventGetCloseButton_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGWindow.h" },
		{ "ToolTip", "Returns the close button in the title label" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWindow, "GetCloseButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGWindow_eventGetCloseButton_Parms), Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWindow_GetCloseButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWindow_GetCloseButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGWindow_NoRegister()
	{
		return UFGWindow::StaticClass();
	}
	struct Z_Construct_UClass_UFGWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGWindow_GetCloseButton, "GetCloseButton" }, // 2974200922
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWindow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGWindow.h" },
		{ "ModuleRelativePath", "UI/FGWindow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWindow_Statics::ClassParams = {
		&UFGWindow::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGWindow_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWindow, 1565878860);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWindow(Z_Construct_UClass_UFGWindow, &UFGWindow::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
