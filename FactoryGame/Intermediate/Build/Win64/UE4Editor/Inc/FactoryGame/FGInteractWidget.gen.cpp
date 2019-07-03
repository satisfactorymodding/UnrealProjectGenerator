// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGInteractWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGInteractWidget() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInteractWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInteractWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_Init();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_OnConsume();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_OnEscapePressed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_SetInputMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_SetupDefaultFocus();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreLookInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreMoveInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FName NAME_UFGInteractWidget_Init = FName(TEXT("Init"));
	void UFGInteractWidget::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGInteractWidget_Init),NULL);
	}
	static FName NAME_UFGInteractWidget_OnEscapePressed = FName(TEXT("OnEscapePressed"));
	void UFGInteractWidget::OnEscapePressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGInteractWidget_OnEscapePressed),NULL);
	}
	static FName NAME_UFGInteractWidget_SetInputMode = FName(TEXT("SetInputMode"));
	void UFGInteractWidget::SetInputMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGInteractWidget_SetInputMode),NULL);
	}
	static FName NAME_UFGInteractWidget_SetupDefaultFocus = FName(TEXT("SetupDefaultFocus"));
	void UFGInteractWidget::SetupDefaultFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGInteractWidget_SetupDefaultFocus),NULL);
	}
	static FName NAME_UFGInteractWidget_UpdateIgnoreLookInput = FName(TEXT("UpdateIgnoreLookInput"));
	void UFGInteractWidget::UpdateIgnoreLookInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGInteractWidget_UpdateIgnoreLookInput),NULL);
	}
	static FName NAME_UFGInteractWidget_UpdateIgnoreMoveInput = FName(TEXT("UpdateIgnoreMoveInput"));
	void UFGInteractWidget::UpdateIgnoreMoveInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGInteractWidget_UpdateIgnoreMoveInput),NULL);
	}
	void UFGInteractWidget::StaticRegisterNativesUFGInteractWidget()
	{
		UClass* Class = UFGInteractWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultFocusWidget", &UFGInteractWidget::execGetDefaultFocusWidget },
			{ "GetDesiredAlignmentSize", &UFGInteractWidget::execGetDesiredAlignmentSize },
			{ "GetDesiredHorizontalAlignment", &UFGInteractWidget::execGetDesiredHorizontalAlignment },
			{ "GetDesiredVerticalAlignment", &UFGInteractWidget::execGetDesiredVerticalAlignment },
			{ "GetSupportsStacking", &UFGInteractWidget::execGetSupportsStacking },
			{ "GetUseGamepadCursor", &UFGInteractWidget::execGetUseGamepadCursor },
			{ "Init", &UFGInteractWidget::execInit },
			{ "OnConsume", &UFGInteractWidget::execOnConsume },
			{ "OnEscapePressed", &UFGInteractWidget::execOnEscapePressed },
			{ "SetDefaultFocusWidget", &UFGInteractWidget::execSetDefaultFocusWidget },
			{ "SetDesiredAlignmentSize", &UFGInteractWidget::execSetDesiredAlignmentSize },
			{ "SetDesiredHorizontalAlignment", &UFGInteractWidget::execSetDesiredHorizontalAlignment },
			{ "SetDesiredVerticalAlignment", &UFGInteractWidget::execSetDesiredVerticalAlignment },
			{ "SetInputMode", &UFGInteractWidget::execSetInputMode },
			{ "SetupDefaultFocus", &UFGInteractWidget::execSetupDefaultFocus },
			{ "UpdateIgnoreLookInput", &UFGInteractWidget::execUpdateIgnoreLookInput },
			{ "UpdateIgnoreMoveInput", &UFGInteractWidget::execUpdateIgnoreMoveInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics
	{
		struct FGInteractWidget_eventGetDefaultFocusWidget_Parms
		{
			UWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGInteractWidget_eventGetDefaultFocusWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Returns default focuswidget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "GetDefaultFocusWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInteractWidget_eventGetDefaultFocusWidget_Parms), Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics
	{
		struct FGInteractWidget_eventGetDesiredAlignmentSize_Parms
		{
			FSlateChildSize ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInteractWidget_eventGetDesiredAlignmentSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Gets the size we want" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "GetDesiredAlignmentSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInteractWidget_eventGetDesiredAlignmentSize_Parms), Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics
	{
		struct FGInteractWidget_eventGetDesiredHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInteractWidget_eventGetDesiredHorizontalAlignment_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Gets the alignment we want" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "GetDesiredHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInteractWidget_eventGetDesiredHorizontalAlignment_Parms), Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics
	{
		struct FGInteractWidget_eventGetDesiredVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInteractWidget_eventGetDesiredVerticalAlignment_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Gets the vertical alignment we want" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "GetDesiredVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInteractWidget_eventGetDesiredVerticalAlignment_Parms), Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics
	{
		struct FGInteractWidget_eventGetSupportsStacking_Parms
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
	void Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInteractWidget_eventGetSupportsStacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInteractWidget_eventGetSupportsStacking_Parms), &Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Getter for mSupportsStacking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "GetSupportsStacking", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInteractWidget_eventGetSupportsStacking_Parms), Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics
	{
		struct FGInteractWidget_eventGetUseGamepadCursor_Parms
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
	void Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInteractWidget_eventGetUseGamepadCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInteractWidget_eventGetUseGamepadCursor_Parms), &Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Getter for gamepad cursor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "GetUseGamepadCursor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInteractWidget_eventGetUseGamepadCursor_Parms), Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "Init", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_Init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_OnConsume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_OnConsume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_OnConsume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "OnConsume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_OnConsume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_OnConsume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_OnConsume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_OnConsume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_OnEscapePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_OnEscapePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_OnEscapePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "OnEscapePressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_OnEscapePressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_OnEscapePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_OnEscapePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_OnEscapePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics
	{
		struct FGInteractWidget_eventSetDefaultFocusWidget_Parms
		{
			UWidget* focusWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_focusWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_focusWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::NewProp_focusWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::NewProp_focusWidget = { UE4CodeGen_Private::EPropertyClass::Object, "focusWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGInteractWidget_eventSetDefaultFocusWidget_Parms, focusWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::NewProp_focusWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::NewProp_focusWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::NewProp_focusWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Sets default focuswidget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "SetDefaultFocusWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInteractWidget_eventSetDefaultFocusWidget_Parms), Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics
	{
		struct FGInteractWidget_eventSetDesiredAlignmentSize_Parms
		{
			FSlateChildSize newSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::NewProp_newSize = { UE4CodeGen_Private::EPropertyClass::Struct, "newSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInteractWidget_eventSetDesiredAlignmentSize_Parms, newSize), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::NewProp_newSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Sets the size we want" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "SetDesiredAlignmentSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInteractWidget_eventSetDesiredAlignmentSize_Parms), Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics
	{
		struct FGInteractWidget_eventSetDesiredHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> newAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::NewProp_newAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "newAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInteractWidget_eventSetDesiredHorizontalAlignment_Parms, newAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::NewProp_newAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Sets the alignment we want" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "SetDesiredHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInteractWidget_eventSetDesiredHorizontalAlignment_Parms), Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics
	{
		struct FGInteractWidget_eventSetDesiredVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> newAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::NewProp_newAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "newAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInteractWidget_eventSetDesiredVerticalAlignment_Parms, newAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::NewProp_newAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Sets the vertical alignment we want" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "SetDesiredVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGInteractWidget_eventSetDesiredVerticalAlignment_Parms), Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_SetInputMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_SetInputMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_SetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "SetInputMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_SetInputMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_SetInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_SetInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_SetupDefaultFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_SetupDefaultFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Sets up default focus for interact widgets ( usually given to the close button in the window" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_SetupDefaultFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "SetupDefaultFocus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_SetupDefaultFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_SetupDefaultFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_SetupDefaultFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_SetupDefaultFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreLookInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreLookInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreLookInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "UpdateIgnoreLookInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreLookInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreLookInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreLookInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreLookInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreMoveInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreMoveInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInteractWidget, "UpdateIgnoreMoveInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreMoveInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGInteractWidget_NoRegister()
	{
		return UFGInteractWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFGInteractWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSupportsStacking_MetaData[];
#endif
		static void NewProp_mSupportsStacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mSupportsStacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultFocusWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultFocusWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseGamepadCursor_MetaData[];
#endif
		static void NewProp_mUseGamepadCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseGamepadCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultFocusWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDefaultFocusWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInteractObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInteractObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDesiredAlignmentSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDesiredAlignmentSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDesiredVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mDesiredVerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDesiredHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mDesiredHorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInputToPassThrough_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mInputToPassThrough;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mInputToPassThrough_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRestoreFocusWhenLost_MetaData[];
#endif
		static void NewProp_mRestoreFocusWhenLost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mRestoreFocusWhenLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCaptureInput_MetaData[];
#endif
		static void NewProp_mCaptureInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCaptureInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseMouse_MetaData[];
#endif
		static void NewProp_mUseMouse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseMouse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseKeyboard_MetaData[];
#endif
		static void NewProp_mUseKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseKeyboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGInteractWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGInteractWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGInteractWidget_GetDefaultFocusWidget, "GetDefaultFocusWidget" }, // 1742893983
		{ &Z_Construct_UFunction_UFGInteractWidget_GetDesiredAlignmentSize, "GetDesiredAlignmentSize" }, // 2150083749
		{ &Z_Construct_UFunction_UFGInteractWidget_GetDesiredHorizontalAlignment, "GetDesiredHorizontalAlignment" }, // 2921820072
		{ &Z_Construct_UFunction_UFGInteractWidget_GetDesiredVerticalAlignment, "GetDesiredVerticalAlignment" }, // 3641402384
		{ &Z_Construct_UFunction_UFGInteractWidget_GetSupportsStacking, "GetSupportsStacking" }, // 1608012595
		{ &Z_Construct_UFunction_UFGInteractWidget_GetUseGamepadCursor, "GetUseGamepadCursor" }, // 2763903423
		{ &Z_Construct_UFunction_UFGInteractWidget_Init, "Init" }, // 4007766423
		{ &Z_Construct_UFunction_UFGInteractWidget_OnConsume, "OnConsume" }, // 4055762417
		{ &Z_Construct_UFunction_UFGInteractWidget_OnEscapePressed, "OnEscapePressed" }, // 3292266828
		{ &Z_Construct_UFunction_UFGInteractWidget_SetDefaultFocusWidget, "SetDefaultFocusWidget" }, // 368108027
		{ &Z_Construct_UFunction_UFGInteractWidget_SetDesiredAlignmentSize, "SetDesiredAlignmentSize" }, // 3230339048
		{ &Z_Construct_UFunction_UFGInteractWidget_SetDesiredHorizontalAlignment, "SetDesiredHorizontalAlignment" }, // 271134431
		{ &Z_Construct_UFunction_UFGInteractWidget_SetDesiredVerticalAlignment, "SetDesiredVerticalAlignment" }, // 2881523193
		{ &Z_Construct_UFunction_UFGInteractWidget_SetInputMode, "SetInputMode" }, // 2390683795
		{ &Z_Construct_UFunction_UFGInteractWidget_SetupDefaultFocus, "SetupDefaultFocus" }, // 4207765192
		{ &Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreLookInput, "UpdateIgnoreLookInput" }, // 534704463
		{ &Z_Construct_UFunction_UFGInteractWidget_UpdateIgnoreMoveInput, "UpdateIgnoreMoveInput" }, // 2985272582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGInteractWidget.h" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for all stackable widgets in the game." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mSupportsStacking_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Does this widget support stacking widgets on top?" },
	};
#endif
	void Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mSupportsStacking_SetBit(void* Obj)
	{
		((UFGInteractWidget*)Obj)->mSupportsStacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mSupportsStacking = { UE4CodeGen_Private::EPropertyClass::Bool, "mSupportsStacking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGInteractWidget), &Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mSupportsStacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mSupportsStacking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mSupportsStacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Used to give focus to an object when nothing else has focus" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidget = { UE4CodeGen_Private::EPropertyClass::Object, "mDefaultFocusWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UFGInteractWidget, mDefaultFocusWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseGamepadCursor_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Should gamepad act as cursor when using this widget?" },
	};
#endif
	void Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseGamepadCursor_SetBit(void* Obj)
	{
		((UFGInteractWidget*)Obj)->mUseGamepadCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseGamepadCursor = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseGamepadCursor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGInteractWidget), &Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseGamepadCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseGamepadCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseGamepadCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Class of the default widget we want to give focus to" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "mDefaultFocusWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000014001, 1, nullptr, STRUCT_OFFSET(UFGInteractWidget, mDefaultFocusWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInteractObject_MetaData[] = {
		{ "Category", "FGInteractWidget" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Object that we interacted with in order to show this widget ( can be nullPeter )" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInteractObject = { UE4CodeGen_Private::EPropertyClass::Object, "mInteractObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000004, 1, nullptr, STRUCT_OFFSET(UFGInteractWidget, mInteractObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInteractObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInteractObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredAlignmentSize_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Our desired horizontal size" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredAlignmentSize = { UE4CodeGen_Private::EPropertyClass::Struct, "mDesiredAlignmentSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGInteractWidget, mDesiredAlignmentSize), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredAlignmentSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredAlignmentSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredVerticalAlignment_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Our desired vetical alignment" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredVerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "mDesiredVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGInteractWidget, mDesiredVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredVerticalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredVerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredHorizontalAlignment_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Our desired horizontal alignment" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredHorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "mDesiredHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGInteractWidget, mDesiredHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredHorizontalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredHorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInputToPassThrough_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "@todo Some widgets do not want to eat any input so this list is filled manually with all actions in the game...\n There need to be a clear hierarchy of how input is handled and what to pass and not pass and if the default is pass all or pass none." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInputToPassThrough = { UE4CodeGen_Private::EPropertyClass::Array, "mInputToPassThrough", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UFGInteractWidget, mInputToPassThrough), METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInputToPassThrough_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInputToPassThrough_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInputToPassThrough_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "mInputToPassThrough", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mRestoreFocusWhenLost_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Decides if the widget should restore focus when it looses it. (e.g. when the user clicks outside of the widget)" },
	};
#endif
	void Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mRestoreFocusWhenLost_SetBit(void* Obj)
	{
		((UFGInteractWidget*)Obj)->mRestoreFocusWhenLost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mRestoreFocusWhenLost = { UE4CodeGen_Private::EPropertyClass::Bool, "mRestoreFocusWhenLost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGInteractWidget), &Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mRestoreFocusWhenLost_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mRestoreFocusWhenLost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mRestoreFocusWhenLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mCaptureInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "Decides if we should share input with game or capture it completely" },
	};
#endif
	void Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mCaptureInput_SetBit(void* Obj)
	{
		((UFGInteractWidget*)Obj)->mCaptureInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mCaptureInput = { UE4CodeGen_Private::EPropertyClass::Bool, "mCaptureInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGInteractWidget), &Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mCaptureInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mCaptureInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mCaptureInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseMouse_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "If we should take the mouse input from the player. The player won't be able to look around." },
	};
#endif
	void Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseMouse_SetBit(void* Obj)
	{
		((UFGInteractWidget*)Obj)->mUseMouse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseMouse = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseMouse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGInteractWidget), &Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseMouse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseMouse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseMouse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseKeyboard_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "UI/FGInteractWidget.h" },
		{ "ToolTip", "If we should take the keyboard input from the player. The player won't be able to move around." },
	};
#endif
	void Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseKeyboard_SetBit(void* Obj)
	{
		((UFGInteractWidget*)Obj)->mUseKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseKeyboard = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseKeyboard", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGInteractWidget), &Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseKeyboard_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseKeyboard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGInteractWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mSupportsStacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseGamepadCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDefaultFocusWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInteractObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredAlignmentSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredVerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mDesiredHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInputToPassThrough,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mInputToPassThrough_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mRestoreFocusWhenLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mCaptureInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseMouse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInteractWidget_Statics::NewProp_mUseKeyboard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGInteractWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGInteractWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGInteractWidget_Statics::ClassParams = {
		&UFGInteractWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGInteractWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGInteractWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGInteractWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGInteractWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGInteractWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGInteractWidget, 3935150617);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGInteractWidget(Z_Construct_UClass_UFGInteractWidget, &UFGInteractWidget::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGInteractWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGInteractWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
