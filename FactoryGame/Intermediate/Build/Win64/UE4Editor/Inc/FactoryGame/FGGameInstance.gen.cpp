// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameInstance() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ECachedNATType();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkFailure();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNewError__DelegateSignature();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGModPackage();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FOnJoinSessionData();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameInstance_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_FindModPackages();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_GetFGUGC();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_GetNextError();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGErrorMessage_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_PeekNextError();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_PushError();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMusicManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveSystem_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnNatTypeUpdated_Parms
		{
			ECachedNATType natType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_natType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_natType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::NewProp_natType = { UE4CodeGen_Private::EPropertyClass::Enum, "natType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnNatTypeUpdated_Parms, natType), Z_Construct_UEnum_FactoryGame_ECachedNATType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::NewProp_natType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::NewProp_natType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::NewProp_natType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Called if/when the NAT-type is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnNatTypeUpdated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnNatTypeUpdated_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnNetworkErrorRecieved_Parms
		{
			TEnumAsByte<ENetworkFailure::Type> errorType;
			FString errorMsg;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMsg;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_errorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::NewProp_errorMsg = { UE4CodeGen_Private::EPropertyClass::Str, "errorMsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnNetworkErrorRecieved_Parms, errorMsg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::NewProp_errorType = { UE4CodeGen_Private::EPropertyClass::Byte, "errorType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnNetworkErrorRecieved_Parms, errorType), Z_Construct_UEnum_Engine_ENetworkFailure, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::NewProp_errorMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::NewProp_errorType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Delegate when a network error has occured, like mismatching version, timeouts and so on" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnNetworkErrorRecieved__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnNetworkErrorRecieved_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnNetworkErrorRecieved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnNewError__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnNewError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Don't pass the error here, as we want the user to specify how it want to handle the error itself (peek or get)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnNewError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnNewError__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnNewError__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNewError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNewError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnNewError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FFGGameNetworkErrorMsg::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FGGameNetworkErrorMsg"), sizeof(FFGGameNetworkErrorMsg), Get_Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGGameNetworkErrorMsg(FFGGameNetworkErrorMsg::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FGGameNetworkErrorMsg"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFGGameNetworkErrorMsg
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFGGameNetworkErrorMsg()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGGameNetworkErrorMsg")),new UScriptStruct::TCppStructOps<FFGGameNetworkErrorMsg>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFGGameNetworkErrorMsg;
	struct Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_errorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGGameNetworkErrorMsg>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorMsg_MetaData[] = {
		{ "Category", "FGGameNetworkErrorMsg" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorMsg = { UE4CodeGen_Private::EPropertyClass::Str, "errorMsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FFGGameNetworkErrorMsg, errorMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorMsg_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorType_MetaData[] = {
		{ "Category", "FGGameNetworkErrorMsg" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorType = { UE4CodeGen_Private::EPropertyClass::Byte, "errorType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FFGGameNetworkErrorMsg, errorType), Z_Construct_UEnum_Engine_ENetworkFailure, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::NewProp_errorType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FGGameNetworkErrorMsg",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFGGameNetworkErrorMsg),
		alignof(FFGGameNetworkErrorMsg),
		Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGGameNetworkErrorMsg"), sizeof(FFGGameNetworkErrorMsg), Get_Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg_CRC() { return 3166577420U; }
class UScriptStruct* FFGModPackage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFGModPackage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGModPackage, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FGModPackage"), sizeof(FFGModPackage), Get_Z_Construct_UScriptStruct_FFGModPackage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGModPackage(FFGModPackage::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FGModPackage"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFGModPackage
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFGModPackage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGModPackage")),new UScriptStruct::TCppStructOps<FFGModPackage>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFGModPackage;
	struct Z_Construct_UScriptStruct_FFGModPackage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasFGMods_MetaData[];
#endif
		static void NewProp_HasFGMods_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasFGMods;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGModPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGModPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGModPackage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Modding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FFGModPackage, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Modding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Version = { UE4CodeGen_Private::EPropertyClass::Str, "Version", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FFGModPackage, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Version_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "Modding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Author = { UE4CodeGen_Private::EPropertyClass::Str, "Author", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FFGModPackage, Author), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Author_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_HasFGMods_MetaData[] = {
		{ "Category", "Modding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_HasFGMods_SetBit(void* Obj)
	{
		((FFGModPackage*)Obj)->HasFGMods = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_HasFGMods = { UE4CodeGen_Private::EPropertyClass::Bool, "HasFGMods", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFGModPackage), &Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_HasFGMods_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_HasFGMods_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_HasFGMods_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_ModPath_MetaData[] = {
		{ "Category", "Modding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_ModPath = { UE4CodeGen_Private::EPropertyClass::Name, "ModPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FFGModPackage, ModPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_ModPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_ModPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGModPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_Author,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_HasFGMods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGModPackage_Statics::NewProp_ModPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGModPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FGModPackage",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFGModPackage),
		alignof(FFGModPackage),
		Z_Construct_UScriptStruct_FFGModPackage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGModPackage_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGModPackage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGModPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGModPackage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGModPackage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGModPackage"), sizeof(FFGModPackage), Get_Z_Construct_UScriptStruct_FFGModPackage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGModPackage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGModPackage_CRC() { return 3025319314U; }
class UScriptStruct* FOnJoinSessionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FOnJoinSessionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnJoinSessionData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("OnJoinSessionData"), sizeof(FOnJoinSessionData), Get_Z_Construct_UScriptStruct_FOnJoinSessionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnJoinSessionData(FOnJoinSessionData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("OnJoinSessionData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFOnJoinSessionData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFOnJoinSessionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnJoinSessionData")),new UScriptStruct::TCppStructOps<FOnJoinSessionData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFOnJoinSessionData;
	struct Z_Construct_UScriptStruct_FOnJoinSessionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnJoinSessionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::NewProp_LocalPlayer_MetaData[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Player that want to join the session" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::NewProp_LocalPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "LocalPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FOnJoinSessionData, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::NewProp_LocalPlayer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::NewProp_LocalPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::NewProp_LocalPlayer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"OnJoinSessionData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FOnJoinSessionData),
		alignof(FOnJoinSessionData),
		Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnJoinSessionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnJoinSessionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnJoinSessionData"), sizeof(FOnJoinSessionData), Get_Z_Construct_UScriptStruct_FOnJoinSessionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnJoinSessionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnJoinSessionData_CRC() { return 75235556U; }
	void UFGGameInstance::StaticRegisterNativesUFGGameInstance()
	{
		UClass* Class = UFGGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindModPackages", &UFGGameInstance::execFindModPackages },
			{ "GetFGUGC", &UFGGameInstance::execGetFGUGC },
			{ "GetLatestNetworkError", &UFGGameInstance::execGetLatestNetworkError },
			{ "GetNextError", &UFGGameInstance::execGetNextError },
			{ "GetSkipOnboarding", &UFGGameInstance::execGetSkipOnboarding },
			{ "HasPlayerSeenAlphaInfoScreen", &UFGGameInstance::execHasPlayerSeenAlphaInfoScreen },
			{ "PeekNextError", &UFGGameInstance::execPeekNextError },
			{ "PopLatestNetworkError", &UFGGameInstance::execPopLatestNetworkError },
			{ "PushError", &UFGGameInstance::execPushError },
			{ "SetHasSeenAlphaInfoScreen", &UFGGameInstance::execSetHasSeenAlphaInfoScreen },
			{ "SetSkipOnboarding", &UFGGameInstance::execSetSkipOnboarding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics
	{
		struct FGGameInstance_eventFindModPackages_Parms
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
	void Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameInstance_eventFindModPackages_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameInstance_eventFindModPackages_Parms), &Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Finds non-original content and populates ModPackages" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "FindModPackages", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameInstance_eventFindModPackages_Parms), Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_FindModPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_FindModPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics
	{
		struct FGGameInstance_eventGetFGUGC_Parms
		{
			UClass* WeaponClass;
			UClass* EnemyClass;
			UClass* BossClass;
			UClass* PlayerPawnClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerPawnClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BossClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::NewProp_PlayerPawnClass = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerPawnClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventGetFGUGC_Parms, PlayerPawnClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::NewProp_BossClass = { UE4CodeGen_Private::EPropertyClass::Class, "BossClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventGetFGUGC_Parms, BossClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::NewProp_EnemyClass = { UE4CodeGen_Private::EPropertyClass::Class, "EnemyClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventGetFGUGC_Parms, EnemyClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::NewProp_WeaponClass = { UE4CodeGen_Private::EPropertyClass::Class, "WeaponClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventGetFGUGC_Parms, WeaponClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::NewProp_PlayerPawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::NewProp_BossClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::NewProp_EnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::NewProp_WeaponClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Populates UGC arrays with data from ModPackages, Updates ModPackages Information with contents" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "GetFGUGC", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameInstance_eventGetFGUGC_Parms), Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_GetFGUGC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_GetFGUGC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics
	{
		struct FGGameInstance_eventGetLatestNetworkError_Parms
		{
			FFGGameNetworkErrorMsg msg;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameInstance_eventGetLatestNetworkError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameInstance_eventGetLatestNetworkError_Parms), &Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::NewProp_msg = { UE4CodeGen_Private::EPropertyClass::Struct, "msg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventGetLatestNetworkError_Parms, msg), Z_Construct_UScriptStruct_FFGGameNetworkErrorMsg, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::NewProp_msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::Function_MetaDataParams[] = {
		{ "Category", "ErrorHandling" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "returns true if there were an error, and fills in the enum and string. If there were no error the type and msg will be undefined, and the function returns false. To get the next message or reset the error state, call PopLatestNetworkError function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "GetLatestNetworkError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(FGGameInstance_eventGetLatestNetworkError_Parms), Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics
	{
		struct FGGameInstance_eventGetNextError_Parms
		{
			UObject* worldContext;
			UFGErrorMessage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventGetNextError_Parms, ReturnValue), Z_Construct_UClass_UFGErrorMessage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventGetNextError_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Error" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Get the next error and removes it from the error queue, returns null when there is no more errors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "GetNextError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGGameInstance_eventGetNextError_Parms), Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_GetNextError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_GetNextError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics
	{
		struct FGGameInstance_eventGetSkipOnboarding_Parms
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
	void Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameInstance_eventGetSkipOnboarding_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameInstance_eventGetSkipOnboarding_Parms), &Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Onboarding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Getter for  mSkipOnboarding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "GetSkipOnboarding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGGameInstance_eventGetSkipOnboarding_Parms), Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics
	{
		struct FGGameInstance_eventHasPlayerSeenAlphaInfoScreen_Parms
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
	void Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameInstance_eventHasPlayerSeenAlphaInfoScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameInstance_eventHasPlayerSeenAlphaInfoScreen_Parms), &Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Has the player seen the alpha info screen?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "HasPlayerSeenAlphaInfoScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGGameInstance_eventHasPlayerSeenAlphaInfoScreen_Parms), Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics
	{
		struct FGGameInstance_eventPeekNextError_Parms
		{
			UObject* worldContext;
			UFGErrorMessage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventPeekNextError_Parms, ReturnValue), Z_Construct_UClass_UFGErrorMessage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventPeekNextError_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Error" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Peek at the next error and keep it in the error queue, returns null when there is no more errors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "PeekNextError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGGameInstance_eventPeekNextError_Parms), Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_PeekNextError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_PeekNextError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics
	{
		struct FGGameInstance_eventPopLatestNetworkError_Parms
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
	void Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameInstance_eventPopLatestNetworkError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameInstance_eventPopLatestNetworkError_Parms), &Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::Function_MetaDataParams[] = {
		{ "Category", "ErrorHandling" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Pops the latest network message, removing it from the queue and resetting the error state. If there is more messages left after the pop it will return true, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "PopLatestNetworkError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameInstance_eventPopLatestNetworkError_Parms), Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_PushError_Statics
	{
		struct FGGameInstance_eventPushError_Parms
		{
			UObject* worldContext;
			TSubclassOf<UFGErrorMessage>  errorMessage;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameInstance_PushError_Statics::NewProp_errorMessage = { UE4CodeGen_Private::EPropertyClass::Class, "errorMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventPushError_Parms, errorMessage), Z_Construct_UClass_UFGErrorMessage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameInstance_PushError_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameInstance_eventPushError_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_PushError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_PushError_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_PushError_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_PushError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Error" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Pushes a error to the game, that handles it appropriately" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_PushError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "PushError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGGameInstance_eventPushError_Parms), Z_Construct_UFunction_UFGGameInstance_PushError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_PushError_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_PushError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_PushError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_PushError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_PushError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics
	{
		struct FGGameInstance_eventSetHasSeenAlphaInfoScreen_Parms
		{
			bool hasSeen;
		};
		static void NewProp_hasSeen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasSeen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::NewProp_hasSeen_SetBit(void* Obj)
	{
		((FGGameInstance_eventSetHasSeenAlphaInfoScreen_Parms*)Obj)->hasSeen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::NewProp_hasSeen = { UE4CodeGen_Private::EPropertyClass::Bool, "hasSeen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameInstance_eventSetHasSeenAlphaInfoScreen_Parms), &Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::NewProp_hasSeen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::NewProp_hasSeen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Set if the player has seen alpha info screen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "SetHasSeenAlphaInfoScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameInstance_eventSetHasSeenAlphaInfoScreen_Parms), Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics
	{
		struct FGGameInstance_eventSetSkipOnboarding_Parms
		{
			bool doSkip;
		};
		static void NewProp_doSkip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_doSkip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::NewProp_doSkip_SetBit(void* Obj)
	{
		((FGGameInstance_eventSetSkipOnboarding_Parms*)Obj)->doSkip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::NewProp_doSkip = { UE4CodeGen_Private::EPropertyClass::Bool, "doSkip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameInstance_eventSetSkipOnboarding_Parms), &Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::NewProp_doSkip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::NewProp_doSkip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Onboarding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Setter for  mSkipOnboarding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameInstance, "SetSkipOnboarding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGGameInstance_eventSetSkipOnboarding_Parms), Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGGameInstance_NoRegister()
	{
		return UFGGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFGGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMusicManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMusicManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModPackages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModPackages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModPackages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnNatTypeUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnNatTypeUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mJoinSessionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mJoinSessionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mErrorList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mErrorList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mErrorList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnNewError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnNewError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSaveSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSaveSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGGameInstance_FindModPackages, "FindModPackages" }, // 4092469980
		{ &Z_Construct_UFunction_UFGGameInstance_GetFGUGC, "GetFGUGC" }, // 2443697033
		{ &Z_Construct_UFunction_UFGGameInstance_GetLatestNetworkError, "GetLatestNetworkError" }, // 596555387
		{ &Z_Construct_UFunction_UFGGameInstance_GetNextError, "GetNextError" }, // 1968835417
		{ &Z_Construct_UFunction_UFGGameInstance_GetSkipOnboarding, "GetSkipOnboarding" }, // 3930403915
		{ &Z_Construct_UFunction_UFGGameInstance_HasPlayerSeenAlphaInfoScreen, "HasPlayerSeenAlphaInfoScreen" }, // 1090941013
		{ &Z_Construct_UFunction_UFGGameInstance_PeekNextError, "PeekNextError" }, // 3376304175
		{ &Z_Construct_UFunction_UFGGameInstance_PopLatestNetworkError, "PopLatestNetworkError" }, // 2887329722
		{ &Z_Construct_UFunction_UFGGameInstance_PushError, "PushError" }, // 1501217412
		{ &Z_Construct_UFunction_UFGGameInstance_SetHasSeenAlphaInfoScreen, "SetHasSeenAlphaInfoScreen" }, // 4105967970
		{ &Z_Construct_UFunction_UFGGameInstance_SetSkipOnboarding, "SetSkipOnboarding" }, // 1749882928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGGameInstance.h" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mMusicManager_MetaData[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Controlling our music since... 2018" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mMusicManager = { UE4CodeGen_Private::EPropertyClass::Object, "mMusicManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGGameInstance, mMusicManager), Z_Construct_UClass_UFGMusicManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mMusicManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mMusicManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameInstance_Statics::NewProp_ModPackages_MetaData[] = {
		{ "Category", "Modding" },
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Mod packages found - valid or invalid" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGGameInstance_Statics::NewProp_ModPackages = { UE4CodeGen_Private::EPropertyClass::Array, "ModPackages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGGameInstance, ModPackages), METADATA_PARAMS(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_ModPackages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_ModPackages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGGameInstance_Statics::NewProp_ModPackages_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ModPackages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFGModPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNatTypeUpdated_MetaData[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Called when nat-type is updated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNatTypeUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnNatTypeUpdated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UFGGameInstance, mOnNatTypeUpdated), Z_Construct_UDelegateFunction_FactoryGame_OnNatTypeUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNatTypeUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNatTypeUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mJoinSessionData_MetaData[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Storing data for joining a session" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mJoinSessionData = { UE4CodeGen_Private::EPropertyClass::Struct, "mJoinSessionData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGGameInstance, mJoinSessionData), Z_Construct_UScriptStruct_FOnJoinSessionData, METADATA_PARAMS(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mJoinSessionData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mJoinSessionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mErrorList_MetaData[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "List of errors that we should pop" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mErrorList = { UE4CodeGen_Private::EPropertyClass::Array, "mErrorList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGGameInstance, mErrorList), METADATA_PARAMS(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mErrorList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mErrorList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mErrorList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mErrorList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGErrorMessage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNewError_MetaData[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "Called whenever a new error is added that doesn't send you to main menu" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNewError = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnNewError", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UFGGameInstance, mOnNewError), Z_Construct_UDelegateFunction_FactoryGame_OnNewError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNewError_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNewError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mSaveSystem_MetaData[] = {
		{ "ModuleRelativePath", "FGGameInstance.h" },
		{ "ToolTip", "The global save system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mSaveSystem = { UE4CodeGen_Private::EPropertyClass::Object, "mSaveSystem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGGameInstance, mSaveSystem), Z_Construct_UClass_UFGSaveSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mSaveSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mSaveSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mMusicManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameInstance_Statics::NewProp_ModPackages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameInstance_Statics::NewProp_ModPackages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNatTypeUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mJoinSessionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mErrorList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mErrorList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mOnNewError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameInstance_Statics::NewProp_mSaveSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGameInstance_Statics::ClassParams = {
		&UFGGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGGameInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGGameInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGameInstance, 4212684741);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGameInstance(Z_Construct_UClass_UFGGameInstance, &UFGGameInstance::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
