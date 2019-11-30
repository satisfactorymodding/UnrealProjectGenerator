// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGPopupInstigatorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPopupInstigatorInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPopupInstigatorInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPopupInstigatorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory();
// End Cross Module References
	void IFGPopupInstigatorInterface::NotifyPopupClosed(TSubclassOf<UUserWidget>  popupClass, int32 exitCode)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NotifyPopupClosed instead.");
	}
	void IFGPopupInstigatorInterface::WidgetFactory(TSubclassOf<UUserWidget>  popupClass, TArray<UUserWidget*>& out_widgets)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_WidgetFactory instead.");
	}
	void UFGPopupInstigatorInterface::StaticRegisterNativesUFGPopupInstigatorInterface()
	{
	}
	struct Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_exitCode;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_popupClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::NewProp_exitCode = { "exitCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPopupInstigatorInterface_eventNotifyPopupClosed_Parms, exitCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::NewProp_popupClass = { "popupClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPopupInstigatorInterface_eventNotifyPopupClosed_Parms, popupClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::NewProp_exitCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::NewProp_popupClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Popup" },
		{ "ModuleRelativePath", "FGPopupInstigatorInterface.h" },
		{ "ToolTip", "Called when the popup is closed and returns an int that can be used to interpret selection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPopupInstigatorInterface, nullptr, "NotifyPopupClosed", sizeof(FGPopupInstigatorInterface_eventNotifyPopupClosed_Parms), Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_widgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_widgets_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_popupClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::NewProp_out_widgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::NewProp_out_widgets = { "out_widgets", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPopupInstigatorInterface_eventWidgetFactory_Parms, out_widgets), METADATA_PARAMS(Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::NewProp_out_widgets_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::NewProp_out_widgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::NewProp_out_widgets_Inner = { "out_widgets", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::NewProp_popupClass = { "popupClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPopupInstigatorInterface_eventWidgetFactory_Parms, popupClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::NewProp_out_widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::NewProp_out_widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::NewProp_popupClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Popup" },
		{ "ModuleRelativePath", "FGPopupInstigatorInterface.h" },
		{ "ToolTip", "Called from FGPopupWidgetContent to fill its contents" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPopupInstigatorInterface, nullptr, "WidgetFactory", sizeof(FGPopupInstigatorInterface_eventWidgetFactory_Parms), Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGPopupInstigatorInterface_NoRegister()
	{
		return UFGPopupInstigatorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGPopupInstigatorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGPopupInstigatorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGPopupInstigatorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGPopupInstigatorInterface_NotifyPopupClosed, "NotifyPopupClosed" }, // 1658631877
		{ &Z_Construct_UFunction_UFGPopupInstigatorInterface_WidgetFactory, "WidgetFactory" }, // 3793965699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPopupInstigatorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGPopupInstigatorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGPopupInstigatorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGPopupInstigatorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGPopupInstigatorInterface_Statics::ClassParams = {
		&UFGPopupInstigatorInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGPopupInstigatorInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGPopupInstigatorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGPopupInstigatorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGPopupInstigatorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGPopupInstigatorInterface, 4144596215);
	template<> FACTORYGAME_API UClass* StaticClass<UFGPopupInstigatorInterface>()
	{
		return UFGPopupInstigatorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGPopupInstigatorInterface(Z_Construct_UClass_UFGPopupInstigatorInterface, &UFGPopupInstigatorInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGPopupInstigatorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGPopupInstigatorInterface);
	static FName NAME_UFGPopupInstigatorInterface_NotifyPopupClosed = FName(TEXT("NotifyPopupClosed"));
	void IFGPopupInstigatorInterface::Execute_NotifyPopupClosed(UObject* O, TSubclassOf<UUserWidget>  popupClass, int32 exitCode)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGPopupInstigatorInterface::StaticClass()));
		FGPopupInstigatorInterface_eventNotifyPopupClosed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGPopupInstigatorInterface_NotifyPopupClosed);
		if (Func)
		{
			Parms.popupClass=popupClass;
			Parms.exitCode=exitCode;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UFGPopupInstigatorInterface_WidgetFactory = FName(TEXT("WidgetFactory"));
	void IFGPopupInstigatorInterface::Execute_WidgetFactory(UObject* O, TSubclassOf<UUserWidget>  popupClass, TArray<UUserWidget*>& out_widgets)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGPopupInstigatorInterface::StaticClass()));
		FGPopupInstigatorInterface_eventWidgetFactory_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGPopupInstigatorInterface_WidgetFactory);
		if (Func)
		{
			Parms.popupClass=popupClass;
			Parms.out_widgets=out_widgets;
			O->ProcessEvent(Func, &Parms);
			out_widgets=Parms.out_widgets;
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
