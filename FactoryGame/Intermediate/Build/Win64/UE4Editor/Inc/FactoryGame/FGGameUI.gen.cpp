// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGGameUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameUI() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameUI_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameUI();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBaseUI();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_AddCheatWidget();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPopupWidget_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPopupData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_AddInteractWidget();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInteractWidget_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialHintData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_AddPawnHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_AddPendingMessage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageBase_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_CancelPressed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_CanReceiveMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_ClearHintOnTutorialStepCompleted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAudioMessage_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_GetPendingMessages();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_GetShowInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_HandleFocusLost();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_HandlePendingMessages();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_PopAllWidgets();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_ReceivedMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_RemoveAudioMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_RemovePawnHUD();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_SetShowInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon();
// End Cross Module References
	static FName NAME_UFGGameUI_AddCheatWidget = FName(TEXT("AddCheatWidget"));
	UFGPopupWidget* UFGGameUI::AddCheatWidget(FPopupData popupData)
	{
		FGGameUI_eventAddCheatWidget_Parms Parms;
		Parms.popupData=popupData;
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_AddCheatWidget),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFGGameUI_AddInteractWidget = FName(TEXT("AddInteractWidget"));
	void UFGGameUI::AddInteractWidget(UFGInteractWidget* widgetToAdd)
	{
		FGGameUI_eventAddInteractWidget_Parms Parms;
		Parms.widgetToAdd=widgetToAdd;
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_AddInteractWidget),&Parms);
	}
	static FName NAME_UFGGameUI_AddIntroTutorialInfo = FName(TEXT("AddIntroTutorialInfo"));
	void UFGGameUI::AddIntroTutorialInfo(FTutorialHintData tutorialHintData)
	{
		FGGameUI_eventAddIntroTutorialInfo_Parms Parms;
		Parms.tutorialHintData=tutorialHintData;
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_AddIntroTutorialInfo),&Parms);
	}
	static FName NAME_UFGGameUI_AddPawnHUD = FName(TEXT("AddPawnHUD"));
	void UFGGameUI::AddPawnHUD(UUserWidget* newContent)
	{
		FGGameUI_eventAddPawnHUD_Parms Parms;
		Parms.newContent=newContent;
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_AddPawnHUD),&Parms);
	}
	static FName NAME_UFGGameUI_CanReceiveMessage = FName(TEXT("CanReceiveMessage"));
	bool UFGGameUI::CanReceiveMessage(TSubclassOf<UFGMessageBase>  inMessage)
	{
		FGGameUI_eventCanReceiveMessage_Parms Parms;
		Parms.inMessage=inMessage;
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_CanReceiveMessage),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UFGGameUI_ClearHintOnTutorialStepCompleted = FName(TEXT("ClearHintOnTutorialStepCompleted"));
	void UFGGameUI::ClearHintOnTutorialStepCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_ClearHintOnTutorialStepCompleted),NULL);
	}
	static FName NAME_UFGGameUI_HandleFocusLost = FName(TEXT("HandleFocusLost"));
	void UFGGameUI::HandleFocusLost()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_HandleFocusLost),NULL);
	}
	static FName NAME_UFGGameUI_HandlePendingMessages = FName(TEXT("HandlePendingMessages"));
	void UFGGameUI::HandlePendingMessages()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_HandlePendingMessages),NULL);
	}
	static FName NAME_UFGGameUI_PopAllWidgets = FName(TEXT("PopAllWidgets"));
	void UFGGameUI::PopAllWidgets()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_PopAllWidgets),NULL);
	}
	static FName NAME_UFGGameUI_ReceivedMessage = FName(TEXT("ReceivedMessage"));
	void UFGGameUI::ReceivedMessage(TSubclassOf<UFGMessageBase>  inMessage)
	{
		FGGameUI_eventReceivedMessage_Parms Parms;
		Parms.inMessage=inMessage;
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_ReceivedMessage),&Parms);
	}
	static FName NAME_UFGGameUI_RemoveAudioMessage = FName(TEXT("RemoveAudioMessage"));
	void UFGGameUI::RemoveAudioMessage()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_RemoveAudioMessage),NULL);
	}
	static FName NAME_UFGGameUI_RemovePawnHUD = FName(TEXT("RemovePawnHUD"));
	void UFGGameUI::RemovePawnHUD()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGGameUI_RemovePawnHUD),NULL);
	}
	void UFGGameUI::StaticRegisterNativesUFGGameUI()
	{
		UClass* Class = UFGGameUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInteractWidget", &UFGGameUI::execAddInteractWidget },
			{ "AddPendingMessage", &UFGGameUI::execAddPendingMessage },
			{ "CancelPressed", &UFGGameUI::execCancelPressed },
			{ "CanReceiveMessage", &UFGGameUI::execCanReceiveMessage },
			{ "GetCurrentAudioMessage", &UFGGameUI::execGetCurrentAudioMessage },
			{ "GetInteractWidgetStack", &UFGGameUI::execGetInteractWidgetStack },
			{ "GetPendingMessages", &UFGGameUI::execGetPendingMessages },
			{ "GetShowInventory", &UFGGameUI::execGetShowInventory },
			{ "GetWindowWantsInventoryAddon", &UFGGameUI::execGetWindowWantsInventoryAddon },
			{ "HandlePendingMessages", &UFGGameUI::execHandlePendingMessages },
			{ "PopAllWidgets", &UFGGameUI::execPopAllWidgets },
			{ "RemoveAudioMessage", &UFGGameUI::execRemoveAudioMessage },
			{ "RemoveInteractWidget", &UFGGameUI::execRemoveInteractWidget },
			{ "SetCurrentAudioMessage", &UFGGameUI::execSetCurrentAudioMessage },
			{ "SetShowInventory", &UFGGameUI::execSetShowInventory },
			{ "SetWindowWantsInventoryAddon", &UFGGameUI::execSetWindowWantsInventoryAddon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventAddCheatWidget_Parms, ReturnValue), Z_Construct_UClass_UFGPopupWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::NewProp_popupData = { UE4CodeGen_Private::EPropertyClass::Struct, "popupData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventAddCheatWidget_Parms, popupData), Z_Construct_UScriptStruct_FPopupData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::NewProp_popupData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Adds the cheat widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "AddCheatWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(FGGameUI_eventAddCheatWidget_Parms), Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_AddCheatWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_AddCheatWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widgetToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::NewProp_widgetToAdd_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::NewProp_widgetToAdd = { UE4CodeGen_Private::EPropertyClass::Object, "widgetToAdd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventAddInteractWidget_Parms, widgetToAdd), Z_Construct_UClass_UFGInteractWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::NewProp_widgetToAdd_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::NewProp_widgetToAdd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::NewProp_widgetToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Adds to the stack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "AddInteractWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(FGGameUI_eventAddInteractWidget_Parms), Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_AddInteractWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_AddInteractWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tutorialHintData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::NewProp_tutorialHintData = { UE4CodeGen_Private::EPropertyClass::Struct, "tutorialHintData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventAddIntroTutorialInfo_Parms, tutorialHintData), Z_Construct_UScriptStruct_FTutorialHintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::NewProp_tutorialHintData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Adds new tutorial info to be displayed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "AddIntroTutorialInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGGameUI_eventAddIntroTutorialInfo_Parms), Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::NewProp_newContent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::NewProp_newContent = { UE4CodeGen_Private::EPropertyClass::Object, "newContent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventAddPawnHUD_Parms, newContent), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::NewProp_newContent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::NewProp_newContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::NewProp_newContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Allow the gameUI to add pawn specific HUD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "AddPawnHUD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(FGGameUI_eventAddPawnHUD_Parms), Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_AddPawnHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_AddPawnHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics
	{
		struct FGGameUI_eventAddPendingMessage_Parms
		{
			TSubclassOf<UFGMessageBase>  newMessage;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_newMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::NewProp_newMessage = { UE4CodeGen_Private::EPropertyClass::Class, "newMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventAddPendingMessage_Parms, newMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::NewProp_newMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Adds a new message to the pending message array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "AddPendingMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameUI_eventAddPendingMessage_Parms), Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_AddPendingMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_AddPendingMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_CancelPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_CancelPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Called from ingame when the cancel key ( escape ) was pressed when no widget has focus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_CancelPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "CancelPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_CancelPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_CancelPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_CancelPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_CancelPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameUI_eventCanReceiveMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameUI_eventCanReceiveMessage_Parms), &Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::NewProp_inMessage = { UE4CodeGen_Private::EPropertyClass::Class, "inMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventCanReceiveMessage_Parms, inMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Is this a good time to get a message?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "CanReceiveMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGGameUI_eventCanReceiveMessage_Parms), Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_CanReceiveMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_CanReceiveMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_ClearHintOnTutorialStepCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_ClearHintOnTutorialStepCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Called when we update our current objective but are waiting to show the next" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_ClearHintOnTutorialStepCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "ClearHintOnTutorialStepCompleted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_ClearHintOnTutorialStepCompleted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_ClearHintOnTutorialStepCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_ClearHintOnTutorialStepCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_ClearHintOnTutorialStepCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics
	{
		struct FGGameUI_eventGetCurrentAudioMessage_Parms
		{
			UFGAudioMessage* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventGetCurrentAudioMessage_Parms, ReturnValue), Z_Construct_UClass_UFGAudioMessage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Gets the current audio message being played ( can be null )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "GetCurrentAudioMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGGameUI_eventGetCurrentAudioMessage_Parms), Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics
	{
		struct FGGameUI_eventGetInteractWidgetStack_Parms
		{
			TArray<UFGInteractWidget*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000588, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventGetInteractWidgetStack_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UFGInteractWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Returnswidget stack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "GetInteractWidgetStack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGGameUI_eventGetInteractWidgetStack_Parms), Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics
	{
		struct FGGameUI_eventGetPendingMessages_Parms
		{
			TArray<TSubclassOf<UFGMessageBase> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventGetPendingMessages_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Returnswidget array with pending messages" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "GetPendingMessages", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGGameUI_eventGetPendingMessages_Parms), Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_GetPendingMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_GetPendingMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics
	{
		struct FGGameUI_eventGetShowInventory_Parms
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
	void Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameUI_eventGetShowInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameUI_eventGetShowInventory_Parms), &Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Getter for mShowInventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "GetShowInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGGameUI_eventGetShowInventory_Parms), Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_GetShowInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_GetShowInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics
	{
		struct FGGameUI_eventGetWindowWantsInventoryAddon_Parms
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
	void Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameUI_eventGetWindowWantsInventoryAddon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameUI_eventGetWindowWantsInventoryAddon_Parms), &Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Getter for mWindowWantInventoryAddon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "GetWindowWantsInventoryAddon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGGameUI_eventGetWindowWantsInventoryAddon_Parms), Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_HandleFocusLost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_HandleFocusLost_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Event received when the focus has been lost to the viewport. Probably because a mouse button was pressed in \"nothing\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_HandleFocusLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "HandleFocusLost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_HandleFocusLost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_HandleFocusLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_HandleFocusLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_HandleFocusLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_HandlePendingMessages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_HandlePendingMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Handle pending messages and push them at appropriate time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_HandlePendingMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "HandlePendingMessages", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_HandlePendingMessages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_HandlePendingMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_HandlePendingMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_HandlePendingMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_PopAllWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_PopAllWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Closes down all interact widgets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_PopAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "PopAllWidgets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_PopAllWidgets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_PopAllWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_PopAllWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_PopAllWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::NewProp_inMessage = { UE4CodeGen_Private::EPropertyClass::Class, "inMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventReceivedMessage_Parms, inMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Handle message. Usually grabbed from the pending message list at appropriate time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "ReceivedMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGGameUI_eventReceivedMessage_Parms), Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_ReceivedMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_ReceivedMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_RemoveAudioMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_RemoveAudioMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Removes the audio message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_RemoveAudioMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "RemoveAudioMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_RemoveAudioMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_RemoveAudioMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_RemoveAudioMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_RemoveAudioMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics
	{
		struct FGGameUI_eventRemoveInteractWidget_Parms
		{
			UFGInteractWidget* widgetToRemove;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widgetToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::NewProp_widgetToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::NewProp_widgetToRemove = { UE4CodeGen_Private::EPropertyClass::Object, "widgetToRemove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventRemoveInteractWidget_Parms, widgetToRemove), Z_Construct_UClass_UFGInteractWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::NewProp_widgetToRemove_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::NewProp_widgetToRemove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::NewProp_widgetToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Removes from the stack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "RemoveInteractWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameUI_eventRemoveInteractWidget_Parms), Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_RemovePawnHUD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_RemovePawnHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Allow the gameUI to remove pawn specific HUD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_RemovePawnHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "RemovePawnHUD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_RemovePawnHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_RemovePawnHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_RemovePawnHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_RemovePawnHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics
	{
		struct FGGameUI_eventSetCurrentAudioMessage_Parms
		{
			UFGAudioMessage* newMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::NewProp_newMessage_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::NewProp_newMessage = { UE4CodeGen_Private::EPropertyClass::Object, "newMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGGameUI_eventSetCurrentAudioMessage_Parms, newMessage), Z_Construct_UClass_UFGAudioMessage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::NewProp_newMessage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::NewProp_newMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::NewProp_newMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Sets the current audio message being played" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "SetCurrentAudioMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameUI_eventSetCurrentAudioMessage_Parms), Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics
	{
		struct FGGameUI_eventSetShowInventory_Parms
		{
			bool doShow;
		};
		static void NewProp_doShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_doShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::NewProp_doShow_SetBit(void* Obj)
	{
		((FGGameUI_eventSetShowInventory_Parms*)Obj)->doShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::NewProp_doShow = { UE4CodeGen_Private::EPropertyClass::Bool, "doShow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameUI_eventSetShowInventory_Parms), &Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::NewProp_doShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::NewProp_doShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Setter for show inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "SetShowInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameUI_eventSetShowInventory_Parms), Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_SetShowInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_SetShowInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics
	{
		struct FGGameUI_eventSetWindowWantsInventoryAddon_Parms
		{
			bool doWantAddon;
		};
		static void NewProp_doWantAddon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_doWantAddon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::NewProp_doWantAddon_SetBit(void* Obj)
	{
		((FGGameUI_eventSetWindowWantsInventoryAddon_Parms*)Obj)->doWantAddon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::NewProp_doWantAddon = { UE4CodeGen_Private::EPropertyClass::Bool, "doWantAddon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameUI_eventSetWindowWantsInventoryAddon_Parms), &Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::NewProp_doWantAddon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::NewProp_doWantAddon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Setter form WindowWantInventoryAddon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameUI, "SetWindowWantsInventoryAddon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameUI_eventSetWindowWantsInventoryAddon_Parms), Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGGameUI_NoRegister()
	{
		return UFGGameUI::StaticClass();
	}
	struct Z_Construct_UClass_UFGGameUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinTimeBetweenAudioMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinTimeBetweenAudioMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentAudioMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurrentAudioMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInteractWidgetStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mInteractWidgetStack;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInteractWidgetStack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGameUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBaseUI,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGGameUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGGameUI_AddCheatWidget, "AddCheatWidget" }, // 23970937
		{ &Z_Construct_UFunction_UFGGameUI_AddInteractWidget, "AddInteractWidget" }, // 1126429690
		{ &Z_Construct_UFunction_UFGGameUI_AddIntroTutorialInfo, "AddIntroTutorialInfo" }, // 3673567723
		{ &Z_Construct_UFunction_UFGGameUI_AddPawnHUD, "AddPawnHUD" }, // 633781530
		{ &Z_Construct_UFunction_UFGGameUI_AddPendingMessage, "AddPendingMessage" }, // 4195854804
		{ &Z_Construct_UFunction_UFGGameUI_CancelPressed, "CancelPressed" }, // 1120788338
		{ &Z_Construct_UFunction_UFGGameUI_CanReceiveMessage, "CanReceiveMessage" }, // 3500407022
		{ &Z_Construct_UFunction_UFGGameUI_ClearHintOnTutorialStepCompleted, "ClearHintOnTutorialStepCompleted" }, // 4221685688
		{ &Z_Construct_UFunction_UFGGameUI_GetCurrentAudioMessage, "GetCurrentAudioMessage" }, // 2637898253
		{ &Z_Construct_UFunction_UFGGameUI_GetInteractWidgetStack, "GetInteractWidgetStack" }, // 2298096566
		{ &Z_Construct_UFunction_UFGGameUI_GetPendingMessages, "GetPendingMessages" }, // 3438905044
		{ &Z_Construct_UFunction_UFGGameUI_GetShowInventory, "GetShowInventory" }, // 3687008061
		{ &Z_Construct_UFunction_UFGGameUI_GetWindowWantsInventoryAddon, "GetWindowWantsInventoryAddon" }, // 1139155527
		{ &Z_Construct_UFunction_UFGGameUI_HandleFocusLost, "HandleFocusLost" }, // 3999096934
		{ &Z_Construct_UFunction_UFGGameUI_HandlePendingMessages, "HandlePendingMessages" }, // 203288894
		{ &Z_Construct_UFunction_UFGGameUI_PopAllWidgets, "PopAllWidgets" }, // 2484484686
		{ &Z_Construct_UFunction_UFGGameUI_ReceivedMessage, "ReceivedMessage" }, // 84262149
		{ &Z_Construct_UFunction_UFGGameUI_RemoveAudioMessage, "RemoveAudioMessage" }, // 1146092044
		{ &Z_Construct_UFunction_UFGGameUI_RemoveInteractWidget, "RemoveInteractWidget" }, // 430318774
		{ &Z_Construct_UFunction_UFGGameUI_RemovePawnHUD, "RemovePawnHUD" }, // 929110746
		{ &Z_Construct_UFunction_UFGGameUI_SetCurrentAudioMessage, "SetCurrentAudioMessage" }, // 3426185970
		{ &Z_Construct_UFunction_UFGGameUI_SetShowInventory, "SetShowInventory" }, // 2835562469
		{ &Z_Construct_UFunction_UFGGameUI_SetWindowWantsInventoryAddon, "SetWindowWantsInventoryAddon" }, // 3909579285
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGGameUI.h" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Base class for all inventory widgets, contains a lot of helper functions to extract\ninteresting information buildings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameUI_Statics::NewProp_mMinTimeBetweenAudioMessage_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "How much time must pass between receiving audio messages at least?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGGameUI_Statics::NewProp_mMinTimeBetweenAudioMessage = { UE4CodeGen_Private::EPropertyClass::Float, "mMinTimeBetweenAudioMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UFGGameUI, mMinTimeBetweenAudioMessage), METADATA_PARAMS(Z_Construct_UClass_UFGGameUI_Statics::NewProp_mMinTimeBetweenAudioMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameUI_Statics::NewProp_mMinTimeBetweenAudioMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameUI_Statics::NewProp_mCurrentAudioMessage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "Message that is being played now ( can be null )" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGGameUI_Statics::NewProp_mCurrentAudioMessage = { UE4CodeGen_Private::EPropertyClass::Object, "mCurrentAudioMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UFGGameUI, mCurrentAudioMessage), Z_Construct_UClass_UFGAudioMessage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGGameUI_Statics::NewProp_mCurrentAudioMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameUI_Statics::NewProp_mCurrentAudioMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameUI_Statics::NewProp_mInteractWidgetStack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGGameUI.h" },
		{ "ToolTip", "A stack with widgets that are currently open" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGGameUI_Statics::NewProp_mInteractWidgetStack = { UE4CodeGen_Private::EPropertyClass::Array, "mInteractWidgetStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UFGGameUI, mInteractWidgetStack), METADATA_PARAMS(Z_Construct_UClass_UFGGameUI_Statics::NewProp_mInteractWidgetStack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameUI_Statics::NewProp_mInteractWidgetStack_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGGameUI_Statics::NewProp_mInteractWidgetStack_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mInteractWidgetStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UFGInteractWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGGameUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameUI_Statics::NewProp_mMinTimeBetweenAudioMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameUI_Statics::NewProp_mCurrentAudioMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameUI_Statics::NewProp_mInteractWidgetStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameUI_Statics::NewProp_mInteractWidgetStack_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGameUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGameUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGameUI_Statics::ClassParams = {
		&UFGGameUI::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGGameUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGGameUI_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGGameUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGGameUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGameUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGameUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGameUI, 3247753045);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGameUI(Z_Construct_UClass_UFGGameUI, &UFGGameUI::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGGameUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGameUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
