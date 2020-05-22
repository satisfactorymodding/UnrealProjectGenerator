// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/UI/Message/FGAudioMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAudioMessage() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSubtitlePair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageSender_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAudioMessage_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAudioMessage();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageBase();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAudioMessage_CancelPlayback();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAudioMessage_ContinuePlayback();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAudioMessage_GetMessageText();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAudioMessage_GetOverrideText();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAudioMessage_PlayNextDialogue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAudioMessage_StartPlayback();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "AudioMessageConcludedDelegate__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAudioSubtitlePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FAudioSubtitlePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioSubtitlePair, Z_Construct_UPackage__Script_FactoryGame(), TEXT("AudioSubtitlePair"), sizeof(FAudioSubtitlePair), Get_Z_Construct_UScriptStruct_FAudioSubtitlePair_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FAudioSubtitlePair>()
{
	return FAudioSubtitlePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioSubtitlePair(FAudioSubtitlePair::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("AudioSubtitlePair"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFAudioSubtitlePair
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFAudioSubtitlePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioSubtitlePair")),new UScriptStruct::TCppStructOps<FAudioSubtitlePair>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFAudioSubtitlePair;
	struct Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenderClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioSubtitlePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_SenderClass_MetaData[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Sender for this part of message" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_SenderClass = { "SenderClass", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioSubtitlePair, SenderClass), Z_Construct_UClass_UFGMessageSender_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_SenderClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_SenderClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Subtitle to display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioSubtitlePair, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_Subtitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_AudioEvent_MetaData[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Audio to play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioSubtitlePair, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_AudioEvent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_AudioEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_SenderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::NewProp_AudioEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"AudioSubtitlePair",
		sizeof(FAudioSubtitlePair),
		alignof(FAudioSubtitlePair),
		Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioSubtitlePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioSubtitlePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioSubtitlePair"), sizeof(FAudioSubtitlePair), Get_Z_Construct_UScriptStruct_FAudioSubtitlePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioSubtitlePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioSubtitlePair_Hash() { return 2383769545U; }
	static FName NAME_UFGAudioMessage_GetMessageText = FName(TEXT("GetMessageText"));
	FText UFGAudioMessage::GetMessageText()
	{
		FGAudioMessage_eventGetMessageText_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFGAudioMessage_GetMessageText),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFGAudioMessage_PlayNextDialogue = FName(TEXT("PlayNextDialogue"));
	void UFGAudioMessage::PlayNextDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGAudioMessage_PlayNextDialogue),NULL);
	}
	void UFGAudioMessage::StaticRegisterNativesUFGAudioMessage()
	{
		UClass* Class = UFGAudioMessage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignOnConcludedDelegate", &UFGAudioMessage::execAssignOnConcludedDelegate },
			{ "CancelPlayback", &UFGAudioMessage::execCancelPlayback },
			{ "ContinuePlayback", &UFGAudioMessage::execContinuePlayback },
			{ "GetCurrentDialogue", &UFGAudioMessage::execGetCurrentDialogue },
			{ "GetOverrideText", &UFGAudioMessage::execGetOverrideText },
			{ "PlayNextDialogue", &UFGAudioMessage::execPlayNextDialogue },
			{ "ShowOnlyOverrideText", &UFGAudioMessage::execShowOnlyOverrideText },
			{ "StartPlayback", &UFGAudioMessage::execStartPlayback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics
	{
		struct FGAudioMessage_eventAssignOnConcludedDelegate_Parms
		{
			FScriptDelegate concludedDelegate;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_concludedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::NewProp_concludedDelegate = { "concludedDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAudioMessage_eventAssignOnConcludedDelegate_Parms, concludedDelegate), Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::NewProp_concludedDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioMessage" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAudioMessage, nullptr, "AssignOnConcludedDelegate", sizeof(FGAudioMessage_eventAssignOnConcludedDelegate_Parms), Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAudioMessage_CancelPlayback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAudioMessage_CancelPlayback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Removes all unplayed dialogues and stops the current one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAudioMessage_CancelPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAudioMessage, nullptr, "CancelPlayback", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAudioMessage_CancelPlayback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_CancelPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAudioMessage_CancelPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAudioMessage_CancelPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAudioMessage_ContinuePlayback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAudioMessage_ContinuePlayback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Continues playing next dialoge in the mDialogue array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAudioMessage_ContinuePlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAudioMessage, nullptr, "ContinuePlayback", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAudioMessage_ContinuePlayback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_ContinuePlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAudioMessage_ContinuePlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAudioMessage_ContinuePlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics
	{
		struct FGAudioMessage_eventGetCurrentDialogue_Parms
		{
			FAudioSubtitlePair ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAudioMessage_eventGetCurrentDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioSubtitlePair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Gets current dialogue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAudioMessage, nullptr, "GetCurrentDialogue", sizeof(FGAudioMessage_eventGetCurrentDialogue_Parms), Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAudioMessage_eventGetMessageText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Gets the message text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAudioMessage, nullptr, "GetMessageText", sizeof(FGAudioMessage_eventGetMessageText_Parms), Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAudioMessage_GetMessageText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAudioMessage_GetMessageText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics
	{
		struct FGAudioMessage_eventGetOverrideText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAudioMessage_eventGetOverrideText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Gets the message text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAudioMessage, nullptr, "GetOverrideText", sizeof(FGAudioMessage_eventGetOverrideText_Parms), Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAudioMessage_GetOverrideText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAudioMessage_GetOverrideText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAudioMessage_PlayNextDialogue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAudioMessage_PlayNextDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioMessage" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Does the setup for playing next part in the dialogue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAudioMessage_PlayNextDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAudioMessage, nullptr, "PlayNextDialogue", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAudioMessage_PlayNextDialogue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_PlayNextDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAudioMessage_PlayNextDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAudioMessage_PlayNextDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics
	{
		struct FGAudioMessage_eventShowOnlyOverrideText_Parms
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
	void Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGAudioMessage_eventShowOnlyOverrideText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGAudioMessage_eventShowOnlyOverrideText_Parms), &Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Do we want to show only the override text or the subtitle also?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAudioMessage, nullptr, "ShowOnlyOverrideText", sizeof(FGAudioMessage_eventShowOnlyOverrideText_Parms), Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAudioMessage_StartPlayback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAudioMessage_StartPlayback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Starts playing the first dialogue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAudioMessage_StartPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAudioMessage, nullptr, "StartPlayback", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAudioMessage_StartPlayback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAudioMessage_StartPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAudioMessage_StartPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAudioMessage_StartPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGAudioMessage_NoRegister()
	{
		return UFGAudioMessage::StaticClass();
	}
	struct Z_Construct_UClass_UFGAudioMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAudioMessageInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAudioMessageInputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAudioMessageConcluded_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_mAudioMessageConcluded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShowOnlyOverrideText_MetaData[];
#endif
		static void NewProp_mShowOnlyOverrideText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShowOnlyOverrideText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOverrideText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mOverrideText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSubtitleTimeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSubtitleTimeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentDialogue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCurrentDialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAudioEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAudioEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mAudioEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAkAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAkAudioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAudioMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGMessageBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGAudioMessage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGAudioMessage_AssignOnConcludedDelegate, "AssignOnConcludedDelegate" }, // 1663975092
		{ &Z_Construct_UFunction_UFGAudioMessage_CancelPlayback, "CancelPlayback" }, // 3660946907
		{ &Z_Construct_UFunction_UFGAudioMessage_ContinuePlayback, "ContinuePlayback" }, // 3163633784
		{ &Z_Construct_UFunction_UFGAudioMessage_GetCurrentDialogue, "GetCurrentDialogue" }, // 3197636824
		{ &Z_Construct_UFunction_UFGAudioMessage_GetMessageText, "GetMessageText" }, // 3194847114
		{ &Z_Construct_UFunction_UFGAudioMessage_GetOverrideText, "GetOverrideText" }, // 3719258886
		{ &Z_Construct_UFunction_UFGAudioMessage_PlayNextDialogue, "PlayNextDialogue" }, // 267788365
		{ &Z_Construct_UFunction_UFGAudioMessage_ShowOnlyOverrideText, "ShowOnlyOverrideText" }, // 3538439329
		{ &Z_Construct_UFunction_UFGAudioMessage_StartPlayback, "StartPlayback" }, // 4286661627
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAudioMessage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Message/FGAudioMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageInputComponent = { "mAudioMessageInputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAudioMessage, mAudioMessageInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageInputComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageConcluded_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageConcluded = { "mAudioMessageConcluded", nullptr, (EPropertyFlags)0x0040000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAudioMessage, mAudioMessageConcluded), Z_Construct_UDelegateFunction_FactoryGame_AudioMessageConcludedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageConcluded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageConcluded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mShowOnlyOverrideText_MetaData[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Multiplier for time per character to display" },
	};
#endif
	void Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mShowOnlyOverrideText_SetBit(void* Obj)
	{
		((UFGAudioMessage*)Obj)->mShowOnlyOverrideText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mShowOnlyOverrideText = { "mShowOnlyOverrideText", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGAudioMessage), &Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mShowOnlyOverrideText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mShowOnlyOverrideText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mShowOnlyOverrideText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mOverrideText_MetaData[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that can be displayed instead for (or added to) subtitle text when displaying the message" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mOverrideText = { "mOverrideText", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAudioMessage, mOverrideText), METADATA_PARAMS(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mOverrideText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mOverrideText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mSubtitleTimeMultiplier_MetaData[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Multiplier for time per character to display" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mSubtitleTimeMultiplier = { "mSubtitleTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAudioMessage, mSubtitleTimeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mSubtitleTimeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mSubtitleTimeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mCurrentDialogue_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "Current dialogue that is displayed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mCurrentDialogue = { "mCurrentDialogue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAudioMessage, mCurrentDialogue), Z_Construct_UScriptStruct_FAudioSubtitlePair, METADATA_PARAMS(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mCurrentDialogue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mCurrentDialogue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioEvents_MetaData[] = {
		{ "Category", "Audio Message" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "The AK audio to play when \"showing\" this message" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioEvents = { "mAudioEvents", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAudioMessage, mAudioEvents), METADATA_PARAMS(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioEvents_Inner = { "mAudioEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioSubtitlePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAkAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Message/FGAudioMessage.h" },
		{ "ToolTip", "The Ak component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAkAudioComponent = { "mAkAudioComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAudioMessage, mAkAudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAkAudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAkAudioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAudioMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioMessageConcluded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mShowOnlyOverrideText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mOverrideText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mSubtitleTimeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mCurrentDialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAudioEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAudioMessage_Statics::NewProp_mAkAudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAudioMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAudioMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAudioMessage_Statics::ClassParams = {
		&UFGAudioMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGAudioMessage_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGAudioMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAudioMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAudioMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAudioMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAudioMessage, 2421288536);
	template<> FACTORYGAME_API UClass* StaticClass<UFGAudioMessage>()
	{
		return UFGAudioMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAudioMessage(Z_Construct_UClass_UFGAudioMessage, &UFGAudioMessage::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAudioMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAudioMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
