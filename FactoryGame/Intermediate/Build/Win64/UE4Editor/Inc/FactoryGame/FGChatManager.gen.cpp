// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGChatManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGChatManager() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFGChatMessageType();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FChatMessageStruct();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerState_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGChatManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGChatManager();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChatManager_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChatManager_GetChatMessageColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChatManager_GetChatMessageName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "ChatMessageAdded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EFGChatMessageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EFGChatMessageType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EFGChatMessageType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFGChatMessageType(EFGChatMessageType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EFGChatMessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EFGChatMessageType_CRC() { return 3593244759U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EFGChatMessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFGChatMessageType"), 0, Get_Z_Construct_UEnum_FactoryGame_EFGChatMessageType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFGChatMessageType::CMT_PlayerMessage", (int64)EFGChatMessageType::CMT_PlayerMessage },
				{ "EFGChatMessageType::CMT_SystemMessage", (int64)EFGChatMessageType::CMT_SystemMessage },
				{ "EFGChatMessageType::CMT_AdaMessage", (int64)EFGChatMessageType::CMT_AdaMessage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FGChatManager.h" },
				{ "ToolTip", "This is the struct for the messages that are displayed in the chat" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFGChatMessageType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFGChatMessageType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FChatMessageStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FChatMessageStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatMessageStruct, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ChatMessageStruct"), sizeof(FChatMessageStruct), Get_Z_Construct_UScriptStruct_FChatMessageStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatMessageStruct(FChatMessageStruct::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ChatMessageStruct"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFChatMessageStruct
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFChatMessageStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChatMessageStruct")),new UScriptStruct::TCppStructOps<FChatMessageStruct>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFChatMessageStruct;
	struct Z_Construct_UScriptStruct_FChatMessageStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MessageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessageStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatMessageStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType = { UE4CodeGen_Private::EPropertyClass::Enum, "MessageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChatMessageStruct, MessageType), Z_Construct_UEnum_FactoryGame_EFGChatMessageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_Sender_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "The player who sent the message" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_Sender = { UE4CodeGen_Private::EPropertyClass::Object, "Sender", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChatMessageStruct, Sender), Z_Construct_UClass_AFGPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_Sender_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_Sender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_ServerTimeStamp_MetaData[] = {
		{ "Category", "ChatMessageStruct" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "Synchronized time stamp of when the message was sent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_ServerTimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "ServerTimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FChatMessageStruct, ServerTimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_ServerTimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_ServerTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageString_MetaData[] = {
		{ "Category", "ChatMessageStruct" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "The message that was sent" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageString = { UE4CodeGen_Private::EPropertyClass::Str, "MessageString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FChatMessageStruct, MessageString), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatMessageStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_Sender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_ServerTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ChatMessageStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FChatMessageStruct),
		alignof(FChatMessageStruct),
		Z_Construct_UScriptStruct_FChatMessageStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatMessageStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatMessageStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatMessageStruct"), sizeof(FChatMessageStruct), Get_Z_Construct_UScriptStruct_FChatMessageStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatMessageStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatMessageStruct_CRC() { return 1008606581U; }
	static FName NAME_AFGChatManager_Multicast_BroadcastChatMessage = FName(TEXT("Multicast_BroadcastChatMessage"));
	void AFGChatManager::Multicast_BroadcastChatMessage(FChatMessageStruct const& newMessage)
	{
		FGChatManager_eventMulticast_BroadcastChatMessage_Parms Parms;
		Parms.newMessage=newMessage;
		ProcessEvent(FindFunctionChecked(NAME_AFGChatManager_Multicast_BroadcastChatMessage),&Parms);
	}
	void AFGChatManager::StaticRegisterNativesAFGChatManager()
	{
		UClass* Class = AFGChatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &AFGChatManager::execGet },
			{ "GetChatMessageColor", &AFGChatManager::execGetChatMessageColor },
			{ "GetChatMessageName", &AFGChatManager::execGetChatMessageName },
			{ "GetMaxNumMessagesInHistory", &AFGChatManager::execGetMaxNumMessagesInHistory },
			{ "GetMessageVisibleDuration", &AFGChatManager::execGetMessageVisibleDuration },
			{ "GetReceivedChatMessages", &AFGChatManager::execGetReceivedChatMessages },
			{ "Multicast_BroadcastChatMessage", &AFGChatManager::execMulticast_BroadcastChatMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGChatManager_Get_Statics
	{
		struct FGChatManager_eventGet_Parms
		{
			UObject* worldContext;
			AFGChatManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGChatManager_Get_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGChatManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGChatManager_Get_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetChatManager" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "Get the chat manager from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, "Get", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGChatManager_eventGet_Parms), Z_Construct_UFunction_AFGChatManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Get_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChatManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChatManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics
	{
		struct FGChatManager_eventGetChatMessageColor_Parms
		{
			FChatMessageStruct inMessage;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventGetChatMessageColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_inMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_inMessage = { UE4CodeGen_Private::EPropertyClass::Struct, "inMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventGetChatMessageColor_Parms, inMessage), Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_inMessage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_inMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, "GetChatMessageColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(FGChatManager_eventGetChatMessageColor_Parms), Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChatManager_GetChatMessageColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics
	{
		struct FGChatManager_eventGetChatMessageName_Parms
		{
			FChatMessageStruct inMessage;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventGetChatMessageName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_inMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_inMessage = { UE4CodeGen_Private::EPropertyClass::Struct, "inMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventGetChatMessageName_Parms, inMessage), Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_inMessage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_inMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, "GetChatMessageName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGChatManager_eventGetChatMessageName_Parms), Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChatManager_GetChatMessageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics
	{
		struct FGChatManager_eventGetMaxNumMessagesInHistory_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventGetMaxNumMessagesInHistory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, "GetMaxNumMessagesInHistory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGChatManager_eventGetMaxNumMessagesInHistory_Parms), Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics
	{
		struct FGChatManager_eventGetMessageVisibleDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventGetMessageVisibleDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, "GetMessageVisibleDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGChatManager_eventGetMessageVisibleDuration_Parms), Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics
	{
		struct FGChatManager_eventGetReceivedChatMessages_Parms
		{
			TArray<FChatMessageStruct> out_messages;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_messages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_messages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::NewProp_out_messages = { UE4CodeGen_Private::EPropertyClass::Array, "out_messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventGetReceivedChatMessages_Parms, out_messages), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::NewProp_out_messages_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::NewProp_out_messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::NewProp_out_messages_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, "GetReceivedChatMessages", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44420401, sizeof(FGChatManager_eventGetReceivedChatMessages_Parms), Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::NewProp_newMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::NewProp_newMessage = { UE4CodeGen_Private::EPropertyClass::Struct, "newMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000082, 1, nullptr, STRUCT_OFFSET(FGChatManager_eventMulticast_BroadcastChatMessage_Parms, newMessage), Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::NewProp_newMessage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::NewProp_newMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::NewProp_newMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "Broadcast a chat message to all clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, "Multicast_BroadcastChatMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, sizeof(FGChatManager_eventMulticast_BroadcastChatMessage_Parms), Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGChatManager_NoRegister()
	{
		return AFGChatManager::StaticClass();
	}
	struct Z_Construct_UClass_AFGChatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReceivedMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mReceivedMessages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mReceivedMessages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMessageVisibleDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMessageVisibleDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxNumMessagesInHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxNumMessagesInHistory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChatMessageAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatMessageAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGChatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGChatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGChatManager_Get, "Get" }, // 3623294805
		{ &Z_Construct_UFunction_AFGChatManager_GetChatMessageColor, "GetChatMessageColor" }, // 252808959
		{ &Z_Construct_UFunction_AFGChatManager_GetChatMessageName, "GetChatMessageName" }, // 1490412530
		{ &Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory, "GetMaxNumMessagesInHistory" }, // 3328315224
		{ &Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration, "GetMessageVisibleDuration" }, // 3141935422
		{ &Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages, "GetReceivedChatMessages" }, // 928949700
		{ &Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage, "Multicast_BroadcastChatMessage" }, // 2621876185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChatManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGChatManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Manages the chat in the game." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "An array of all the messages that the local player have received." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages = { UE4CodeGen_Private::EPropertyClass::Array, "mReceivedMessages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGChatManager, mReceivedMessages), METADATA_PARAMS(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mReceivedMessages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMessageVisibleDuration_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "How long a message will stay fresh and visible without opening the chat" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMessageVisibleDuration = { UE4CodeGen_Private::EPropertyClass::Float, "mMessageVisibleDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGChatManager, mMessageVisibleDuration), METADATA_PARAMS(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMessageVisibleDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMessageVisibleDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMaxNumMessagesInHistory_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "How many messages will we save in the chat history" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMaxNumMessagesInHistory = { UE4CodeGen_Private::EPropertyClass::Int, "mMaxNumMessagesInHistory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGChatManager, mMaxNumMessagesInHistory), METADATA_PARAMS(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMaxNumMessagesInHistory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMaxNumMessagesInHistory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChatManager_Statics::NewProp_OnChatMessageAdded_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "Called when you get a new local message" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_OnChatMessageAdded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnChatMessageAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGChatManager, OnChatMessageAdded), Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGChatManager_Statics::NewProp_OnChatMessageAdded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::NewProp_OnChatMessageAdded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGChatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMessageVisibleDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMaxNumMessagesInHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChatManager_Statics::NewProp_OnChatMessageAdded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGChatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGChatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGChatManager_Statics::ClassParams = {
		&AFGChatManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGChatManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGChatManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGChatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGChatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGChatManager, 2567043910);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGChatManager(Z_Construct_UClass_AFGChatManager, &AFGChatManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGChatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGChatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
