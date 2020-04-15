// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "ChatMessageAdded__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	template<> FACTORYGAME_API UEnum* StaticEnum<EFGChatMessageType>()
	{
		return EFGChatMessageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFGChatMessageType(EFGChatMessageType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EFGChatMessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EFGChatMessageType_Hash() { return 4218536999U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EFGChatMessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFGChatMessageType"), 0, Get_Z_Construct_UEnum_FactoryGame_EFGChatMessageType_Hash(), false);
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
				nullptr,
				"EFGChatMessageType",
				"EFGChatMessageType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FChatMessageStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatMessageStruct, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ChatMessageStruct"), sizeof(FChatMessageStruct), Get_Z_Construct_UScriptStruct_FChatMessageStruct_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FChatMessageStruct>()
{
	return FChatMessageStruct::StaticStruct();
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessageStruct, MessageType), Z_Construct_UEnum_FactoryGame_EFGChatMessageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_Sender_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "The player who sent the message" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessageStruct, Sender), Z_Construct_UClass_AFGPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_Sender_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_Sender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_ServerTimeStamp_MetaData[] = {
		{ "Category", "ChatMessageStruct" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "Synchronized time stamp of when the message was sent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_ServerTimeStamp = { "ServerTimeStamp", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessageStruct, ServerTimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_ServerTimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_ServerTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageString_MetaData[] = {
		{ "Category", "ChatMessageStruct" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "The message that was sent" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessageStruct, MessageString), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::NewProp_MessageString_MetaData)) };
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
		sizeof(FChatMessageStruct),
		alignof(FChatMessageStruct),
		Z_Construct_UScriptStruct_FChatMessageStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessageStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatMessageStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatMessageStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatMessageStruct"), sizeof(FChatMessageStruct), Get_Z_Construct_UScriptStruct_FChatMessageStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatMessageStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatMessageStruct_Hash() { return 3056064275U; }
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGChatManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGChatManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGChatManager_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, nullptr, "Get", sizeof(FGChatManager_eventGet_Parms), Z_Construct_UFunction_AFGChatManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Get_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventGetChatMessageColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_inMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_inMessage = { "inMessage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventGetChatMessageColor_Parms, inMessage), Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_inMessage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::NewProp_inMessage_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, nullptr, "GetChatMessageColor", sizeof(FGChatManager_eventGetChatMessageColor_Parms), Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageColor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventGetChatMessageName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_inMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_inMessage = { "inMessage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventGetChatMessageName_Parms, inMessage), Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_inMessage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::NewProp_inMessage_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, nullptr, "GetChatMessageName", sizeof(FGChatManager_eventGetChatMessageName_Parms), Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetChatMessageName_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventGetMaxNumMessagesInHistory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, nullptr, "GetMaxNumMessagesInHistory", sizeof(FGChatManager_eventGetMaxNumMessagesInHistory_Parms), Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventGetMessageVisibleDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, nullptr, "GetMessageVisibleDuration", sizeof(FGChatManager_eventGetMessageVisibleDuration_Parms), Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::NewProp_out_messages = { "out_messages", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventGetReceivedChatMessages_Parms, out_messages), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::NewProp_out_messages_Inner = { "out_messages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, nullptr, "GetReceivedChatMessages", sizeof(FGChatManager_eventGetReceivedChatMessages_Parms), Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::NewProp_newMessage = { "newMessage", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChatManager_eventMulticast_BroadcastChatMessage_Parms, newMessage), Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::NewProp_newMessage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::NewProp_newMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::NewProp_newMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "Broadcast a chat message to all clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChatManager, nullptr, "Multicast_BroadcastChatMessage", sizeof(FGChatManager_eventMulticast_BroadcastChatMessage_Parms), Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGChatManager_Get, "Get" }, // 2892554850
		{ &Z_Construct_UFunction_AFGChatManager_GetChatMessageColor, "GetChatMessageColor" }, // 3313144984
		{ &Z_Construct_UFunction_AFGChatManager_GetChatMessageName, "GetChatMessageName" }, // 2720831048
		{ &Z_Construct_UFunction_AFGChatManager_GetMaxNumMessagesInHistory, "GetMaxNumMessagesInHistory" }, // 2808977899
		{ &Z_Construct_UFunction_AFGChatManager_GetMessageVisibleDuration, "GetMessageVisibleDuration" }, // 825743756
		{ &Z_Construct_UFunction_AFGChatManager_GetReceivedChatMessages, "GetReceivedChatMessages" }, // 2247490804
		{ &Z_Construct_UFunction_AFGChatManager_Multicast_BroadcastChatMessage, "Multicast_BroadcastChatMessage" }, // 237701455
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages = { "mReceivedMessages", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGChatManager, mReceivedMessages), METADATA_PARAMS(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_mReceivedMessages_Inner = { "mReceivedMessages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChatMessageStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMessageVisibleDuration_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "How long a message will stay fresh and visible without opening the chat" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMessageVisibleDuration = { "mMessageVisibleDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGChatManager, mMessageVisibleDuration), METADATA_PARAMS(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMessageVisibleDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMessageVisibleDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMaxNumMessagesInHistory_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "How many messages will we save in the chat history" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMaxNumMessagesInHistory = { "mMaxNumMessagesInHistory", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGChatManager, mMaxNumMessagesInHistory), METADATA_PARAMS(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMaxNumMessagesInHistory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::NewProp_mMaxNumMessagesInHistory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChatManager_Statics::NewProp_OnChatMessageAdded_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/FGChatManager.h" },
		{ "ToolTip", "Called when you get a new local message" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGChatManager_Statics::NewProp_OnChatMessageAdded = { "OnChatMessageAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGChatManager, OnChatMessageAdded), Z_Construct_UDelegateFunction_FactoryGame_ChatMessageAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGChatManager_Statics::NewProp_OnChatMessageAdded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::NewProp_OnChatMessageAdded_MetaData)) };
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGChatManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGChatManager_Statics::PropPointers),
		0,
		0x009000A1u,
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
	IMPLEMENT_CLASS(AFGChatManager, 3744643154);
	template<> FACTORYGAME_API UClass* StaticClass<AFGChatManager>()
	{
		return AFGChatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGChatManager(Z_Construct_UClass_AFGChatManager, &AFGChatManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGChatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGChatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
