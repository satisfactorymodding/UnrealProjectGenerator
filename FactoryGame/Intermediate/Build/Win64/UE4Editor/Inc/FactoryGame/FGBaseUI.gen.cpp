// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGBaseUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBaseUI() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBaseUI_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBaseUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBaseUI_AddPopup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EPopupId();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBaseUI_ClosePopup();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPopupWidget_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPopupData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBaseUI_GetPopup();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBaseUI_PopPopupQueue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBaseUI_SetPopup();
// End Cross Module References
	static FName NAME_UFGBaseUI_ClosePopup = FName(TEXT("ClosePopup"));
	void UFGBaseUI::ClosePopup()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGBaseUI_ClosePopup),NULL);
	}
	static FName NAME_UFGBaseUI_CreatePopupWidget = FName(TEXT("CreatePopupWidget"));
	UFGPopupWidget* UFGBaseUI::CreatePopupWidget(FPopupData popupData)
	{
		FGBaseUI_eventCreatePopupWidget_Parms Parms;
		Parms.popupData=popupData;
		ProcessEvent(FindFunctionChecked(NAME_UFGBaseUI_CreatePopupWidget),&Parms);
		return Parms.ReturnValue;
	}
	void UFGBaseUI::StaticRegisterNativesUFGBaseUI()
	{
		UClass* Class = UFGBaseUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPopup", &UFGBaseUI::execAddPopup },
			{ "GetPopup", &UFGBaseUI::execGetPopup },
			{ "PopPopupQueue", &UFGBaseUI::execPopPopupQueue },
			{ "SetPopup", &UFGBaseUI::execSetPopup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics
	{
		struct FGBaseUI_eventAddPopup_Parms
		{
			FText Title;
			FText Body;
			FScriptDelegate ConfirmClickDelegate;
			TEnumAsByte<EPopupId> PopupID;
			TSubclassOf<UUserWidget>  popupClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_popupClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PopupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmClickDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ConfirmClickDelegate;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_popupClass = { "popupClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBaseUI_eventAddPopup_Parms, popupClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_PopupID = { "PopupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBaseUI_eventAddPopup_Parms, PopupID), Z_Construct_UEnum_FactoryGame_EPopupId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_ConfirmClickDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_ConfirmClickDelegate = { "ConfirmClickDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBaseUI_eventAddPopup_Parms, ConfirmClickDelegate), Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_ConfirmClickDelegate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_ConfirmClickDelegate_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBaseUI_eventAddPopup_Parms, Body), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBaseUI_eventAddPopup_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_popupClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_PopupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_ConfirmClickDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::NewProp_Title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ConfirmClickDelegate" },
		{ "Category", "UI" },
		{ "CPP_Default_popupClass", "None" },
		{ "CPP_Default_PopupID", "PID_OK" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AddPopupWithCloseDelegate instead" },
		{ "ModuleRelativePath", "UI/FGBaseUI.h" },
		{ "ToolTip", "Adds a popup to the qu\xef\xbf\xbd" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBaseUI, nullptr, "AddPopup", sizeof(FGBaseUI_eventAddPopup_Parms), Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBaseUI_AddPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBaseUI_AddPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBaseUI_ClosePopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_ClosePopup_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGBaseUI.h" },
		{ "ToolTip", "Closes a popup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBaseUI_ClosePopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBaseUI, nullptr, "ClosePopup", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_ClosePopup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_ClosePopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBaseUI_ClosePopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBaseUI_ClosePopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_popupData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBaseUI_eventCreatePopupWidget_Parms, ReturnValue), Z_Construct_UClass_UFGPopupWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::NewProp_popupData = { "popupData", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBaseUI_eventCreatePopupWidget_Parms, popupData), Z_Construct_UScriptStruct_FPopupData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::NewProp_popupData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGBaseUI.h" },
		{ "ToolTip", "Creates a popup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBaseUI, nullptr, "CreatePopupWidget", sizeof(FGBaseUI_eventCreatePopupWidget_Parms), Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics
	{
		struct FGBaseUI_eventGetPopup_Parms
		{
			UFGPopupWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBaseUI_eventGetPopup_Parms, ReturnValue), Z_Construct_UClass_UFGPopupWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGBaseUI.h" },
		{ "ToolTip", "Getter for popup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBaseUI, nullptr, "GetPopup", sizeof(FGBaseUI_eventGetPopup_Parms), Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBaseUI_GetPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBaseUI_GetPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBaseUI_PopPopupQueue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_PopPopupQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGBaseUI.h" },
		{ "ToolTip", "Removes a pending popup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBaseUI_PopPopupQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBaseUI, nullptr, "PopPopupQueue", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_PopPopupQueue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_PopPopupQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBaseUI_PopPopupQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBaseUI_PopPopupQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics
	{
		struct FGBaseUI_eventSetPopup_Parms
		{
			UFGPopupWidget* inPopup;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inPopup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPopup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::NewProp_inPopup_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::NewProp_inPopup = { "inPopup", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBaseUI_eventSetPopup_Parms, inPopup), Z_Construct_UClass_UFGPopupWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::NewProp_inPopup_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::NewProp_inPopup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::NewProp_inPopup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGBaseUI.h" },
		{ "ToolTip", "Sets the popup variable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBaseUI, nullptr, "SetPopup", sizeof(FGBaseUI_eventSetPopup_Parms), Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBaseUI_SetPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBaseUI_SetPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGBaseUI_NoRegister()
	{
		return UFGBaseUI::StaticClass();
	}
	struct Z_Construct_UClass_UFGBaseUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActivePopup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActivePopup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGBaseUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGBaseUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGBaseUI_AddPopup, "AddPopup" }, // 3024325436
		{ &Z_Construct_UFunction_UFGBaseUI_ClosePopup, "ClosePopup" }, // 1321730032
		{ &Z_Construct_UFunction_UFGBaseUI_CreatePopupWidget, "CreatePopupWidget" }, // 3300798763
		{ &Z_Construct_UFunction_UFGBaseUI_GetPopup, "GetPopup" }, // 3833310404
		{ &Z_Construct_UFunction_UFGBaseUI_PopPopupQueue, "PopPopupQueue" }, // 347399070
		{ &Z_Construct_UFunction_UFGBaseUI_SetPopup, "SetPopup" }, // 1420863260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBaseUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGBaseUI.h" },
		{ "ModuleRelativePath", "UI/FGBaseUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBaseUI_Statics::NewProp_mActivePopup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGBaseUI.h" },
		{ "ToolTip", "Current active popup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBaseUI_Statics::NewProp_mActivePopup = { "mActivePopup", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBaseUI, mActivePopup), Z_Construct_UClass_UFGPopupWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGBaseUI_Statics::NewProp_mActivePopup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBaseUI_Statics::NewProp_mActivePopup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGBaseUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBaseUI_Statics::NewProp_mActivePopup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGBaseUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGBaseUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGBaseUI_Statics::ClassParams = {
		&UFGBaseUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGBaseUI_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGBaseUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGBaseUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGBaseUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGBaseUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGBaseUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGBaseUI, 1376260107);
	template<> FACTORYGAME_API UClass* StaticClass<UFGBaseUI>()
	{
		return UFGBaseUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGBaseUI(Z_Construct_UClass_UFGBaseUI, &UFGBaseUI::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGBaseUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGBaseUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
