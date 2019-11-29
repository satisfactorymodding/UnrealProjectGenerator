// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGPopupWidgetContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPopupWidgetContent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPopupWidgetContent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPopupWidgetContent();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupCanceled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupConfirmed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPopupWidget_NoRegister();
// End Cross Module References
	static FName NAME_UFGPopupWidgetContent_GetShouldOkayBeEnabled = FName(TEXT("GetShouldOkayBeEnabled"));
	bool UFGPopupWidgetContent::GetShouldOkayBeEnabled()
	{
		FGPopupWidgetContent_eventGetShouldOkayBeEnabled_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFGPopupWidgetContent_GetShouldOkayBeEnabled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UFGPopupWidgetContent_NotifyPopupCanceled = FName(TEXT("NotifyPopupCanceled"));
	void UFGPopupWidgetContent::NotifyPopupCanceled()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGPopupWidgetContent_NotifyPopupCanceled),NULL);
	}
	static FName NAME_UFGPopupWidgetContent_NotifyPopupConfirmed = FName(TEXT("NotifyPopupConfirmed"));
	void UFGPopupWidgetContent::NotifyPopupConfirmed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGPopupWidgetContent_NotifyPopupConfirmed),NULL);
	}
	static FName NAME_UFGPopupWidgetContent_SetInstigatorAndInitialize = FName(TEXT("SetInstigatorAndInitialize"));
	void UFGPopupWidgetContent::SetInstigatorAndInitialize(UObject* instigator)
	{
		FGPopupWidgetContent_eventSetInstigatorAndInitialize_Parms Parms;
		Parms.instigator=instigator;
		ProcessEvent(FindFunctionChecked(NAME_UFGPopupWidgetContent_SetInstigatorAndInitialize),&Parms);
	}
	static FName NAME_UFGPopupWidgetContent_SetOptionalTextElements = FName(TEXT("SetOptionalTextElements"));
	void UFGPopupWidgetContent::SetOptionalTextElements(FText const& title, FText const& desc)
	{
		FGPopupWidgetContent_eventSetOptionalTextElements_Parms Parms;
		Parms.title=title;
		Parms.desc=desc;
		ProcessEvent(FindFunctionChecked(NAME_UFGPopupWidgetContent_SetOptionalTextElements),&Parms);
	}
	void UFGPopupWidgetContent::StaticRegisterNativesUFGPopupWidgetContent()
	{
	}
	struct Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPopupWidgetContent_eventGetShouldOkayBeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPopupWidgetContent_eventGetShouldOkayBeEnabled_Parms), &Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PopupContent" },
		{ "ModuleRelativePath", "FGPopupWidgetContent.h" },
		{ "ToolTip", "Called by the popup widget to determine if its buttons should be enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPopupWidgetContent, nullptr, "GetShouldOkayBeEnabled", sizeof(FGPopupWidgetContent_eventGetShouldOkayBeEnabled_Parms), Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupCanceled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupCanceled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PopupContent" },
		{ "ModuleRelativePath", "FGPopupWidgetContent.h" },
		{ "ToolTip", "Called when the containing popup is closed without confirmation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPopupWidgetContent, nullptr, "NotifyPopupCanceled", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupCanceled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupConfirmed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupConfirmed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PopupContent" },
		{ "ModuleRelativePath", "FGPopupWidgetContent.h" },
		{ "ToolTip", "Called when the containing popup is confirmed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupConfirmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPopupWidgetContent, nullptr, "NotifyPopupConfirmed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupConfirmed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupConfirmed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupConfirmed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupConfirmed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPopupWidgetContent_eventSetInstigatorAndInitialize_Parms, instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "PopupContent" },
		{ "ModuleRelativePath", "FGPopupWidgetContent.h" },
		{ "ToolTip", "Assigns the UObject which is meant to implement the FGPopupInstigatorInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPopupWidgetContent, nullptr, "SetInstigatorAndInitialize", sizeof(FGPopupWidgetContent_eventSetInstigatorAndInitialize_Parms), Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desc_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_desc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_desc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_desc = { "desc", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPopupWidgetContent_eventSetOptionalTextElements_Parms, desc), METADATA_PARAMS(Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_desc_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_desc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPopupWidgetContent_eventSetOptionalTextElements_Parms, title), METADATA_PARAMS(Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_title_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_desc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::NewProp_title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "PopupContent" },
		{ "ModuleRelativePath", "FGPopupWidgetContent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPopupWidgetContent, nullptr, "SetOptionalTextElements", sizeof(FGPopupWidgetContent_eventSetOptionalTextElements_Parms), Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGPopupWidgetContent_NoRegister()
	{
		return UFGPopupWidgetContent::StaticClass();
	}
	struct Z_Construct_UClass_UFGPopupWidgetContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPopupWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPopupWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGPopupWidgetContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGPopupWidgetContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGPopupWidgetContent_GetShouldOkayBeEnabled, "GetShouldOkayBeEnabled" }, // 558776349
		{ &Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupCanceled, "NotifyPopupCanceled" }, // 465208617
		{ &Z_Construct_UFunction_UFGPopupWidgetContent_NotifyPopupConfirmed, "NotifyPopupConfirmed" }, // 1307409900
		{ &Z_Construct_UFunction_UFGPopupWidgetContent_SetInstigatorAndInitialize, "SetInstigatorAndInitialize" }, // 399304943
		{ &Z_Construct_UFunction_UFGPopupWidgetContent_SetOptionalTextElements, "SetOptionalTextElements" }, // 4173072725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPopupWidgetContent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGPopupWidgetContent.h" },
		{ "ModuleRelativePath", "FGPopupWidgetContent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mPopupWidget_MetaData[] = {
		{ "Category", "PopupContent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGPopupWidgetContent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mPopupWidget = { "mPopupWidget", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGPopupWidgetContent, mPopupWidget), Z_Construct_UClass_UFGPopupWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mPopupWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mPopupWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mInstigator_MetaData[] = {
		{ "Category", "PopupContent" },
		{ "ModuleRelativePath", "FGPopupWidgetContent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mInstigator = { "mInstigator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGPopupWidgetContent, mInstigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mInstigator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mInstigator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGPopupWidgetContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mPopupWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPopupWidgetContent_Statics::NewProp_mInstigator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGPopupWidgetContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGPopupWidgetContent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGPopupWidgetContent_Statics::ClassParams = {
		&UFGPopupWidgetContent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGPopupWidgetContent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGPopupWidgetContent_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGPopupWidgetContent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGPopupWidgetContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGPopupWidgetContent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGPopupWidgetContent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGPopupWidgetContent, 3636517974);
	template<> FACTORYGAME_API UClass* StaticClass<UFGPopupWidgetContent>()
	{
		return UFGPopupWidgetContent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGPopupWidgetContent(Z_Construct_UClass_UFGPopupWidgetContent, &UFGPopupWidgetContent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGPopupWidgetContent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGPopupWidgetContent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
